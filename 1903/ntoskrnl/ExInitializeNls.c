/*
 * XREFs of ExInitializeNls @ 0x140A092EC
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwCreateDirectoryObject @ 0x1401C1510 (ZwCreateDirectoryObject.c)
 */

NTSTATUS ExInitializeNls()
{
  NTSTATUS result; // eax
  HANDLE DirectoryHandle; // [rsp+30h] [rbp+8h] BYREF

  result = ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, (POBJECT_ATTRIBUTES)&NlsDirectoryAttributes);
  if ( result >= 0 )
  {
    ZwClose(DirectoryHandle);
    NlsSectionLock = 0LL;
    NlsDefaultCasingTableSize = InitNlsTableSize - (unsigned int)InitUnicodeCaseTableDataOffset;
    return 0;
  }
  return result;
}
