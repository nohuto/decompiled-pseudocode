/*
 * XREFs of RtlNtStatusToDosError @ 0x140623EE0
 * Callers:
 *     LocalConvertStringSDToSD_Rev1 @ 0x1406AF7CC (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1406AFC8C (LocalGetAclForString.c)
 *     LocalGetSidForString @ 0x1406B02AC (LocalGetSidForString.c)
 *     EtwpEnumerateKeyProviders @ 0x14072387C (EtwpEnumerateKeyProviders.c)
 *     EtwpEnableAutoLoggerProvider @ 0x1407239F8 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpEnumerateAutologgerPath @ 0x140741C28 (EtwpEnumerateAutologgerPath.c)
 *     EtwStartAutoLogger @ 0x140741E68 (EtwStartAutoLogger.c)
 *     LocalConvertAclToString @ 0x1408A4F50 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408A59C0 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForSid @ 0x1408A62B4 (LocalGetStringForSid.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x1400A3CD0 (RtlNtStatusToDosErrorNoTeb.c)
 */

ULONG __stdcall RtlNtStatusToDosError(NTSTATUS Status)
{
  struct _KTHREAD *CurrentThread; // rdx
  _DWORD *Teb; // rax

  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = CurrentThread->Teb;
  if ( Teb )
    Teb[1172] = Status;
  return RtlNtStatusToDosErrorNoTeb(Status);
}
