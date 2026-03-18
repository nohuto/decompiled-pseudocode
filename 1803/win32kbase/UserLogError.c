/*
 * XREFs of UserLogError @ 0x1C00BCF40
 * Callers:
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0054454 (rimFindMonitorForDigitizerWithQDCData.c)
 *     UserPowerInfoCallout @ 0x1C005A654 (UserPowerInfoCallout.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C01087F4 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     <none>
 */

void __fastcall UserLogError(int a1)
{
  _DWORD *ErrorLogEntry; // rax

  ErrorLogEntry = IoAllocateErrorLogEntry(gpWin32kDriverObject, 0x30u);
  if ( ErrorLogEntry )
  {
    ErrorLogEntry[3] = a1;
    IoWriteErrorLogEntry(ErrorLogEntry);
  }
}
