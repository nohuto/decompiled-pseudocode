/*
 * XREFs of ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001CA20
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18001A6B0 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001B120 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180037228 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18001CFE0 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004E738 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     floorf_0 @ 0x18004FAD6 (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateColorizationColor(CTopLevelWindow *this, __int64 a2)
{
  int v2; // esi
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // esi
  bool v9; // bp
  unsigned int v10; // ebx
  __int64 v11; // r9
  float *v12; // rsi
  bool v13; // zf
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  float v16; // xmm6_4
  float v17; // xmm7_4
  float v18; // xmm0_4
  __int64 v19; // r8
  float v20; // xmm0_4
  float v21; // xmm1_4
  unsigned int v22; // ebx
  int v23; // eax
  __int128 v24; // xmm1
  float *v25; // rdi
  float v26; // xmm6_4
  float v27; // xmm7_4
  float v28; // xmm0_4
  float v29; // xmm0_4
  float v30; // xmm1_4
  __int64 v32; // rax
  __int64 v33; // rax
  void *v34; // [rsp+28h] [rbp-A0h]
  int v35; // [rsp+30h] [rbp-98h] BYREF
  __int128 v36; // [rsp+38h] [rbp-90h] BYREF
  __int128 v37; // [rsp+48h] [rbp-80h]

  v2 = *((_DWORD *)this + 146);
  v4 = *((_QWORD *)this + 90);
  if ( (v2 & 0x40) != 0 || (*(_BYTE *)(v4 + 607) & 0x10) != 0 )
    v5 = 1;
  else
    v5 = 2;
  if ( *(_DWORD *)(v4 + 80) == 0x7FFFFFFF
    && *(_DWORD *)(v4 + 84) == 0x7FFFFFFF
    && *(_DWORD *)(v4 + 88) == 0x7FFFFFFF
    && *(_DWORD *)(v4 + 92) == 0x7FFFFFFF )
  {
    v5 |= 0x40u;
  }
  if ( (*(_BYTE *)(v4 + 609) & 2) != 0 )
    v5 |= 0x80u;
  IsOpenThemeDataPresent(this, a2);
  if ( !*((_QWORD *)this + 71) )
  {
    v32 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            40LL);
    if ( v32 )
    {
      *(_DWORD *)(v32 + 8) = 1;
      *(_QWORD *)v32 = &CGlassColorizationResources::`vftable';
    }
    *((_QWORD *)this + 71) = v32;
    if ( !v32 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x777u, v34);
      return 2147942414LL;
    }
  }
  if ( !*((_QWORD *)this + 72) )
  {
    v33 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            40LL);
    if ( v33 )
    {
      *(_DWORD *)(v33 + 8) = 1;
      *(_QWORD *)v33 = &CGlassColorizationResources::`vftable';
    }
    *((_QWORD *)this + 72) = v33;
    if ( !v33 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x77Cu, v34);
      return 2147942414LL;
    }
  }
  v7 = *((_QWORD *)this + 90);
  v8 = v5 | 0x10;
  if ( (*(_BYTE *)(v7 + 608) & 0x20) == 0 )
    v8 = v5;
  v9 = !*(_DWORD *)(v7 + 80) && !*(_DWORD *)(v7 + 88) && !*(_DWORD *)(v7 + 84) && !*(_DWORD *)(v7 + 92);
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 564) )
    IsWindowArranged(*(_QWORD *)(v7 + 40));
  v10 = v8;
  if ( !v9 && (((v8 & 0x80u) == 0) & (unsigned __int8)~(*(_BYTE *)(*((_QWORD *)this + 90) + 608LL) >> 5)) != 0 )
    v10 = v8 | 8;
  v11 = v10;
  v12 = (float *)*((_QWORD *)this + 71);
  v13 = *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 25) == 0;
  v14 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 532);
  v15 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 548);
  v35 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 124);
  v36 = v14;
  v37 = v15;
  if ( !v13 )
    v11 = v10 | 4;
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 564) )
    v11 = (unsigned int)v11 | 0x20;
  CGlassColorizationParameters::AdjustWindowColorization(&v36, &v35, v6, v11);
  v16 = (float)BYTE1(v36);
  v17 = (float)(unsigned __int8)v36;
  v18 = (float)((float)((float)BYTE2(v36) / 255.0) * 255.0) + 0.5;
  v12[7] = (float)BYTE3(v36) / 255.0;
  v12[4] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(floorf_0(v18), 255.0)] / 255.0;
  v12[5] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(
                                                          floorf_0((float)((float)(v16 / 255.0) * 255.0) + 0.5),
                                                          255.0)]
         / 255.0;
  v20 = floorf_0((float)((float)(v17 / 255.0) * 255.0) + 0.5);
  v21 = (float)SDWORD2(v36) / 100.0;
  v12[6] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(v20, 255.0)] / 255.0;
  v12[8] = v21;
  v22 = v10 & 0xFFFFFFE7 | 8;
  v13 = *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 25) == 0;
  v23 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 124);
  v24 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 548);
  v25 = (float *)*((_QWORD *)this + 72);
  v36 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 532);
  v35 = v23;
  v37 = v24;
  if ( !v13 )
    v22 |= 4u;
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 564) )
    v22 |= 0x20u;
  CGlassColorizationParameters::AdjustWindowColorization(&v36, &v35, v19, v22);
  v26 = (float)BYTE1(v36);
  v27 = (float)(unsigned __int8)v36;
  v28 = (float)((float)((float)BYTE2(v36) / 255.0) * 255.0) + 0.5;
  v25[7] = (float)BYTE3(v36) / 255.0;
  v25[4] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(floorf_0(v28), 255.0)] / 255.0;
  v25[5] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(
                                                          floorf_0((float)((float)(v26 / 255.0) * 255.0) + 0.5),
                                                          255.0)]
         / 255.0;
  v29 = floorf_0((float)((float)(v27 / 255.0) * 255.0) + 0.5);
  v30 = (float)SDWORD2(v36) / 100.0;
  v25[6] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)(int)fminf(v29, 255.0)] / 255.0;
  v25[8] = v30;
  return 0LL;
}
