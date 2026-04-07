/*
 * XREFs of ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x180017670
 * Callers:
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x1800144CC (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180016B10 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x180018E30 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180017C30 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004C598 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     floorf_0 @ 0x18004E266 (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateColorizationColor(CTopLevelWindow *this)
{
  int v1; // esi
  __int64 v3; // rax
  int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // rcx
  int v7; // esi
  bool v8; // r14
  unsigned int v9; // ebx
  __int64 v10; // r9
  float *v11; // rsi
  bool v12; // zf
  __int128 v13; // xmm0
  __int64 v14; // xmm1_8
  int v15; // eax
  float v16; // xmm6_4
  float v17; // xmm7_4
  float v18; // xmm0_4
  __int64 v19; // r8
  float v20; // xmm0_4
  float v21; // xmm1_4
  unsigned int v22; // ebx
  __int128 v23; // xmm0
  float *v24; // rdi
  __int64 v25; // xmm1_8
  int v26; // eax
  float v27; // xmm6_4
  float v28; // xmm7_4
  float v29; // xmm0_4
  float v30; // xmm0_4
  float v31; // xmm1_4
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // [rsp+30h] [rbp-39h] BYREF
  __int128 v36; // [rsp+38h] [rbp-31h] BYREF
  __int64 v37; // [rsp+48h] [rbp-21h]
  int v38; // [rsp+50h] [rbp-19h]

  v1 = *((_DWORD *)this + 146);
  v3 = *((_QWORD *)this + 90);
  if ( (v1 & 0x40) != 0 || (*(_BYTE *)(v3 + 599) & 0x10) != 0 )
    v4 = 1;
  else
    v4 = 2;
  if ( *(_DWORD *)(v3 + 80) == 0x7FFFFFFF
    && *(_DWORD *)(v3 + 84) == 0x7FFFFFFF
    && *(_DWORD *)(v3 + 88) == 0x7FFFFFFF
    && *(_DWORD *)(v3 + 92) == 0x7FFFFFFF )
  {
    v4 |= 0x40u;
  }
  if ( (*(_BYTE *)(v3 + 601) & 1) != 0 )
    v4 |= 0x80u;
  IsOpenThemeDataPresent();
  if ( !*((_QWORD *)this + 71) )
  {
    v33 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            40LL);
    if ( v33 )
    {
      *(_DWORD *)(v33 + 8) = 1;
      *(_QWORD *)v33 = &CGlassColorizationResources::`vftable';
    }
    *((_QWORD *)this + 71) = v33;
    if ( !v33 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x792u);
      return 2147942414LL;
    }
  }
  if ( !*((_QWORD *)this + 72) )
  {
    v34 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            40LL);
    if ( v34 )
    {
      *(_DWORD *)(v34 + 8) = 1;
      *(_QWORD *)v34 = &CGlassColorizationResources::`vftable';
    }
    *((_QWORD *)this + 72) = v34;
    if ( !v34 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x797u);
      return 2147942414LL;
    }
  }
  v6 = *((_QWORD *)this + 90);
  v7 = v4 | 0x10;
  if ( (*(_BYTE *)(v6 + 600) & 0x20) == 0 )
    v7 = v4;
  v8 = !*(_DWORD *)(v6 + 80) && !*(_DWORD *)(v6 + 88) && !*(_DWORD *)(v6 + 84) && !*(_DWORD *)(v6 + 92);
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 560) )
    IsWindowArranged(*(_QWORD *)(v6 + 40));
  v9 = v7;
  if ( !v8 && (*(_BYTE *)(*((_QWORD *)this + 90) + 600LL) & 0x20) == 0 )
    v9 = v7 | 8;
  v10 = v9;
  v11 = (float *)*((_QWORD *)this + 71);
  v12 = *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 25) == 0;
  v13 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 532);
  v38 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 139);
  v14 = *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 548);
  v15 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 124);
  v36 = v13;
  v35 = v15;
  v37 = v14;
  if ( !v12 )
    v10 = v9 | 4;
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 560) )
    v10 = (unsigned int)v10 | 0x20;
  CGlassColorizationParameters::AdjustWindowColorization(&v36, &v35, v5, v10);
  v16 = (float)BYTE1(v36);
  v17 = (float)(unsigned __int8)v36;
  v18 = (float)((float)((float)BYTE2(v36) / 255.0) * 255.0) + 0.5;
  v11[7] = (float)BYTE3(v36) / 255.0;
  v11[4] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(floorf_0(v18), 255.0)] / 255.0;
  v11[5] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(
                                                          floorf_0((float)((float)(v16 / 255.0) * 255.0) + 0.5),
                                                          255.0)]
         / 255.0;
  v20 = floorf_0((float)((float)(v17 / 255.0) * 255.0) + 0.5);
  v21 = (float)SDWORD2(v36) / 100.0;
  v11[6] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(v20, 255.0)] / 255.0;
  v11[8] = v21;
  v22 = v9 & 0xFFFFFFE7 | 8;
  v12 = *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 25) == 0;
  v23 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 532);
  v24 = (float *)*((_QWORD *)this + 72);
  v25 = *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 548);
  v38 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 139);
  v26 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 124);
  v36 = v23;
  v35 = v26;
  v37 = v25;
  if ( !v12 )
    v22 |= 4u;
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 560) )
    v22 |= 0x20u;
  CGlassColorizationParameters::AdjustWindowColorization(&v36, &v35, v19, v22);
  v27 = (float)BYTE1(v36);
  v28 = (float)(unsigned __int8)v36;
  v29 = (float)((float)((float)BYTE2(v36) / 255.0) * 255.0) + 0.5;
  v24[7] = (float)BYTE3(v36) / 255.0;
  v24[4] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(floorf_0(v29), 255.0)] / 255.0;
  v24[5] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(
                                                          floorf_0((float)((float)(v27 / 255.0) * 255.0) + 0.5),
                                                          255.0)]
         / 255.0;
  v30 = floorf_0((float)((float)(v28 / 255.0) * 255.0) + 0.5);
  v31 = (float)SDWORD2(v36) / 100.0;
  v24[6] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(v30, 255.0)] / 255.0;
  v24[8] = v31;
  return 0LL;
}
