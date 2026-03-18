/*
 * XREFs of ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02C4168
 * Callers:
 *     ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02C42E8 (-_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004518 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00D73F8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00D98F0 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C014AA08 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C02C2DA4 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  CCD_TOPOLOGY *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  int v23; // [rsp+20h] [rbp-60h] BYREF
  __int64 v24; // [rsp+28h] [rbp-58h]
  __int64 v25; // [rsp+30h] [rbp-50h]
  __int64 v26; // [rsp+38h] [rbp-48h]
  __int16 v27; // [rsp+40h] [rbp-40h]
  __int64 v28; // [rsp+48h] [rbp-38h]
  __int64 v29; // [rsp+50h] [rbp-30h]
  __int64 v30; // [rsp+58h] [rbp-28h]
  struct D3DKMT_GETPATHSMODALITY *v31; // [rsp+60h] [rbp-20h]
  bool v32; // [rsp+68h] [rbp-18h]
  int v33; // [rsp+6Ch] [rbp-14h]
  int v34; // [rsp+70h] [rbp-10h]
  __int64 v35; // [rsp+74h] [rbp-Ch]
  struct D3DKMT_GETPATHSMODALITY *v36; // [rsp+B8h] [rbp+38h] BYREF
  struct DMMVIDPN *v37; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v38; // [rsp+C8h] [rbp+48h] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)a2 + 319) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v38, v4);
  v5 = *(_QWORD *)(v4 + 280);
  v37 = 0LL;
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 32));
    v5 = *(_QWORD *)(v4 + 280);
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)&v37, v5);
  v9 = v37;
  if ( v37 )
  {
    v36 = 0LL;
    v12 = CCD_BTL::Global(v7, v6);
    v11 = CCD_BTL::ConvertVidPnToPathsModality(v12, v9, &v36);
    if ( v11 >= 0 )
    {
      v17 = *this;
      v23 = 0;
      v24 = 0LL;
      v25 = 0LL;
      v28 = 0LL;
      v29 = 0LL;
      v26 = 0LL;
      v27 = 0;
      v32 = v36 == 0LL;
      v30 = 0LL;
      v31 = v36;
      v33 = 0;
      v34 = 1;
      v35 = 0LL;
      v11 = CCD_TOPOLOGY::CopyInheritScope(v17, (const struct CCD_TOPOLOGY *)&v23);
      operator delete[](v36);
      if ( v11 >= 0 )
      {
        v11 = 0;
      }
      else
      {
        v21 = WdLogNewEntry5_WdError(v19, v18, v20);
        *(_QWORD *)(v21 + 24) = a2;
        WdLogEvent5_WdError(v21);
      }
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v23);
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v14, v13, v15);
      *(_QWORD *)(v16 + 24) = a2;
      WdLogEvent5_WdError(v16);
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v10 + 24) = a2;
    WdLogEvent5_WdWarning(v10);
    v11 = -1073741275;
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)&v37, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v38 + 40));
  return (unsigned int)v11;
}
