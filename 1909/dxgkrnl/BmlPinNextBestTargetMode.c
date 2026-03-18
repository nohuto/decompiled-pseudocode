/*
 * XREFs of BmlPinNextBestTargetMode @ 0x1C0127628
 * Callers:
 *     BmlFunctionalizePath @ 0x1C012741C (BmlFunctionalizePath.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00044DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     BmlGetNextBestTargetMode @ 0x1C00DB304 (BmlGetNextBestTargetMode.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00E2B38 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     BmlPinPathContentScaling @ 0x1C0127874 (BmlPinPathContentScaling.c)
 *     BmlPinPathContentRotation @ 0x1C0127924 (BmlPinPathContentRotation.c)
 *     BmlUnPinPartialPathModalityOnPath @ 0x1C02C1DA0 (BmlUnPinPartialPathModalityOnPath.c)
 */

__int64 __fastcall BmlPinNextBestTargetMode(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  VIDPN_MGR *v4; // rax
  unsigned int v5; // edi
  unsigned __int16 v6; // r14
  __int64 v8; // rbp
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  DMMVIDPNSOURCEMODESET *v16; // r15
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rbx
  int NextBestTargetMode; // eax
  __int64 v24; // r8
  __int64 v25; // r8
  unsigned __int16 v26; // bx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  int v41; // r14d
  _QWORD *v42; // rax
  __int64 v43; // [rsp+40h] [rbp-68h]
  VIDPN_MGR *v44; // [rsp+48h] [rbp-60h]
  DMMVIDPNSOURCEMODESET *v45; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v46; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v47; // [rsp+B8h] [rbp+10h]
  unsigned __int16 v48; // [rsp+C0h] [rbp+18h]
  __int64 v49; // [rsp+C8h] [rbp+20h] BYREF

  v48 = a3;
  v4 = *(VIDPN_MGR **)(a2 + 48);
  v5 = 0;
  v6 = a3;
  v8 = 104LL * (unsigned __int16)a3;
  v47 = (unsigned __int16)a3;
  v44 = v4;
  v11 = (unsigned __int16)a3;
  if ( !v4 )
  {
    v30 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v30);
  }
  v12 = *(_QWORD *)(a4 + 88);
  v13 = *(_QWORD *)(v12 + 104);
  if ( !v13 )
  {
    v49 = 0LL;
    goto LABEL_29;
  }
  _InterlockedAdd((volatile signed __int32 *)(v13 + 96), 1u);
  v43 = *(_QWORD *)(v12 + 104);
  v49 = v43;
  if ( !v43 )
  {
LABEL_29:
    v31 = WdLogNewEntry5_WdError(v12, a2, a3);
    *(_QWORD *)(v31 + 24) = v11;
    WdLogEvent5_WdError(v31);
    v5 = -1071774968;
    goto LABEL_21;
  }
  v14 = *(_QWORD *)(a4 + 96);
  v15 = *(_QWORD *)(v14 + 104);
  if ( v15 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v15 + 96), 1u);
    v16 = *(DMMVIDPNSOURCEMODESET **)(v14 + 104);
  }
  else
  {
    v16 = 0LL;
  }
  v45 = v16;
  v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, a2);
  v17[3] = v16;
  v17[4] = *(unsigned __int16 *)(a1 + v8 + 68);
  v19 = *(unsigned __int16 *)(a1 + v8 + 70);
  v17[5] = v19;
  if ( !v16 )
  {
    LODWORD(v22) = -1071774967;
LABEL_49:
    v37 = WdLogNewEntry5_WdTrace(v19, v18);
    *(_QWORD *)(v37 + 24) = *(unsigned __int16 *)(a1 + v8 + 68);
    *(_QWORD *)(v37 + 32) = *(unsigned __int16 *)(a1 + v8 + 70);
    if ( *(_WORD *)(a1 + v8 + 70) && *(_WORD *)(a1 + v8 + 68) )
    {
      v41 = BmlUnPinPartialPathModalityOnPath(a1, a2, v6);
      if ( v41 < 0 )
      {
        v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v38, v40);
        v42[3] = a1;
        v42[4] = v11;
        v42[5] = a2;
        WdLogEvent5_WdWarning(v42);
        v5 = v41;
        goto LABEL_20;
      }
      *(_WORD *)(a1 + v8 + 68) = 0;
    }
    v5 = v22;
    goto LABEL_20;
  }
  if ( *((DMMVIDPNSOURCEMODESET **)v16 + 6) == (DMMVIDPNSOURCEMODESET *)((char *)v16 + 48) )
  {
    LODWORD(v22) = -1071774970;
LABEL_48:
    v6 = v48;
    goto LABEL_49;
  }
  LODWORD(v20) = -1;
  v46 = -1;
  if ( *(_WORD *)(a1 + v8 + 68) )
  {
    if ( !*((_QWORD *)v16 + 18) )
    {
      v34 = WdLogNewEntry5_WdAssertion(v19, v18);
      WdLogEvent5_WdAssertion(v34);
    }
    v19 = *(unsigned __int16 *)(a1 + v8 + 70);
    if ( (_WORD)v19 )
    {
      LODWORD(v20) = *(_DWORD *)(*((_QWORD *)v16 + 18) + 24LL);
      v46 = v20;
LABEL_13:
      LODWORD(v22) = -1071774970;
      if ( *(_WORD *)(a1 + v8 + 68) < (unsigned __int16)v19 )
      {
        while ( 1 )
        {
          NextBestTargetMode = BmlGetNextBestTargetMode(a1, a2, v48, v16, v43, v20, &v46);
          v22 = NextBestTargetMode;
          if ( NextBestTargetMode < 0 )
            break;
          v20 = v46;
          if ( v46 == -1 )
          {
            v35 = WdLogNewEntry5_WdAssertion(v19, v18);
            WdLogEvent5_WdAssertion(v35);
          }
          ++*(_WORD *)(a1 + v8 + 68);
          LODWORD(v22) = VIDPN_MGR::PinVidPnTargetMode(v44, v16, v20, 1);
          if ( (int)v22 >= 0 )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, v18) + 24) = v20;
            v26 = v48;
            if ( (int)BmlPinPathContentScaling(a1, a2, v48) >= 0 && (int)BmlPinPathContentRotation(a1, a2, v26) >= 0 )
              goto LABEL_20;
            LODWORD(v22) = -1071774970;
          }
          ++*(_DWORD *)(a1 + v8 + 76);
          *(_DWORD *)(a1 + v8 + 88) = v22;
          if ( (_DWORD)v22 != -1071774970 )
          {
            v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v25);
            v36[3] = (int)v22;
LABEL_45:
            v11 = v47;
            v36[4] = a1;
            v36[5] = v11;
            v36[6] = a2;
            WdLogEvent5_WdWarning(v36);
            goto LABEL_48;
          }
          if ( *(_WORD *)(a1 + v8 + 68) >= *(_WORD *)(a1 + v8 + 70) )
            goto LABEL_47;
        }
        if ( NextBestTargetMode != -1071774970 )
        {
          v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v24);
          v36[3] = v22;
          goto LABEL_45;
        }
      }
LABEL_47:
      v11 = v47;
      goto LABEL_48;
    }
    WdLogNewEntry5_WdTrace(v19, v18);
    *(_WORD *)(a1 + v8 + 68) = 0;
    goto LABEL_38;
  }
  v19 = *(unsigned __int16 *)(a1 + v8 + 70);
  v21 = *((_QWORD *)v16 + 18);
  if ( (_WORD)v19 )
  {
    if ( v21 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v19, v18);
      WdLogEvent5_WdAssertion(v33);
      v19 = *(unsigned __int16 *)(a1 + v8 + 70);
    }
    goto LABEL_13;
  }
  if ( !v21 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v19, v18);
    WdLogEvent5_WdAssertion(v32);
  }
  if ( (int)BmlPinPathContentScaling(a1, a2, v6) < 0 || (int)BmlPinPathContentRotation(a1, a2, v6) < 0 )
  {
    WdLogNewEntry5_WdTrace(v29, v28);
LABEL_38:
    v5 = -1071774970;
    goto LABEL_20;
  }
  ++*(_WORD *)(a1 + v8 + 68);
LABEL_20:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v45, 0LL);
LABEL_21:
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v49, 0LL);
  return v5;
}
