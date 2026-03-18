/*
 * XREFs of ?DmmNeedDisplayModeResetDueToHdrPowerPolicy@@YA_NPEAVDXGADAPTER@@_N@Z @ 0x1C027C4C8
 * Callers:
 *     ?FindDisplayModeResetNeededDueToHdrPowerPolicy@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C020F790 (-FindDisplayModeResetNeededDueToHdrPowerPolicy@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000EAA4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000F554 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     MonitorIsAdvancedColorEnabled @ 0x1C00D60DC (MonitorIsAdvancedColorEnabled.c)
 */

char __fastcall DmmNeedDisplayModeResetDueToHdrPowerPolicy(struct DXGADAPTER *a1, char a2)
{
  char v2; // bl
  __int64 v5; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rax
  struct HDXGMONITOR__ *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // [rsp+20h] [rbp-10h] BYREF
  bool v26; // [rsp+60h] [rbp+30h] BYREF
  __int64 v27; // [rsp+70h] [rbp+40h] BYREF
  __int64 v28; // [rsp+78h] [rbp+48h] BYREF

  v2 = 0;
  if ( !a1 )
  {
    v5 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v5 + 24) = 15194LL;
LABEL_3:
    WdLogEvent5_WdError(v5);
    return 0;
  }
  DXGADAPTER::IsCoreResourceSharedOwner(a1);
  v8 = *((_QWORD *)a1 + 315);
  if ( !v8 || (v9 = *(_QWORD *)(v8 + 88)) == 0 )
  {
    v5 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v5 + 24) = a1;
    goto LABEL_3;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v25, v9);
  v10 = *(_QWORD *)(v9 + 88);
  v27 = 0LL;
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 32));
    v11 = *(_QWORD *)(v9 + 88);
  }
  else
  {
    v11 = 0LL;
  }
  auto_rc<DMMVIDPN const>::reset(&v27, v11);
  if ( v27 )
  {
    v14 = v27 + 120;
    v15 = *(_QWORD *)(v27 + 120);
    if ( v15 != v27 + 120 )
    {
      v16 = v15 - 8;
      while ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 96);
        if ( !v17 )
        {
          v18 = WdLogNewEntry5_WdAssertion(v12);
          WdLogEvent5_WdAssertion(v18);
        }
        v12 = *(_QWORD *)(v17 + 96);
        if ( *(_BYTE *)(v12 + 418) )
        {
          v19 = *(struct HDXGMONITOR__ **)(v12 + 112);
          v26 = 0;
          MonitorIsAdvancedColorEnabled(v19, &v26);
          if ( v26 )
          {
            v20 = *(_QWORD *)(v17 + 104);
            if ( v20 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v20 + 96));
              v21 = *(_QWORD *)(v17 + 104);
            }
            else
            {
              v21 = 0LL;
            }
            v22 = *(_QWORD *)(v21 + 144);
            v28 = v21;
            if ( v22 )
            {
              if ( ((v23 = *(_DWORD *)(v22 + 136), v23 == 12) || v23 == 32) && !a2 || v23 != 12 && v23 != 32 && a2 )
              {
                auto_rc<DMMVIDPNTARGETMODESET>::reset(&v28, 0LL);
                v2 = 1;
                break;
              }
            }
            auto_rc<DMMVIDPNTARGETMODESET>::reset(&v28, 0LL);
          }
        }
        v24 = *(_QWORD *)(v16 + 8);
        v16 = v24 - 8;
        if ( v24 == v14 )
          v16 = 0LL;
      }
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v13 + 24) = a1;
    WdLogEvent5_WdError(v13);
  }
  auto_rc<DMMVIDPN const>::reset(&v27, 0LL);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v25 + 40));
  return v2;
}
