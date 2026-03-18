/*
 * XREFs of ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C02B4048
 * Callers:
 *     DxgkInvalidateActiveVidPn @ 0x1C0238790 (DxgkInvalidateActiveVidPn.c)
 *     DpiAcpiProcessEventRequests @ 0x1C02ACE5C (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004518 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005814 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00098BC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02B248C (-CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C02B61A0 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 */

__int64 __fastcall DmmInvalidateActiveVidPn(
        DXGADAPTER *this,
        __int64 a2,
        void *a3,
        unsigned int a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5,
        int a6)
{
  enum _DXGK_RECOMMENDFUNCTIONALVIDPN_REASON v8; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rsi
  VIDPN_MGR *v23; // rsi
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  struct DMMVIDPN *v33; // rbx
  char v34; // r14
  char *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  DMMVIDPNTOPOLOGY *v42; // r15
  __int64 v43; // rax
  char *v44; // r12
  char *v45; // rdi
  char *v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // rax
  int v49; // r13d
  __int64 v50; // rax
  __int64 v51; // rax
  char *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rax
  __int64 v61; // [rsp+30h] [rbp-20h] BYREF
  struct DMMVIDPN *v62; // [rsp+38h] [rbp-18h] BYREF
  __int64 v63; // [rsp+40h] [rbp-10h] BYREF
  struct DMMVIDPN *v64; // [rsp+80h] [rbp+30h] BYREF

  v8 = (int)a2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( !this )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v12);
    v16 = WdLogNewEntry5_WdError(v14, v13, v15);
    *(_QWORD *)(v16 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v16);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v19, v18);
    WdLogEvent5_WdAssertion(v21);
  }
  v22 = *((_QWORD *)this + 319);
  if ( !v22 )
  {
    v16 = WdLogNewEntry5_WdError(v19, v18, v20);
    *(_QWORD *)(v16 + 24) = this;
    goto LABEL_3;
  }
  v23 = *(VIDPN_MGR **)(v22 + 88);
  if ( v23 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v63, (__int64)v23);
    v64 = 0LL;
    v62 = 0LL;
    v25 = VIDPN_MGR::RecommendFunctionalVidPn(v23, v8, a3, a4, &v62);
    v28 = v25;
    if ( v25 >= 0 )
    {
      auto_rc<DMMVIDPN>::reset((__int64 *)&v64, (__int64)v62);
      v33 = v64;
      v34 = 0;
      if ( v8 == DXGK_RFVR_HOTKEY )
      {
        v35 = (char *)v64 + 96;
        v34 = 1;
        if ( v64 == (struct DMMVIDPN *)-96LL )
        {
          v36 = WdLogNewEntry5_WdAssertion(v31, v30);
          WdLogEvent5_WdAssertion(v36);
        }
        v37 = *((_QWORD *)v23 + 11);
        v61 = 0LL;
        if ( v37 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v37 + 32));
          v38 = *((_QWORD *)v23 + 11);
          v33 = v64;
        }
        else
        {
          v38 = 0LL;
        }
        auto_rc<DMMVIDPN const>::reset(&v61, v38, v32);
        if ( v61 )
        {
          v42 = (DMMVIDPNTOPOLOGY *)(v61 + 96);
          if ( v61 == -96 )
          {
            v43 = WdLogNewEntry5_WdAssertion(v40, v39);
            WdLogEvent5_WdAssertion(v43);
          }
          if ( *((_QWORD *)v42 + 5) == *((_QWORD *)v35 + 5) )
          {
            v44 = v35 + 24;
            v45 = (char *)*((_QWORD *)v35 + 3);
            if ( v45 == v44 )
              goto LABEL_33;
            v46 = v45 - 8;
            if ( !v46 )
              goto LABEL_33;
            do
            {
              v47 = *(unsigned int *)(*((_QWORD *)v46 + 11) + 24LL);
              v48 = *((_QWORD *)v46 + 12);
              a6 = v47;
              v49 = *(_DWORD *)(v48 + 24);
              if ( (_DWORD)v47 == -1 )
              {
                v50 = WdLogNewEntry5_WdAssertion(v47, v39);
                WdLogEvent5_WdAssertion(v50);
              }
              if ( v49 == -1 )
              {
                v51 = WdLogNewEntry5_WdAssertion(v47, v39);
                WdLogEvent5_WdAssertion(v51);
              }
              if ( !DMMVIDPNTOPOLOGY::FindPath(v42, a6, v49) )
                break;
              v52 = (char *)*((_QWORD *)v46 + 1);
              v46 = v52 - 8;
              if ( v52 == v44 )
                v46 = 0LL;
            }
            while ( v46 );
            v33 = v64;
            if ( !v46 )
LABEL_33:
              v34 = 0;
          }
        }
        auto_rc<DMMVIDPN const>::reset(&v61, 0LL, v41);
        if ( v34 )
        {
          v55 = WdLogNewEntry5_WdDmmEvent(v54, v53);
          *(_QWORD *)(v55 + 24) = v33;
          WdLogEvent5_WdDmmEvent(v55);
        }
      }
      v56 = VIDPN_MGR::CommitVidPnViaSDC((DXGADAPTER ***)v23, v33, v34, a5);
      v28 = v56;
      if ( v56 >= 0 )
      {
        LODWORD(v28) = 0;
      }
      else
      {
        v60 = WdLogNewEntry5_WdError(v58, v57, v59);
        *(_QWORD *)(v60 + 24) = v33;
        *(_QWORD *)(v60 + 32) = v28;
        WdLogEvent5_WdError(v60);
      }
    }
    else
    {
      v29 = WdLogNewEntry5_WdTrace(v27, v26);
      *(_QWORD *)(v29 + 24) = 0LL;
      *(_QWORD *)(v29 + 32) = v28;
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&v64, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v63 + 40));
    return (unsigned int)v28;
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v19, v18, v20);
    *(_QWORD *)(v24 + 24) = this;
    WdLogEvent5_WdError(v24);
    return 3223192373LL;
  }
}
