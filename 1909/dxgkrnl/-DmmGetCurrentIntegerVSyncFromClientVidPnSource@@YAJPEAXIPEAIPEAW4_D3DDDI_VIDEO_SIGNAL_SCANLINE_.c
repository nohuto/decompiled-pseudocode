/*
 * XREFs of ?DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@@Z @ 0x1C014B328
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00E7630 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00044DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005814 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00098BC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00DB95C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00DBA44 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 */

__int64 __fastcall DmmGetCurrentIntegerVSyncFromClientVidPnSource(
        DXGADAPTER *a1,
        __int64 a2,
        unsigned int *a3,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING *a4)
{
  unsigned int v4; // edi
  __int64 v5; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rdx
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // r9
  __int64 v30; // r9
  unsigned int v31; // eax
  __int64 v32; // rsi
  unsigned int v33; // r13d
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned int v36; // ecx
  __int64 v37; // r8
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // [rsp+20h] [rbp-30h] BYREF
  struct _D3DDDI_RATIONAL v49; // [rsp+28h] [rbp-28h] BYREF
  __int64 v50; // [rsp+30h] [rbp-20h]
  __int64 v51; // [rsp+38h] [rbp-18h] BYREF
  __int64 v52; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 v53; // [rsp+90h] [rbp+40h] BYREF

  v4 = 0;
  v5 = (unsigned int)a2;
  if ( !a3 || !a4 )
  {
    v47 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v47 + 24) = a3;
    *(_QWORD *)(v47 + 32) = a4;
    WdLogEvent5_WdError(v47);
    return 3221225485LL;
  }
  if ( !a1 )
  {
    v40 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v40 + 24) = 0LL;
LABEL_28:
    WdLogEvent5_WdError(v40);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v41 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v41);
  }
  v12 = *((_QWORD *)a1 + 319);
  if ( !v12 )
  {
    v40 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v40 + 24) = a1;
    goto LABEL_28;
  }
  v13 = *(_QWORD *)(v12 + 88);
  if ( v13 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v52, v13);
    v15 = *(_QWORD *)(v13 + 88);
    v48 = 0LL;
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 32));
      v16 = *(_QWORD *)(v13 + 88);
    }
    else
    {
      v16 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v48, v16, v14);
    v20 = v48;
    if ( v48 )
    {
      v21 = *(_QWORD *)(*((_QWORD *)a1 + 319) + 112LL);
      v50 = 3968 * v5;
      Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v48 + 96), v5, *(_DWORD *)(v21 + 3968 * v5 + 1068));
      if ( Path && (v26 = *((_QWORD *)Path + 12)) != 0 )
      {
        v27 = *(_QWORD *)(v26 + 104);
        if ( v27 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v27 + 96));
          v28 = *(_QWORD *)(v26 + 104);
        }
        else
        {
          v28 = 0LL;
        }
        v29 = *(_QWORD *)(v28 + 144);
        v51 = v28;
        if ( !v29 )
        {
          v44 = WdLogNewEntry5_WdAssertion(v27, v23);
          WdLogEvent5_WdAssertion(v44);
          v29 = *(_QWORD *)(v28 + 144);
        }
        v49 = *(struct _D3DDDI_RATIONAL *)(v29 + 92);
        DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v29 + 72), &v49);
        v31 = DmmMapVSyncFromRationalToInteger(&v49, (unsigned int)((int)(*(_DWORD *)(v30 + 120) << 29) >> 29), &v53);
        v32 = *((_QWORD *)a1 + 319);
        v33 = v31;
        if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v32 + 16)) )
        {
          v45 = WdLogNewEntry5_WdAssertion(v35, v34);
          *(_QWORD *)(v45 + 24) = 5962LL;
          WdLogEvent5_WdAssertion(v45);
        }
        if ( (unsigned int)v5 >= *(_DWORD *)(v32 + 80) )
        {
          v46 = WdLogNewEntry5_WdAssertion(v35, v34);
          *(_QWORD *)(v46 + 24) = 5963LL;
          WdLogEvent5_WdAssertion(v46);
        }
        if ( v53 != 1 || (v36 = *(_DWORD *)(*(_QWORD *)(v32 + 112) + v50 + 1072), v36 != v33 + 1) )
          v36 = v33;
        *a3 = v36;
        *a4 = (int)(*(_DWORD *)(*(_QWORD *)(v28 + 144) + 120LL) << 29) >> 29;
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v51, 0LL);
      }
      else
      {
        v39 = WdLogNewEntry5_WdError(v24, v23, v25);
        *(_QWORD *)(v39 + 24) = v20;
        WdLogEvent5_WdError(v39);
        v4 = -1071774971;
      }
    }
    else
    {
      v43 = WdLogNewEntry5_WdError(v18, v17, v19);
      *(_QWORD *)(v43 + 24) = a1;
      WdLogEvent5_WdError(v43);
      v4 = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v48, 0LL, v37);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v52 + 40));
    return v4;
  }
  else
  {
    v42 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v42 + 24) = a1;
    WdLogEvent5_WdError(v42);
    return 3223192373LL;
  }
}
