/*
 * XREFs of BiSetRegistryValue @ 0x140740078
 * Callers:
 *     BiSetFirmwareModified @ 0x140178090 (BiSetFirmwareModified.c)
 *     BiAddStoreFromFile @ 0x14073D414 (BiAddStoreFromFile.c)
 *     BiMarkTreatAsSystemStore @ 0x14073D55C (BiMarkTreatAsSystemStore.c)
 *     BcdSetElementDataWithFlags @ 0x14073F60C (BcdSetElementDataWithFlags.c)
 *     BiSetObjectDescription @ 0x14092E66C (BiSetObjectDescription.c)
 *     BiCreateEfiEntry @ 0x1409304D0 (BiCreateEfiEntry.c)
 *     BiUpdateBcdObject @ 0x140932050 (BiUpdateBcdObject.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     BiSanitizeHandle @ 0x14013D3C0 (BiSanitizeHandle.c)
 *     BiZwSetValueKey @ 0x140178214 (BiZwSetValueKey.c)
 *     BiOpenKey @ 0x14073FA30 (BiOpenKey.c)
 *     BiCloseKey @ 0x14073FBB4 (BiCloseKey.c)
 */

__int64 __fastcall BiSetRegistryValue(__int64 a1, const WCHAR *a2, const WCHAR *a3, ULONG a4, PVOID a5, ULONG a6)
{
  unsigned int i; // esi
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  int v13; // ebx
  int v15[2]; // [rsp+38h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  for ( i = 0; ; ++i )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    v11 = BiSanitizeHandle(a1);
    a1 = v11;
    *(_QWORD *)v15 = 0LL;
    if ( a3 )
    {
      v13 = BiOpenKey(v11, a3, 0x2001Fu, v15);
      if ( v13 < 0 )
        goto LABEL_5;
    }
    else
    {
      *(_QWORD *)v15 = v11;
    }
    v13 = BiZwSetValueKey(*(void **)v15, &DestinationString, v12, a4, a5, a6);
LABEL_5:
    if ( *(_QWORD *)v15 != a1 && *(_QWORD *)v15 )
      BiCloseKey(*(void **)v15);
    if ( v13 == -1073741443 )
    {
      __debugbreak();
      if ( i < 5 )
        continue;
    }
    break;
  }
  return (unsigned int)v13;
}
