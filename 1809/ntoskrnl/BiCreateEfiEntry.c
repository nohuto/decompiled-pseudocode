/*
 * XREFs of BiCreateEfiEntry @ 0x1408F2DC0
 * Callers:
 *     BiBindEfiEntries @ 0x1408F21B4 (BiBindEfiEntries.c)
 *     BiExportBcdObjects @ 0x1408F3580 (BiExportBcdObjects.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     BcdOpenObject @ 0x140712E44 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140712FC0 (BcdCloseObject.c)
 *     BiSetRegistryValue @ 0x140713DA4 (BiSetRegistryValue.c)
 *     BiLogMessage @ 0x1407140D4 (BiLogMessage.c)
 *     BiAddBootEntry @ 0x1408F1CE8 (BiAddBootEntry.c)
 *     BiCreateBootEntry @ 0x1408F2A38 (BiCreateBootEntry.c)
 *     BiGetSavedBootEntry @ 0x1408F3F90 (BiGetSavedBootEntry.c)
 *     BiUpdateEfiEntry @ 0x1408F4BE8 (BiUpdateEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1408F4D84 (BiUpdateObjectReferenceInEfiEntry.c)
 */

__int64 __fastcall BiCreateEfiEntry(__int64 a1, __int64 a2)
{
  wchar_t *Buffer; // rdi
  int v5; // eax
  __int64 v6; // r14
  int BootEntry; // ebx
  int v8; // eax
  int v9; // eax
  UNICODE_STRING EntryValue; // [rsp+68h] [rbp+38h] BYREF
  void *v12; // [rsp+78h] [rbp+48h] BYREF

  Buffer = 0LL;
  EntryValue.Buffer = 0LL;
  v5 = BcdOpenObject(a1, (unsigned int *)(a2 + 16), &v12);
  v6 = (__int64)v12;
  BootEntry = v5;
  if ( v5 < 0 )
    goto LABEL_17;
  if ( (*(_DWORD *)(a2 + 48) & 2) == 0 )
  {
    BootEntry = BiCreateBootEntry(v12, &EntryValue.Buffer);
    if ( BootEntry >= 0 )
    {
      Buffer = EntryValue.Buffer;
      BootEntry = BiAddBootEntry((PUNICODE_STRING)EntryValue.Buffer, &EntryValue);
      if ( BootEntry >= 0 )
      {
        BiLogMessage(2LL, L"Created new boot entry 0x%x", *(unsigned int *)&EntryValue.Length);
        *((_DWORD *)Buffer + 2) = *(_DWORD *)&EntryValue.Length;
        v9 = *(_DWORD *)&EntryValue.Length;
        *(_DWORD *)(a2 + 48) |= 0x21u;
        *(_DWORD *)(a2 + 32) = v9;
        *(_QWORD *)(a2 + 40) = Buffer;
        BootEntry = BiSetRegistryValue(v6, L"FirmwareVariable", L"Description", 3u, Buffer, *((_DWORD *)Buffer + 1));
        if ( BootEntry >= 0 )
        {
          *(_DWORD *)(a2 + 48) |= 2u;
LABEL_14:
          if ( BootEntry >= 0 )
            goto LABEL_18;
          goto LABEL_17;
        }
      }
      goto LABEL_17;
    }
LABEL_16:
    Buffer = EntryValue.Buffer;
    goto LABEL_17;
  }
  BootEntry = BiGetSavedBootEntry(v12, &EntryValue.Buffer);
  if ( BootEntry < 0 )
    goto LABEL_16;
  Buffer = EntryValue.Buffer;
  if ( (*(_DWORD *)(a2 + 48) & 8) == 0 )
  {
    BootEntry = BiUpdateObjectReferenceInEfiEntry(EntryValue.Buffer, v6);
    if ( BootEntry < 0 )
      goto LABEL_17;
    *(_DWORD *)(a2 + 48) |= 0x20u;
  }
  BootEntry = BiAddBootEntry((PUNICODE_STRING)Buffer, &EntryValue);
  if ( BootEntry >= 0 )
  {
    BiLogMessage(2LL, L"Created boot entry 0x%x using cached variable", *(unsigned int *)&EntryValue.Length);
    *((_DWORD *)Buffer + 2) = *(_DWORD *)&EntryValue.Length;
    v8 = *(_DWORD *)&EntryValue.Length;
    *(_DWORD *)(a2 + 48) |= 1u;
    *(_DWORD *)(a2 + 32) = v8;
    *(_QWORD *)(a2 + 40) = Buffer;
    BootEntry = BiSetRegistryValue(v6, L"FirmwareVariable", L"Description", 3u, Buffer, *((_DWORD *)Buffer + 1));
    if ( BootEntry >= 0 )
    {
      BootEntry = BiUpdateEfiEntry(a1, a2);
      goto LABEL_14;
    }
  }
LABEL_17:
  BiLogMessage(4LL, L"BiCreateEfiEntry failed %x", (unsigned int)BootEntry);
LABEL_18:
  if ( v6 )
    BcdCloseObject(v6);
  if ( (*(_DWORD *)(a2 + 48) & 1) == 0 && Buffer )
    ExFreePoolWithTag(Buffer, 0x4B444342u);
  return (unsigned int)BootEntry;
}
