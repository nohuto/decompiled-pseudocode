/*
 * XREFs of ?RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C014A0E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Reset(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  if ( a2 )
    WPP_RECORDER_SF_q(gBaseLog, 4u, 2u, 0x14u, (__int64)&WPP_0652932e8e25336fb557d9c15dc128bf_Traceguids, a2);
  return 0LL;
}
