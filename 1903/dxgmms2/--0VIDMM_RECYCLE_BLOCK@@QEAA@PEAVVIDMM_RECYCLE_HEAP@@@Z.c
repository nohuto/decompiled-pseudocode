/*
 * XREFs of ??0VIDMM_RECYCLE_BLOCK@@QEAA@PEAVVIDMM_RECYCLE_HEAP@@@Z @ 0x1C0080714
 * Callers:
 *     ?CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z @ 0x1C008044C (-CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z.c)
 * Callees:
 *     ?CreateHistoryProxy@VIDMM_RECYCLE_BLOCK@@QEAAX_K@Z @ 0x1C0028AF8 (-CreateHistoryProxy@VIDMM_RECYCLE_BLOCK@@QEAAX_K@Z.c)
 */

VIDMM_RECYCLE_BLOCK *__fastcall VIDMM_RECYCLE_BLOCK::VIDMM_RECYCLE_BLOCK(
        VIDMM_RECYCLE_BLOCK *this,
        struct VIDMM_RECYCLE_HEAP *a2)
{
  __int64 v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 **v6; // rdx

  *((_QWORD *)this + 4) = a2;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 11) = this;
  *((_QWORD *)this + 13) = (char *)this + 96;
  *((_QWORD *)this + 12) = (char *)this + 96;
  *((_BYTE *)this + 132) &= ~1u;
  v3 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  ++*(_QWORD *)(v3 + 24);
  v4 = (__int64 *)((char *)this + 16);
  v5 = *((_QWORD *)this + 4) + 32LL;
  v6 = *(__int64 ***)(v5 + 8);
  if ( *v6 != (__int64 *)v5 )
    __fastfail(3u);
  *v4 = v5;
  v4[1] = (__int64)v6;
  *v6 = v4;
  *(_QWORD *)(v5 + 8) = v4;
  *((_QWORD *)this + 10) = (char *)this + 72;
  *((_QWORD *)this + 9) = (char *)this + 72;
  if ( dword_1C004E378 )
    VIDMM_RECYCLE_BLOCK::CreateHistoryProxy(this, (unsigned int)dword_1C004E37C);
  return this;
}
