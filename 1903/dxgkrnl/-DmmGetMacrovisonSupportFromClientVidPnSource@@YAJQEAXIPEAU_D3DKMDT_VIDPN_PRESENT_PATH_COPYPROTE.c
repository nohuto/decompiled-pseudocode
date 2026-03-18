/*
 * XREFs of ?DmmGetMacrovisonSupportFromClientVidPnSource@@YAJQEAXIPEAU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C02B3184
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C026D0FC (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002804 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005854 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000968C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E8854 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmGetMacrovisonSupportFromClientVidPnSource(
        _QWORD *a1,
        __int64 a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT *a3)
{
  unsigned int v3; // esi
  unsigned int v5; // r13d
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rbp
  __int64 v12; // rax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT v13; // edi
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rbp
  __int64 v23; // r15
  __int64 v24; // rbx
  char **v25; // r12
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rbp
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r13
  __int64 v34; // rax
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // [rsp+20h] [rbp-48h] BYREF
  __int64 v43[8]; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v44; // [rsp+78h] [rbp+10h]
  char v45; // [rsp+80h] [rbp+18h]
  unsigned int v46; // [rsp+88h] [rbp+20h] BYREF

  v44 = a2;
  v3 = 0;
  v5 = a2;
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdError(a1, a2, 0LL);
    *(_QWORD *)(v7 + 24) = 0LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  *a3 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)1;
  if ( !a1 )
  {
    v9 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v9 + 24) = 0LL;
LABEL_5:
    WdLogEvent5_WdError(v9);
    return 3223191554LL;
  }
  v10 = a1[319];
  if ( !v10 )
  {
    v9 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v9 + 24) = a1;
    goto LABEL_5;
  }
  v11 = *(_QWORD *)(v10 + 88);
  if ( v11 )
  {
    v45 = 0;
    v13 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)7;
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v43, v11);
    v15 = *(_QWORD *)(v11 + 88);
    v42 = 0LL;
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 32));
      v16 = *(_QWORD *)(v11 + 88);
    }
    else
    {
      v16 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v42, v16, v14);
    if ( v42 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 80) + 72LL));
      v23 = 0LL;
      v24 = *(_QWORD *)(v11 + 80);
      v25 = (char **)(v42 + 96);
      while ( 1 )
      {
        v46 = -1;
        v26 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v25, v5, v23, &v46);
        v22 = v26;
        if ( v26 < 0 )
          break;
        v30 = v46;
        if ( v46 == -1 )
        {
          if ( v24 )
            ReferenceCounted::Release((ReferenceCounted *)(v24 + 64), v27, v29);
          auto_rc<DMMVIDPN const>::reset(&v42, 0LL, v29);
          if ( v45 )
            *a3 = v13;
          goto LABEL_32;
        }
        Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)v25, v5, v46);
        if ( !Path )
        {
          v34 = WdLogNewEntry5_WdAssertion(v32, v31);
          WdLogEvent5_WdAssertion(v34);
        }
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v24, v30);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 104) )
          {
            v45 = 1;
            v13 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)((*((_DWORD *)Path + 42) | 0xFFFFFFF8) & *(_DWORD *)&v13);
          }
        }
        else
        {
          v39 = WdLogNewEntry5_WdError(v37, v36, v38);
          *(_QWORD *)(v39 + 24) = v30;
          *(_QWORD *)(v39 + 32) = v24;
          WdLogEvent5_WdError(v39);
        }
        v5 = v44;
        ++v23;
      }
      v40 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v27);
      v40[3] = v23;
      v40[4] = v5;
      v40[5] = v25;
      v40[6] = v22;
      if ( v24 )
        ReferenceCounted::Release((ReferenceCounted *)(v24 + 64), v41, v21);
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v18, v17, v19);
      *(_QWORD *)(v20 + 24) = a1;
      WdLogEvent5_WdError(v20);
      LODWORD(v22) = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v42, 0LL, v21);
    v3 = v22;
LABEL_32:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v43[0] + 40));
    return v3;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v12 + 24) = a1;
    WdLogEvent5_WdError(v12);
    return 3223192373LL;
  }
}
