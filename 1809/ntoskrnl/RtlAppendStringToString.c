/*
 * XREFs of RtlAppendStringToString @ 0x1406CC680
 * Callers:
 *     MiFormFullImageName @ 0x14071E408 (MiFormFullImageName.c)
 *     CmpLoadHiveThread @ 0x140736D20 (CmpLoadHiveThread.c)
 *     CmpFlushBackupHive @ 0x1407F5250 (CmpFlushBackupHive.c)
 *     CmpInitBackupHive @ 0x1407F5620 (CmpInitBackupHive.c)
 *     EmInitSystem @ 0x1409BE7E0 (EmInitSystem.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 */

NTSTATUS __stdcall RtlAppendStringToString(PSTRING Destination, const STRING *Source)
{
  unsigned __int16 Length; // di
  __int64 v4; // rcx

  Length = Source->Length;
  if ( !Source->Length )
    return 0;
  v4 = Destination->Length;
  if ( (unsigned int)v4 + Length <= Destination->MaximumLength )
  {
    memmove(&Destination->Buffer[v4], Source->Buffer, Length);
    Destination->Length += Length;
    return 0;
  }
  return -1073741789;
}
