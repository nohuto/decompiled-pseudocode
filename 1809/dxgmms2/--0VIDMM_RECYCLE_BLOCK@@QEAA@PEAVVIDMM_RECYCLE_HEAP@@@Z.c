/*
 * XREFs of ??0VIDMM_RECYCLE_BLOCK@@QEAA@PEAVVIDMM_RECYCLE_HEAP@@@Z @ 0x1C0059D04
 * Callers:
 *     ?CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z @ 0x1C0059A38 (-CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z.c)
 * Callees:
 *     <none>
 */

VIDMM_RECYCLE_BLOCK *__fastcall VIDMM_RECYCLE_BLOCK::VIDMM_RECYCLE_BLOCK(
        VIDMM_RECYCLE_BLOCK *this,
        struct VIDMM_RECYCLE_HEAP *a2)
{
  __int64 v2; // rax
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 **v5; // r8

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
  *((_BYTE *)this + 128) &= ~1u;
  v2 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  ++*(_QWORD *)(v2 + 24);
  v3 = (__int64 *)((char *)this + 16);
  v4 = *((_QWORD *)this + 4) + 32LL;
  v5 = *(__int64 ***)(*((_QWORD *)this + 4) + 40LL);
  if ( *v5 != (__int64 *)v4 )
    __fastfail(3u);
  *v3 = v4;
  *((_QWORD *)this + 3) = v5;
  *v5 = v3;
  *(_QWORD *)(v4 + 8) = v3;
  *((_QWORD *)this + 10) = (char *)this + 72;
  *((_QWORD *)this + 9) = (char *)this + 72;
  return this;
}
