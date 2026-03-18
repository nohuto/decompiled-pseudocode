/*
 * XREFs of ?GetStandardAllocationDriverData@DXGDEVICE@@QEAAJW4_D3DKMDT_STANDARDALLOCATION_TYPE@@PEAXPEAIPEAPEAX@Z @ 0x1C020719C
 * Callers:
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C010EAF0 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C00F09AC (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rax
  PVOID v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  const GUID *v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  ADAPTER_RENDER *v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v31; // [rsp+20h] [rbp-30h] BYREF

  memset(&v31, 0, sizeof(v31));
  v8 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v9 = 0LL;
  v31.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
  v31.pCreateSharedPrimarySurfaceData = a3;
  StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v8, &v31, v10);
  v15 = StandardAllocationDriverData;
  if ( StandardAllocationDriverData < 0 )
  {
    v16 = WdLogNewEntry5_WdError(v13, v12, v14);
LABEL_3:
    *(_QWORD *)(v16 + 32) = v15;
    *(_QWORD *)(v16 + 24) = this;
    WdLogEvent5_WdError(v16);
    return (unsigned int)v15;
  }
  if ( !v31.AllocationPrivateDriverDataSize && !v31.ResourcePrivateDriverDataSize )
  {
    v16 = WdLogNewEntry5_WdError(v13, v12, v14);
    v15 = -1073741823LL;
    goto LABEL_3;
  }
  v17 = operator new[](v31.AllocationPrivateDriverDataSize, 0x4B677844u, PagedPool);
  *a5 = v17;
  if ( !v17 )
  {
    v21 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    LODWORD(v15) = -1073741801;
    *(_QWORD *)(v21 + 24) = v31.AllocationPrivateDriverDataSize;
    *(_QWORD *)(v21 + 32) = -1073741801LL;
LABEL_9:
    WdLogEvent5_WdWarning(v21);
    goto LABEL_16;
  }
  if ( v31.ResourcePrivateDriverDataSize )
  {
    v9 = operator new[](v31.ResourcePrivateDriverDataSize, 0x4B677844u, PagedPool);
    if ( !v9 )
    {
      v24 = WdLogNewEntry5_WdWarning(v23, v22, v20);
      LODWORD(v15) = -1073741801;
      *(_QWORD *)(v24 + 24) = v31.ResourcePrivateDriverDataSize;
      v21 = v24;
      *(_QWORD *)(v24 + 32) = -1073741801LL;
      goto LABEL_9;
    }
  }
  v25 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v31.pAllocationPrivateDriverData = *a5;
  v31.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
  v31.pCreateSharedPrimarySurfaceData = a3;
  v31.pResourcePrivateDriverData = v9;
  v26 = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v25, &v31, v20);
  v15 = v26;
  if ( v26 >= 0 )
  {
    *a4 = v31.AllocationPrivateDriverDataSize;
  }
  else
  {
    v29 = WdLogNewEntry5_WdAssertion(v28, v27);
    *(_QWORD *)(v29 + 24) = this;
    *(_QWORD *)(v29 + 32) = v15;
    WdLogEvent5_WdAssertion(v29);
  }
LABEL_16:
  operator delete[](v9);
  if ( (int)v15 < 0 )
    operator delete[](*a5);
  return (unsigned int)v15;
}
