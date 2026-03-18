/*
 * XREFs of SepAdtOpenRegAndSetupNotification @ 0x140778B98
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140A180E0 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     SepRegOpenKey @ 0x14061C51C (SepRegOpenKey.c)
 *     NtNotifyChangeKey @ 0x14062BE10 (NtNotifyChangeKey.c)
 */

int SepAdtOpenRegAndSetupNotification()
{
  int result; // eax

  result = SepRegOpenKey(
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa",
             0x211u,
             &SepAdtRegNotifyHandle);
  if ( result >= 0 )
  {
    qword_140509358 = (__int64)SepAdtRegNotificationCallback;
    qword_140509360 = 0LL;
    SepAdtLsaRegWatchWorkItem[0] = 0LL;
    return NtNotifyChangeKey(
             SepAdtRegNotifyHandle,
             0LL,
             (PIO_APC_ROUTINE)SepAdtLsaRegWatchWorkItem,
             (PVOID)1,
             &SepAdtIoStatusBlock,
             5u,
             0,
             0LL,
             0,
             1u);
  }
  return result;
}
