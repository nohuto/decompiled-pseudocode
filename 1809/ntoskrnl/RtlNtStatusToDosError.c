/*
 * XREFs of RtlNtStatusToDosError @ 0x140623EE0
 * Callers:
 *     LocalConvertStringSDToSD_Rev1 @ 0x1406AF7EC (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1406AFCAC (LocalGetAclForString.c)
 *     LocalGetSidForString @ 0x1406B02CC (LocalGetSidForString.c)
 *     EtwpEnumerateKeyProviders @ 0x14072389C (EtwpEnumerateKeyProviders.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140723A18 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpEnumerateAutologgerPath @ 0x140741C48 (EtwpEnumerateAutologgerPath.c)
 *     EtwStartAutoLogger @ 0x140741E88 (EtwStartAutoLogger.c)
 *     LocalConvertAclToString @ 0x1408A4F70 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408A59E0 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForSid @ 0x1408A62D4 (LocalGetStringForSid.c)
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
