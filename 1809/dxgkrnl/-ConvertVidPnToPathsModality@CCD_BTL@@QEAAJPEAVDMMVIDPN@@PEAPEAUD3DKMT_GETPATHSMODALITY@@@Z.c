/*
 * XREFs of ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C028A958
 * Callers:
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C0239304 (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 *     ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C028BA08 (-_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00C90F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00C9BA8 (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C028A7D8 (-CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z.c)
 */

__int64 __fastcall CCD_BTL::ConvertVidPnToPathsModality(
        CCD_BTL *this,
        struct DMMVIDPN *a2,
        struct D3DKMT_GETPATHSMODALITY **a3)
{
  unsigned __int16 v3; // bx
  __int64 v7; // rax
  unsigned __int16 v8; // r15
  __int64 v9; // rax
  SIZE_T v10; // r12
  struct D3DKMT_GETPATHSMODALITY *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdi
  _QWORD *v23; // rax
  int *v24; // [rsp+28h] [rbp-39h] BYREF
  unsigned __int16 v25; // [rsp+30h] [rbp-31h]
  int v26; // [rsp+38h] [rbp-29h] BYREF
  __int64 v27; // [rsp+40h] [rbp-21h]
  __int64 v28; // [rsp+48h] [rbp-19h]
  __int64 v29; // [rsp+50h] [rbp-11h]
  __int16 v30; // [rsp+58h] [rbp-9h]
  __int64 v31; // [rsp+60h] [rbp-1h]
  __int64 v32; // [rsp+68h] [rbp+7h]
  __int64 v33; // [rsp+70h] [rbp+Fh]
  _WORD *v34; // [rsp+78h] [rbp+17h]
  bool v35; // [rsp+80h] [rbp+1Fh]
  int v36; // [rsp+84h] [rbp+23h]
  int v37; // [rsp+88h] [rbp+27h]
  __int64 v38; // [rsp+8Ch] [rbp+2Bh]

  v3 = 0;
  if ( !a2 || !a3 || *a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_WORD *)a2 + 68);
  v9 = v8;
  if ( v8 <= 1u )
    v9 = 1LL;
  v10 = 272 * v9 + 48;
  v11 = (struct D3DKMT_GETPATHSMODALITY *)operator new(v10, 0x63644356u, PagedPool);
  *a3 = v11;
  if ( v11 )
  {
    memset(v11, 0, v10);
    *((_WORD *)*a3 + 11) = v8;
    if ( v8 )
    {
      v34 = *a3;
      v27 = 0LL;
      v28 = 0LL;
      v35 = v34 == 0LL;
      v31 = 0LL;
      v32 = 0LL;
      v26 = 0;
      v29 = 0LL;
      v30 = 0;
      v33 = 0LL;
      v36 = 0;
      v37 = 1;
      v38 = 0LL;
      v24 = &v26;
      v25 = 0;
      v20 = CCD_BTL_ACTIVE_PATHS_COLLECTOR::CollectPathsFromLegacyVidPn((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v24, a2);
      v22 = v20;
      if ( v20 >= 0 )
      {
        if ( v34 )
          v3 = v34[10];
        if ( v3 < v25 )
          LODWORD(v22) = -1073741789;
        CCD_TOPOLOGY::AdjustDesktopLayout((CCD_TOPOLOGY *)&v26);
      }
      else
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdError(v21);
        v23[3] = v22;
        v23[4] = a2;
        v23[5] = v8;
        WdLogEvent5_WdError(v23);
      }
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v26);
      return (unsigned int)v22;
    }
    else
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v16, v15, v17, v18);
      v19[3] = this;
      v19[4] = a2;
      v19[5] = a3;
      WdLogEvent5_WdDmmEvent(v19);
      return 0LL;
    }
  }
  else
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdLowResource(v12);
    v13[3] = v10;
    v13[4] = a2;
    v13[5] = v8;
    WdLogEvent5_WdLowResource(v13);
    return 3221225495LL;
  }
}
