/*
 * XREFs of ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C027D1F4
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C02387EC (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C0002E30 (-SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000EAA4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000F9D0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C00D36E8 (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E5618 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?SetTargetContentType@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C0286F2C (-SetTargetContentType@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 */

__int64 __fastcall DmmUpdateContentOnAllClientVidPnPathsFromSource(DXGADAPTER *a1, unsigned int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r14
  DXGADAPTER *v6; // rdi
  __int64 v7; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  char **v18; // rbp
  __int64 i; // rsi
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rdi
  __int64 v27; // rax
  int updated; // eax
  _QWORD *v29; // rax
  __int64 v30[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v31; // [rsp+60h] [rbp+8h] BYREF
  __int64 v32; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a2;
  v6 = a1;
  if ( !a1 )
  {
    v7 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v7 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v7);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *((_QWORD *)v6 + 315);
  if ( !v11 )
  {
    v7 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v7 + 24) = v6;
    goto LABEL_3;
  }
  v12 = *(_QWORD *)(v11 + 88);
  if ( v12 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v30, v12);
    v14 = *(_QWORD *)(v12 + 88);
    v32 = 0LL;
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 32));
      v15 = *(_QWORD *)(v12 + 88);
    }
    else
    {
      v15 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v32, v15);
    if ( v32 )
    {
      v18 = (char **)(v32 + 96);
      for ( i = 0LL; ; ++i )
      {
        v31 = -1;
        v20 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v18, v4, i, &v31);
        v6 = (DXGADAPTER *)v20;
        if ( v20 < 0 )
          break;
        if ( v31 == -1 )
          goto LABEL_27;
        Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)v18, v4, v31);
        if ( !Path )
        {
          v27 = WdLogNewEntry5_WdAssertion(v25);
          WdLogEvent5_WdAssertion(v27);
        }
        DMMVIDPNPRESENTPATH::SetContentType(Path, a3);
        if ( *((_BYTE *)Path + 110) )
          updated = DMMVIDPNPRESENTPATH::SetTargetContentType(Path);
        else
          updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath(Path);
        LODWORD(v6) = updated;
        if ( updated < 0 )
          goto LABEL_26;
      }
      v29 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
      v29[3] = i;
      v29[4] = v4;
      v29[5] = v18;
      v29[6] = v6;
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v17 + 24) = v6;
      WdLogEvent5_WdError(v17);
      LODWORD(v6) = -1071774884;
    }
LABEL_26:
    v3 = (unsigned int)v6;
LABEL_27:
    auto_rc<DMMVIDPN const>::reset(&v32, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v30[0] + 40));
    return v3;
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v13 + 24) = v6;
    WdLogEvent5_WdError(v13);
    return 3223192373LL;
  }
}
