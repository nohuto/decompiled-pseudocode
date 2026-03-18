/*
 * XREFs of RtlAppendStringToString @ 0x14071D430
 * Callers:
 *     MiFormFullImageName @ 0x140747C48 (MiFormFullImageName.c)
 *     CmpLoadHiveThread @ 0x14075BB10 (CmpLoadHiveThread.c)
 *     CmpFlushBackupHive @ 0x14082CE80 (CmpFlushBackupHive.c)
 *     CmpInitBackupHive @ 0x14082D274 (CmpInitBackupHive.c)
 *     EmInitSystem @ 0x1409F93E0 (EmInitSystem.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
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
