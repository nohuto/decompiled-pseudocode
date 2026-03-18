/*
 * XREFs of ?UnmapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX0@Z @ 0x1C00B88C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0001304 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0001384 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00013D8 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001448 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0059484 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::UnmapViewOfAllocationExternal(
        VIDMM_RECYCLE_HEAP_MGR *this,
        _QWORD *a2,
        GUID *a3)
{
  VIDMM_RECYCLE_HEAP_MGR *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  void *v8; // rbx
  void *v9; // rax
  __int64 CurrentProcess; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  if ( a2[5] - a2[4] <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(v5, 0) )
  {
    CurrentProcess = PsGetCurrentProcess(v7, v6);
    MmUnmapViewOfSection(CurrentProcess, a3);
  }
  else
  {
    v8 = *(void **)(a2[10] + 56LL);
    v9 = (void *)PsGetCurrentProcess(v7, v6);
    VidMmUnmapViewAsync(v9, v8, a3);
  }
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
}
