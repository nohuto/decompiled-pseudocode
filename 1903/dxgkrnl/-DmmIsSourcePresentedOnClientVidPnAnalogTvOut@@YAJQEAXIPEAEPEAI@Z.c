/*
 * XREFs of ?DmmIsSourcePresentedOnClientVidPnAnalogTvOut@@YAJQEAXIPEAEPEAI@Z @ 0x1C02B3F88
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C026D0FC (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002804 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000968C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E8854 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmIsSourcePresentedOnClientVidPnAnalogTvOut(
        DXGADAPTER *a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned int *a4)
{
  unsigned int v4; // edi
  __int64 v5; // r12
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rsi
  char **v28; // r15
  __int64 v29; // rbx
  __int64 i; // rbp
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rsi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // [rsp+20h] [rbp-38h] BYREF
  __int64 v41[6]; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v42; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v5 = (unsigned int)a2;
  if ( !a4 )
  {
    v9 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v9 + 24) = 0LL;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  *a4 = -1;
  if ( !a1 )
  {
    v11 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v11 + 24) = 0LL;
LABEL_5:
    WdLogEvent5_WdError(v11);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = *((_QWORD *)a1 + 319);
  if ( !v16 )
  {
    v11 = WdLogNewEntry5_WdError(v13, v12, v14);
    *(_QWORD *)(v11 + 24) = a1;
    goto LABEL_5;
  }
  v17 = *(_QWORD *)(v16 + 88);
  if ( v17 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v41, v17);
    v20 = *(_QWORD *)(v17 + 88);
    v40 = 0LL;
    if ( v20 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 32));
      v21 = *(_QWORD *)(v17 + 88);
    }
    else
    {
      v21 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v40, v21, v19);
    if ( v40 )
    {
      v28 = (char **)(v40 + 96);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v17 + 80) + 72LL));
      v29 = *(_QWORD *)(v17 + 80);
      for ( i = 0LL; ; ++i )
      {
        v42 = -1;
        v31 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v28, (unsigned int)v5, i, &v42);
        v27 = v31;
        if ( v31 < 0 )
          break;
        v34 = v42;
        if ( v42 == -1 )
          goto LABEL_23;
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v29, v42);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 104) )
          {
            *a3 = 1;
            *a4 = v34;
LABEL_23:
            if ( v29 )
              ReferenceCounted::Release((ReferenceCounted *)(v29 + 64), v32, v26);
            goto LABEL_30;
          }
        }
        else
        {
          v37 = WdLogNewEntry5_WdError(v36, v32, v26);
          *(_QWORD *)(v37 + 24) = v34;
          *(_QWORD *)(v37 + 32) = v29;
          WdLogEvent5_WdError(v37);
        }
      }
      v38 = (_QWORD *)WdLogNewEntry5_WdTrace(v33, v32);
      v38[3] = i;
      v38[4] = v5;
      v38[5] = v28;
      v38[6] = v27;
      if ( v29 )
        ReferenceCounted::Release((ReferenceCounted *)(v29 + 64), v39, v26);
    }
    else
    {
      v25 = WdLogNewEntry5_WdWarning(v23, v22, v24);
      *(_QWORD *)(v25 + 24) = a1;
      WdLogEvent5_WdWarning(v25);
      LODWORD(v27) = -1071774884;
    }
    v4 = v27;
LABEL_30:
    auto_rc<DMMVIDPN const>::reset(&v40, 0LL, v26);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v41[0] + 40));
    return v4;
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v13, v12, v14);
    *(_QWORD *)(v18 + 24) = a1;
    WdLogEvent5_WdError(v18);
    return 3223192373LL;
  }
}
