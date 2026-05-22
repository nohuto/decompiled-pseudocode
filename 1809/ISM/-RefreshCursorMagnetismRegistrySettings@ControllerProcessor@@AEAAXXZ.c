/*
 * XREFs of ?RefreshCursorMagnetismRegistrySettings@ControllerProcessor@@AEAAXXZ @ 0x180037384
 * Callers:
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180033244 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     _lambda_828562b8234057b7c70d01bfff3fe312_::_lambda_invoker_cdecl_ @ 0x180033840 (_lambda_828562b8234057b7c70d01bfff3fe312_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?ConvertDIPSToPixels@ControllerProcessor@@AEAAKAEBK@Z @ 0x180037078 (-ConvertDIPSToPixels@ControllerProcessor@@AEAAKAEBK@Z.c)
 */

void __fastcall ControllerProcessor::RefreshCursorMagnetismRegistrySettings(ControllerProcessor *this)
{
  LSTATUS ValueW; // eax
  unsigned int v3; // ecx
  LSTATUS v4; // eax
  unsigned int v5; // ecx
  LSTATUS v6; // eax
  unsigned int v7; // ecx
  LSTATUS v8; // eax
  unsigned int v9; // edi
  LSTATUS v10; // eax
  int v11; // ebx
  LSTATUS v12; // eax
  unsigned int v13; // ecx
  LSTATUS v14; // eax
  DWORD v15; // ecx
  LSTATUS v16; // eax
  DWORD v17; // ecx
  __m128 v18; // xmm7
  __m128 v19; // xmm6
  int v20; // eax
  __int64 v21; // rax
  unsigned int v22[4]; // [rsp+40h] [rbp-38h] BYREF
  DWORD pcbData; // [rsp+C0h] [rbp+48h] BYREF
  unsigned int pvData; // [rsp+C8h] [rbp+50h] BYREF
  unsigned int v25; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v26; // [rsp+D8h] [rbp+60h] BYREF

  pcbData = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorMagnetism",
             L"VelocityInDIPSPerSecond",
             0x10u,
             0LL,
             &pvData,
             &pcbData);
  v3 = pvData;
  pcbData = 4;
  if ( ValueW )
    v3 = 360;
  v25 = v3;
  v4 = RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorMagnetism",
         L"DistanceThresholdInDIPS",
         0x10u,
         0LL,
         &pvData,
         &pcbData);
  v5 = pvData;
  pcbData = 4;
  if ( v4 )
    v5 = 40;
  v26 = v5;
  v6 = RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorMagnetism",
         L"AttractionRectInsetInDIPS",
         0x10u,
         0LL,
         &pvData,
         &pcbData);
  v7 = pvData;
  pcbData = 4;
  if ( v6 )
    v7 = 5;
  v22[0] = v7;
  v8 = RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorMagnetism",
         L"MagnetismDelayInMilliseconds",
         0x10u,
         0LL,
         &pvData,
         &pcbData);
  v9 = pvData;
  pcbData = 4;
  if ( v8 )
    v9 = 50;
  v10 = RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorMagnetism",
          L"MagnetismUpdateIntervalInMilliseconds",
          0x10u,
          0LL,
          &pvData,
          &pcbData);
  v11 = pvData;
  pcbData = 4;
  if ( v10 )
    v11 = 16;
  v12 = RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorMagnetism",
          L"ClosestInteractiveBoundsUpdateIntervalInMilliseconds",
          0x10u,
          0LL,
          &pvData,
          &pcbData);
  v13 = pvData;
  pcbData = 4;
  if ( v12 )
    v13 = 100;
  *((_QWORD *)this + 863) = v13;
  v14 = RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorMagnetism",
          L"SearchWidthInDIPS",
          0x10u,
          0LL,
          &pvData,
          &pcbData);
  v15 = pvData;
  if ( v14 )
    v15 = 100;
  pcbData = v15;
  *((_DWORD *)this + 1728) = ControllerProcessor::ConvertDIPSToPixels(this, &pcbData);
  pcbData = 4;
  v16 = RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\CursorMagnetism",
          L"SearchHeightInDIPS",
          0x10u,
          0LL,
          &pvData,
          &pcbData);
  v17 = pvData;
  if ( v16 )
    v17 = 100;
  pcbData = v17;
  *((_DWORD *)this + 1729) = ControllerProcessor::ConvertDIPSToPixels(this, &pcbData);
  v18 = 0LL;
  v18.m128_f32[0] = (float)(int)ControllerProcessor::ConvertDIPSToPixels(this, &v25) * (float)((float)v11 / 1000.0);
  v19 = 0LL;
  v19.m128_f32[0] = (float)(int)ControllerProcessor::ConvertDIPSToPixels(this, &v26);
  v20 = ControllerProcessor::ConvertDIPSToPixels(this, v22);
  *((_QWORD *)this + 846) = _mm_unpacklo_ps(v18, v19).m128_u64[0];
  *((_DWORD *)this + 1694) = v20;
  *((_QWORD *)this + 860) = 10000LL * v9;
  v21 = 10000LL * *((_QWORD *)this + 863);
  *((_QWORD *)this + 861) = 10000LL * (unsigned int)v11;
  *((_QWORD *)this + 862) = v21;
}
