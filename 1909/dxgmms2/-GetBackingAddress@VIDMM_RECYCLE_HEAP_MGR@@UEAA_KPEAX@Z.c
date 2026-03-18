/*
 * XREFs of ?GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAA_KPEAX@Z @ 0x1C00822F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0001EBC (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00021D8 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002280 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z @ 0x1C0064894 (-CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z.c)
 */

unsigned __int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::GetBackingAddress(VIDMM_RECYCLE_HEAP_MGR *this, _QWORD *a2)
{
  unsigned __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  __int64 v10; // rbx
  _QWORD *v11; // rax
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v3 = a2[4];
  v4 = a2[10];
  v13 = 0LL;
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::CopyPfnArray((VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(v4 + 88), &v13, v3, v3 + 4096);
  v7 = v13;
  if ( !v13 )
  {
    v10 = a2[4];
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, v5);
    v11[7] = 0LL;
    v11[3] = 270LL;
    v11[4] = 52LL;
    v11[5] = 20LL;
    v11[6] = v10;
    WdLogEvent5_WdCriticalError(v11);
  }
  v8 = v7 << 12;
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
  return v8;
}
