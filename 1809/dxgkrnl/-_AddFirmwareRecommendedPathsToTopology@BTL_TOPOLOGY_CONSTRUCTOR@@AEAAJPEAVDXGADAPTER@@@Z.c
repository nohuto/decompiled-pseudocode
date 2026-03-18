/*
 * XREFs of ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C028BA08
 * Callers:
 *     ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C028BB88 (-_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00041F4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00C90F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00C99D0 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C00CDD14 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C028A958 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddFirmwareRecommendedPathsToTopology(
        CCD_TOPOLOGY **this,
        struct DXGADAPTER *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct DMMVIDPN *v9; // rbx
  __int64 v10; // rax
  int v11; // ebx
  CCD_BTL *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  CCD_TOPOLOGY *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  int v19; // [rsp+20h] [rbp-60h] BYREF
  __int64 v20; // [rsp+28h] [rbp-58h]
  __int64 v21; // [rsp+30h] [rbp-50h]
  __int64 v22; // [rsp+38h] [rbp-48h]
  __int16 v23; // [rsp+40h] [rbp-40h]
  __int64 v24; // [rsp+48h] [rbp-38h]
  __int64 v25; // [rsp+50h] [rbp-30h]
  __int64 v26; // [rsp+58h] [rbp-28h]
  struct D3DKMT_GETPATHSMODALITY *v27; // [rsp+60h] [rbp-20h]
  bool v28; // [rsp+68h] [rbp-18h]
  int v29; // [rsp+6Ch] [rbp-14h]
  int v30; // [rsp+70h] [rbp-10h]
  __int64 v31; // [rsp+74h] [rbp-Ch]
  struct D3DKMT_GETPATHSMODALITY *v32; // [rsp+B8h] [rbp+38h] BYREF
  struct DMMVIDPN *v33; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v34; // [rsp+C8h] [rbp+48h] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)a2 + 315) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v34, v4);
  v5 = *(_QWORD *)(v4 + 280);
  v33 = 0LL;
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 32));
    v5 = *(_QWORD *)(v4 + 280);
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)&v33, v5);
  v9 = v33;
  if ( v33 )
  {
    v32 = 0LL;
    v12 = CCD_BTL::Global(v7);
    v11 = CCD_BTL::ConvertVidPnToPathsModality(v12, v9, &v32);
    if ( v11 >= 0 )
    {
      v15 = *this;
      v19 = 0;
      v20 = 0LL;
      v21 = 0LL;
      v24 = 0LL;
      v25 = 0LL;
      v22 = 0LL;
      v23 = 0;
      v28 = v32 == 0LL;
      v26 = 0LL;
      v27 = v32;
      v29 = 0;
      v30 = 1;
      v31 = 0LL;
      v11 = CCD_TOPOLOGY::CopyInheritScope(v15, (const struct CCD_TOPOLOGY *)&v19);
      operator delete[](v32);
      if ( v11 >= 0 )
      {
        v11 = 0;
      }
      else
      {
        v17 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v17 + 24) = a2;
        WdLogEvent5_WdError(v17);
      }
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v19);
    }
    else
    {
      v14 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v14 + 24) = a2;
      WdLogEvent5_WdError(v14);
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v10 + 24) = a2;
    WdLogEvent5_WdWarning(v10);
    v11 = -1073741275;
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)&v33, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v34 + 40));
  return (unsigned int)v11;
}
