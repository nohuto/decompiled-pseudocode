/*
 * XREFs of BmlFunctionalizePath @ 0x1C012741C
 * Callers:
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C0127230 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00044DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     BmlGetNextBestSourceMode @ 0x1C00DBA64 (BmlGetNextBestSourceMode.c)
 *     BmlIsSecondaryClonePath @ 0x1C00DE880 (BmlIsSecondaryClonePath.c)
 *     BmlPinNextBestTargetMode @ 0x1C0127628 (BmlPinNextBestTargetMode.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C01320F8 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     BmlUnPinSourceMode @ 0x1C02C2054 (BmlUnPinSourceMode.c)
 */

__int64 __fastcall BmlFunctionalizePath(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rcx
  struct DMMVIDPNSOURCEMODESET *v16; // r14
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 BestTargetMode; // rbp
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  int v24; // ebp
  int NextBestSourceMode; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  VIDPN_MGR *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  _QWORD *v50; // rax
  struct DMMVIDPNSOURCEMODESET *v51; // [rsp+80h] [rbp+8h] BYREF
  VIDPN_MGR *v52; // [rsp+88h] [rbp+10h]
  unsigned int v53; // [rsp+90h] [rbp+18h] BYREF
  __int64 v54; // [rsp+98h] [rbp+20h]

  v54 = a4;
  v5 = a3;
  v8 = WdLogNewEntry5_WdTrace(a1, a2);
  v11 = 104 * v5;
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = a2;
  v12 = (unsigned int)v5;
  v52 = *(VIDPN_MGR **)(a2 + 48);
  if ( !v52 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v37);
  }
  v13 = *(_QWORD *)(a4 + 88);
  v14 = *(_QWORD *)(v13 + 104);
  if ( !v14 )
  {
    v51 = 0LL;
    goto LABEL_28;
  }
  v15 = 1LL;
  _InterlockedAdd((volatile signed __int32 *)(v14 + 96), 1u);
  v16 = *(struct DMMVIDPNSOURCEMODESET **)(v13 + 104);
  v51 = v16;
  if ( !v16 )
  {
LABEL_28:
    LODWORD(v23) = -1071774968;
    goto LABEL_42;
  }
  if ( *((struct DMMVIDPNSOURCEMODESET **)v16 + 6) == (struct DMMVIDPNSOURCEMODESET *)((char *)v16 + 48) )
  {
    LODWORD(v23) = -1071774970;
    goto LABEL_42;
  }
  LODWORD(v17) = -1;
  v53 = -1;
  if ( *(_WORD *)(v11 + a1 + 64) )
  {
    if ( !*((_QWORD *)v16 + 18) )
    {
      v40 = WdLogNewEntry5_WdAssertion(1LL, v9);
      WdLogEvent5_WdAssertion(v40);
    }
    BestTargetMode = (int)BmlPinNextBestTargetMode(a1, a2, (unsigned __int16)v5, a4);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v42, v41) + 24) = BestTargetMode;
    if ( (int)BestTargetMode < 0 )
    {
      if ( *(_WORD *)(v11 + a1 + 66) && !BmlIsSecondaryClonePath(a1, (unsigned __int16)v5, 0LL) )
      {
        LODWORD(v17) = *(_DWORD *)(*((_QWORD *)v16 + 18) + 24LL);
        v53 = v17;
        goto LABEL_19;
      }
      WdLogNewEntry5_WdTrace(v44, v43);
      *(_WORD *)(v11 + a1 + 64) = 0;
      LODWORD(BestTargetMode) = -1071774970;
    }
LABEL_12:
    LODWORD(v23) = BestTargetMode;
LABEL_13:
    v24 = v23;
LABEL_14:
    LODWORD(v23) = v24;
    goto LABEL_15;
  }
  if ( !*(_WORD *)(v11 + a1 + 66) || BmlIsSecondaryClonePath(a1, (unsigned __int16)v5, 0LL) )
  {
    WdLogNewEntry5_WdTrace(v15, v9);
    if ( !*((_QWORD *)v16 + 18) )
    {
      v39 = WdLogNewEntry5_WdAssertion(v19, v18);
      WdLogEvent5_WdAssertion(v39);
    }
    BestTargetMode = (int)BmlPinNextBestTargetMode(a1, a2, (unsigned __int16)v5, a4);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v22, v21) + 24) = BestTargetMode;
    if ( (int)BestTargetMode >= 0 )
      ++*(_WORD *)(v11 + a1 + 64);
    goto LABEL_12;
  }
  if ( *((_QWORD *)v16 + 18) )
  {
    v38 = WdLogNewEntry5_WdAssertion(v15, v9);
    WdLogEvent5_WdAssertion(v38);
  }
LABEL_19:
  LODWORD(v23) = -1071774970;
  while ( 1 )
  {
    if ( *(_WORD *)(v11 + a1 + 64) >= *(_WORD *)(v11 + a1 + 66) )
      goto LABEL_41;
    NextBestSourceMode = BmlGetNextBestSourceMode(a1, a2, v5, (__int64)v16, v17, &v53);
    v23 = NextBestSourceMode;
    if ( NextBestSourceMode < 0 )
      break;
    v17 = v53;
    if ( v53 == -1 )
    {
      v45 = WdLogNewEntry5_WdAssertion(v28, v27);
      WdLogEvent5_WdAssertion(v45);
    }
    v30 = v52;
    ++*(_WORD *)(v11 + a1 + 64);
    v23 = VIDPN_MGR::PinVidPnSourceMode(v30, v16, v17, 1);
    v33 = WdLogNewEntry5_WdTrace(v32, v31);
    *(_QWORD *)(v33 + 24) = v17;
    *(_QWORD *)(v33 + 32) = v23;
    if ( (int)v23 >= 0 )
    {
      LODWORD(v23) = BmlPinNextBestTargetMode(a1, a2, (unsigned __int16)v5, v54);
      if ( (int)v23 >= 0 )
        goto LABEL_13;
    }
    *(_DWORD *)(v11 + a1 + 88) = v23;
    ++*(_DWORD *)(v11 + a1 + 72);
    if ( (_DWORD)v23 != -1071774970 )
    {
      v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v34, v36);
      v12 = (unsigned __int16)v5;
      v46[3] = (int)v23;
      v46[5] = a2;
      v46[6] = (unsigned __int16)v5;
LABEL_39:
      v46[4] = a1;
      WdLogEvent5_WdWarning(v46);
      goto LABEL_42;
    }
  }
  if ( NextBestSourceMode != -1071774970 )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29);
    v12 = (unsigned __int16)v5;
    v46[3] = v23;
    v46[5] = (unsigned __int16)v5;
    v46[6] = a2;
    goto LABEL_39;
  }
LABEL_41:
  v12 = (unsigned __int16)v5;
LABEL_42:
  if ( *(_WORD *)(v11 + a1 + 66) && !BmlIsSecondaryClonePath(a1, (unsigned __int16)v5, 0LL) && *(_WORD *)(v11 + a1 + 64) )
  {
    v24 = BmlUnPinSourceMode(a1, a2, (unsigned __int16)v5);
    if ( v24 >= 0 )
    {
      *(_WORD *)(v11 + a1 + 64) = 0;
      goto LABEL_15;
    }
    v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v48, v47, v49);
    v50[3] = a1;
    v50[4] = a2;
    v50[5] = v12;
    WdLogEvent5_WdWarning(v50);
    goto LABEL_14;
  }
LABEL_15:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v51, 0LL);
  return (unsigned int)v23;
}
