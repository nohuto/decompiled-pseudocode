/*
 * XREFs of DpiIovGetMmioRangeCount @ 0x1C026DDB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C0042E3C (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C0042F78 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0049F4C (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiGetMmioRangeCount @ 0x1C01E0A14 (DxgkDdiGetMmioRangeCount.c)
 *     DxgkDdiQueryVirtualFunctionIndexByLuid @ 0x1C01E0F7C (DxgkDdiQueryVirtualFunctionIndexByLuid.c)
 */

__int64 __fastcall DpiIovGetMmioRangeCount(_DWORD *a1, struct _LUID a2, __int64 a3)
{
  int VirtualGpuType; // r14d
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 v7; // xmm1_8
  unsigned __int16 v9; // [rsp+20h] [rbp-60h] BYREF
  void *v10; // [rsp+28h] [rbp-58h] BYREF
  struct _LUID v11; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v12[8]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v13; // [rsp+40h] [rbp-40h]
  int MmioRangeCount; // [rsp+48h] [rbp-38h]
  _BYTE v15[28]; // [rsp+50h] [rbp-30h] BYREF

  v11 = a2;
  VirtualGpuType = DpiGetVirtualGpuType(a1, &v10);
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v12, v10, 0LL, 1);
  v5 = MmioRangeCount;
  if ( MmioRangeCount >= 0 )
  {
    v6 = v13;
    MmioRangeCount = DxgkDdiQueryVirtualFunctionIndexByLuid(*(_QWORD **)(v13 + 3792), VirtualGpuType, &v11, &v9);
    v5 = MmioRangeCount;
    if ( MmioRangeCount >= 0 )
    {
      *(_QWORD *)&v15[16] = 0LL;
      *(_DWORD *)&v15[24] = 0;
      *(_OWORD *)v15 = v9;
      MmioRangeCount = DxgkDdiGetMmioRangeCount(*(_QWORD **)(v6 + 3792), VirtualGpuType, (unsigned int *)v15);
      v5 = MmioRangeCount;
      if ( MmioRangeCount >= 0 )
      {
        v7 = *(_QWORD *)&v15[20];
        *(_OWORD *)a3 = *(_OWORD *)&v15[4];
        *(_QWORD *)(a3 + 16) = v7;
      }
    }
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v12);
  return v5;
}
