/*
 * XREFs of ?DmmCanAddPresentPathToClientVidPn@@YAJQEAXIIPEAE@Z @ 0x1C00BD1C4
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00BC560 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00041F4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00BD9C0 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00C2870 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DmmCanAddPresentPathToClientVidPn(
        DXGADAPTER *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 *a4)
{
  __int64 v4; // r14
  __int64 v6; // r15
  __int64 v8; // rcx
  __int64 v9; // rdi
  struct VIDPN_MGR *v10; // rdi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // rbp
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rax
  unsigned __int8 v24; // al
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // [rsp+40h] [rbp-28h] BYREF
  __int64 v33; // [rsp+88h] [rbp+20h] BYREF

  v4 = a3;
  v6 = a2;
  if ( !a4 )
  {
    v26 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v26 + 24) = 0LL;
    WdLogEvent5_WdError(v26);
    return 3221225485LL;
  }
  *a4 = 0;
  if ( !a1 )
  {
    v27 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v27 + 24) = 0LL;
LABEL_15:
    WdLogEvent5_WdError(v27);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v28);
  }
  v9 = *((_QWORD *)a1 + 315);
  if ( !v9 )
  {
    v27 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v27 + 24) = a1;
    goto LABEL_15;
  }
  v10 = *(struct VIDPN_MGR **)(v9 + 88);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v32, (__int64)v10);
    v33 = 0LL;
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v10);
    v16 = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
    {
      v30 = WdLogNewEntry5_WdDmmEvent(v13, v12, v14, v15);
      *(_QWORD *)(v30 + 24) = v16;
      WdLogEvent5_WdDmmEvent(v30);
    }
    else
    {
      v17 = v33 + 96;
      v18 = VIDPN_MGR::AddPathToVidPnTopology(
              v10,
              (struct DMMVIDPNTOPOLOGY *const)(v33 + 96),
              v6,
              v4,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              0xFFFFu,
              0,
              D3DKMDT_MCC_ENFORCE);
      v16 = v18;
      if ( v18 == -1071774976 || v18 == -1071774975 )
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v20, v19, v21, v22);
        v23[3] = v6;
        v23[4] = v4;
        v23[5] = v17;
        WdLogEvent5_WdDmmEvent(v23);
        v24 = 0;
      }
      else
      {
        if ( v18 < 0 )
        {
          v31 = (_QWORD *)WdLogNewEntry5_WdError(v20);
          v31[3] = v6;
          v31[4] = v4;
          v31[5] = v17;
          v31[6] = v16;
          WdLogEvent5_WdError(v31);
          goto LABEL_11;
        }
        v24 = 1;
      }
      *a4 = v24;
      LODWORD(v16) = 0;
    }
LABEL_11:
    auto_rc<DMMVIDPN>::reset(&v33, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v32 + 40));
    return (unsigned int)v16;
  }
  v29 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v29 + 24) = a1;
  WdLogEvent5_WdError(v29);
  return 3223192373LL;
}
