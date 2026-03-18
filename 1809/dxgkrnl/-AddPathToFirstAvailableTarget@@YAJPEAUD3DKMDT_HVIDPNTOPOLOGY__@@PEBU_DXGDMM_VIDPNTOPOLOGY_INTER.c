/*
 * XREFs of ?AddPathToFirstAvailableTarget@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@@Z @ 0x1C0203E50
 * Callers:
 *     ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1C02043FC (-AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?AddPresentPath@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0203FA0 (-AddPresentPath@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IIW4_D3DK.c)
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
  __int64 v14; // r9
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  _QWORD *v24; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v25; // [rsp+20h] [rbp-28h]
  unsigned __int16 v26; // [rsp+28h] [rbp-20h]
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v27; // [rsp+30h] [rbp-18h]

  v7 = a3;
  v8 = 0xFFFFFFFFLL;
  for ( i = -1; ; v8 = i )
  {
    v10 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, __int64, _QWORD, unsigned int *))(a2 + 96))(
            a1,
            v8,
            a6,
            &i);
    v15 = v10;
    if ( v10 == -1071774925 )
      break;
    if ( v10 < 0 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v22[3] = (int)a6;
      v22[4] = a1;
      v22[5] = v7;
LABEL_10:
      v22[6] = v15;
      WdLogEvent5_WdError(v22);
      return (unsigned int)v15;
    }
    v16 = AddPresentPath(a1, (const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *)a2, v7, i, v25, v26, v27);
    v15 = v16;
    if ( v16 != -1071774975 )
    {
      if ( v16 >= 0 )
        return 0LL;
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v18);
      v22[3] = v7;
      v22[4] = i;
      v22[5] = a1;
      goto LABEL_10;
    }
    v21 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v18, v17, v19, v20);
    v21[3] = v7;
    v21[4] = i;
    v21[5] = a1;
    WdLogEvent5_WdDmmEvent(v21);
  }
  v24 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v12, v11, v13, v14);
  v24[3] = (int)a6;
  v24[4] = a1;
  v24[5] = v7;
  WdLogEvent5_WdDmmEvent(v24);
  return 3223192371LL;
}
