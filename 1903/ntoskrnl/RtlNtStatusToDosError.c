/*
 * XREFs of RtlNtStatusToDosError @ 0x1406BCDF0
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x1405B22DC (LocalConvertSDToStringSD_Rev1.c)
 *     LocalConvertAclToString @ 0x1405B28CC (LocalConvertAclToString.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1406F8374 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1406F85C8 (LocalGetAclForString.c)
 *     LocalGetSidForString @ 0x1406F8B48 (LocalGetSidForString.c)
 *     EtwpEnumerateKeyProviders @ 0x140748570 (EtwpEnumerateKeyProviders.c)
 *     EtwpEnableAutoLoggerProvider @ 0x1407486C4 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpEnumerateAutologgerPath @ 0x14076D7A4 (EtwpEnumerateAutologgerPath.c)
 *     EtwStartAutoLogger @ 0x14076DA0C (EtwStartAutoLogger.c)
 *     LocalGetStringForSid @ 0x1408E38B8 (LocalGetStringForSid.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x14010D020 (RtlNtStatusToDosErrorNoTeb.c)
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
