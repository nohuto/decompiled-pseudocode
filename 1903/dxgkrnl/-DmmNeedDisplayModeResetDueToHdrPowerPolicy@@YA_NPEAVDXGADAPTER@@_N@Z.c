/*
 * XREFs of ?DmmNeedDisplayModeResetDueToHdrPowerPolicy@@YA_NPEAVDXGADAPTER@@_N@Z @ 0x1C02B48D8
 * Callers:
 *     ?FindDisplayModeResetNeededDueToHdrPowerPolicy@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0243730 (-FindDisplayModeResetNeededDueToHdrPowerPolicy@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00043DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000968C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     MonitorIsAdvancedColorEnabled @ 0x1C00D312C (MonitorIsAdvancedColorEnabled.c)
 */

char __fastcall DmmNeedDisplayModeResetDueToHdrPowerPolicy(struct DXGADAPTER *a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  char v4; // r15
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rax
  struct HDXGMONITOR__ *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // [rsp+20h] [rbp-10h] BYREF
  bool v32; // [rsp+60h] [rbp+30h] BYREF
  __int64 v33; // [rsp+70h] [rbp+40h] BYREF
  __int64 v34; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  v4 = a2;
  if ( !a1 )
  {
    v6 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v6 + 24) = 14911LL;
LABEL_3:
    WdLogEvent5_WdError(v6);
    return 0;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  v11 = *((_QWORD *)a1 + 319);
  if ( !v11 || (v12 = *(_QWORD *)(v11 + 88)) == 0 )
  {
    v6 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v6 + 24) = a1;
    goto LABEL_3;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v31, v12);
  v14 = *(_QWORD *)(v12 + 88);
  v33 = 0LL;
  if ( v14 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 32));
    v15 = *(_QWORD *)(v12 + 88);
  }
  else
  {
    v15 = 0LL;
  }
  auto_rc<DMMVIDPN const>::reset(&v33, v15, v13);
  if ( v33 )
  {
    v20 = v33 + 120;
    v21 = *(_QWORD *)(v33 + 120);
    if ( v21 != v33 + 120 )
    {
      v22 = v21 - 8;
      while ( v22 )
      {
        v23 = *(_QWORD *)(v22 + 96);
        if ( !v23 )
        {
          v24 = WdLogNewEntry5_WdAssertion(v17, v16);
          WdLogEvent5_WdAssertion(v24);
        }
        v17 = *(_QWORD *)(v23 + 96);
        if ( *(_BYTE *)(v17 + 418) )
        {
          v25 = *(struct HDXGMONITOR__ **)(v17 + 112);
          v32 = 0;
          MonitorIsAdvancedColorEnabled(v25, &v32);
          if ( v32 )
          {
            v26 = *(_QWORD *)(v23 + 104);
            if ( v26 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v26 + 96));
              v27 = *(_QWORD *)(v23 + 104);
            }
            else
            {
              v27 = 0LL;
            }
            v28 = *(_QWORD *)(v27 + 144);
            v34 = v27;
            if ( v28 )
            {
              if ( ((v29 = *(_DWORD *)(v28 + 136), v29 == 12) || v29 == 32) && !v4 || v29 != 12 && v29 != 32 && v4 )
              {
                auto_rc<DMMVIDPNTARGETMODESET>::reset(&v34, 0LL);
                v3 = 1;
                break;
              }
            }
            auto_rc<DMMVIDPNTARGETMODESET>::reset(&v34, 0LL);
          }
        }
        v30 = *(_QWORD *)(v22 + 8);
        v22 = v30 - 8;
        if ( v30 == v20 )
          v22 = 0LL;
      }
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v17, v16, v18);
    *(_QWORD *)(v19 + 24) = a1;
    WdLogEvent5_WdError(v19);
  }
  auto_rc<DMMVIDPN const>::reset(&v33, 0LL, v18);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v31 + 40));
  return v3;
}
