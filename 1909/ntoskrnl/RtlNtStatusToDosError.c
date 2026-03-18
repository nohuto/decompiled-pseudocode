/*
 * XREFs of RtlNtStatusToDosError @ 0x1406B8430
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x1405B26B8 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalConvertAclToString @ 0x1405B2CA8 (LocalConvertAclToString.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1406FA150 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1406FA3A4 (LocalGetAclForString.c)
 *     LocalGetSidForString @ 0x1406FA924 (LocalGetSidForString.c)
 *     EtwpEnumerateKeyProviders @ 0x14074B0B4 (EtwpEnumerateKeyProviders.c)
 *     EtwpEnableAutoLoggerProvider @ 0x14074B208 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407705F8 (EtwpEnumerateAutologgerPath.c)
 *     EtwStartAutoLogger @ 0x140770860 (EtwStartAutoLogger.c)
 *     LocalGetStringForSid @ 0x1408E31C0 (LocalGetStringForSid.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x14010C8D0 (RtlNtStatusToDosErrorNoTeb.c)
 */

ULONG __stdcall RtlNtStatusToDosError(NTSTATUS Status)
{
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *Teb; // rdx

  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) == 0 && CurrentThread->ApcStateIndex != 1 )
  {
    Teb = CurrentThread->Teb;
    if ( Teb )
      Teb[1172] = Status;
  }
  return RtlNtStatusToDosErrorNoTeb(Status);
}
