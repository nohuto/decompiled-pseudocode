/*
 * XREFs of ?AddPathToFirstAvailableTarget@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@@Z @ 0x1C0235E38
 * Callers:
 *     ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1C02363E4 (-AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?AddPresentPath@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0235F88 (-AddPresentPath@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IIW4_D3DK.c)
 */

__int64 __fastcall AddPathToFirstAvailableTarget(
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int i,
        unsigned int a6)
{
  __int64 v7; // r14
  __int64 v8; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  _QWORD *v22; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v23; // [rsp+20h] [rbp-28h]
  unsigned __int16 v24; // [rsp+28h] [rbp-20h]
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v25; // [rsp+30h] [rbp-18h]

  v7 = a3;
  v8 = 0xFFFFFFFFLL;
  for ( i = -1; ; v8 = i )
  {
    v10 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, __int64, _QWORD, unsigned int *))(a2 + 96))(
            a1,
            v8,
            a6,
            &i);
    v14 = v10;
    if ( v10 == -1071774925 )
      break;
    if ( v10 < 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11, v13);
      v20[3] = (int)a6;
      v20[4] = a1;
      v20[5] = v7;
LABEL_10:
      v20[6] = v14;
      WdLogEvent5_WdError(v20);
      return (unsigned int)v14;
    }
    v15 = AddPresentPath(a1, (const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *)a2, v7, i, v23, v24, v25);
    v14 = v15;
    if ( v15 != -1071774975 )
    {
      if ( v15 >= 0 )
        return 0LL;
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16, v18);
      v20[3] = v7;
      v20[4] = i;
      v20[5] = a1;
      goto LABEL_10;
    }
    v19 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v17, v16);
    v19[3] = v7;
    v19[4] = i;
    v19[5] = a1;
    WdLogEvent5_WdDmmEvent(v19);
  }
  v22 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v12, v11);
  v22[3] = (int)a6;
  v22[4] = a1;
  v22[5] = v7;
  WdLogEvent5_WdDmmEvent(v22);
  return 3223192371LL;
}
