/*
 * XREFs of ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180014FA8
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180017770 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180010D80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x180013110 (-GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA-AU-$TMILFlagsEnum@W4FlagsEnum@Coloriza.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ @ 0x180013168 (-TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z @ 0x1800152C4 (-EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z.c)
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z @ 0x1800153A8 (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z.c)
 *     ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180020C74 (-GetWindowColorizationColor@CTopLevelWindow@@QEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x180028CC8 (-IsPPIEdition@@YA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetReverseRTLMirror@CButton@@QEAAX_N@Z @ 0x18007E47C (-SetReverseRTLMirror@CButton@@QEAAX_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateButtonVisuals(CButton **this, struct CBitmapSource **a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // r8
  int v10; // ebp
  __int64 v11; // rbp
  int v12; // r14d
  int SystemMetricsForDpi; // r8d
  int *CurrentDefaultColorizationFlags; // rax
  __int64 WindowColorizationColor; // rax
  float v16; // xmm6_4
  char v17; // dl
  CButton *v18; // r10
  struct CBitmapSource **v19; // rbp
  int v20; // eax
  CButton *v21; // rcx
  int v22; // eax
  CButton *v23; // rcx
  int v24; // eax
  CButton *v25; // rcx
  unsigned int i; // edx
  CVisual *v28; // rcx
  int v29; // eax
  int v30; // eax
  CButton *v31; // rcx
  int v32; // eax
  CButton *v33; // rcx
  int v34; // eax
  CVisual *v35; // rcx
  CButton *v36; // rcx
  int v37; // eax
  void *v38; // [rsp+28h] [rbp-30h]
  int v39; // [rsp+70h] [rbp+18h] BYREF

  v4 = CTopLevelWindow::EnsureNonClientAreaButton(this, 1LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x924u, v38);
    return v5;
  }
  v6 = CTopLevelWindow::EnsureNonClientAreaButton(this, 2LL);
  v5 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x925u, v38);
    return v5;
  }
  v7 = CTopLevelWindow::EnsureNonClientAreaButton(this, 3LL);
  v5 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x926u, v38);
    return v5;
  }
  v8 = CTopLevelWindow::EnsureNonClientAreaButton(this, 0LL);
  v5 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x927u, v38);
    return v5;
  }
  if ( *((_DWORD *)this + 170) == -1 )
  {
    v10 = *((_DWORD *)this[90] + 81);
    if ( v10 >= 192 )
      *((_DWORD *)this + 170) = 3;
    else
      *((_DWORD *)this + 170) = v10 >= MulDiv(96, 3, 2) ? 2 : v10 >= MulDiv(96, 5, 4);
    v11 = *(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames;
    v12 = *(_DWORD *)(**(_QWORD **)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 136LL) + 72LL)
        + *(_DWORD *)(**(_QWORD **)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 136LL) + 76LL);
    SystemMetricsForDpi = GetSystemMetricsForDpi(31LL, *((unsigned int *)this[90] + 81), v9);
    if ( v12 + *(_DWORD *)(**(_QWORD **)(320LL * *((int *)this + 170) + v11 + 216) + 28LL) > SystemMetricsForDpi )
    {
      *((_DWORD *)this + 170) = 0;
      for ( i = 0; i < 3; *((_DWORD *)this + 170) = i )
      {
        if ( v12 + *(_DWORD *)(**(_QWORD **)(320LL * (int)i + v11 + 536) + 28LL) > SystemMetricsForDpi )
          break;
        ++i;
      }
    }
  }
  if ( a2 )
  {
    CurrentDefaultColorizationFlags = CTopLevelWindow::GetCurrentDefaultColorizationFlags((__int64)this, &v39);
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
    if ( v17 )
    {
      if ( v18 )
      {
        v20 = CButton::SetVisualStates(
                v18,
                (const struct CBitmapSourceArray *)((char *)a2
                                                  + ((~(unsigned __int16)*((_DWORD *)this + 146) & 0x800 | 0x200uLL) >> 6)),
                (const struct CBitmapSourceArray *)((char *)v19 + (((_DWORD)this[73] & 0x40000) != 0 ? 128LL : 96LL)),
                a2[26],
                v16);
        v5 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x975u, v38);
          return v5;
        }
      }
      v21 = this[62];
      if ( v21 )
      {
        v22 = CButton::SetVisualStates(
                v21,
                (const struct CBitmapSourceArray *)(a2 + 1),
                (const struct CBitmapSourceArray *)((char *)v19 + (((_DWORD)this[73] & 0x20) != 0 ? 128LL : 64LL)),
                a2[26],
                v16);
        v5 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x981u, v38);
          return v5;
        }
      }
      v23 = this[63];
      if ( v23 )
      {
        v24 = CButton::SetVisualStates(
                v23,
                (const struct CBitmapSourceArray *)((char *)a2
                                                  + (-(__int64)(((_DWORD)this[73] & 0xB00) != 0) & 0xFFFFFFFFFFFFFFE0uLL)
                                                  + 168),
                (const struct CBitmapSourceArray *)v19,
                a2[25],
                v16);
        v5 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x98Eu, v38);
          return v5;
        }
        if ( (*((_BYTE *)this[90] + 604) & 0x40) != 0 )
        {
          v28 = this[63];
          *((_BYTE *)v28 + 280) |= 0x10u;
          CVisual::SetDirtyFlags(v28, 0x8000);
        }
      }
      v25 = this[60];
      if ( !v25 )
        return v5;
      v29 = CButton::SetVisualStates(
              v25,
              (const struct CBitmapSourceArray *)(a2 + 5),
              (const struct CBitmapSourceArray *)(v19 + 4),
              a2[26],
              v16);
      v5 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x99Du, v38);
        return v5;
      }
    }
    else
    {
      if ( v18 )
      {
        v30 = CButton::SetVisualStates(
                this[61],
                (const struct CBitmapSourceArray *)((char *)a2
                                                  + ((~(unsigned __int16)*((_DWORD *)this + 146) & 0x800 | 0x1200uLL) >> 6)),
                (const struct CBitmapSourceArray *)((char *)v19 + (((_DWORD)this[73] & 0x40000 | 0x200000uLL) >> 13)),
                a2[26],
                v16);
        v5 = v30;
        if ( v30 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x9AFu, v38);
          return v5;
        }
      }
      v31 = this[62];
      if ( v31 )
      {
        v32 = CButton::SetVisualStates(
                v31,
                (const struct CBitmapSourceArray *)(a2 + 9),
                (const struct CBitmapSourceArray *)((char *)v19 + (((_DWORD)this[73] & 0x20) != 0 ? 288LL : 224LL)),
                a2[26],
                v16);
        v5 = v32;
        if ( v32 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x9BBu, v38);
          return v5;
        }
      }
      v33 = this[63];
      if ( v33 )
      {
        v34 = CButton::SetVisualStates(
                v33,
                (const struct CBitmapSourceArray *)((char *)a2
                                                  + (-(__int64)(((_DWORD)this[73] & 0xB00) != 0) & 0xFFFFFFFFFFFFFFE0uLL)
                                                  + 168),
                (const struct CBitmapSourceArray *)(v19 + 20),
                a2[25],
                v16);
        v5 = v34;
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x9C8u, v38);
          return v5;
        }
        if ( (*((_BYTE *)this[90] + 604) & 0x40) != 0 )
        {
          v35 = this[63];
          *((_BYTE *)v35 + 280) |= 0x10u;
          CVisual::SetDirtyFlags(v35, 0x8000);
        }
      }
      v36 = this[60];
      if ( !v36 )
        return v5;
      v37 = CButton::SetVisualStates(
              v36,
              (const struct CBitmapSourceArray *)(a2 + 13),
              (const struct CBitmapSourceArray *)(v19 + 24),
              a2[26],
              v16);
      v5 = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x9D7u, v38);
        return v5;
      }
    }
    CButton::SetReverseRTLMirror(this[60], (*((_DWORD *)this[90] + 89) & 8) != 0);
  }
  return v5;
}
