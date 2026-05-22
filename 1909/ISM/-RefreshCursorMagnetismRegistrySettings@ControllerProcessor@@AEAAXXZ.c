/*
 * XREFs of ?RefreshCursorMagnetismRegistrySettings@ControllerProcessor@@AEAAXXZ @ 0x180076B18
 * Callers:
 *     _lambda_828562b8234057b7c70d01bfff3fe312_::_lambda_invoker_cdecl_ @ 0x180074130 (_lambda_828562b8234057b7c70d01bfff3fe312_--_lambda_invoker_cdecl_.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180075F1C (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 * Callees:
 *     _lambda_9421d204e635201636d0a16c341872b8_::operator() @ 0x180074C24 (_lambda_9421d204e635201636d0a16c341872b8_--operator().c)
 *     ?ConvertDIPSToPixels@ControllerProcessor@@AEAAKAEBK@Z @ 0x180075B64 (-ConvertDIPSToPixels@ControllerProcessor@@AEAAKAEBK@Z.c)
 */

void __fastcall ControllerProcessor::RefreshCursorMagnetismRegistrySettings(ControllerProcessor *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rcx
  __m128 v11; // xmm7
  __m128 v12; // xmm6
  int v13; // eax
  __int64 v14; // rax
  unsigned int v15; // [rsp+70h] [rbp+28h] BYREF
  unsigned int v16; // [rsp+78h] [rbp+30h] BYREF
  unsigned int v17; // [rsp+80h] [rbp+38h] BYREF
  unsigned int v18; // [rsp+88h] [rbp+40h] BYREF

  v15 = 360;
  v16 = lambda_9421d204e635201636d0a16c341872b8_::operator()((__int64)this, L"VelocityInDIPSPerSecond", &v15);
  v15 = 40;
  v17 = lambda_9421d204e635201636d0a16c341872b8_::operator()(v2, L"DistanceThresholdInDIPS", &v15);
  v15 = 5;
  v18 = lambda_9421d204e635201636d0a16c341872b8_::operator()(v3, L"AttractionRectInsetInDIPS", &v15);
  v15 = 50;
  v5 = (unsigned int)lambda_9421d204e635201636d0a16c341872b8_::operator()(v4, L"MagnetismDelayInMilliseconds", &v15);
  v15 = 16;
  v7 = (unsigned int)lambda_9421d204e635201636d0a16c341872b8_::operator()(
                       v6,
                       L"MagnetismUpdateIntervalInMilliseconds",
                       &v15);
  v15 = 100;
  v9 = lambda_9421d204e635201636d0a16c341872b8_::operator()(
         v8,
         L"ClosestInteractiveBoundsUpdateIntervalInMilliseconds",
         &v15);
  *((_QWORD *)this + 1411) = v9;
  v15 = 100;
  v15 = lambda_9421d204e635201636d0a16c341872b8_::operator()(v9, L"SearchWidthInDIPS", &v15);
  *((_DWORD *)this + 2824) = ControllerProcessor::ConvertDIPSToPixels(this, &v15);
  v15 = 100;
  v15 = lambda_9421d204e635201636d0a16c341872b8_::operator()(v10, L"SearchHeightInDIPS", &v15);
  *((_DWORD *)this + 2825) = ControllerProcessor::ConvertDIPSToPixels(this, &v15);
  v11 = 0LL;
  v11.m128_f32[0] = (float)(int)ControllerProcessor::ConvertDIPSToPixels(this, &v16) * (float)((float)(int)v7 / 1000.0);
  v12 = 0LL;
  v12.m128_f32[0] = (float)(int)ControllerProcessor::ConvertDIPSToPixels(this, &v17);
  v13 = ControllerProcessor::ConvertDIPSToPixels(this, &v18);
  *((_QWORD *)this + 1394) = _mm_unpacklo_ps(v11, v12).m128_u64[0];
  *((_DWORD *)this + 2790) = v13;
  *((_QWORD *)this + 1408) = 10000 * v5;
  v14 = 10000LL * *((_QWORD *)this + 1411);
  *((_QWORD *)this + 1409) = 10000 * v7;
  *((_QWORD *)this + 1410) = v14;
}
