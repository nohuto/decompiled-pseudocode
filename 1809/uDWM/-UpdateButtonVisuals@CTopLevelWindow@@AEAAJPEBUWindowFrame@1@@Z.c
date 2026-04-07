/*
 * XREFs of ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x18001F8B8
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001C300 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z @ 0x18001FBE4 (-EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z.c)
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z @ 0x1800216A4 (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z.c)
 *     ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180022890 (-GetWindowColorizationColor@CTopLevelWindow@@QEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x1800229CC (-GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA-AU-$TMILFlagsEnum@W4FlagsEnum@Coloriza.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18002CA30 (-IsPPIEdition@@YA_NXZ.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ @ 0x1800356F0 (-TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetReverseRTLMirror@CButton@@QEAAX_N@Z @ 0x1800781AC (-SetReverseRTLMirror@CButton@@QEAAX_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateButtonVisuals(CButton **this, struct CBitmapSource **a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ebp
  __int64 v10; // rbp
  int v11; // r14d
  int SystemMetricsForDpi; // r8d
  _DWORD *CurrentDefaultColorizationFlags; // rax
  __int64 WindowColorizationColor; // rax
  float v16; // xmm6_4
  char v17; // dl
  CButton *v18; // r10
  struct CBitmapSource **v19; // rbp
  CButton *v20; // rcx
  CButton *v21; // rcx
  CButton *v22; // rcx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  unsigned int i; // edx
  CVisual *v27; // rcx
  int v28; // eax
  int v29; // eax
  CButton *v30; // rcx
  int v31; // eax
  CButton *v32; // rcx
  int v33; // eax
  CVisual *v34; // rcx
  CButton *v35; // rcx
  int v36; // eax
  char v37; // [rsp+70h] [rbp+18h] BYREF

  v4 = CTopLevelWindow::EnsureNonClientAreaButton(this, 1LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x93Du);
    return v5;
  }
  v6 = CTopLevelWindow::EnsureNonClientAreaButton(this, 2LL);
  v5 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x93Eu);
    return v5;
  }
  v7 = CTopLevelWindow::EnsureNonClientAreaButton(this, 3LL);
  v5 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x93Fu);
    return v5;
  }
  v8 = CTopLevelWindow::EnsureNonClientAreaButton(this, 0LL);
  v5 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x940u);
    return v5;
  }
  if ( *((_DWORD *)this + 170) == -1 )
  {
    v9 = *((_DWORD *)this[90] + 81);
    if ( v9 >= 192 )
      *((_DWORD *)this + 170) = 3;
    else
      *((_DWORD *)this + 170) = v9 >= MulDiv(96, 3, 2) ? 2 : v9 >= MulDiv(96, 5, 4);
    v10 = *(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames;
    v11 = *(_DWORD *)(**(_QWORD **)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 136LL) + 72LL)
        + *(_DWORD *)(**(_QWORD **)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 136LL) + 76LL);
    SystemMetricsForDpi = GetSystemMetricsForDpi(31LL, *((unsigned int *)this[90] + 81));
    if ( v11 + *(_DWORD *)(**(_QWORD **)(320LL * *((int *)this + 170) + v10 + 216) + 28LL) > SystemMetricsForDpi )
    {
      *((_DWORD *)this + 170) = 0;
      for ( i = 0; i < 3; *((_DWORD *)this + 170) = i )
      {
        if ( v11 + *(_DWORD *)(**(_QWORD **)(320LL * (int)i + v10 + 536) + 28LL) > SystemMetricsForDpi )
          break;
        ++i;
      }
    }
  }
  if ( !a2 )
    return v5;
  CurrentDefaultColorizationFlags = (_DWORD *)CTopLevelWindow::GetCurrentDefaultColorizationFlags(this, &v37);
  WindowColorizationColor = CTopLevelWindow::GetWindowColorizationColor(this, *CurrentDefaultColorizationFlags | 8u);
  if ( BYTE2(WindowColorizationColor)
     + 5 * BYTE1(WindowColorizationColor)
     + 2 * (unsigned int)(unsigned __int8)WindowColorizationColor <= 0x400
    && !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 26) )
  {
    IsPPIEdition();
  }
  v16 = FLOAT_1_0;
  if ( !CTopLevelWindow::TreatAsActiveWindow((CTopLevelWindow *)this) )
    v16 = FLOAT_0_40000001;
  v18 = this[61];
  v19 = &a2[40 * *((int *)this + 170) + 27];
  if ( !v17 )
  {
    if ( v18 )
    {
      v29 = CButton::SetVisualStates(
              this[61],
              (const struct CBitmapSourceArray *)((char *)a2
                                                + ((~(unsigned __int16)*((_DWORD *)this + 146) & 0x800 | 0x1200uLL) >> 6)),
              (const struct CBitmapSourceArray *)((char *)v19 + (((_DWORD)this[73] & 0x40000 | 0x200000uLL) >> 13)),
              a2[26],
              v16);
      v5 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x9C8u);
        return v5;
      }
    }
    v30 = this[62];
    if ( v30 )
    {
      v31 = CButton::SetVisualStates(
              v30,
              (const struct CBitmapSourceArray *)(a2 + 9),
              (const struct CBitmapSourceArray *)((char *)v19 + (((_DWORD)this[73] & 0x20) != 0 ? 288LL : 224LL)),
              a2[26],
              v16);
      v5 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x9D4u);
        return v5;
      }
    }
    v32 = this[63];
    if ( v32 )
    {
      v33 = CButton::SetVisualStates(
              v32,
              (const struct CBitmapSourceArray *)((char *)a2
                                                + (-(__int64)(((_DWORD)this[73] & 0xB00) != 0) & 0xFFFFFFFFFFFFFFE0uLL)
                                                + 168),
              (const struct CBitmapSourceArray *)(v19 + 20),
              a2[25],
              v16);
      v5 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x9E1u);
        return v5;
      }
      if ( (*((_BYTE *)this[90] + 596) & 0x40) != 0 )
      {
        v34 = this[63];
        *((_BYTE *)v34 + 280) |= 0x10u;
        CVisual::SetDirtyFlags(v34, 0x8000u);
      }
    }
    v35 = this[60];
    if ( !v35 )
      return v5;
    v36 = CButton::SetVisualStates(
            v35,
            (const struct CBitmapSourceArray *)(a2 + 13),
            (const struct CBitmapSourceArray *)(v19 + 24),
            a2[26],
            v16);
    v5 = v36;
    if ( v36 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x9F0u);
      return v5;
    }
    goto LABEL_59;
  }
  if ( v18 )
  {
    v23 = CButton::SetVisualStates(
            v18,
            (const struct CBitmapSourceArray *)((char *)a2
                                              + ((~(unsigned __int16)*((_DWORD *)this + 146) & 0x800 | 0x200uLL) >> 6)),
            (const struct CBitmapSourceArray *)((char *)v19 + (((_DWORD)this[73] & 0x40000) != 0 ? 128LL : 96LL)),
            a2[26],
            v16);
    v5 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x98Eu);
      return v5;
    }
  }
  v20 = this[62];
  if ( v20 )
  {
    v24 = CButton::SetVisualStates(
            v20,
            (const struct CBitmapSourceArray *)(a2 + 1),
            (const struct CBitmapSourceArray *)((char *)v19 + (((_DWORD)this[73] & 0x20) != 0 ? 128LL : 64LL)),
            a2[26],
            v16);
    v5 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x99Au);
      return v5;
    }
  }
  v21 = this[63];
  if ( v21 )
  {
    v25 = CButton::SetVisualStates(
            v21,
            (const struct CBitmapSourceArray *)((char *)a2
                                              + (-(__int64)(((_DWORD)this[73] & 0xB00) != 0) & 0xFFFFFFFFFFFFFFE0uLL)
                                              + 168),
            (const struct CBitmapSourceArray *)v19,
            a2[25],
            v16);
    v5 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x9A7u);
      return v5;
    }
    if ( (*((_BYTE *)this[90] + 596) & 0x40) != 0 )
    {
      v27 = this[63];
      *((_BYTE *)v27 + 280) |= 0x10u;
      CVisual::SetDirtyFlags(v27, 0x8000u);
    }
  }
  v22 = this[60];
  if ( v22 )
  {
    v28 = CButton::SetVisualStates(
            v22,
            (const struct CBitmapSourceArray *)(a2 + 5),
            (const struct CBitmapSourceArray *)(v19 + 4),
            a2[26],
            v16);
    v5 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x9B6u);
      return v5;
    }
LABEL_59:
    CButton::SetReverseRTLMirror(this[60], (*((_DWORD *)this[90] + 87) & 8) != 0);
  }
  return v5;
}
