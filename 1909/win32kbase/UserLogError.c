/*
 * XREFs of UserLogError @ 0x1C011DC80
 * Callers:
 *     UserPowerInfoCallout @ 0x1C00648AC (UserPowerInfoCallout.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0144A88 (rimFindMonitorForDigitizerWithQDCData.c)
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
