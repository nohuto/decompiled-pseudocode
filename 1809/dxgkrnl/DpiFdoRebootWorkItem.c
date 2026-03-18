/*
 * XREFs of DpiFdoRebootWorkItem @ 0x1C02669A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiFdoRebootWorkItem(_QWORD *IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v7; // rax

  v4 = (unsigned int)Context;
  IoFreeWorkItem(IoWorkItem);
  if ( NtShutdownSystem(ShutdownReboot) < 0 )
  {
    v6 = IoObject[8];
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5);
    v7[5] = v4;
    v7[3] = 275LL;
    v7[4] = 25LL;
    v7[6] = *(unsigned int *)(v6 + 1116);
    v7[7] = *(unsigned int *)(v6 + 1120);
    WdLogEvent5_WdCriticalError(v7);
  }
}
