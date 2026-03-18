/*
 * XREFs of ?DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z @ 0x1C00DFB6C
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00E8FB0 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004418 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00E2F48 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E6D08 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 */

__int64 __fastcall DmmCanAddPresentPathToClientVidPn(DXGADAPTER *a1, __int64 a2, __int64 a3, unsigned __int8 *a4)
{
  __int64 v4; // r14
  __int64 v6; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  struct VIDPN_MGR *v12; // rdi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rbp
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v22; // rax
  unsigned __int8 v23; // al
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // [rsp+40h] [rbp-28h] BYREF
  __int64 v32; // [rsp+88h] [rbp+20h] BYREF

  v4 = (unsigned int)a3;
  v6 = (unsigned int)a2;
  if ( !a4 )
  {
    v25 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v25 + 24) = 0LL;
    WdLogEvent5_WdError(v25);
    return 3221225485LL;
  }
  *a4 = 0;
  if ( !a1 )
  {
    v26 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v26 + 24) = 0LL;
LABEL_18:
    WdLogEvent5_WdError(v26);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v27);
  }
  v11 = *((_QWORD *)a1 + 319);
  if ( !v11 )
  {
    v26 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v26 + 24) = a1;
    goto LABEL_18;
  }
  v12 = *(struct VIDPN_MGR **)(v11 + 88);
  if ( v12 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v31, (__int64)v12);
    v32 = 0LL;
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v12);
    v16 = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
    {
      v29 = WdLogNewEntry5_WdDmmEvent(v15, v14);
      *(_QWORD *)(v29 + 24) = v16;
      WdLogEvent5_WdDmmEvent(v29);
    }
    else
    {
      v17 = v32 + 96;
      v18 = VIDPN_MGR::AddPathToVidPnTopology(
              v12,
              (struct DMMVIDPNTOPOLOGY *const)(v32 + 96),
              v6,
              v4,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              0xFFFFu,
              0,
              D3DKMDT_MCC_ENFORCE);
      v16 = v18;
      if ( v18 == -1071774976 || v18 == -1071774975 )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v20, v19);
        v22[3] = v6;
        v22[4] = v4;
        v22[5] = v17;
        WdLogEvent5_WdDmmEvent(v22);
        v23 = 0;
      }
      else
      {
        if ( v18 < 0 )
        {
          v30 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19, v21);
          v30[3] = v6;
          v30[4] = v4;
          v30[5] = v17;
          v30[6] = v16;
          WdLogEvent5_WdError(v30);
          goto LABEL_11;
        }
        v23 = 1;
      }
      *a4 = v23;
      LODWORD(v16) = 0;
    }
LABEL_11:
    auto_rc<DMMVIDPN>::reset(&v32, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v31 + 40));
    return (unsigned int)v16;
  }
  v28 = WdLogNewEntry5_WdError(v9, v8, v10);
  *(_QWORD *)(v28 + 24) = a1;
  WdLogEvent5_WdError(v28);
  return 3223192373LL;
}
