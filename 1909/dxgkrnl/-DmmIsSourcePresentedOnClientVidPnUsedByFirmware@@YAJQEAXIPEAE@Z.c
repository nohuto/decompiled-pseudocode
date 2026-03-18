/*
 * XREFs of ?DmmIsSourcePresentedOnClientVidPnUsedByFirmware@@YAJQEAXIPEAE@Z @ 0x1C02B45F8
 * Callers:
 *     DxgkIsBootPrimarySource @ 0x1C014BA00 (DxgkIsBootPrimarySource.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00098BC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000D7C8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00EDB7C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmIsSourcePresentedOnClientVidPnUsedByFirmware(DXGADAPTER *a1, __int64 a2, unsigned __int8 *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r12
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rsi
  char **v26; // r15
  __int64 v27; // rbx
  __int64 i; // rbp
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rsi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v39; // [rsp+70h] [rbp+18h] BYREF
  __int64 v40; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v4 = (unsigned int)a2;
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdError(a1, a2, 0LL);
    *(_QWORD *)(v7 + 24) = 0LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  *a3 = 0;
  if ( !a1 )
  {
    v9 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v9 + 24) = 0LL;
LABEL_5:
    WdLogEvent5_WdError(v9);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *((_QWORD *)a1 + 319);
  if ( !v14 )
  {
    v9 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v9 + 24) = a1;
    goto LABEL_5;
  }
  v15 = *(_QWORD *)(v14 + 88);
  if ( v15 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v38, v15);
    v18 = *(_QWORD *)(v15 + 88);
    v40 = 0LL;
    if ( v18 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 32));
      v19 = *(_QWORD *)(v15 + 88);
    }
    else
    {
      v19 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v40, v19, v17);
    if ( v40 )
    {
      v26 = (char **)(v40 + 96);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 80) + 72LL));
      v27 = *(_QWORD *)(v15 + 80);
      for ( i = 0LL; ; ++i )
      {
        v39 = -1;
        v29 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v26, (unsigned int)v4, i, &v39);
        v25 = v29;
        if ( v29 < 0 )
          break;
        v32 = v39;
        if ( v39 == -1 )
          goto LABEL_23;
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v27, v39);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 416) )
          {
            *a3 = 1;
LABEL_23:
            if ( v27 )
              ReferenceCounted::Release((ReferenceCounted *)(v27 + 64), v30, v24);
            goto LABEL_30;
          }
        }
        else
        {
          v35 = WdLogNewEntry5_WdError(v34, v30, v24);
          *(_QWORD *)(v35 + 24) = v32;
          *(_QWORD *)(v35 + 32) = v27;
          WdLogEvent5_WdError(v35);
        }
      }
      v36 = (_QWORD *)WdLogNewEntry5_WdTrace(v31, v30);
      v36[3] = i;
      v36[4] = v4;
      v36[5] = v26;
      v36[6] = v25;
      if ( v27 )
        ReferenceCounted::Release((ReferenceCounted *)(v27 + 64), v37, v24);
    }
    else
    {
      v23 = WdLogNewEntry5_WdWarning(v21, v20, v22);
      *(_QWORD *)(v23 + 24) = a1;
      WdLogEvent5_WdWarning(v23);
      LODWORD(v25) = -1071774884;
    }
    v3 = v25;
LABEL_30:
    auto_rc<DMMVIDPN const>::reset(&v40, 0LL, v24);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v38[0] + 40));
    return v3;
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v16 + 24) = a1;
    WdLogEvent5_WdError(v16);
    return 3223192373LL;
  }
}
