/*
 * XREFs of ?RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0179230
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0038944 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Reset(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  struct RawInputManagerDeviceObject *v3; // [rsp+28h] [rbp-10h]

  if ( a2 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      (_DWORD)gBaseLog,
      (_DWORD)a2,
      3,
      20,
      (__int64)&WPP_44b8ec6d33df3f9b1bf122fa07e6f557_Traceguids,
      v3);
  }
  return 0LL;
}
