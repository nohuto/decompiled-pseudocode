/*
 * XREFs of ?GetPhysicalImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA?AURect@Foundation@Windows@@XZ @ 0x1800772E0
 * Callers:
 *     ?_get_ImageLocationInternal@CSplashScreen@@AEAA?AURect@Foundation@Windows@@XZ @ 0x18003AD58 (-_get_ImageLocationInternal@CSplashScreen@@AEAA-AURect@Foundation@Windows@@XZ.c)
 * Callees:
 *     ?_CenterImageWithRounding@CBasicSplashScreenLayout@SplashScreen@@KA?AURect@Foundation@Windows@@AEBUSize@45@AEBU345@@Z @ 0x1800272C8 (-_CenterImageWithRounding@CBasicSplashScreenLayout@SplashScreen@@KA-AURect@Foundation@Windows@@A.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__m128i *__fastcall SplashScreen::CBasicSplashScreenLayout::GetPhysicalImageLocation(__int64 a1, __m128i *a2)
{
  int v4; // eax
  int v5; // edx
  int v6; // esi
  int v7; // eax
  int v8; // edx
  float v9; // xmm6_4
  float v10; // xmm1_4
  __m128i v11; // xmm0
  __m128i *result; // rax
  float v13; // xmm6_4
  float v14; // xmm1_4
  _BYTE v15[16]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  float v17; // [rsp+38h] [rbp-30h]
  float v18; // [rsp+3Ch] [rbp-2Ch]

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  v5 = *(_DWORD *)(a1 + 24);
  v16 = 0LL;
  v6 = v4;
  v7 = MulDiv(300, v5, 100);
  v8 = *(_DWORD *)(a1 + 24);
  v9 = (float)v7;
  v18 = (float)v7;
  v10 = (float)MulDiv(620, v8, 100);
  v17 = v10;
  if ( v6 == 1 )
  {
    v13 = v9 * 0.75;
    v14 = v10 * 0.75;
    goto LABEL_5;
  }
  if ( !v6 )
  {
    v13 = v9 * 0.5;
    v14 = v10 * 0.5;
LABEL_5:
    v17 = v14;
    v18 = v13;
  }
  v11 = _mm_loadu_si128((const __m128i *)SplashScreen::CBasicSplashScreenLayout::_CenterImageWithRounding(
                                           (__int64)v15,
                                           (float *)(a1 + 8),
                                           (__int64)&v16));
  result = a2;
  *a2 = v11;
  return result;
}
