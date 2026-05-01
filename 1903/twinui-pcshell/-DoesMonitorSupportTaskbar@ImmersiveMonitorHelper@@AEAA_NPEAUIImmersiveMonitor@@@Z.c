/*
 * XREFs of ?DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z @ 0x180011A4C
 * Callers:
 *     ?AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ @ 0x1800119E4 (-AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ.c)
 *     _lambda_e1d8dfd296a10e855a8b37200bc3f556_::operator() @ 0x1802F6FC4 (_lambda_e1d8dfd296a10e855a8b37200bc3f556_--operator().c)
 * Callees:
 *     _lambda_87ebd5ab8c98068c9196962995282a8c_::operator() @ 0x180011A88 (_lambda_87ebd5ab8c98068c9196962995282a8c_--operator().c)
 */

char __fastcall ImmersiveMonitorHelper::DoesMonitorSupportTaskbar(
        ImmersiveMonitorHelper *this,
        struct IImmersiveMonitor *a2)
{
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF
  char v4; // [rsp+50h] [rbp+8h] BYREF
  struct IImmersiveMonitor *v5; // [rsp+58h] [rbp+10h] BYREF

  v5 = a2;
  v3[1] = this;
  v3[0] = &v5;
  v4 = 0;
  v3[2] = &v4;
  lambda_87ebd5ab8c98068c9196962995282a8c_::operator()(v3);
  return v4;
}
