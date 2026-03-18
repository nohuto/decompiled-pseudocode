/*
 * XREFs of ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C027A184
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C012033C (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000F75C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000F9D0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00BD9C0 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00D4444 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E5618 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C027E0F0 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C027ED8C (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 */

__int64 __fastcall DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource(
        DXGADAPTER *a1,
        unsigned int *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int *a5)
{
  unsigned int *v7; // r13
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rax
  VIDPN_MGR *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  _QWORD *v16; // rax
  __int64 v17; // rsi
  DMMVIDPNTOPOLOGY *v18; // r12
  __int64 v19; // rbx
  unsigned int v20; // eax
  int NumPathsFromSource; // eax
  __int64 v22; // rcx
  int v23; // ebp
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rbp
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r13
  __int64 v33; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v34; // eax
  unsigned __int16 v35; // r13
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v41; // [rsp+40h] [rbp-58h]
  unsigned __int64 v42; // [rsp+48h] [rbp-50h] BYREF
  __int64 v43[9]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v44; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int *v45; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v46; // [rsp+B0h] [rbp+18h]

  v46 = a3;
  v45 = a2;
  v7 = a2;
  LODWORD(v9) = -1;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) || !*((_QWORD *)a1 + 315) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = *(VIDPN_MGR **)(*((_QWORD *)a1 + 315) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v43, (__int64)v12);
  v13 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a4);
  v15 = v13;
  if ( !v13 || *(VIDPN_MGR **)(v13 + 48) != v12 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v16[3] = a4;
    LODWORD(a4) = -1073741811;
    v16[4] = -1073741811LL;
LABEL_37:
    WdLogEvent5_WdError(v16);
    goto LABEL_31;
  }
  v17 = 0LL;
  v18 = (DMMVIDPNTOPOLOGY *)(v13 + 96);
  if ( a3 )
  {
    while ( 1 )
    {
      v19 = v7[v17];
      v20 = v7[v17];
      if ( v17 )
        v20 = v9;
      v9 = v20;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v18, v7[v17], &v42);
      v23 = NumPathsFromSource;
      if ( NumPathsFromSource < 0 )
      {
        if ( NumPathsFromSource == -1071774919 )
          break;
        v24 = WdLogNewEntry5_WdAssertion(v22);
        WdLogEvent5_WdAssertion(v24);
      }
      if ( v23 == -1071774919 )
        break;
      if ( v42 > 1 )
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdError(v22);
        v16[3] = v19;
        a4 = -1073741811LL;
        v16[4] = v42;
        goto LABEL_33;
      }
      v25 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((char **)v18, v19, 0LL, &v44);
      v27 = v44;
      if ( v25 < 0 || v44 == -1 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v26);
        WdLogEvent5_WdAssertion(v28);
      }
      if ( a5 )
        a5[v17] = v27;
      if ( v17 )
      {
        Path = DMMVIDPNTOPOLOGY::FindPath(v18, v19, v27);
        if ( !Path )
        {
          v33 = WdLogNewEntry5_WdAssertion(v31);
          WdLogEvent5_WdAssertion(v33);
        }
        v34 = *((_DWORD *)Path + 26);
        v35 = *((_WORD *)Path + 54);
        v41 = v34;
        if ( (int)VIDPN_MGR::RemovePathFromVidPnTopology(v12, v18, v19, v27, 0) < 0 )
        {
          v37 = WdLogNewEntry5_WdAssertion(v36);
          WdLogEvent5_WdAssertion(v37);
        }
        v38 = VIDPN_MGR::AddPathToVidPnTopology(v12, v18, v9, v27, v41, v35, 1u, D3DKMDT_MCC_ENFORCE);
        a4 = v38;
        if ( v38 < 0 )
        {
          v16 = (_QWORD *)WdLogNewEntry5_WdError(v39);
          v16[3] = v27;
          v16[4] = v9;
LABEL_33:
          v16[5] = v15;
          v16[6] = a4;
          goto LABEL_37;
        }
        v7 = v45;
      }
      else
      {
        v29 = VIDPN_MGR::UnpinPathModalityFromSource(v12, v18, v9);
        a4 = v29;
        if ( v29 < 0 )
        {
          v16 = (_QWORD *)WdLogNewEntry5_WdError(v30);
          v16[3] = v9;
          goto LABEL_36;
        }
      }
      if ( ++v17 >= v46 )
        goto LABEL_30;
    }
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v16[3] = v19;
    a4 = -1073741811LL;
LABEL_36:
    v16[4] = v15;
    v16[5] = a4;
    goto LABEL_37;
  }
LABEL_30:
  LODWORD(a4) = 0;
LABEL_31:
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v43[0] + 40));
  return (unsigned int)a4;
}
