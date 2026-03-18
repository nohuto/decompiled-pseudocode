/*
 * XREFs of BmlPinNextBestTargetMode @ 0x1C00D6574
 * Callers:
 *     BmlFunctionalizePath @ 0x1C00D6368 (BmlFunctionalizePath.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0003D7C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000F554 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     BmlGetNextBestTargetMode @ 0x1C00C5D14 (BmlGetNextBestTargetMode.c)
 *     BmlPinPathContentScaling @ 0x1C00D67C0 (BmlPinPathContentScaling.c)
 *     BmlPinPathContentRotation @ 0x1C00D6870 (BmlPinPathContentRotation.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00D8EBC (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     BmlUnPinPartialPathModalityOnPath @ 0x1C0289950 (BmlUnPinPartialPathModalityOnPath.c)
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
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // rbx
  int NextBestTargetMode; // eax
  unsigned __int16 v26; // bx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // r14d
  _QWORD *v44; // rax
  __int64 v45; // [rsp+40h] [rbp-68h]
  VIDPN_MGR *v46; // [rsp+48h] [rbp-60h]
  DMMVIDPNSOURCEMODESET *v47; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v48; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v49; // [rsp+B8h] [rbp+10h]
  unsigned __int16 v50; // [rsp+C0h] [rbp+18h]
  __int64 v51; // [rsp+C8h] [rbp+20h] BYREF

  v50 = a3;
  v4 = *(VIDPN_MGR **)(a2 + 48);
  v5 = 0;
  v6 = a3;
  v8 = 104LL * (unsigned __int16)a3;
  v49 = (unsigned __int16)a3;
  v46 = v4;
  v11 = (unsigned __int16)a3;
  if ( !v4 )
  {
    v32 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v32);
  }
  v12 = *(_QWORD *)(a4 + 88);
  v13 = *(_QWORD *)(v12 + 104);
  if ( !v13 )
  {
    v51 = 0LL;
    goto LABEL_29;
  }
  _InterlockedAdd((volatile signed __int32 *)(v13 + 96), 1u);
  v45 = *(_QWORD *)(v12 + 104);
  v51 = v45;
  if ( !v45 )
  {
LABEL_29:
    v33 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v33 + 24) = v11;
    WdLogEvent5_WdError(v33);
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
  v47 = v16;
  v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, a2, a3, a4);
  v17[3] = v16;
  v17[4] = *(unsigned __int16 *)(a1 + v8 + 68);
  v21 = *(unsigned __int16 *)(a1 + v8 + 70);
  v17[5] = v21;
  if ( !v16 )
  {
    LODWORD(v24) = -1071774967;
LABEL_49:
    v39 = WdLogNewEntry5_WdTrace(v21, v18, v19, v20);
    *(_QWORD *)(v39 + 24) = *(unsigned __int16 *)(a1 + v8 + 68);
    *(_QWORD *)(v39 + 32) = *(unsigned __int16 *)(a1 + v8 + 70);
    if ( *(_WORD *)(a1 + v8 + 70) && *(_WORD *)(a1 + v8 + 68) )
    {
      v43 = BmlUnPinPartialPathModalityOnPath(a1, a2, v6);
      if ( v43 < 0 )
      {
        v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v40, v42);
        v44[3] = a1;
        v44[4] = v11;
        v44[5] = a2;
        WdLogEvent5_WdWarning(v44);
        v5 = v43;
        goto LABEL_20;
      }
      *(_WORD *)(a1 + v8 + 68) = 0;
    }
    v5 = v24;
    goto LABEL_20;
  }
  if ( *((DMMVIDPNSOURCEMODESET **)v16 + 6) == (DMMVIDPNSOURCEMODESET *)((char *)v16 + 48) )
  {
    LODWORD(v24) = -1071774970;
LABEL_48:
    v6 = v50;
    goto LABEL_49;
  }
  LODWORD(v22) = -1;
  v48 = -1;
  if ( *(_WORD *)(a1 + v8 + 68) )
  {
    if ( !*((_QWORD *)v16 + 18) )
    {
      v36 = WdLogNewEntry5_WdAssertion(v21);
      WdLogEvent5_WdAssertion(v36);
    }
    v21 = *(unsigned __int16 *)(a1 + v8 + 70);
    if ( (_WORD)v21 )
    {
      LODWORD(v22) = *(_DWORD *)(*((_QWORD *)v16 + 18) + 24LL);
      v48 = v22;
LABEL_13:
      LODWORD(v24) = -1071774970;
      if ( *(_WORD *)(a1 + v8 + 68) < (unsigned __int16)v21 )
      {
        while ( 1 )
        {
          NextBestTargetMode = BmlGetNextBestTargetMode(a1, a2, v50, v16, v45, v22, &v48);
          v24 = NextBestTargetMode;
          if ( NextBestTargetMode < 0 )
            break;
          v22 = v48;
          if ( v48 == -1 )
          {
            v37 = WdLogNewEntry5_WdAssertion(v21);
            WdLogEvent5_WdAssertion(v37);
          }
          ++*(_WORD *)(a1 + v8 + 68);
          LODWORD(v24) = VIDPN_MGR::PinVidPnTargetMode(v46, v16, v22, 1);
          if ( (int)v24 >= 0 )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, v18, v19, v20) + 24) = v22;
            v26 = v50;
            if ( (int)BmlPinPathContentScaling(a1, a2, v50) >= 0 && (int)BmlPinPathContentRotation(a1, a2, v26) >= 0 )
              goto LABEL_20;
            LODWORD(v24) = -1071774970;
          }
          ++*(_DWORD *)(a1 + v8 + 76);
          *(_DWORD *)(a1 + v8 + 88) = v24;
          if ( (_DWORD)v24 != -1071774970 )
          {
            v38 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v18, v19);
            v38[3] = (int)v24;
LABEL_45:
            v11 = v49;
            v38[4] = a1;
            v38[5] = v11;
            v38[6] = a2;
            WdLogEvent5_WdWarning(v38);
            goto LABEL_48;
          }
          if ( *(_WORD *)(a1 + v8 + 68) >= *(_WORD *)(a1 + v8 + 70) )
            goto LABEL_47;
        }
        if ( NextBestTargetMode != -1071774970 )
        {
          v38 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v18, v19);
          v38[3] = v24;
          goto LABEL_45;
        }
      }
LABEL_47:
      v11 = v49;
      goto LABEL_48;
    }
    WdLogNewEntry5_WdTrace(v21, v18, v19, v20);
    *(_WORD *)(a1 + v8 + 68) = 0;
    goto LABEL_38;
  }
  v21 = *(unsigned __int16 *)(a1 + v8 + 70);
  v23 = *((_QWORD *)v16 + 18);
  if ( (_WORD)v21 )
  {
    if ( v23 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v21);
      WdLogEvent5_WdAssertion(v35);
      v21 = *(unsigned __int16 *)(a1 + v8 + 70);
    }
    goto LABEL_13;
  }
  if ( !v23 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v21);
    WdLogEvent5_WdAssertion(v34);
  }
  if ( (int)BmlPinPathContentScaling(a1, a2, v6) < 0 || (int)BmlPinPathContentRotation(a1, a2, v6) < 0 )
  {
    WdLogNewEntry5_WdTrace(v29, v28, v30, v31);
LABEL_38:
    v5 = -1071774970;
    goto LABEL_20;
  }
  ++*(_WORD *)(a1 + v8 + 68);
LABEL_20:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v47, 0LL);
LABEL_21:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v51, 0LL);
  return v5;
}
