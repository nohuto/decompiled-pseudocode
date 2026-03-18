/*
 * XREFs of DxgkGetSetSwapChainMetadata @ 0x1C0253960
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C025223C (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 */

__int64 __fastcall DxgkGetSetSwapChainMetadata(ULONG64 a1, __int64 a2, const GUID *a3)
{
  struct _D3DKMT_GETSETSWAPCHAINMETADATA *v4; // rax
  HANDLE hNtSwapChain; // rsi
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  const GUID *v13; // r8
  PVOID v15; // rsi
  _DWORD *v16; // r8
  int v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+38h] [rbp-40h]
  char v19; // [rsp+40h] [rbp-38h]
  struct _D3DKMT_GETSETSWAPCHAINMETADATA Handle; // [rsp+48h] [rbp-30h] BYREF
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  v17 = -1;
  v18 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v19 = 1;
    v17 = 2121;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2121);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v17, 2121);
  v4 = (struct _D3DKMT_GETSETSWAPCHAINMETADATA *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (struct _D3DKMT_GETSETSWAPCHAINMETADATA *)MmUserProbeAddress;
  Handle = *v4;
  hNtSwapChain = Handle.hNtSwapChain;
  v6 = ObReferenceObjectByHandle(Handle.hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  v10 = v6;
  if ( v6 >= 0 )
  {
    v15 = Object;
    LODWORD(v10) = SwapChainGetSetMetaDataInternal(*(struct DXGSWAPCHAIN **)Object, &Handle, 0, 1);
    if ( (int)v10 >= 0 )
    {
      v16 = (_DWORD *)(a1 + 32);
      if ( a1 + 32 >= MmUserProbeAddress )
        v16 = (_DWORD *)MmUserProbeAddress;
      *v16 = Handle.DataCopied;
    }
    ObfDereferenceObject(v15);
  }
  else
  {
    v11 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v11 + 24) = hNtSwapChain;
    *(_QWORD *)(v11 + 32) = v10;
    WdLogEvent5_WdWarning(v11);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v12, &EventProfilerExit, v13, v17);
  return (unsigned int)v10;
}
