/*
 * XREFs of DxgkDdiGetDeviceLocation @ 0x1C02102BC
 * Callers:
 *     ?DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z @ 0x1C0050DA0 (-DpiDdiGetDeviceLocation@@YAXPEAXGPEAGPEAE2@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C003C540 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?GetDeviceLocation@ADAPTER_RENDER@@QEAAXW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETDEVICELOCATION@@@Z @ 0x1C020EF3C (-GetDeviceLocation@ADAPTER_RENDER@@QEAAXW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETDEVICELOCATION@@.c)
 */

void __fastcall DxgkDdiGetDeviceLocation(_QWORD *a1, int a2, unsigned __int16 a3, _WORD *a4, _BYTE *a5, _BYTE *a6)
{
  __int64 v7; // rcx
  int v9; // ebp
  bool v10; // zf
  unsigned __int8 v11; // al
  int v12; // [rsp+28h] [rbp-70h]
  int v13; // [rsp+30h] [rbp-68h]
  int v14; // [rsp+38h] [rbp-60h]
  int v15; // [rsp+40h] [rbp-58h]
  __int64 v16; // [rsp+50h] [rbp-48h] BYREF
  __int64 v17; // [rsp+58h] [rbp-40h]

  v7 = a1[320];
  v9 = a3;
  v16 = a3;
  v17 = 0LL;
  ADAPTER_RENDER::GetDeviceLocation(v7, a2, (unsigned int *)&v16);
  v10 = bTracingEnabled == 0;
  *a4 = WORD2(v16);
  *a5 = v17;
  v11 = BYTE4(v17);
  *a6 = BYTE4(v17);
  if ( !v10 )
  {
    v15 = v11;
    v14 = (unsigned __int8)*a5;
    v13 = (unsigned __int16)*a4;
    v12 = v9;
    VgpuTrace(1, 0, a1, L"DxgkDdiGetDeviceLocation", (wchar_t *)L"%d %d %d %d", v12, v13, v14, v15);
  }
}
