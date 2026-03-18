/*
 * XREFs of ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C02B5890
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C026D78C (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005814 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00098BC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C000EF28 (-SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00D339C (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00EDB7C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?SetTargetContentType@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C02BF35C (-SetTargetContentType@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 */

__int64 __fastcall DmmUpdateContentOnAllClientVidPnPathsFromSource(DXGADAPTER *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r14
  unsigned int v5; // r15d
  DXGADAPTER *v6; // rdi
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // r8
  char **v24; // rbp
  __int64 i; // rsi
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rdi
  __int64 v32; // r8
  __int64 v33; // rax
  int updated; // eax
  _QWORD *v35; // rax
  __int64 v36[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v37; // [rsp+60h] [rbp+8h] BYREF
  __int64 v38; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v4 = (unsigned int)a2;
  v5 = a3;
  v6 = a1;
  if ( !a1 )
  {
    v7 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v7 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v7);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = *((_QWORD *)v6 + 319);
  if ( !v13 )
  {
    v7 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v7 + 24) = v6;
    goto LABEL_3;
  }
  v14 = *(_QWORD *)(v13 + 88);
  if ( v14 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v36, v14);
    v17 = *(_QWORD *)(v14 + 88);
    v38 = 0LL;
    if ( v17 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 32));
      v18 = *(_QWORD *)(v14 + 88);
    }
    else
    {
      v18 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v38, v18, v16);
    if ( v38 )
    {
      v24 = (char **)(v38 + 96);
      for ( i = 0LL; ; ++i )
      {
        v37 = -1;
        v26 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v24, (unsigned int)v4, i, &v37);
        v6 = (DXGADAPTER *)v26;
        if ( v26 < 0 )
          break;
        v23 = v37;
        if ( v37 == -1 )
          goto LABEL_27;
        Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)v24, v4, v37);
        if ( !Path )
        {
          v33 = WdLogNewEntry5_WdAssertion(v30, v29);
          WdLogEvent5_WdAssertion(v33);
        }
        DMMVIDPNPRESENTPATH::SetContentType(Path, v5, v32);
        if ( *((_BYTE *)Path + 110) )
          updated = DMMVIDPNPRESENTPATH::SetTargetContentType(Path);
        else
          updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath(Path, 0LL);
        LODWORD(v6) = updated;
        if ( updated < 0 )
          goto LABEL_26;
      }
      v35 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v27);
      v35[3] = i;
      v35[4] = v4;
      v35[5] = v24;
      v35[6] = v6;
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(v20, v19, v21);
      *(_QWORD *)(v22 + 24) = v6;
      WdLogEvent5_WdError(v22);
      LODWORD(v6) = -1071774884;
    }
LABEL_26:
    v3 = (unsigned int)v6;
LABEL_27:
    auto_rc<DMMVIDPN const>::reset(&v38, 0LL, v23);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v36[0] + 40));
    return v3;
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v15 + 24) = v6;
    WdLogEvent5_WdError(v15);
    return 3223192373LL;
  }
}
