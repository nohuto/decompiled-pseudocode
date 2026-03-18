/*
 * XREFs of ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1C00CF030
 * Callers:
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00CEFC4 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005854 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000968C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C000E7A4 (-SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_.c)
 *     ?IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C000E7F4 (-IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH@@QEAAEW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPRO.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E8854 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C012405C (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?SetTargetAnalogCopyProtection@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C02BF0E0 (-SetTargetAnalogCopyProtection@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 */

__int64 __fastcall DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource(
        DXGADAPTER *a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  DMMVIDPNTOPOLOGY *v19; // rbp
  unsigned __int64 v20; // r15
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rbp
  __int64 v29; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  int updated; // eax
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // [rsp+20h] [rbp-48h] BYREF
  DMMVIDPNTOPOLOGY *v50; // [rsp+28h] [rbp-40h]
  __int64 v51; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v52; // [rsp+70h] [rbp+8h] BYREF
  int v53; // [rsp+88h] [rbp+20h]

  v53 = a4;
  v4 = 0;
  v5 = (int)a3;
  v6 = (unsigned int)a2;
  if ( !a1 )
  {
    v31 = WdLogNewEntry5_WdError(0LL, a2, a3);
    *(_QWORD *)(v31 + 24) = 0LL;
LABEL_22:
    WdLogEvent5_WdError(v31);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v32);
  }
  v11 = *((_QWORD *)a1 + 319);
  if ( !v11 )
  {
    v31 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v31 + 24) = a1;
    goto LABEL_22;
  }
  v12 = *(_QWORD *)(v11 + 88);
  if ( v12 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v51, v12);
    v14 = *(_QWORD *)(v12 + 88);
    v49 = 0LL;
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 32));
      v15 = *(_QWORD *)(v12 + 88);
    }
    else
    {
      v15 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v49, v15, v13);
    if ( v49 )
    {
      v19 = (DMMVIDPNTOPOLOGY *)(v49 + 96);
      v20 = 0LL;
      v50 = (DMMVIDPNTOPOLOGY *)(v49 + 96);
      while ( 1 )
      {
        v52 = -1;
        v21 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v19, v6, v20, &v52);
        v25 = v21;
        if ( v21 < 0 )
        {
          v48 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v22);
          v48[3] = v20;
          v48[4] = v6;
          v48[5] = v19;
          v48[6] = v25;
          goto LABEL_42;
        }
        if ( v52 == -1 )
          goto LABEL_19;
        Path = DMMVIDPNTOPOLOGY::FindPath(v19, v6, v52);
        if ( !Path )
        {
          v35 = WdLogNewEntry5_WdAssertion(v27, v26);
          WdLogEvent5_WdAssertion(v35);
        }
        v29 = *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL);
        if ( !v29 )
        {
          v36 = WdLogNewEntry5_WdAssertion(v27, v26);
          WdLogEvent5_WdAssertion(v36);
        }
        if ( (_DWORD)v5 == 1 )
        {
          if ( *((_DWORD *)Path + 43) != 2 )
            goto LABEL_18;
        }
        else if ( (_DWORD)v5 != 2
               || !*(_BYTE *)(v29 + 104) && !DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(Path, 2LL) )
        {
          goto LABEL_18;
        }
        if ( !DMMVIDPNPRESENTPATH::IsCopyProtectionSchemeSupported(Path, (unsigned int)v5) )
        {
          v47 = WdLogNewEntry5_WdWarning(v38, v37, v39);
          WdLogEvent5_WdWarning(v47);
          goto LABEL_40;
        }
        v40 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(Path, (unsigned int)v5, v39);
        v25 = v40;
        if ( v40 == -1071774970 )
        {
          v46 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
          v46[3] = v5;
          v46[4] = v6;
          v46[5] = v52;
          v46[6] = a1;
          WdLogEvent5_WdDmmEvent(v46);
LABEL_40:
          LODWORD(v25) = -1071774970;
          goto LABEL_42;
        }
        if ( v40 < 0 )
        {
          v45 = (_QWORD *)WdLogNewEntry5_WdError(v42, v41, v43);
          v45[3] = v5;
          v45[4] = v6;
          v45[5] = v52;
          v45[6] = v25;
          WdLogEvent5_WdError(v45);
          goto LABEL_42;
        }
        *((_DWORD *)Path + 44) = v53;
        if ( *((_BYTE *)Path + 110) )
          updated = DMMVIDPNPRESENTPATH::SetTargetAnalogCopyProtection(Path);
        else
          updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath(Path, 0LL);
        LODWORD(v25) = updated;
        if ( updated < 0 )
          goto LABEL_42;
LABEL_18:
        v19 = v50;
        ++v20;
      }
    }
    v34 = WdLogNewEntry5_WdError(v17, v16, v18);
    *(_QWORD *)(v34 + 24) = a1;
    WdLogEvent5_WdError(v34);
    LODWORD(v25) = -1071774884;
LABEL_42:
    v4 = v25;
LABEL_19:
    auto_rc<DMMVIDPN const>::reset(&v49, 0LL, v24);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v51 + 40));
    return v4;
  }
  else
  {
    v33 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v33 + 24) = a1;
    WdLogEvent5_WdError(v33);
    return 3223192373LL;
  }
}
