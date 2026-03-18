/*
 * XREFs of ?GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEAPEAX@Z @ 0x1C01D8D48
 * Callers:
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C010D030 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C00F88FC (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 */

__int64 __fastcall DXGDEVICE::GetStandardAllocationDriverData(
        DXGDEVICE *this,
        enum _D3DKMDT_STANDARDALLOCATION_TYPE a2,
        D3DKMDT_SHAREDPRIMARYSURFACEDATA *a3,
        unsigned int *a4,
        void **a5)
{
  ADAPTER_RENDER *v8; // rcx
  PVOID v9; // rsi
  const GUID *v10; // r8
  int StandardAllocationDriverData; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  PVOID v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  const GUID *v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  ADAPTER_RENDER *v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v28; // [rsp+20h] [rbp-30h] BYREF

  memset(&v28, 0, sizeof(v28));
  v8 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v9 = 0LL;
  v28.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
  v28.pCreateSharedPrimarySurfaceData = a3;
  StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v8, &v28, v10);
  v13 = StandardAllocationDriverData;
  if ( StandardAllocationDriverData < 0 )
  {
    v14 = WdLogNewEntry5_WdError(v12);
LABEL_3:
    *(_QWORD *)(v14 + 32) = v13;
    *(_QWORD *)(v14 + 24) = this;
    WdLogEvent5_WdError(v14);
    return (unsigned int)v13;
  }
  if ( !v28.AllocationPrivateDriverDataSize && !v28.ResourcePrivateDriverDataSize )
  {
    v14 = WdLogNewEntry5_WdError(v12);
    v13 = -1073741823LL;
    goto LABEL_3;
  }
  v15 = operator new(v28.AllocationPrivateDriverDataSize, 0x4B677844u, PagedPool);
  *a5 = v15;
  if ( !v15 )
  {
    v19 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    LODWORD(v13) = -1073741801;
    *(_QWORD *)(v19 + 24) = v28.AllocationPrivateDriverDataSize;
    *(_QWORD *)(v19 + 32) = -1073741801LL;
LABEL_9:
    WdLogEvent5_WdWarning(v19);
    goto LABEL_16;
  }
  if ( v28.ResourcePrivateDriverDataSize )
  {
    v9 = operator new(v28.ResourcePrivateDriverDataSize, 0x4B677844u, PagedPool);
    if ( !v9 )
    {
      v22 = WdLogNewEntry5_WdWarning(v21, v20, v18);
      LODWORD(v13) = -1073741801;
      *(_QWORD *)(v22 + 24) = v28.ResourcePrivateDriverDataSize;
      v19 = v22;
      *(_QWORD *)(v22 + 32) = -1073741801LL;
      goto LABEL_9;
    }
  }
  v23 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v28.pAllocationPrivateDriverData = *a5;
  v28.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
  v28.pCreateSharedPrimarySurfaceData = a3;
  v28.pResourcePrivateDriverData = v9;
  v24 = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v23, &v28, v18);
  v13 = v24;
  if ( v24 >= 0 )
  {
    *a4 = v28.AllocationPrivateDriverDataSize;
  }
  else
  {
    v26 = WdLogNewEntry5_WdAssertion(v25);
    *(_QWORD *)(v26 + 24) = this;
    *(_QWORD *)(v26 + 32) = v13;
    WdLogEvent5_WdAssertion(v26);
  }
LABEL_16:
  operator delete[](v9);
  if ( (int)v13 < 0 )
    operator delete[](*a5);
  return (unsigned int)v13;
}
