/*
 * XREFs of ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C027B850
 * Callers:
 *     DxgkInvalidateActiveVidPn @ 0x1C0206760 (DxgkInvalidateActiveVidPn.c)
 *     DpiAcpiProcessEventRequests @ 0x1C02704CC (DpiAcpiProcessEventRequests.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00041F4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000EAA4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000F9D0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0279C58 (-CommitVidPnViaSDC@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C027DD48 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 */

__int64 __fastcall DmmInvalidateActiveVidPn(
        DXGADAPTER *this,
        __int64 a2,
        void *a3,
        __int64 a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5,
        int a6)
{
  unsigned int v6; // edi
  enum _DXGK_RECOMMENDFUNCTIONALVIDPN_REASON v8; // r15d
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rsi
  VIDPN_MGR *v18; // rsi
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rcx
  struct DMMVIDPN *v28; // rbx
  char v29; // r14
  char *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  DMMVIDPNTOPOLOGY *v35; // r15
  __int64 v36; // rax
  char *v37; // r12
  char *v38; // rdi
  char *v39; // rdi
  __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // r13d
  __int64 v43; // rax
  __int64 v44; // rax
  char *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // [rsp+30h] [rbp-20h] BYREF
  struct DMMVIDPN *v55; // [rsp+38h] [rbp-18h] BYREF
  __int64 v56; // [rsp+40h] [rbp-10h] BYREF
  struct DMMVIDPN *v57; // [rsp+80h] [rbp+30h] BYREF

  v6 = a4;
  v8 = (int)a2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v11);
    v13 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v13 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v13);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = *((_QWORD *)this + 315);
  if ( !v17 )
  {
    v13 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v13 + 24) = this;
    goto LABEL_3;
  }
  v18 = *(VIDPN_MGR **)(v17 + 88);
  if ( v18 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v56, (__int64)v18);
    v57 = 0LL;
    v55 = 0LL;
    v20 = VIDPN_MGR::RecommendFunctionalVidPn(v18, v8, a3, v6, &v55);
    v25 = v20;
    if ( v20 >= 0 )
    {
      auto_rc<DMMVIDPN>::reset((__int64 *)&v57, (__int64)v55);
      v28 = v57;
      v29 = 0;
      if ( v8 == DXGK_RFVR_HOTKEY )
      {
        v30 = (char *)v57 + 96;
        v29 = 1;
        if ( v57 == (struct DMMVIDPN *)-96LL )
        {
          v31 = WdLogNewEntry5_WdAssertion(v27);
          WdLogEvent5_WdAssertion(v31);
        }
        v32 = *((_QWORD *)v18 + 11);
        v54 = 0LL;
        if ( v32 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v32 + 32));
          v33 = *((_QWORD *)v18 + 11);
          v28 = v57;
        }
        else
        {
          v33 = 0LL;
        }
        auto_rc<DMMVIDPN const>::reset(&v54, v33);
        if ( v54 )
        {
          v35 = (DMMVIDPNTOPOLOGY *)(v54 + 96);
          if ( v54 == -96 )
          {
            v36 = WdLogNewEntry5_WdAssertion(v34);
            WdLogEvent5_WdAssertion(v36);
          }
          if ( *((_QWORD *)v35 + 5) == *((_QWORD *)v30 + 5) )
          {
            v37 = v30 + 24;
            v38 = (char *)*((_QWORD *)v30 + 3);
            if ( v38 == v37 )
              goto LABEL_33;
            v39 = v38 - 8;
            if ( !v39 )
              goto LABEL_33;
            do
            {
              v40 = *(unsigned int *)(*((_QWORD *)v39 + 11) + 24LL);
              v41 = *((_QWORD *)v39 + 12);
              a6 = v40;
              v42 = *(_DWORD *)(v41 + 24);
              if ( (_DWORD)v40 == -1 )
              {
                v43 = WdLogNewEntry5_WdAssertion(v40);
                WdLogEvent5_WdAssertion(v43);
              }
              if ( v42 == -1 )
              {
                v44 = WdLogNewEntry5_WdAssertion(v40);
                WdLogEvent5_WdAssertion(v44);
              }
              if ( !DMMVIDPNTOPOLOGY::FindPath(v35, a6, v42) )
                break;
              v45 = (char *)*((_QWORD *)v39 + 1);
              v39 = v45 - 8;
              if ( v45 == v37 )
                v39 = 0LL;
            }
            while ( v39 );
            v28 = v57;
            if ( !v39 )
LABEL_33:
              v29 = 0;
          }
        }
        auto_rc<DMMVIDPN const>::reset(&v54, 0LL);
        if ( v29 )
        {
          v50 = WdLogNewEntry5_WdDmmEvent(v47, v46, v48, v49);
          *(_QWORD *)(v50 + 24) = v28;
          WdLogEvent5_WdDmmEvent(v50);
        }
      }
      v51 = VIDPN_MGR::CommitVidPnViaSDC((DXGADAPTER ***)v18, v28, v29, a5);
      v25 = v51;
      if ( v51 >= 0 )
      {
        LODWORD(v25) = 0;
      }
      else
      {
        v53 = WdLogNewEntry5_WdError(v52);
        *(_QWORD *)(v53 + 24) = v28;
        *(_QWORD *)(v53 + 32) = v25;
        WdLogEvent5_WdError(v53);
      }
    }
    else
    {
      v26 = WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
      *(_QWORD *)(v26 + 24) = 0LL;
      *(_QWORD *)(v26 + 32) = v25;
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&v57, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v56 + 40));
    return (unsigned int)v25;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v19 + 24) = this;
    WdLogEvent5_WdError(v19);
    return 3223192373LL;
  }
}
