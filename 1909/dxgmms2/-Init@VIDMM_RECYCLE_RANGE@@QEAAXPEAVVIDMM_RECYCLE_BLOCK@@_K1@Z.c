/*
 * XREFs of ?Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C0068E6C
 * Callers:
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C0068BAC (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C0068F30 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?CreateRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_RANGE@@PEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C008150C (-CreateRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_RANGE@@PEAVVIDMM_RECYCLE_BLOCK@@_K1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_RECYCLE_RANGE::Init(
        VIDMM_RECYCLE_RANGE *this,
        struct VIDMM_RECYCLE_BLOCK *a2,
        __int64 a3,
        __int64 a4)
{
  CCHAR LeastSignificantBit; // al
  __int64 v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx

  *((_QWORD *)this + 9) = a2;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 4) = a3;
  *((_QWORD *)this + 5) = a4;
  *(_QWORD *)((char *)this + 84) = 3LL;
  ++*(_QWORD *)a2;
  LeastSignificantBit = RtlFindLeastSignificantBit(*((_QWORD *)this + 4));
  if ( LeastSignificantBit < 0 )
    v6 = 0LL;
  else
    v6 = 1LL << LeastSignificantBit;
  *((_QWORD *)this + 7) = v6;
  v7 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_BYTE *)this + 168) = 0;
  v8 = *(_QWORD **)(v7 + 136);
  if ( v8 )
  {
    v9 = *v8 + 144LL * v8[1];
    *(_DWORD *)v9 = 0;
    *(_QWORD *)(v9 + 8) = this;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v9 + 16), 0LL);
    ++*(_QWORD *)(*(_QWORD *)(v7 + 136) + 8LL);
    v10 = *(_QWORD *)(v7 + 136);
    if ( *(_QWORD *)(v10 + 8) == *(_QWORD *)(v10 + 48) )
    {
      *(_QWORD *)(v10 + 8) = 0LL;
      *(_BYTE *)(*(_QWORD *)(v7 + 136) + 16LL) = 1;
    }
  }
}
