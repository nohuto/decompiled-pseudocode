/*
 * XREFs of ?DoHandleSessionDisconnect@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18010DD50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800C2170 (WPP_SF_.c)
 *     ?AbortMonitor@CMonitor@@AEAAXXZ @ 0x18010DAFC (-AbortMonitor@CMonitor@@AEAAXXZ.c)
 */

void __fastcall CMonitor::DoHandleSessionDisconnect(
        PTP_CALLBACK_INSTANCE Instance,
        SessionDisconnectedContext *Context,
        PTP_WORK Work)
{
  CMonitor *v3; // rdi

  v3 = (CMonitor *)*((_QWORD *)Context + 1);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Cu, (__int64)&WPP_70b4bc2e72a23cf5637e1be4ab06d41d_Traceguids);
  }
  CMonitor::AbortMonitor(v3);
  SessionDisconnectedContext::`scalar deleting destructor'(Context);
}
