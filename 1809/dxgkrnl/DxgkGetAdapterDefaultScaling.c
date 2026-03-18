/*
 * XREFs of DxgkGetAdapterDefaultScaling @ 0x1C00CE3E0
 * Callers:
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C00B5744 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C00B5E00 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C00C7970 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00CC7FC (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00CE5B0 (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0010778 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C00B5C6C (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

void __fastcall DxgkGetAdapterDefaultScaling(struct _LUID *a1, int *a2)
{
  int AdapterDefaultScaling; // esi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGADAPTER *v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  _BYTE v22[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v23[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v24[40]; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v25; // [rsp+88h] [rbp+10h] BYREF

  AdapterDefaultScaling = 3;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v25);
  v10 = v6;
  if ( v6 && *((_QWORD *)v6 + 315) )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v6) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v18 + 24) = 7404LL;
      WdLogEvent5_WdAssertion(v18);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(
        (__int64 *)&v25,
        *(_QWORD *)(*((_QWORD *)v10 + 315) + 88LL));
      AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(*((_QWORD *)v10 + 315) + 88LL));
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v25 + 40));
    }
    else
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, v10, 0LL);
      v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v22);
      if ( v12 < 0 )
      {
        v19 = v12;
        if ( v12 == -1073741130 )
        {
          v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
          v20[3] = v19;
          v20[4] = v10;
          v20[5] = *((int *)v10 + 70);
          v20[6] = *((unsigned int *)v10 + 69);
          WdLogEvent5_WdWarning(v20);
        }
        else
        {
          v21 = (_QWORD *)WdLogNewEntry5_WdError(v14);
          v21[3] = v19;
          v21[4] = v10;
          v21[5] = *((int *)v10 + 70);
          v21[6] = *((unsigned int *)v10 + 69);
          WdLogEvent5_WdError(v21);
        }
      }
      else
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(
          (__int64 *)&v25,
          *(_QWORD *)(*((_QWORD *)v10 + 315) + 88LL));
        v16 = *((_QWORD *)v10 + 315);
        if ( *(_BYTE *)(v16 + 132) )
          AdapterDefaultScaling = 4;
        else
          AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(*(VIDPN_MGR **)(v16 + 88));
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v22);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v25 + 40));
      }
      COREACCESS::~COREACCESS((COREACCESS *)v24);
      COREACCESS::~COREACCESS((COREACCESS *)v23);
    }
    DXGADAPTER::ReleaseReference(v10);
  }
  else
  {
    v17 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v17 + 24) = a1->HighPart;
    *(_QWORD *)(v17 + 32) = a1->LowPart;
    WdLogEvent5_WdWarning(v17);
  }
  *a2 = AdapterDefaultScaling;
}
