/*
 * XREFs of ?CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z @ 0x1C008044C
 * Callers:
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C00802B8 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002940 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C001452C (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z @ 0x1C00804DC (-Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z.c)
 *     ??0VIDMM_RECYCLE_BLOCK@@QEAA@PEAVVIDMM_RECYCLE_HEAP@@@Z @ 0x1C0080714 (--0VIDMM_RECYCLE_BLOCK@@QEAA@PEAVVIDMM_RECYCLE_HEAP@@@Z.c)
 */

struct VIDMM_RECYCLE_BLOCK *__fastcall VIDMM_RECYCLE_HEAP::CreateBlockForType(
        VIDMM_RECYCLE_HEAP *this,
        unsigned __int64 a2,
        unsigned __int8 a3)
{
  VIDMM_RECYCLE_BLOCK *v6; // rax
  __int64 v7; // rcx
  VIDMM_RECYCLE_BLOCK *v8; // rbx
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rax

  v6 = (VIDMM_RECYCLE_BLOCK *)operator new[](0x90uLL, 0x31316956u, PagedPool);
  if ( v6 )
    v8 = VIDMM_RECYCLE_BLOCK::VIDMM_RECYCLE_BLOCK(v6, this);
  else
    v8 = 0LL;
  if ( v8 )
  {
    if ( *((_BYTE *)this + 16) )
      a2 = (a2 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
    if ( (int)VIDMM_RECYCLE_BLOCK::Allocate(v8, a2, a3) >= 0 )
      return v8;
    _InterlockedIncrement(&dword_1C004E5F4);
    v12 = WdLogNewEntry5_WdLowResource(v9);
    *(_QWORD *)(v12 + 24) = 9445LL;
    WdLogEvent5_WdLowResource(v12);
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v8);
  }
  else
  {
    _InterlockedIncrement(&dword_1C004E5F4);
    v11 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v11 + 24) = 9427LL;
    WdLogEvent5_WdLowResource(v11);
  }
  return 0LL;
}
