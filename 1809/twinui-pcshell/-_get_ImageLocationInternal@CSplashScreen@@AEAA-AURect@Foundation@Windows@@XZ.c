/*
 * XREFs of ?_get_ImageLocationInternal@CSplashScreen@@AEAA?AURect@Foundation@Windows@@XZ @ 0x18002CBF8
 * Callers:
 *     ?OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z @ 0x18002CAD8 (-OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x180046628 (-OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z.c)
 *     ?get_ImageLocation@CSplashScreen@@UEAAJPEAURect@Foundation@Windows@@@Z @ 0x1801299D0 (-get_ImageLocation@CSplashScreen@@UEAAJPEAURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?GetPhysicalImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA?AURect@Foundation@Windows@@XZ @ 0x180053FE0 (-GetPhysicalImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA-AURect@Foundation@Windows@.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x1803A2DC8 (-GetLegacyModernScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@K@Z.c)
 */

__int64 __fastcall CSplashScreen::_get_ImageLocationInternal(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rbx
  int v6; // xmm1_4
  int v7; // ebx
  int v8; // eax
  int v9; // r8d
  int v11; // eax
  int v12; // ecx
  int v13; // r8d
  int v14; // eax
  int v15; // ecx
  int v16; // r8d
  int v17; // eax
  int v18; // ecx
  int v19; // r8d
  enum DEVICE_SCALE_FACTOR LegacyModernScaleFactor; // ebx
  int v21; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  int nNumerator; // [rsp+20h] [rbp-50h] BYREF
  int v31; // [rsp+24h] [rbp-4Ch] BYREF
  __int128 v32; // [rsp+28h] [rbp-48h]
  void **v33; // [rsp+38h] [rbp-38h] BYREF
  int v34; // [rsp+40h] [rbp-30h]
  int v35; // [rsp+44h] [rbp-2Ch]
  __int64 v36; // [rsp+48h] [rbp-28h]
  int nDenominator; // [rsp+50h] [rbp-20h]
  __int64 v38; // [rsp+58h] [rbp-18h] BYREF
  float v39; // [rsp+60h] [rbp-10h]
  float v40; // [rsp+64h] [rbp-Ch]

  v4 = *(_QWORD **)(a1 + 96);
  if ( !((__int64)(*(_QWORD *)(a1 + 104) - (_QWORD)v4) >> 3)
    || (v5 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 32LL))(*v4)) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 144);
  }
  GetSystemScaleFactorForWindow(v5, &nNumerator);
  GetOverrideScaleFactorForWindow(v5, &v31);
  v6 = *(_DWORD *)(a1 + 136);
  v33 = &SplashScreen::CBasicSplashScreenLayout::`vftable';
  v35 = v6;
  v38 = 0LL;
  v36 = 0LL;
  v34 = *(_DWORD *)(a1 + 132);
  nDenominator = nNumerator;
  SplashScreen::CBasicSplashScreenLayout::GetPhysicalImageLocation(&v33, &v38);
  v7 = nDenominator;
  *(float *)&v32 = (float)MulDiv((int)*(float *)&v38, 100, nDenominator);
  *((float *)&v32 + 1) = (float)MulDiv((int)*((float *)&v38 + 1), 100, v7);
  *((float *)&v32 + 2) = (float)MulDiv((int)v39, 100, v7);
  v8 = MulDiv((int)v40, 100, v7);
  v9 = v31;
  *((float *)&v32 + 3) = (float)v8;
  *(_OWORD *)a2 = v32;
  if ( v9 != 100 )
  {
    v11 = MulDiv((int)*(float *)a2, 100, v9);
    v12 = (int)*(float *)(a2 + 4);
    v13 = v31;
    *(float *)a2 = (float)v11;
    v14 = MulDiv(v12, 100, v13);
    v15 = (int)*(float *)(a2 + 8);
    v16 = v31;
    *(float *)(a2 + 4) = (float)v14;
    v17 = MulDiv(v15, 100, v16);
    v18 = (int)*(float *)(a2 + 12);
    v19 = v31;
    *(float *)(a2 + 8) = (float)v17;
    *(float *)(a2 + 12) = (float)MulDiv(v18, 100, v19);
  }
  if ( *(_BYTE *)(a1 + 168) )
  {
    LegacyModernScaleFactor = GetLegacyModernScaleFactor(nNumerator);
    v21 = MulDiv((int)*(float *)a2, nNumerator, LegacyModernScaleFactor);
    v22 = (int)*(float *)(a2 + 4);
    v23 = nNumerator;
    *(float *)a2 = (float)v21;
    v24 = MulDiv(v22, v23, LegacyModernScaleFactor);
    v25 = (int)*(float *)(a2 + 8);
    v26 = nNumerator;
    *(float *)(a2 + 4) = (float)v24;
    v27 = MulDiv(v25, v26, LegacyModernScaleFactor);
    v28 = (int)*(float *)(a2 + 12);
    v29 = nNumerator;
    *(float *)(a2 + 8) = (float)v27;
    *(float *)(a2 + 12) = (float)MulDiv(v28, v29, LegacyModernScaleFactor);
  }
  return a2;
}
