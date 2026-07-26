/*
 * XREFs of ndisAddWoLDirectedMAC @ 0x1C01154EC
 * Callers:
 *     ?ndisMInitializePmParametersForSuspend@@YA?AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B58F8 (-ndisMInitializePmParametersForSuspend@@YA-AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?ndisInitializeDirectedWolPattern@@YAXPEAEKPEAU_RTL_BITMAP@@PEAPEAE@Z @ 0x1C0071F50 (-ndisInitializeDirectedWolPattern@@YAXPEAEKPEAU_RTL_BITMAP@@PEAPEAE@Z.c)
 *     ndisMInvokeOidRequest @ 0x1C00FB8A0 (ndisMInvokeOidRequest.c)
 */

__int64 __fastcall ndisAddWoLDirectedMAC(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v5; // rcx
  unsigned __int8 *v6; // rdx
  int v7; // edx
  unsigned int v8; // ebx
  unsigned __int8 *v9; // [rsp+48h] [rbp-C0h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+50h] [rbp-B8h] BYREF
  _OWORD v11[16]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int8 v12[272]; // [rsp+168h] [rbp+60h] BYREF

  memset(v11, 0, 0xF8uLL);
  memset(v12, 0, 0x10CuLL);
  v3 = *(_QWORD *)(a1 + 4456);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      14,
      145,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1);
  }
  if ( ndisDirectedMacForNapsState )
  {
    v9 = 0LL;
    *(_QWORD *)&BitMapHeader.SizeOfBitMap = 0LL;
    BitMapHeader.Buffer = 0LL;
    ndisInitializeDirectedWolPattern(v12, v2, &BitMapHeader, &v9);
    v5 = *(_QWORD *)(a1 + 4040);
    v6 = v9;
    *(_DWORD *)v9 = *(_DWORD *)(v5 + 1126);
    *((_WORD *)v6 + 2) = *(_WORD *)(v5 + 1130);
    RtlSetBits(&BitMapHeader, 0, 6u);
    memset(v11, 0, 0xF8uLL);
    DWORD2(v11[5]) |= 0x408u;
    *((_QWORD *)&v11[6] + 1) = &ndisIntReqGeneric;
    LODWORD(v11[0]) = 15466902;
    *((_QWORD *)&v11[2] + 1) = v12;
    LODWORD(v11[2]) = -50265846;
    *(_QWORD *)((char *)v11 + 4) = 1LL;
    LODWORD(v11[3]) = 268;
    KeInitializeEvent((PRKEVENT)&v11[7], NotificationEvent, 0);
    v8 = ndisMInvokeOidRequest((char *)a1, (__int64)v11);
    if ( v8 == 259 )
    {
      KeWaitForSingleObject(&v11[7], Executive, 0, 0, 0LL);
      v8 = v11[5];
    }
    if ( v8 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v8;
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        14,
        147,
        (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
        v8);
    }
    else
    {
      *(_BYTE *)(v3 + 1096) = 1;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        14,
        148,
        (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
        a1,
        v8);
    }
    return v8;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 3;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      14,
      146,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      0);
  }
  return 0LL;
}
