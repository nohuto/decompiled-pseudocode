/*
 * XREFs of RtlAppendStringToString @ 0x14071B640
 * Callers:
 *     MiFormFullImageName @ 0x140745D48 (MiFormFullImageName.c)
 *     CmpLoadHiveThread @ 0x140757530 (CmpLoadHiveThread.c)
 *     CmpFlushBackupHive @ 0x14083126C (CmpFlushBackupHive.c)
 *     CmpInitBackupHive @ 0x140831660 (CmpInitBackupHive.c)
 *     EmInitSystem @ 0x1409F94D0 (EmInitSystem.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
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
