/*
 * XREFs of ndisOidPMAddRemove @ 0x1C001D2F4
 * Callers:
 *     NdisFOidRequest @ 0x1C0007DB0 (NdisFOidRequest.c)
 *     ndisMOidRequest @ 0x1C0015410 (ndisMOidRequest.c)
 *     ndisWmiExecuteMethod @ 0x1C001DEEC (ndisWmiExecuteMethod.c)
 *     ndisPMAddRemoveAsync @ 0x1C0074F60 (ndisPMAddRemoveAsync.c)
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     ndisPMAddWOLPattern @ 0x1C001D0F4 (ndisPMAddWOLPattern.c)
 *     WPP_RECORDER_SF_qqqd @ 0x1C001D460 (WPP_RECORDER_SF_qqqd.c)
 *     ndisOidPMRemove @ 0x1C0022E6C (ndisOidPMRemove.c)
 *     ndisPMAddProtocolOffload @ 0x1C002311C (ndisPMAddProtocolOffload.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032358 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C0072498 (WPP_RECORDER_SF_Dd_ea_1C0072498.c)
 *     ndisCreatePMAddRemoveWorkItem @ 0x1C0072C94 (ndisCreatePMAddRemoveWorkItem.c)
 */

__int64 __fastcall ndisOidPMAddRemove(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // ebx
  int v10; // r9d
  unsigned int v11; // eax
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  int v15; // [rsp+20h] [rbp-48h]
  char v16; // [rsp+30h] [rbp-38h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      62,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      v16,
      a3);
  }
  if ( !KeGetCurrentIrql() )
  {
    v6 = *(_DWORD *)(a3 + 32);
    switch ( v6 )
    {
      case -50265846:
        v7 = ndisPMAddWOLPattern(a1, v4, a3);
        v8 = v7;
        if ( !v7 )
          goto LABEL_6;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v10 = 64;
LABEL_17:
          LOBYTE(a2) = 2;
          WPP_RECORDER_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            a2,
            14,
            v10,
            (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
            v7);
          goto LABEL_6;
        }
        break;
      case -50265843:
        v7 = ndisPMAddProtocolOffload(a1, v4, a3);
        v8 = v7;
        if ( !v7 )
          goto LABEL_6;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v10 = 65;
          goto LABEL_17;
        }
        break;
      case -50265841:
      case -50265845:
        v7 = ndisOidPMRemove(a1, v4, a3);
        v8 = v7;
        if ( !v7 )
          goto LABEL_6;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v10 = 66;
          goto LABEL_17;
        }
        break;
      default:
        v8 = -1073741823;
LABEL_6:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqqd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            a2,
            11,
            67,
            (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
            a1,
            v4,
            a3,
            v8);
        return v8;
    }
    return v8;
  }
  v11 = ndisCreatePMAddRemoveWorkItem(a1);
  v8 = v11;
  if ( v11 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Dd(*((_QWORD *)WPP_GLOBAL_Control + 8), v12, v13, v14, v15, *(_DWORD *)(a3 + 32), v11);
    return v8;
  }
  return 259LL;
}
