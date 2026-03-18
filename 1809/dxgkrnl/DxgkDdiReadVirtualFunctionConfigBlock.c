/*
 * XREFs of DxgkDdiReadVirtualFunctionConfigBlock @ 0x1C01E11D0
 * Callers:
 *     ?DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z @ 0x1C0049C60 (-DpiDdiReadVirtualFunctionConfigBlock@@YAJPEAXGK0K@Z.c)
 * Callees:
 *     ?ReadVirtualFunctionConfigBlock@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_READVIRTUALFUNCTIONCONFIGBLOCK@@@Z @ 0x1C01E00C8 (-ReadVirtualFunctionConfigBlock@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_READVI.c)
 *     ?VgpuTraceFrequentRead@@YAXEJPEAXPEBG1ZZ @ 0x1C01E0530 (-VgpuTraceFrequentRead@@YAXEJPEAXPEBG1ZZ.c)
 */

__int64 __fastcall DxgkDdiReadVirtualFunctionConfigBlock(
        _QWORD *a1,
        int a2,
        unsigned __int16 a3,
        int a4,
        __int64 a5,
        int a6)
{
  __int64 v7; // rcx
  int v9; // ebp
  unsigned int VirtualFunctionConfigBlock; // ebx
  int v12; // [rsp+28h] [rbp-40h]
  int v13; // [rsp+30h] [rbp-38h]
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  int v16; // [rsp+48h] [rbp-20h]
  int v17; // [rsp+4Ch] [rbp-1Ch]
  __int64 v18; // [rsp+50h] [rbp-18h]

  v18 = 0LL;
  v7 = a1[316];
  v9 = a3;
  v15 = a5;
  v16 = a3;
  v17 = a4;
  LODWORD(v18) = a6;
  VirtualFunctionConfigBlock = ADAPTER_RENDER::ReadVirtualFunctionConfigBlock(v7, a2, (__int64)&v15);
  if ( bTracingEnabled )
  {
    v13 = a4;
    v12 = v9;
    VgpuTraceFrequentRead(
      1,
      VirtualFunctionConfigBlock,
      a1,
      L"DxgkDdiReadVirtualFunctionBlock",
      (wchar_t *)L"(VF, BlockId, Length) %d %d %d",
      v12,
      v13,
      a6);
  }
  return VirtualFunctionConfigBlock;
}
