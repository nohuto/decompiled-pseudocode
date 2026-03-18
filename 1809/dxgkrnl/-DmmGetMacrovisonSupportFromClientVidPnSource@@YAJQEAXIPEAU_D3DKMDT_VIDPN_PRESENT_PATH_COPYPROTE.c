/*
 * XREFs of ?DmmGetMacrovisonSupportFromClientVidPnSource@@YAJQEAXIPEAU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C027ADB0
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C02387EC (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0005C3C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000EAA4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000F9D0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E5618 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmGetMacrovisonSupportFromClientVidPnSource(
        _QWORD *a1,
        unsigned int a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT *a3)
{
  unsigned int v3; // esi
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // r14
  __int64 v11; // rax
  int v12; // edi
  int v13; // edi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // r12
  __int64 v20; // rbx
  char **v21; // r13
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r14
  __int64 v28; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r13
  __int64 v30; // rax
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // [rsp+20h] [rbp-20h] BYREF
  char **v36; // [rsp+28h] [rbp-18h]
  __int64 v37; // [rsp+30h] [rbp-10h] BYREF
  int v39; // [rsp+90h] [rbp+50h]
  char v40; // [rsp+90h] [rbp+50h]
  unsigned int v41; // [rsp+98h] [rbp+58h] BYREF

  v3 = 0;
  if ( !a3 )
  {
    v6 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v6 + 24) = 0LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  *a3 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)1;
  if ( !a1 )
  {
    v8 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v8 + 24) = 0LL;
LABEL_5:
    WdLogEvent5_WdError(v8);
    return 3223191554LL;
  }
  v9 = a1[315];
  if ( !v9 )
  {
    v8 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v8 + 24) = a1;
    goto LABEL_5;
  }
  v10 = *(_QWORD *)(v9 + 88);
  if ( v10 )
  {
    v12 = v39;
    v40 = 0;
    v13 = v12 | 7;
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v37, v10);
    v14 = *(_QWORD *)(v10 + 88);
    v35 = 0LL;
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 32));
      v15 = *(_QWORD *)(v10 + 88);
    }
    else
    {
      v15 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v35, v15);
    if ( v35 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 80) + 72LL));
      v19 = 0LL;
      v20 = *(_QWORD *)(v10 + 80);
      v21 = (char **)(v35 + 96);
      v36 = (char **)(v35 + 96);
      while ( 1 )
      {
        v41 = -1;
        v22 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v21, a2, v19, &v41);
        v18 = v22;
        if ( v22 < 0 )
          break;
        v27 = v41;
        if ( v41 == -1 )
        {
          if ( v20 )
            ReferenceCounted::Release((ReferenceCounted *)(v20 + 64));
          auto_rc<DMMVIDPN const>::reset(&v35, 0LL);
          if ( v40 )
            *a3 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)v13;
          goto LABEL_32;
        }
        Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)v21, a2, v41);
        if ( !Path )
        {
          v30 = WdLogNewEntry5_WdAssertion(v28);
          WdLogEvent5_WdAssertion(v30);
        }
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v20, v27);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 104) )
          {
            v40 = 1;
            v13 &= *((_DWORD *)Path + 42) | 0xFFFFFFF8;
          }
        }
        else
        {
          v33 = WdLogNewEntry5_WdError(v32);
          *(_QWORD *)(v33 + 24) = v27;
          *(_QWORD *)(v33 + 32) = v20;
          WdLogEvent5_WdError(v33);
        }
        v21 = v36;
        ++v19;
      }
      v34 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v23, v25, v26);
      v34[3] = v19;
      v34[4] = a2;
      v34[5] = v21;
      v34[6] = v18;
      if ( v20 )
        ReferenceCounted::Release((ReferenceCounted *)(v20 + 64));
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v17 + 24) = a1;
      WdLogEvent5_WdError(v17);
      LODWORD(v18) = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v35, 0LL);
    v3 = v18;
LABEL_32:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v37 + 40));
    return v3;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v11 + 24) = a1;
    WdLogEvent5_WdError(v11);
    return 3223192373LL;
  }
}
