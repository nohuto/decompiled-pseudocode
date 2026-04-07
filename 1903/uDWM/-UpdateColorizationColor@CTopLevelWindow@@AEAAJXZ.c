/*
 * XREFs of ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001CB10
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001B210 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18001E9C0 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x1800379E8 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18001D0D0 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004E888 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     floorf_0 @ 0x18004FD86 (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateColorizationColor(CTopLevelWindow *this)
{
  int v1; // esi
  __int64 v3; // rax
  int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // rcx
  int v7; // esi
  bool v8; // bp
  unsigned int v9; // ebx
  __int64 v10; // r9
  float *v11; // rsi
  bool v12; // zf
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  float v15; // xmm6_4
  float v16; // xmm7_4
  float v17; // xmm0_4
  __int64 v18; // r8
  float v19; // xmm0_4
  float v20; // xmm1_4
  unsigned int v21; // ebx
  int v22; // eax
  __int128 v23; // xmm1
  float *v24; // rdi
  float v25; // xmm6_4
  float v26; // xmm7_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  __int64 v31; // rax
  __int64 v32; // rax
  void *v33; // [rsp+28h] [rbp-A0h]
  int v34; // [rsp+30h] [rbp-98h] BYREF
  __int128 v35; // [rsp+38h] [rbp-90h] BYREF
  __int128 v36; // [rsp+48h] [rbp-80h]

  v1 = *((_DWORD *)this + 146);
  v3 = *((_QWORD *)this + 90);
  if ( (v1 & 0x40) != 0 || (*(_BYTE *)(v3 + 607) & 0x10) != 0 )
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
  if ( (*(_BYTE *)(v3 + 609) & 2) != 0 )
    v4 |= 0x80u;
  IsOpenThemeDataPresent();
  if ( !*((_QWORD *)this + 71) )
  {
    v31 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            40LL);
    if ( v31 )
    {
      *(_DWORD *)(v31 + 8) = 1;
      *(_QWORD *)v31 = &CGlassColorizationResources::`vftable';
    }
    *((_QWORD *)this + 71) = v31;
    if ( !v31 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x779u, v33);
      return 2147942414LL;
    }
  }
  if ( !*((_QWORD *)this + 72) )
  {
    v32 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            40LL);
    if ( v32 )
    {
      *(_DWORD *)(v32 + 8) = 1;
      *(_QWORD *)v32 = &CGlassColorizationResources::`vftable';
    }
    *((_QWORD *)this + 72) = v32;
    if ( !v32 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x77Eu, v33);
      return 2147942414LL;
    }
  }
  v6 = *((_QWORD *)this + 90);
  v7 = v4 | 0x10;
  if ( (*(_BYTE *)(v6 + 608) & 0x20) == 0 )
    v7 = v4;
  v8 = !*(_DWORD *)(v6 + 80) && !*(_DWORD *)(v6 + 88) && !*(_DWORD *)(v6 + 84) && !*(_DWORD *)(v6 + 92);
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 564) )
    IsWindowArranged(*(_QWORD *)(v6 + 40));
  v9 = v7;
  if ( !v8 && (((v7 & 0x80u) == 0) & (unsigned __int8)~(*(_BYTE *)(*((_QWORD *)this + 90) + 608LL) >> 5)) != 0 )
    v9 = v7 | 8;
  v10 = v9;
  v11 = (float *)*((_QWORD *)this + 71);
  v12 = *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 25) == 0;
  v13 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 532);
  v14 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 548);
  v34 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 124);
  v35 = v13;
  v36 = v14;
  if ( !v12 )
    v10 = v9 | 4;
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 564) )
    v10 = (unsigned int)v10 | 0x20;
  CGlassColorizationParameters::AdjustWindowColorization(&v35, &v34, v5, v10);
  v15 = (float)BYTE1(v35);
  v16 = (float)(unsigned __int8)v35;
  v17 = (float)((float)((float)BYTE2(v35) / 255.0) * 255.0) + 0.5;
  v11[7] = (float)BYTE3(v35) / 255.0;
  v11[4] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(floorf_0(v17), 255.0)] / 255.0;
  v11[5] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(
                                                          floorf_0((float)((float)(v15 / 255.0) * 255.0) + 0.5),
                                                          255.0)]
         / 255.0;
  v19 = floorf_0((float)((float)(v16 / 255.0) * 255.0) + 0.5);
  v20 = (float)SDWORD2(v35) / 100.0;
  v11[6] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(v19, 255.0)] / 255.0;
  v11[8] = v20;
  v21 = v9 & 0xFFFFFFE7 | 8;
  v12 = *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 25) == 0;
  v22 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 124);
  v23 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 548);
  v24 = (float *)*((_QWORD *)this + 72);
  v35 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 532);
  v34 = v22;
  v36 = v23;
  if ( !v12 )
    v21 |= 4u;
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 564) )
    v21 |= 0x20u;
  CGlassColorizationParameters::AdjustWindowColorization(&v35, &v34, v18, v21);
  v25 = (float)BYTE1(v35);
  v26 = (float)(unsigned __int8)v35;
  v27 = (float)((float)((float)BYTE2(v35) / 255.0) * 255.0) + 0.5;
  v24[7] = (float)BYTE3(v35) / 255.0;
  v24[4] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(floorf_0(v27), 255.0)] / 255.0;
  v24[5] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(
                                                          floorf_0((float)((float)(v25 / 255.0) * 255.0) + 0.5),
                                                          255.0)]
         / 255.0;
  v28 = floorf_0((float)((float)(v26 / 255.0) * 255.0) + 0.5);
  v29 = (float)SDWORD2(v35) / 100.0;
  v24[6] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(v28, 255.0)] / 255.0;
  v24[8] = v29;
  return 0LL;
}
