/*
 * XREFs of BmlFunctionalizePath @ 0x1C00D6368
 * Callers:
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00D617C (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0003D7C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     BmlPinNextBestTargetMode @ 0x1C00D6574 (BmlPinNextBestTargetMode.c)
 *     BmlIsSecondaryClonePath @ 0x1C00D6A50 (BmlIsSecondaryClonePath.c)
 *     BmlGetNextBestSourceMode @ 0x1C00D7494 (BmlGetNextBestSourceMode.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00D887C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     BmlUnPinSourceMode @ 0x1C0289C04 (BmlUnPinSourceMode.c)
 */

__int64 __fastcall BmlFunctionalizePath(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  struct DMMVIDPNSOURCEMODESET *v18; // r14
  __int64 v19; // r12
  __int64 v20; // rcx
  __int64 BestTargetMode; // rbp
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  int v27; // ebp
  int NextBestSourceMode; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  VIDPN_MGR *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  _QWORD *v59; // rax
  struct DMMVIDPNSOURCEMODESET *v60; // [rsp+80h] [rbp+8h] BYREF
  VIDPN_MGR *v61; // [rsp+88h] [rbp+10h]
  unsigned int v62; // [rsp+90h] [rbp+18h] BYREF
  __int64 v63; // [rsp+98h] [rbp+20h]

  v63 = a4;
  v5 = (unsigned __int16)a3;
  v8 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v13 = 104 * v5;
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = a2;
  v14 = (unsigned int)v5;
  v61 = *(VIDPN_MGR **)(a2 + 48);
  if ( !v61 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v42);
  }
  v15 = *(_QWORD *)(a4 + 88);
  v16 = *(_QWORD *)(v15 + 104);
  if ( !v16 )
  {
    v60 = 0LL;
    goto LABEL_28;
  }
  v17 = 1LL;
  _InterlockedAdd((volatile signed __int32 *)(v16 + 96), 1u);
  v18 = *(struct DMMVIDPNSOURCEMODESET **)(v15 + 104);
  v60 = v18;
  if ( !v18 )
  {
LABEL_28:
    LODWORD(v26) = -1071774968;
    goto LABEL_42;
  }
  if ( *((struct DMMVIDPNSOURCEMODESET **)v18 + 6) == (struct DMMVIDPNSOURCEMODESET *)((char *)v18 + 48) )
  {
    LODWORD(v26) = -1071774970;
    goto LABEL_42;
  }
  LODWORD(v19) = -1;
  v62 = -1;
  if ( *(_WORD *)(v13 + a1 + 64) )
  {
    if ( !*((_QWORD *)v18 + 18) )
    {
      v45 = WdLogNewEntry5_WdAssertion(1LL);
      WdLogEvent5_WdAssertion(v45);
    }
    BestTargetMode = (int)BmlPinNextBestTargetMode(a1, a2, (unsigned __int16)v5, a4);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v47, v46, v48, v49) + 24) = BestTargetMode;
    if ( (int)BestTargetMode < 0 )
    {
      if ( *(_WORD *)(v13 + a1 + 66) && !(unsigned __int8)BmlIsSecondaryClonePath(a1, (unsigned __int16)v5, 0LL) )
      {
        LODWORD(v19) = *(_DWORD *)(*((_QWORD *)v18 + 18) + 24LL);
        v62 = v19;
        goto LABEL_19;
      }
      WdLogNewEntry5_WdTrace(v51, v50, v52, v53);
      *(_WORD *)(v13 + a1 + 64) = 0;
      LODWORD(BestTargetMode) = -1071774970;
    }
LABEL_12:
    LODWORD(v26) = BestTargetMode;
LABEL_13:
    v27 = v26;
LABEL_14:
    LODWORD(v26) = v27;
    goto LABEL_15;
  }
  if ( !*(_WORD *)(v13 + a1 + 66) || (unsigned __int8)BmlIsSecondaryClonePath(a1, (unsigned __int16)v5, 0LL) )
  {
    WdLogNewEntry5_WdTrace(v17, v9, v11, v12);
    if ( !*((_QWORD *)v18 + 18) )
    {
      v44 = WdLogNewEntry5_WdAssertion(v20);
      WdLogEvent5_WdAssertion(v44);
    }
    BestTargetMode = (int)BmlPinNextBestTargetMode(a1, a2, (unsigned __int16)v5, a4);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v23, v22, v24, v25) + 24) = BestTargetMode;
    if ( (int)BestTargetMode >= 0 )
      ++*(_WORD *)(v13 + a1 + 64);
    goto LABEL_12;
  }
  if ( *((_QWORD *)v18 + 18) )
  {
    v43 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v43);
  }
LABEL_19:
  LODWORD(v26) = -1071774970;
  while ( 1 )
  {
    if ( *(_WORD *)(v13 + a1 + 64) >= *(_WORD *)(v13 + a1 + 66) )
      goto LABEL_41;
    NextBestSourceMode = BmlGetNextBestSourceMode(a1, a2, (unsigned __int16)v5, (_DWORD)v18, v19, (__int64)&v62);
    v26 = NextBestSourceMode;
    if ( NextBestSourceMode < 0 )
      break;
    v19 = v62;
    if ( v62 == -1 )
    {
      v54 = WdLogNewEntry5_WdAssertion(v31);
      WdLogEvent5_WdAssertion(v54);
    }
    v33 = v61;
    ++*(_WORD *)(v13 + a1 + 64);
    v26 = VIDPN_MGR::PinVidPnSourceMode(v33, v18, v19, 1);
    v38 = WdLogNewEntry5_WdTrace(v35, v34, v36, v37);
    *(_QWORD *)(v38 + 24) = v19;
    *(_QWORD *)(v38 + 32) = v26;
    if ( (int)v26 >= 0 )
    {
      LODWORD(v26) = BmlPinNextBestTargetMode(a1, a2, (unsigned __int16)v5, v63);
      if ( (int)v26 >= 0 )
        goto LABEL_13;
    }
    *(_DWORD *)(v13 + a1 + 88) = v26;
    ++*(_DWORD *)(v13 + a1 + 72);
    if ( (_DWORD)v26 != -1071774970 )
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v39, v41);
      v14 = (unsigned __int16)v5;
      v55[3] = (int)v26;
      v55[5] = a2;
      v55[6] = (unsigned __int16)v5;
LABEL_39:
      v55[4] = a1;
      WdLogEvent5_WdWarning(v55);
      goto LABEL_42;
    }
  }
  if ( NextBestSourceMode != -1071774970 )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32);
    v14 = (unsigned __int16)v5;
    v55[3] = v26;
    v55[5] = (unsigned __int16)v5;
    v55[6] = a2;
    goto LABEL_39;
  }
LABEL_41:
  v14 = (unsigned __int16)v5;
LABEL_42:
  if ( *(_WORD *)(v13 + a1 + 66)
    && !(unsigned __int8)BmlIsSecondaryClonePath(a1, (unsigned __int16)v5, 0LL)
    && *(_WORD *)(v13 + a1 + 64) )
  {
    v27 = BmlUnPinSourceMode(a1, a2, (unsigned __int16)v5);
    if ( v27 >= 0 )
    {
      *(_WORD *)(v13 + a1 + 64) = 0;
      goto LABEL_15;
    }
    v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v57, v56, v58);
    v59[3] = a1;
    v59[4] = a2;
    v59[5] = v14;
    WdLogEvent5_WdWarning(v59);
    goto LABEL_14;
  }
LABEL_15:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v60, 0LL);
  return (unsigned int)v26;
}
