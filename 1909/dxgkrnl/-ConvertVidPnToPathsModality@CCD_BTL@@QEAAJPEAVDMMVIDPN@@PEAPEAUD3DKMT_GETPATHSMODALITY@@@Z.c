/*
 * XREFs of ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C02C2DA4
 * Callers:
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C026E2E0 (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 *     ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02C4168 (-_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00D73F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00D844C (-AdjustDesktopLayout@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C02C2C24 (-CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdi
  _QWORD *v26; // rax
  int *v27; // [rsp+28h] [rbp-39h] BYREF
  unsigned __int16 v28; // [rsp+30h] [rbp-31h]
  int v29; // [rsp+38h] [rbp-29h] BYREF
  __int64 v30; // [rsp+40h] [rbp-21h]
  __int64 v31; // [rsp+48h] [rbp-19h]
  __int64 v32; // [rsp+50h] [rbp-11h]
  __int16 v33; // [rsp+58h] [rbp-9h]
  __int64 v34; // [rsp+60h] [rbp-1h]
  __int64 v35; // [rsp+68h] [rbp+7h]
  __int64 v36; // [rsp+70h] [rbp+Fh]
  _WORD *v37; // [rsp+78h] [rbp+17h]
  bool v38; // [rsp+80h] [rbp+1Fh]
  int v39; // [rsp+84h] [rbp+23h]
  int v40; // [rsp+88h] [rbp+27h]
  __int64 v41; // [rsp+8Ch] [rbp+2Bh]

  v3 = 0;
  if ( !a2 || !a3 || *a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_WORD *)a2 + 68);
  v9 = v8;
  if ( v8 <= 1u )
    v9 = 1LL;
  v10 = 272 * v9 + 48;
  v11 = (struct D3DKMT_GETPATHSMODALITY *)operator new[](v10, 0x63644356u, PagedPool);
  *a3 = v11;
  if ( v11 )
  {
    memset(v11, 0, v10);
    *((_WORD *)*a3 + 11) = v8;
    if ( v8 )
    {
      v37 = *a3;
      v30 = 0LL;
      v31 = 0LL;
      v38 = v37 == 0LL;
      v34 = 0LL;
      v35 = 0LL;
      v29 = 0;
      v32 = 0LL;
      v33 = 0;
      v36 = 0LL;
      v39 = 0;
      v40 = 1;
      v41 = 0LL;
      v27 = &v29;
      v28 = 0;
      v21 = CCD_BTL_ACTIVE_PATHS_COLLECTOR::CollectPathsFromLegacyVidPn((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v27, a2);
      v25 = v21;
      if ( v21 >= 0 )
      {
        if ( v37 )
          v3 = v37[10];
        if ( v3 < v28 )
          LODWORD(v25) = -1073741789;
        CCD_TOPOLOGY::AdjustDesktopLayout((CCD_TOPOLOGY *)&v29);
      }
      else
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22, v24);
        v26[3] = v25;
        v26[4] = a2;
        v26[5] = v8;
        WdLogEvent5_WdError(v26);
      }
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v29);
      return (unsigned int)v25;
    }
    else
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v19, v18);
      v20[3] = this;
      v20[4] = a2;
      v20[5] = a3;
      WdLogEvent5_WdDmmEvent(v20);
      return 0LL;
    }
  }
  else
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
    v16[3] = v10;
    v16[4] = a2;
    v16[5] = v8;
    WdLogEvent5_WdLowResource(v16);
    return 3221225495LL;
  }
}
