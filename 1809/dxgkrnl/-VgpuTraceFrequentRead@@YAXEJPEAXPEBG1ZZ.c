/*
 * XREFs of ?VgpuTraceFrequentRead@@YAXEJPEAXPEBG1ZZ @ 0x1C01E0530
 * Callers:
 *     DxgkDdiReadVirtualFunctionConfig @ 0x1C01E1118 (DxgkDdiReadVirtualFunctionConfig.c)
 *     DxgkDdiReadVirtualFunctionConfigBlock @ 0x1C01E11D0 (DxgkDdiReadVirtualFunctionConfigBlock.c)
 *     DxgkDdiWriteVirtualFunctionConfig @ 0x1C01E14FC (DxgkDdiWriteVirtualFunctionConfig.c)
 *     DxgkDdiWriteVirtualFunctionConfigBlock @ 0x1C01E15B4 (DxgkDdiWriteVirtualFunctionConfigBlock.c)
 *     ?VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x1C01E6730 (-VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     McTemplateK0pzzq @ 0x1C0036090 (McTemplateK0pzzq.c)
 */

void VgpuTraceFrequentRead(char a1, int a2, void *a3, const unsigned __int16 *a4, wchar_t *Format, ...)
{
  __int64 v9; // rcx
  wchar_t *v10; // r8
  const EVENT_DESCRIPTOR *v11; // rdx
  int v12; // [rsp+30h] [rbp-248h]
  wchar_t Dst[256]; // [rsp+40h] [rbp-238h] BYREF
  va_list ArgList; // [rsp+2A8h] [rbp+30h] BYREF

  va_start(ArgList, Format);
  memset(Dst, 0, sizeof(Dst));
  v10 = Format;
  if ( Format )
    vswprintf_s(Dst, 0x100uLL, Format, ArgList);
  if ( a1 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) == 0 )
      return;
    v12 = 0;
    v11 = (const EVENT_DESCRIPTOR *)&EventGpuPartitioningStart;
  }
  else
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) == 0 )
      return;
    v12 = a2;
    v11 = (const EVENT_DESCRIPTOR *)&EventGpuPartitioningEnd;
  }
  McTemplateK0pzzq(v9, v11, (__int64)v10, a3, a4, Dst, v12);
}
