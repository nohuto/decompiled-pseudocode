/*
 * XREFs of DpiIovGetMmioRanges @ 0x1C026DE90
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C0042E3C (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C0042F78 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0049F4C (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiGetMmioRanges @ 0x1C01E0A80 (DxgkDdiGetMmioRanges.c)
 *     DxgkDdiQueryVirtualFunctionIndexByLuid @ 0x1C01E0F7C (DxgkDdiQueryVirtualFunctionIndexByLuid.c)
 */

__int64 __fastcall DpiIovGetMmioRanges(
        _DWORD *a1,
        struct _LUID a2,
        unsigned __int16 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  int VirtualGpuType; // esi
  unsigned int MmioRanges; // ebx
  __int64 v9; // rdi
  unsigned __int16 v11; // [rsp+20h] [rbp-40h] BYREF
  void *v12; // [rsp+28h] [rbp-38h] BYREF
  unsigned int v13[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+38h] [rbp-28h]
  __int64 v15; // [rsp+40h] [rbp-20h]
  _BYTE v16[8]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]
  int v18; // [rsp+58h] [rbp-8h]
  struct _LUID v19; // [rsp+88h] [rbp+28h] BYREF

  v19 = a2;
  VirtualGpuType = DpiGetVirtualGpuType(a1, &v12);
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v16, v12, 0LL, 1);
  MmioRanges = v18;
  if ( v18 >= 0 )
  {
    v9 = v17;
    v18 = DxgkDdiQueryVirtualFunctionIndexByLuid(*(_QWORD **)(v17 + 3792), VirtualGpuType, &v19, &v11);
    MmioRanges = v18;
    if ( v18 >= 0 )
    {
      v13[1] = a3;
      v15 = a5;
      v14 = (unsigned int)(a4 / 0x18);
      v13[0] = v11;
      MmioRanges = DxgkDdiGetMmioRanges(*(_QWORD **)(v9 + 3792), VirtualGpuType, v13);
      v18 = MmioRanges;
    }
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v16);
  return MmioRanges;
}
