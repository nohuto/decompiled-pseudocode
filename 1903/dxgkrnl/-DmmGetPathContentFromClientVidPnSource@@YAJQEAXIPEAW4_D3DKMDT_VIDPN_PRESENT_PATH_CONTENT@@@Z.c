/*
 * XREFs of ?DmmGetPathContentFromClientVidPnSource@@YAJQEAXIPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C02B3978
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C026D0FC (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002804 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005854 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000968C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E8854 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmGetPathContentFromClientVidPnSource(
        DXGADAPTER *a1,
        __int64 a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT *a3)
{
  unsigned int v3; // edi
  unsigned int v5; // r15d
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT v17; // r12d
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rsi
  __int64 v27; // rbp
  __int64 v28; // rbx
  char **v29; // r13
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r15
  __int64 v38; // rax
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v45; // [rsp+78h] [rbp+10h]
  unsigned int v46; // [rsp+80h] [rbp+18h] BYREF
  __int64 v47; // [rsp+88h] [rbp+20h] BYREF

  v45 = a2;
  v3 = 0;
  v5 = a2;
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdError(a1, a2, 0LL);
    *(_QWORD *)(v7 + 24) = 0LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  *a3 = D3DKMDT_VPPC_UNINITIALIZED;
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
    v17 = D3DKMDT_VPPC_UNINITIALIZED;
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v44, v15);
    v19 = *(_QWORD *)(v15 + 88);
    v47 = 0LL;
    if ( v19 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 32));
      v20 = *(_QWORD *)(v15 + 88);
    }
    else
    {
      v20 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v47, v20, v18);
    if ( v47 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 80) + 72LL));
      v27 = 0LL;
      v28 = *(_QWORD *)(v15 + 80);
      v29 = (char **)(v47 + 96);
      while ( 1 )
      {
        v46 = -1;
        v30 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v29, v5, v27, &v46);
        v26 = v30;
        if ( v30 < 0 )
          break;
        v34 = v46;
        if ( v46 == -1 )
          goto LABEL_25;
        Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)v29, v5, v46);
        if ( !Path )
        {
          v38 = WdLogNewEntry5_WdAssertion(v36, v35);
          WdLogEvent5_WdAssertion(v38);
        }
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v28, v34);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 104) )
          {
            v17 = *((_DWORD *)Path + 41);
LABEL_25:
            if ( v28 )
              ReferenceCounted::Release((ReferenceCounted *)(v28 + 64), v31, v33);
            auto_rc<DMMVIDPN const>::reset(&v47, 0LL, v33);
            *a3 = v17;
            goto LABEL_33;
          }
        }
        else
        {
          v41 = WdLogNewEntry5_WdError(v40, v31, v33);
          *(_QWORD *)(v41 + 24) = v34;
          *(_QWORD *)(v41 + 32) = v28;
          WdLogEvent5_WdError(v41);
        }
        v5 = v45;
        ++v27;
      }
      v42 = (_QWORD *)WdLogNewEntry5_WdTrace(v32, v31);
      v42[3] = v27;
      v42[4] = v5;
      v42[5] = v29;
      v42[6] = v26;
      if ( v28 )
        ReferenceCounted::Release((ReferenceCounted *)(v28 + 64), v43, v25);
    }
    else
    {
      v24 = WdLogNewEntry5_WdError(v22, v21, v23);
      *(_QWORD *)(v24 + 24) = a1;
      WdLogEvent5_WdError(v24);
      LODWORD(v26) = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v47, 0LL, v25);
    v3 = v26;
LABEL_33:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v44[0] + 40));
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
