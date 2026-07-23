/*
 * XREFs of RtlNtStatusToDosError @ 0x140624F00
 * Callers:
 *     LocalConvertStringSDToSD_Rev1 @ 0x1406B0A6C (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1406B0F2C (LocalGetAclForString.c)
 *     LocalGetSidForString @ 0x1406B154C (LocalGetSidForString.c)
 *     EtwpEnumerateKeyProviders @ 0x140724B1C (EtwpEnumerateKeyProviders.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140724C98 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpEnumerateAutologgerPath @ 0x140742E18 (EtwpEnumerateAutologgerPath.c)
 *     EtwStartAutoLogger @ 0x140743058 (EtwStartAutoLogger.c)
 *     LocalConvertAclToString @ 0x1408A61B0 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408A6C20 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForSid @ 0x1408A7514 (LocalGetStringForSid.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x1400A3C10 (RtlNtStatusToDosErrorNoTeb.c)
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
