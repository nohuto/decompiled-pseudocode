/*
 * XREFs of ndisOidPreIovDeleteNicSwitch @ 0x1C00F9B20
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0014FD0 (ndisGetOidSourceHandle.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0016F10 (ndisIovNicSwitchWithoutIovSupported.c)
 *     WPP_SF_qqqq @ 0x1C00420DC (WPP_SF_qqqq.c)
 *     WPP_SF_qqqDD @ 0x1C004401C (WPP_SF_qqqDD.c)
 *     ndisIovFindSwitchBySwitchId @ 0x1C006FF78 (ndisIovFindSwitchBySwitchId.c)
 */

unsigned __int8 __fastcall ndisOidPreIovDeleteNicSwitch(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  unsigned __int8 v4; // di
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 *SwitchBySwitchId; // rax
  __int64 v11; // [rsp+28h] [rbp-20h]

  v1 = *a1;
  v3 = a1[4];
  v4 = 1;
  v5 = *a1;
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
  {
    WPP_SF_qqqq(0x10u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, v1, a1[3], a1[1], v3);
    v5 = *a1;
  }
  if ( !v5 )
    goto LABEL_4;
  if ( !ndisIovNicSwitchWithoutIovSupported(v1) )
  {
    if ( (_UNKNOWN *)ndisGetOidSourceHandle(a1[4]) != &ndisIntReqGeneric )
    {
LABEL_7:
      *((_DWORD *)a1 + 10) = -1073741637;
      goto LABEL_8;
    }
LABEL_4:
    v4 = 0;
    goto LABEL_8;
  }
  v8 = *(_QWORD *)(v1 + 3592);
  if ( !v8 || *(_BYTE *)(v8 + 1) < 2u || *(_WORD *)(v8 + 2) < 0x74u || !*(_DWORD *)(v8 + 36) || *(_DWORD *)(v3 + 4) != 1 )
    goto LABEL_7;
  *((_DWORD *)a1 + 10) = 0;
  if ( !*(_DWORD *)(v3 + 48) )
  {
    *(_DWORD *)(v3 + 56) = 1;
    *((_DWORD *)a1 + 10) = -1073676268;
    goto LABEL_8;
  }
  v9 = *(_QWORD *)(v3 + 40);
  if ( !*(_BYTE *)(v9 + 1) || *(_DWORD *)(v9 + 8) )
    goto LABEL_19;
  SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v6, 0);
  if ( SwitchBySwitchId )
  {
    if ( *((_DWORD *)SwitchBySwitchId + 12) <= 1u && !*((_DWORD *)SwitchBySwitchId + 18) )
      goto LABEL_4;
LABEL_19:
    *((_DWORD *)a1 + 10) = -1073741811;
    goto LABEL_8;
  }
  *((_DWORD *)a1 + 10) = 0;
LABEL_8:
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
  {
    LODWORD(v11) = v4;
    WPP_SF_qqqDD(0x11u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, *a1, a1[3], a1[1], v11, *((_DWORD *)a1 + 10));
  }
  return v4;
}
