/*
 * XREFs of BiBindEfiEntries @ 0x14092F8AC
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x14092FAF4 (BiBindEfiNamespaceObjects.c)
 * Callees:
 *     BcdOpenObject @ 0x14073F08C (BcdOpenObject.c)
 *     BiLogMessage @ 0x1407403B4 (BiLogMessage.c)
 *     BcdDeleteObject @ 0x14092DF84 (BcdDeleteObject.c)
 *     BiIsPortableWorkspaceBoot @ 0x14092EB54 (BiIsPortableWorkspaceBoot.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x14092F59C (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiBindEfiEntryToBcdObject @ 0x14092F9F0 (BiBindEfiEntryToBcdObject.c)
 *     BiCreateEfiEntry @ 0x1409304D0 (BiCreateEfiEntry.c)
 *     BiDeleteBootEntry @ 0x1409309EC (BiDeleteBootEntry.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x140931BE8 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 *     BiUpdateBcdObject @ 0x140932050 (BiUpdateBcdObject.c)
 */

__int64 __fastcall BiBindEfiEntries(HANDLE BcdStoreHandle, __int64 *a2)
{
  __int64 v2; // rbx
  NTSTATUS updated; // edi
  int v6; // eax
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  updated = 0;
  if ( (__int64 *)*a2 != a2 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(v2 + 48);
      if ( (v6 & 0x10) != 0 )
        break;
      if ( (v6 & 1) != 0 )
      {
        if ( (v6 & 0x24) == 0x20 )
        {
          if ( (int)BiDeleteBootEntry((PUNICODE_STRING)*(unsigned int *)(v2 + 32)) < 0 )
            goto LABEL_20;
          goto LABEL_6;
        }
        updated = BiBindEfiEntryToBcdObject(BcdStoreHandle, v2);
        if ( updated < 0 || (updated = BiUpdateBcdObject(BcdStoreHandle, v2), updated < 0) )
        {
LABEL_22:
          BiLogMessage(4LL, L"BiBindEfiEntries failed %x", (unsigned int)updated);
          return (unsigned int)updated;
        }
      }
      else if ( (v6 & 4) != 0 )
      {
        if ( (v6 & 8) != 0 )
        {
          updated = BcdOpenObject(BcdStoreHandle, (const GUID *)(v2 + 16), &BcdObjectHandle);
          if ( updated < 0 )
            goto LABEL_22;
          BcdDeleteObject(BcdObjectHandle);
          *(_DWORD *)(v2 + 48) &= 0xFFFFFFF9;
        }
        else if ( !BiIsPortableWorkspaceBoot() && (int)BiCreateEfiEntry(BcdStoreHandle, v2) >= 0 )
        {
          BiAddBootEntryToNvramDisplayOrder(v2);
        }
      }
LABEL_20:
      v2 = *(_QWORD *)v2;
      if ( (__int64 *)v2 == a2 )
        return (unsigned int)updated;
    }
    if ( (v6 & 1) == 0 )
      goto LABEL_20;
    BiLogMessage(3LL, L"Boot entry exists for DontSync with ID 0x%x", *(unsigned int *)(v2 + 32));
    if ( (int)BiDeleteBootEntry((PUNICODE_STRING)*(unsigned int *)(v2 + 32)) < 0 )
      goto LABEL_20;
    *(_DWORD *)(v2 + 48) &= ~1u;
LABEL_6:
    BiRemoveBootEntryFromNvramDisplayOrder(v2);
    goto LABEL_20;
  }
  return (unsigned int)updated;
}
