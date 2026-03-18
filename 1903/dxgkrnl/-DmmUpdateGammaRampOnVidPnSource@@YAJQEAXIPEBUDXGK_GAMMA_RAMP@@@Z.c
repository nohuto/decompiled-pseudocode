/*
 * XREFs of ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0123E44
 * Callers:
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0123B0C (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005854 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000968C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z @ 0x1C000D20C (-FindById@-$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E8854 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0123FDC (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0124574 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 */

__int64 __fastcall DmmUpdateGammaRampOnVidPnSource(DXGADAPTER *a1, __int64 a2, const struct DXGK_GAMMA_RAMP *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r15
  DXGADAPTER *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbp
  __int64 v11; // rbp
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r13
  ReferenceCounted *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  char **v24; // rbp
  __int64 i; // rbx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  DMMVIDPNPRESENTPATH *Path; // r14
  int updated; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v47; // [rsp+60h] [rbp+8h] BYREF
  __int64 v48; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v4 = (unsigned int)a2;
  v6 = a1;
  if ( !a1 )
  {
    v37 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v37 + 24) = 0LL;
LABEL_28:
    WdLogEvent5_WdError(v37);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v38 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v38);
  }
  v10 = *((_QWORD *)v6 + 319);
  if ( !v10 )
  {
    v37 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v37 + 24) = v6;
    goto LABEL_28;
  }
  v11 = *(_QWORD *)(v10 + 88);
  if ( v11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v46, v11);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 72) + 72LL));
    v12 = *(_QWORD *)(v11 + 72);
    v13 = IndexedSet<DMMVIDEOPRESENTSOURCE>::FindById(v12, v4);
    v17 = v13;
    if ( v13 )
    {
      if ( a3 )
        _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
      v18 = *(ReferenceCounted **)(v13 + 128);
      if ( v18 )
        ReferenceCounted::Release(v18, v14, v16);
      *(_QWORD *)(v17 + 128) = a3;
      if ( v12 )
        ReferenceCounted::Release((ReferenceCounted *)(v12 + 64), v14, v16);
      v19 = *(_QWORD *)(v11 + 88);
      v48 = 0LL;
      if ( v19 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v19 + 32));
        v20 = *(_QWORD *)(v11 + 88);
      }
      else
      {
        v20 = 0LL;
      }
      auto_rc<DMMVIDPN const>::reset(&v48, v20, v16);
      if ( v48 )
      {
        v24 = (char **)(v48 + 96);
        for ( i = 0LL; ; ++i )
        {
          v47 = -1;
          v26 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v24, (unsigned int)v4, i, &v47);
          v6 = (DXGADAPTER *)v26;
          if ( v26 < 0 )
            break;
          if ( v47 == -1 )
          {
            auto_rc<DMMVIDPN const>::reset(&v48, 0LL, 0xFFFFFFFFLL);
            goto LABEL_25;
          }
          Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)v24, v4, v47);
          if ( !Path )
          {
            v44 = WdLogNewEntry5_WdAssertion(v30, v29);
            WdLogEvent5_WdAssertion(v44);
          }
          updated = DMMVIDPNPRESENTPATH::UpdateGammaRamp(Path);
          LODWORD(v6) = updated;
          if ( updated < 0 )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v34, v33) + 24) = updated;
            goto LABEL_37;
          }
          LODWORD(v6) = DMMVIDPNPRESENTPATH::SetDriverGammaRamp(Path, 0LL);
          if ( (int)v6 < 0 )
            goto LABEL_37;
        }
        v45 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v27);
        v45[3] = i;
        v45[4] = v4;
        v45[5] = v24;
        v45[6] = v6;
      }
      else
      {
        v43 = WdLogNewEntry5_WdError(v22, v21, v23);
        *(_QWORD *)(v43 + 24) = v6;
        WdLogEvent5_WdError(v43);
        LODWORD(v6) = -1071774884;
      }
LABEL_37:
      auto_rc<DMMVIDPN const>::reset(&v48, 0LL, v35);
      v3 = (unsigned int)v6;
    }
    else
    {
      v40 = WdLogNewEntry5_WdError(v15, v14, v16);
      *(_QWORD *)(v40 + 24) = v4;
      WdLogEvent5_WdError(v40);
      if ( v12 )
        ReferenceCounted::Release((ReferenceCounted *)(v12 + 64), v41, v42);
      v3 = -1071774972;
    }
LABEL_25:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v46[0] + 40));
    return v3;
  }
  else
  {
    v39 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v39 + 24) = v6;
    WdLogEvent5_WdError(v39);
    return 3223192373LL;
  }
}
