/*
 * XREFs of ?ndisMediaDisconnectWorker@@YAXPEAX@Z @ 0x1C00A5300
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     ndisRequestDeviceLowPower @ 0x1C001483C (ndisRequestDeviceLowPower.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

void __fastcall ndisMediaDisconnectWorker(_QWORD *P)
{
  _DWORD *v1; // rbx
  int v3; // edx
  POWER_STATE v4; // edi
  POWER_STATE v5; // r14d
  int v6; // edx
  char v7[256]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v8; // [rsp+130h] [rbp+30h] BYREF
  __int64 v9; // [rsp+138h] [rbp+38h]
  int v10; // [rsp+140h] [rbp+40h]

  v1 = (_DWORD *)P[4];
  memset(v7, 0, 0xF8uLL);
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      14,
      21,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      (char)v1);
  }
  if ( (v1[1105] & 8) != 0 )
  {
    v4.SystemState = v1[318];
    v5.SystemState = v1[277];
    LODWORD(v8) = 1311360;
    HIDWORD(v9) = 1;
    memset(v7, 0, 0xF8uLL);
    *(_DWORD *)&v7[88] |= 8u;
    *(_DWORD *)&v7[8] = 0;
    *(_QWORD *)&v7[104] = &ndisIntReqGeneric;
    *(_DWORD *)v7 = 15466902;
    *(_QWORD *)&v7[40] = &v8;
    *(_DWORD *)&v7[32] = -50265847;
    *(_DWORD *)&v7[4] = 1;
    *(_DWORD *)&v7[48] = 20;
    if ( !(unsigned int)ndisQuerySetMiniportEx((__int64)v1, 0LL, (__int64)v7, 0, 0LL, 0LL) )
    {
      v1[333] = v1[317];
      if ( v4.SystemState >= v5.SystemState )
        v4.SystemState = v5.SystemState;
      ndisRequestDeviceLowPower((__int64)v1, v4, ndisMediaDisconnectComplete, v1, 4u);
    }
    ExFreePoolWithTag(P, 0);
  }
  ndisDereferenceMiniport((__int64)v1, 0xBu);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      14,
      22,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      (char)v1);
  }
}
