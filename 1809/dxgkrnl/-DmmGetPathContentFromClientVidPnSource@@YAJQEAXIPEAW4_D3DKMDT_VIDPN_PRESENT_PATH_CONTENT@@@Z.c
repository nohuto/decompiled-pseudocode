/*
 * XREFs of ?DmmGetPathContentFromClientVidPnSource@@YAJQEAXIPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C027B590
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C02387EC (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0005C3C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000EAA4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000F9D0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E5618 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmGetPathContentFromClientVidPnSource(
        DXGADAPTER *a1,
        unsigned int a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT *a3)
{
  unsigned int v3; // edi
  unsigned int v5; // r15d
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT v15; // r12d
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rbp
  __int64 v22; // rbx
  char **v23; // r13
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rsi
  __int64 v30; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r15
  __int64 v32; // rax
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v39; // [rsp+80h] [rbp+18h] BYREF
  __int64 v40; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v5 = a2;
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v7 + 24) = 0LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  *a3 = D3DKMDT_VPPC_UNINITIALIZED;
  if ( !a1 )
  {
    v9 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v9 + 24) = 0LL;
LABEL_5:
    WdLogEvent5_WdError(v9);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = *((_QWORD *)a1 + 315);
  if ( !v12 )
  {
    v9 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v9 + 24) = a1;
    goto LABEL_5;
  }
  v13 = *(_QWORD *)(v12 + 88);
  if ( v13 )
  {
    v15 = D3DKMDT_VPPC_UNINITIALIZED;
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v37, v13);
    v16 = *(_QWORD *)(v13 + 88);
    v40 = 0LL;
    if ( v16 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 32));
      v17 = *(_QWORD *)(v13 + 88);
    }
    else
    {
      v17 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v40, v17);
    if ( v40 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 80) + 72LL));
      v21 = 0LL;
      v22 = *(_QWORD *)(v13 + 80);
      v23 = (char **)(v40 + 96);
      while ( 1 )
      {
        v39 = -1;
        v24 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v23, v5, v21, &v39);
        v20 = v24;
        if ( v24 < 0 )
          break;
        v29 = v39;
        if ( v39 == -1 )
          goto LABEL_25;
        Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)v23, v5, v39);
        if ( !Path )
        {
          v32 = WdLogNewEntry5_WdAssertion(v30);
          WdLogEvent5_WdAssertion(v32);
        }
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v22, v29);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 104) )
          {
            v15 = *((_DWORD *)Path + 41);
LABEL_25:
            if ( v22 )
              ReferenceCounted::Release((ReferenceCounted *)(v22 + 64));
            auto_rc<DMMVIDPN const>::reset(&v40, 0LL);
            *a3 = v15;
            goto LABEL_33;
          }
        }
        else
        {
          v35 = WdLogNewEntry5_WdError(v34);
          *(_QWORD *)(v35 + 24) = v29;
          *(_QWORD *)(v35 + 32) = v22;
          WdLogEvent5_WdError(v35);
        }
        v5 = a2;
        ++v21;
      }
      v36 = (_QWORD *)WdLogNewEntry5_WdTrace(v26, v25, v27, v28);
      v36[3] = v21;
      v36[4] = v5;
      v36[5] = v23;
      v36[6] = v20;
      if ( v22 )
        ReferenceCounted::Release((ReferenceCounted *)(v22 + 64));
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v19 + 24) = a1;
      WdLogEvent5_WdError(v19);
      LODWORD(v20) = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v40, 0LL);
    v3 = v20;
LABEL_33:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v37[0] + 40));
    return v3;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v14 + 24) = a1;
    WdLogEvent5_WdError(v14);
    return 3223192373LL;
  }
}
