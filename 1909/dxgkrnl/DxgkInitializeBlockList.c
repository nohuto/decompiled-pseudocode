/*
 * XREFs of DxgkInitializeBlockList @ 0x1C016B748
 * Callers:
 *     DpiInitializeBlockList @ 0x1C01650F0 (DpiInitializeBlockList.c)
 *     ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x1C016B34C (-InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DxgkConvertWddmVersionToD3DKMTDriverVersion @ 0x1C001F500 (DxgkConvertWddmVersionToD3DKMTDriverVersion.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C016B864 (-CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C016B9C4 (-CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 */

__int64 __fastcall DxgkInitializeBlockList(__int64 a1, int a2, GUID *a3)
{
  __int64 v3; // rbx
  unsigned int v5; // esi
  unsigned int v6; // ebp
  const unsigned __int16 *v7; // r14
  enum _QAI_DRIVERVERSION v8; // r15d
  __int64 v9; // rdx
  int v10; // edi
  __int64 v11; // rcx
  const GUID *v12; // r8
  int v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+38h] [rbp-30h]
  char v16; // [rsp+40h] [rbp-28h]

  v3 = *(_QWORD *)(a1 + 64);
  if ( !v3 || *(_DWORD *)(v3 + 16) != 1953656900 || *(_DWORD *)(v3 + 20) != 2 )
    return 3221225485LL;
  if ( a3 )
    *(_QWORD *)&a3->Data1 = v3 + 5720;
  if ( *(_BYTE *)(v3 + 5712) )
    return 0LL;
  v14 = -1;
  v15 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v16 = 1;
    v14 = 8015;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 8015);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v14, 8015LL);
  v5 = *(_DWORD *)(v3 + 1124);
  v6 = *(_DWORD *)(v3 + 1128);
  v7 = *(const unsigned __int16 **)(v3 + 4896);
  v8 = (unsigned int)DxgkConvertWddmVersionToD3DKMTDriverVersion(a2);
  v10 = CheckKernelBlockList((struct _FDO_CONTEXT *)v3, v5, v6, v7, v8);
  if ( v10 >= 0 )
  {
    v10 = CheckRuntimeBlockList((struct _FDO_CONTEXT *)v3, v5, v6, v7, v8);
    if ( v10 >= 0 )
      *(_BYTE *)(v3 + 5712) = 1;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14, v9);
  if ( v16 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v11, &EventProfilerExit, v12, v14);
  }
  return (unsigned int)v10;
}
