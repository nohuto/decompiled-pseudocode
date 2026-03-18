/*
 * XREFs of ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C02B2AF4
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C0170DE0 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00045B8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005814 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E7328 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00EDB7C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C012CC00 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C02B6544 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C02B71D8 (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  VIDPN_MGR *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdi
  _QWORD *v19; // rax
  __int64 v20; // rsi
  DMMVIDPNTOPOLOGY *v21; // r12
  __int64 v22; // rbx
  unsigned int v23; // eax
  int NumPathsFromSource; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // ebp
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbp
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r13
  __int64 v42; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v43; // eax
  unsigned __int16 v44; // r13
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v53; // [rsp+40h] [rbp-58h]
  unsigned __int64 v54; // [rsp+48h] [rbp-50h] BYREF
  __int64 v55[9]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v56; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int *v57; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v58; // [rsp+B0h] [rbp+18h]

  v58 = a3;
  v57 = a2;
  v7 = a2;
  LODWORD(v9) = -1;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) || !*((_QWORD *)a1 + 319) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = *(VIDPN_MGR **)(*((_QWORD *)a1 + 319) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v55, (__int64)v13);
  v14 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a4);
  v18 = v14;
  if ( !v14 || *(VIDPN_MGR **)(v14 + 48) != v13 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15, v17);
    v19[3] = a4;
    LODWORD(a4) = -1073741811;
    v19[4] = -1073741811LL;
LABEL_37:
    WdLogEvent5_WdError(v19);
    goto LABEL_31;
  }
  v20 = 0LL;
  v21 = (DMMVIDPNTOPOLOGY *)(v14 + 96);
  if ( a3 )
  {
    while ( 1 )
    {
      v22 = v7[v20];
      v23 = v7[v20];
      if ( v20 )
        v23 = v9;
      v9 = v23;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v21, v7[v20], &v54);
      v28 = NumPathsFromSource;
      if ( NumPathsFromSource < 0 )
      {
        if ( NumPathsFromSource == -1071774919 )
          break;
        v29 = WdLogNewEntry5_WdAssertion(v26, v25);
        WdLogEvent5_WdAssertion(v29);
      }
      if ( v28 == -1071774919 )
        break;
      if ( v54 > 1 )
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25, v27);
        v19[3] = v22;
        a4 = -1073741811LL;
        v19[4] = v54;
        goto LABEL_33;
      }
      v30 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((char **)v21, (unsigned int)v22, 0LL, &v56);
      v33 = v56;
      if ( v30 < 0 || v56 == -1 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v32, v31);
        WdLogEvent5_WdAssertion(v34);
      }
      if ( a5 )
        a5[v20] = v33;
      if ( v20 )
      {
        Path = DMMVIDPNTOPOLOGY::FindPath(v21, v22, v33);
        if ( !Path )
        {
          v42 = WdLogNewEntry5_WdAssertion(v40, v39);
          WdLogEvent5_WdAssertion(v42);
        }
        v43 = *((_DWORD *)Path + 26);
        v44 = *((_WORD *)Path + 54);
        v53 = v43;
        if ( (int)VIDPN_MGR::RemovePathFromVidPnTopology(v13, v21, v22, v33, 0) < 0 )
        {
          v47 = WdLogNewEntry5_WdAssertion(v46, v45);
          WdLogEvent5_WdAssertion(v47);
        }
        v48 = VIDPN_MGR::AddPathToVidPnTopology(v13, v21, v9, v33, v53, v44, 1u, D3DKMDT_MCC_ENFORCE);
        a4 = v48;
        if ( v48 < 0 )
        {
          v19 = (_QWORD *)WdLogNewEntry5_WdError(v50, v49, v51);
          v19[3] = v33;
          v19[4] = v9;
LABEL_33:
          v19[5] = v18;
          v19[6] = a4;
          goto LABEL_37;
        }
        v7 = v57;
      }
      else
      {
        v35 = VIDPN_MGR::UnpinPathModalityFromSource(v13, v21, v9);
        a4 = v35;
        if ( v35 < 0 )
        {
          v19 = (_QWORD *)WdLogNewEntry5_WdError(v37, v36, v38);
          v19[3] = v9;
          goto LABEL_36;
        }
      }
      if ( ++v20 >= v58 )
        goto LABEL_30;
    }
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25, v27);
    v19[3] = v22;
    a4 = -1073741811LL;
LABEL_36:
    v19[4] = v18;
    v19[5] = a4;
    goto LABEL_37;
  }
LABEL_30:
  LODWORD(a4) = 0;
LABEL_31:
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v55[0] + 40));
  return (unsigned int)a4;
}
