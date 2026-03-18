/*
 * XREFs of DpiIovGetBackingResource @ 0x1C026DC70
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C0042E3C (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C0042F78 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0049F4C (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiGetBackingResource @ 0x1C01E0868 (DxgkDdiGetBackingResource.c)
 *     DxgkDdiGetResourceForBar @ 0x1C01E0AF4 (DxgkDdiGetResourceForBar.c)
 *     DxgkDdiQueryVirtualFunctionIndexByLuid @ 0x1C01E0F7C (DxgkDdiQueryVirtualFunctionIndexByLuid.c)
 */

__int64 __fastcall DpiIovGetBackingResource(_DWORD *a1, struct _LUID a2, unsigned __int16 a3, __int64 a4, void *a5)
{
  _QWORD *v5; // r14
  int VirtualGpuType; // r15d
  unsigned int v9; // ebx
  __int64 v10; // rsi
  _DWORD v12[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h]
  __int64 v14; // [rsp+40h] [rbp-20h]
  _BYTE v15[8]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]
  int BackingResource; // [rsp+58h] [rbp-8h]
  struct _LUID v18; // [rsp+98h] [rbp+38h] BYREF

  v18 = a2;
  v5 = a5;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_DWORD *)(a4 + 16) = 0;
  *v5 = 0LL;
  VirtualGpuType = DpiGetVirtualGpuType(a1, &a5);
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v15, a5, 0LL, 1);
  v9 = BackingResource;
  if ( BackingResource >= 0 )
  {
    v10 = v16;
    BackingResource = DxgkDdiQueryVirtualFunctionIndexByLuid(*(_QWORD **)(v16 + 3792), VirtualGpuType, &v18, &a5);
    v9 = BackingResource;
    if ( BackingResource >= 0 )
    {
      if ( !*(_BYTE *)(v10 + 2620) || *(_QWORD *)(v10 + 5176) )
      {
        v13 = a4;
        v14 = 0LL;
        v12[0] = (unsigned __int16)a5;
        v12[1] = a3;
        BackingResource = DxgkDdiGetBackingResource(*(_QWORD **)(v10 + 3792), VirtualGpuType, (__int64)v12);
        v9 = BackingResource;
        if ( BackingResource >= 0 )
          *v5 = v14;
      }
      else
      {
        BackingResource = DxgkDdiGetResourceForBar(
                            *(_QWORD **)(v10 + 3792),
                            VirtualGpuType,
                            (unsigned __int16)a5,
                            a3,
                            a4);
        v9 = BackingResource;
        if ( BackingResource >= 0 )
        {
          *v5 = *(_QWORD *)(a4 + 4);
          *(_QWORD *)a4 = 0LL;
          *(_QWORD *)(a4 + 8) = 0LL;
          *(_DWORD *)(a4 + 16) = 0;
        }
      }
    }
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v15);
  return v9;
}
