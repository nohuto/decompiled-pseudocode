/*
 * XREFs of _BmlGetPathModeListForPathTargetModes @ 0x1C028A3E4
 * Callers:
 *     _BmlGetPathModeListForPath @ 0x1C028A084 (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0003D7C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C0004F80 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEAAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0007060 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000F554 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1C00C5F24 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlPinPathContentScaling @ 0x1C00D67C0 (BmlPinPathContentScaling.c)
 *     BmlPinPathContentRotation @ 0x1C00D6870 (BmlPinPathContentRotation.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C00D8EBC (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?AddMode@CCD_MODE_RESULT_SET@@QEAAJAEBUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z @ 0x1C0287CE0 (-AddMode@CCD_MODE_RESULT_SET@@QEAAJAEBUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z.c)
 *     BmlUnPinPartialPathModalityOnPath @ 0x1C0289950 (BmlUnPinPartialPathModalityOnPath.c)
 */

__int64 __fastcall BmlGetPathModeListForPathTargetModes(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        CCD_MODE_RESULT_SET *a5)
{
  int v5; // edi
  __int64 v6; // r13
  __int64 v8; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rax
  _QWORD *v17; // r15
  _QWORD *v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // r12
  _QWORD *v22; // rcx
  DMMVIDPNSOURCEMODE *v23; // rdx
  __int64 v24; // rax
  struct DMMVIDPNSOURCEMODE *NextMode; // rsi
  __int64 v26; // rbx
  __int64 v27; // r12
  _QWORD *v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  unsigned int v32; // eax
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  _QWORD *v44; // rax
  struct DMMVIDPNSOURCEMODE *v46; // [rsp+20h] [rbp-81h]
  DMMVIDPNSOURCEMODE *v47; // [rsp+28h] [rbp-79h]
  __int64 v48; // [rsp+30h] [rbp-71h] BYREF
  VIDPN_MGR *v49; // [rsp+38h] [rbp-69h]
  _QWORD *v50; // [rsp+40h] [rbp-61h] BYREF
  _OWORD v51[10]; // [rsp+50h] [rbp-51h] BYREF
  unsigned int v53; // [rsp+108h] [rbp+67h]
  int v54; // [rsp+108h] [rbp+67h]
  unsigned __int16 v55; // [rsp+110h] [rbp+6Fh]
  __int64 v56; // [rsp+118h] [rbp+77h]

  v55 = a3;
  v5 = 0;
  v6 = (unsigned __int16)a3;
  v8 = 104LL * (unsigned __int16)a3;
  v49 = *(VIDPN_MGR **)(a2 + 48);
  v56 = v8;
  if ( !v49 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *(_QWORD *)(a4 + 88);
  v12 = *(_QWORD *)(v11 + 104);
  if ( !v12 )
  {
    v48 = 0LL;
LABEL_6:
    v14 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v14 + 24) = v6;
    WdLogEvent5_WdError(v14);
    v5 = -1071774968;
    goto LABEL_41;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v12 + 96));
  v13 = *(_QWORD *)(v11 + 104);
  v48 = v13;
  if ( !v13 )
    goto LABEL_6;
  v15 = *(_QWORD *)(a4 + 96);
  v16 = *(_QWORD *)(v15 + 104);
  if ( v16 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 96));
    v17 = *(_QWORD **)(v15 + 104);
  }
  else
  {
    v17 = 0LL;
  }
  v50 = v17;
  v18 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v18[3] = v17;
  v18[4] = *(unsigned __int16 *)(v8 + a1 + 68);
  v18[5] = *(unsigned __int16 *)(v8 + a1 + 70);
  if ( !v17 )
  {
    v5 = -1071774967;
    goto LABEL_40;
  }
  v21 = v17 + 6;
  v22 = (_QWORD *)v17[6];
  if ( v22 != v17 + 6 )
  {
    v23 = *(DMMVIDPNSOURCEMODE **)(v13 + 144);
    v47 = v23;
    if ( !v23 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v24 + 24) = v13;
      *(_QWORD *)(v24 + 32) = v6;
      WdLogEvent5_WdAssertion(v24);
      v5 = -1071774968;
      goto LABEL_40;
    }
    if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
    {
      WdLogNewEntry5_WdTrace(v22, v23, v19, v20);
      v22 = (_QWORD *)*v21;
      v47 = *(DMMVIDPNSOURCEMODE **)(v13 + 144);
    }
    v46 = (struct DMMVIDPNSOURCEMODE *)v17[18];
    NextMode = 0LL;
    if ( v22 != v21 )
      NextMode = (struct DMMVIDPNSOURCEMODE *)(v22 - 1);
    if ( NextMode )
    {
      v26 = v56;
      v27 = a2;
      do
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v23, v19, v20);
        v28[3] = *((_DWORD *)NextMode + 6) + ((*((_DWORD *)NextMode + 30) & 0x1F8u) << 13);
        v28[4] = *((unsigned int *)NextMode + 21);
        v28[5] = *((unsigned int *)NextMode + 22);
        v31 = *((unsigned int *)NextMode + 23);
        v28[6] = v31;
        v28[7] = *((unsigned int *)NextMode + 24);
        ++*(_DWORD *)(v26 + a1 + 100);
        if ( (!v46 || v46 == NextMode) && BmlDoesTargetModeObeyConstraint(a1, v55, (__int64)NextMode) )
        {
          ++*(_DWORD *)(v26 + a1 + 104);
          v32 = *((_DWORD *)NextMode + 6);
          v53 = v32;
          if ( v46 )
          {
            v5 = 0;
          }
          else
          {
            v5 = VIDPN_MGR::PinVidPnTargetMode(v49, (struct DMMVIDPNTARGETMODESET *const)v17, v32, 1);
            v32 = v53;
          }
          if ( v5 < 0 )
          {
            v5 = 0;
          }
          else
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v31, v28, v29, v30) + 24) = v32;
            if ( (int)BmlPinPathContentScaling(a1, v27, v55) >= 0 && (int)BmlPinPathContentRotation(a1, v27, v55) >= 0 )
            {
              memset(v51, 0, 0x60uLL);
              GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v47);
              v34 = *(_OWORD *)&GraphicsInfo->PrimSurfSize.cx;
              v35 = *(_OWORD *)&GraphicsInfo->Stride;
              LODWORD(GraphicsInfo) = *((_DWORD *)NextMode + 32);
              *(_OWORD *)((char *)&v51[3] + 8) = v34;
              HIDWORD(v51[5]) = (_DWORD)GraphicsInfo;
              v36 = *(_OWORD *)((char *)NextMode + 72);
              LODWORD(GraphicsInfo) = *((_DWORD *)v47 + 18);
              *(_OWORD *)((char *)&v51[4] + 8) = v35;
              v37 = *(_OWORD *)((char *)NextMode + 88);
              v51[0] = v36;
              v38 = *(_OWORD *)((char *)NextMode + 104);
              v51[1] = v37;
              BYTE8(v51[5]) = (unsigned int)((_DWORD)GraphicsInfo - 3) <= 1;
              *(_QWORD *)&v37 = *((_QWORD *)NextMode + 15);
              v51[2] = v38;
              *(_QWORD *)&v51[3] = v37;
              v5 = CCD_MODE_RESULT_SET::AddMode(a5, (const struct D3DKMT_PATHMODALITY_MODE_RESULT *)v51);
              if ( v5 < 0 )
              {
                v43 = WdLogNewEntry5_WdError(v39);
                WdLogEvent5_WdError(v43);
                break;
              }
            }
            v26 = v56;
          }
          v54 = BmlUnPinPartialPathModalityOnPath(a1, v27, v55);
          if ( v54 < 0 )
          {
            v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v40, v42);
            v44[3] = a1;
            v44[4] = v6;
            v44[5] = v27;
            WdLogEvent5_WdWarning(v44);
            v5 = v54;
            break;
          }
          if ( v46 )
            break;
        }
        else
        {
          WdLogNewEntry5_WdTrace(v31, v28, v29, v30);
        }
        NextMode = DMMVIDPNSOURCEMODESET::GetNextMode((DMMVIDPNSOURCEMODESET *)v17, NextMode);
      }
      while ( NextMode );
    }
  }
LABEL_40:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v50, 0LL);
LABEL_41:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v48, 0LL);
  return (unsigned int)v5;
}
