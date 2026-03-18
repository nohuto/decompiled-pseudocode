/*
 * XREFs of DxgkGetAdapterDefaultScaling @ 0x1C00D1240
 * Callers:
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00D1164 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00D1460 (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     DxgkGetPathsModality @ 0x1C00D6FD0 (DxgkGetPathsModality.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C00DD668 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C012EDF0 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C014A480 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00037E8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0100730 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C014A26C (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 */

void __fastcall DxgkGetAdapterDefaultScaling(struct _LUID *a1, enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *a2)
{
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING AdapterDefaultScaling; // esi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGADAPTER *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  unsigned __int64 v24[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v25[8]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v26[64]; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v27[72]; // [rsp+78h] [rbp-70h] BYREF

  AdapterDefaultScaling = D3DKMDT_VPPS_STRETCHED;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2);
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, v24);
  v10 = v6;
  if ( v6 && *((_QWORD *)v6 + 319) )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v6) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v12, v11);
      *(_QWORD *)(v20 + 24) = 7590LL;
      WdLogEvent5_WdAssertion(v20);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64 *)v24, *(_QWORD *)(*((_QWORD *)v10 + 319) + 88LL));
      AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(*((_QWORD *)v10 + 319) + 88LL));
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v24[0] + 40));
    }
    else
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v25, v10, 0LL);
      v14 = COREADAPTERACCESS::AcquireShared((__int64)v25, 0xFFFFFFFFLL, v13);
      if ( v14 < 0 )
      {
        v21 = v14;
        if ( v14 == -1073741130 )
        {
          v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
          v22[3] = v21;
          v22[4] = v10;
          v22[5] = *((int *)v10 + 70);
          v22[6] = *((unsigned int *)v10 + 69);
          WdLogEvent5_WdWarning(v22);
        }
        else
        {
          v23 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15, v17);
          v23[3] = v21;
          v23[4] = v10;
          v23[5] = *((int *)v10 + 70);
          v23[6] = *((unsigned int *)v10 + 69);
          WdLogEvent5_WdError(v23);
        }
      }
      else
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(
          (__int64 *)v24,
          *(_QWORD *)(*((_QWORD *)v10 + 319) + 88LL));
        v18 = *((_QWORD *)v10 + 319);
        if ( *(_BYTE *)(v18 + 233) )
          AdapterDefaultScaling = D3DKMDT_VPPS_ASPECTRATIOCENTEREDMAX;
        else
          AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(v18 + 88));
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v25);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v24[0] + 40));
      }
      COREACCESS::~COREACCESS((COREACCESS *)v27);
      COREACCESS::~COREACCESS((COREACCESS *)v26);
    }
    DXGADAPTER::ReleaseReferenceNoTracking(v10);
  }
  else
  {
    v19 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v19 + 24) = a1->HighPart;
    *(_QWORD *)(v19 + 32) = a1->LowPart;
    WdLogEvent5_WdWarning(v19);
  }
  *a2 = AdapterDefaultScaling;
}
