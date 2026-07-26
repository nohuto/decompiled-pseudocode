/*
 * XREFs of ndisRemoveWoLDirectedMAC @ 0x1C0115860
 * Callers:
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C00B9D50 (ndisSetPowerResumeCompleteWorkItem.c)
 *     ndisWdfPowerResumeComplete @ 0x1C00BA78C (ndisWdfPowerResumeComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032358 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ndisMInvokeOidRequest @ 0x1C00FB8A0 (ndisMInvokeOidRequest.c)
 */

__int64 __fastcall ndisRemoveWoLDirectedMAC(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rsi
  int v4; // edx
  unsigned int v5; // ebx
  int v7; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v8[16]; // [rsp+58h] [rbp-B0h] BYREF

  memset((char *)v8 + 1, 0, 0xF7uLL);
  v3 = *(_QWORD *)(a1 + 4456);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      14,
      149,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1);
  }
  v7 = 131073;
  memset(v8, 0, 0xF8uLL);
  DWORD2(v8[5]) |= 0x408u;
  *((_QWORD *)&v8[6] + 1) = &ndisIntReqGeneric;
  LODWORD(v8[0]) = 15466902;
  *((_QWORD *)&v8[2] + 1) = &v7;
  LODWORD(v8[2]) = -50265845;
  *(_QWORD *)((char *)v8 + 4) = 1LL;
  LODWORD(v8[3]) = 4;
  KeInitializeEvent((PRKEVENT)&v8[7], NotificationEvent, 0);
  v5 = ndisMInvokeOidRequest((char *)a1, (__int64)v8);
  if ( v5 == 259 )
  {
    KeWaitForSingleObject(&v8[7], Executive, 0, 0, 0LL);
    v5 = v8[5];
  }
  if ( v5 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v5;
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      14,
      150,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      v5);
  }
  else
  {
    *(_BYTE *)(v3 + 1096) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      14,
      151,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      v5);
  }
  return v5;
}
