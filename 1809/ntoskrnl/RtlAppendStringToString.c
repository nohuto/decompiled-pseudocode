/*
 * XREFs of RtlAppendStringToString @ 0x1406CB400
 * Callers:
 *     MiFormFullImageName @ 0x14071D188 (MiFormFullImageName.c)
 *     CmpLoadHiveThread @ 0x140735B50 (CmpLoadHiveThread.c)
 *     CmpFlushBackupHive @ 0x1407F4070 (CmpFlushBackupHive.c)
 *     CmpInitBackupHive @ 0x1407F4440 (CmpInitBackupHive.c)
 *     EmInitSystem @ 0x1409BD7E0 (EmInitSystem.c)
 * Callees:
 *     memmove @ 0x1401D1440 (memmove.c)
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
