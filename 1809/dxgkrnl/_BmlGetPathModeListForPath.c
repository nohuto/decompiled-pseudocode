/*
 * XREFs of _BmlGetPathModeListForPath @ 0x1C028A084
 * Callers:
 *     _BmlGetPathModeListForAdapter @ 0x1C0289EA8 (_BmlGetPathModeListForAdapter.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0003D7C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0004F80 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x1C000651C (-GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000F9D0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     BmlAreRawModesEnabled @ 0x1C00AFA38 (BmlAreRawModesEnabled.c)
 *     BmlIsSecondaryClonePath @ 0x1C00D6A50 (BmlIsSecondaryClonePath.c)
 *     BmlGetModeCategoryForRegion @ 0x1C00D7344 (BmlGetModeCategoryForRegion.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1C00D76C4 (BmlDoesSourceModeObeyConstraint.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00D887C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     BmlUnPinSourceMode @ 0x1C0289C04 (BmlUnPinSourceMode.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C028A3E4 (_BmlGetPathModeListForPathTargetModes.c)
 */

__int64 __fastcall BmlGetPathModeListForPath(_BYTE *a1, __int64 a2, __int64 a3, CCD_MODE_RESULT_SET *a4)
{
  struct DMMVIDPNSOURCEMODE *NextMode; // r15
  unsigned __int16 v5; // si
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rcx
  _QWORD *v18; // r13
  int PathModeListForPathTargetModes; // esi
  _QWORD *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rcx
  _QWORD *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  int v42; // ebx
  __int64 v43; // r8
  _QWORD *v44; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // [rsp+30h] [rbp-68h] BYREF
  VIDPN_MGR *v48; // [rsp+38h] [rbp-60h]
  int v49[22]; // [rsp+40h] [rbp-58h]
  unsigned int v50; // [rsp+A0h] [rbp+8h]
  struct DMMVIDPNSOURCEMODE *v51; // [rsp+A8h] [rbp+10h]
  unsigned __int16 v52; // [rsp+B0h] [rbp+18h]

  v52 = a3;
  NextMode = 0LL;
  v5 = a3;
  if ( !a1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v12 = v5;
  v13 = 104LL * v5;
  *(_QWORD *)(v10 + 24) = v5;
  *(_QWORD *)(v10 + 32) = a2;
  v48 = *(VIDPN_MGR **)(a2 + 48);
  if ( !v48 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *(_QWORD *)&a1[v13 + 16];
  *(_WORD *)&a1[v13 + 64] = 0;
  *(_WORD *)&a1[v13 + 68] = 0;
  *(_QWORD *)v49 = DMMVIDPNTOPOLOGY::FindPath(
                     (DMMVIDPNTOPOLOGY *)(a2 + 96),
                     *(_DWORD *)(v15 + 24),
                     *(_DWORD *)(v15 + 28));
  v16 = *(_QWORD *)(*(_QWORD *)v49 + 88LL);
  v17 = *(_QWORD *)(v16 + 104);
  if ( !v17 )
  {
    v47 = 0LL;
LABEL_10:
    PathModeListForPathTargetModes = -1071774968;
    goto LABEL_33;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v17 + 96));
  v18 = *(_QWORD **)(v16 + 104);
  v47 = v18;
  if ( !v18 )
    goto LABEL_10;
  v20 = v18 + 6;
  if ( (_QWORD *)*v20 == v20 )
  {
    PathModeListForPathTargetModes = 0;
  }
  else
  {
    v50 = v5;
    if ( BmlIsSecondaryClonePath((__int64)a1, v5, 0LL) )
    {
      WdLogNewEntry5_WdTrace(v22, v21, v23, v24);
      if ( !v18[18] )
      {
        v26 = WdLogNewEntry5_WdAssertion(v25);
        WdLogEvent5_WdAssertion(v26);
      }
    }
    *(_QWORD *)&a1[v13 + 92] = 0LL;
    PathModeListForPathTargetModes = 0;
    *(_QWORD *)&a1[v13 + 100] = 0LL;
    v27 = (_QWORD *)*v20;
    v51 = (struct DMMVIDPNSOURCEMODE *)v18[18];
    if ( (_QWORD *)*v20 != v20 )
      NextMode = (struct DMMVIDPNSOURCEMODE *)(v27 - 1);
    for ( ; NextMode; NextMode = DMMVIDPNSOURCEMODESET::GetNextMode((DMMVIDPNSOURCEMODESET *)v18, NextMode) )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v21, v23, v24);
      v28[3] = *((unsigned int *)NextMode + 6);
      v28[4] = *((unsigned int *)NextMode + 19);
      v28[5] = *((unsigned int *)NextMode + 20);
      v28[6] = (unsigned int)DMMVIDPNSOURCEMODE::GetBitsPerPixel(NextMode);
      v32 = *((int *)NextMode + 24);
      v28[7] = v32;
      ++*(_DWORD *)&a1[v13 + 92];
      if ( (!v51 || v51 == NextMode)
        && (BmlAreRawModesEnabled((__int64)a1, v50)
         || (unsigned int)BmlGetModeCategoryForRegion((__int64)NextMode + 76, (__int64)&a1[v13 + 36]) != 1)
        && BmlDoesSourceModeObeyConstraint((__int64)a1, v52, NextMode) )
      {
        ++*(_DWORD *)&a1[v13 + 96];
        v33 = *((unsigned int *)NextMode + 6);
        if ( v51 )
        {
          LODWORD(v34) = 0;
        }
        else
        {
          v34 = (int)VIDPN_MGR::PinVidPnSourceMode(v48, (struct DMMVIDPNSOURCEMODESET *const)v18, v33, 1);
          v39 = WdLogNewEntry5_WdTrace(v36, v35, v37, v38);
          *(_QWORD *)(v39 + 24) = v33;
          *(_QWORD *)(v39 + 32) = v34;
        }
        if ( (int)v34 < 0 )
        {
          PathModeListForPathTargetModes = 0;
        }
        else
        {
          PathModeListForPathTargetModes = BmlGetPathModeListForPathTargetModes((int)a1, a2, v52, v49[0], a4);
          if ( !v51 )
          {
            v42 = BmlUnPinSourceMode(a1, a2, v52);
            if ( v42 < 0 )
            {
              v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v41, v43);
              v46[3] = a1;
              v46[4] = a2;
              v46[5] = v12;
              WdLogEvent5_WdWarning(v46);
              goto LABEL_34;
            }
          }
          if ( PathModeListForPathTargetModes < 0 )
          {
            v44 = (_QWORD *)WdLogNewEntry5_WdError(v40);
            v44[3] = a1;
            v44[4] = a2;
            v44[5] = v12;
            WdLogEvent5_WdError(v44);
            break;
          }
        }
      }
      else
      {
        WdLogNewEntry5_WdTrace(v32, v29, v30, v31);
      }
    }
  }
LABEL_33:
  v42 = PathModeListForPathTargetModes;
LABEL_34:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v47, 0LL);
  return (unsigned int)v42;
}
