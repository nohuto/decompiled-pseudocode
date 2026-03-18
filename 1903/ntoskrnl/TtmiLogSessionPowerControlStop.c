/*
 * XREFs of TtmiLogSessionPowerControlStop @ 0x1408C3000
 * Callers:
 *     TtmpSessionPowerControl @ 0x1408BEDD0 (TtmpSessionPowerControl.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     PsGetProcessSessionIdEx @ 0x1400EE790 (PsGetProcessSessionIdEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

void TtmiLogSessionPowerControlStop()
{
  int ProcessSessionId; // eax
  int v1; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( stru_1409AD8E0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1409AD8E0, 1uLL) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v5 = 0;
      v1 = ProcessSessionId;
      v3 = &v1;
      v4 = 4;
      TlgWrite(&stru_1409AD8E0, &unk_14039301B, 0LL, 0LL, 3u, &pData);
    }
  }
}
