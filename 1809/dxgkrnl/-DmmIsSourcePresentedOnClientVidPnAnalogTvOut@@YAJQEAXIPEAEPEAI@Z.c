/*
 * XREFs of ?DmmIsSourcePresentedOnClientVidPnAnalogTvOut@@YAJQEAXIPEAEPEAI@Z @ 0x1C027BBA0
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C02387EC (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0005C3C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000EAA4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E5618 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmIsSourcePresentedOnClientVidPnAnalogTvOut(
        DXGADAPTER *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int *a4)
{
  unsigned int v4; // edi
  __int64 v5; // r12
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rsi
  char **v24; // r15
  __int64 v25; // rbx
  __int64 i; // rbp
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rsi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // [rsp+20h] [rbp-38h] BYREF
  __int64 v38[6]; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v39; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v5 = a2;
  if ( !a4 )
  {
    v9 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v9 + 24) = 0LL;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  *a4 = -1;
  if ( !a1 )
  {
    v11 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v11 + 24) = 0LL;
LABEL_5:
    WdLogEvent5_WdError(v11);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *((_QWORD *)a1 + 315);
  if ( !v14 )
  {
    v11 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v11 + 24) = a1;
    goto LABEL_5;
  }
  v15 = *(_QWORD *)(v14 + 88);
  if ( v15 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v38, v15);
    v17 = *(_QWORD *)(v15 + 88);
    v37 = 0LL;
    if ( v17 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 32));
      v18 = *(_QWORD *)(v15 + 88);
    }
    else
    {
      v18 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v37, v18);
    if ( v37 )
    {
      v24 = (char **)(v37 + 96);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 80) + 72LL));
      v25 = *(_QWORD *)(v15 + 80);
      for ( i = 0LL; ; ++i )
      {
        v39 = -1;
        v27 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v24, v5, i, &v39);
        v23 = v27;
        if ( v27 < 0 )
          break;
        v32 = v39;
        if ( v39 == -1 )
          goto LABEL_23;
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v25, v39);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 104) )
          {
            *a3 = 1;
            *a4 = v32;
LABEL_23:
            if ( v25 )
              ReferenceCounted::Release((ReferenceCounted *)(v25 + 64));
            goto LABEL_30;
          }
        }
        else
        {
          v35 = WdLogNewEntry5_WdError(v34);
          *(_QWORD *)(v35 + 24) = v32;
          *(_QWORD *)(v35 + 32) = v25;
          WdLogEvent5_WdError(v35);
        }
      }
      v36 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v28, v30, v31);
      v36[3] = i;
      v36[4] = v5;
      v36[5] = v24;
      v36[6] = v23;
      if ( v25 )
        ReferenceCounted::Release((ReferenceCounted *)(v25 + 64));
    }
    else
    {
      v22 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      *(_QWORD *)(v22 + 24) = a1;
      WdLogEvent5_WdWarning(v22);
      LODWORD(v23) = -1071774884;
    }
    v4 = v23;
LABEL_30:
    auto_rc<DMMVIDPN const>::reset(&v37, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v38[0] + 40));
    return v4;
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v16 + 24) = a1;
    WdLogEvent5_WdError(v16);
    return 3223192373LL;
  }
}
