/*
 * XREFs of ??1VIDMM_RECYCLE_HEAP@@QEAA@XZ @ 0x1C005E780
 * Callers:
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C005E47C (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 * Callees:
 *     ?Defragment@VIDMM_SEGMENT@@UEAAX_K0@Z @ 0x1C00714E0 (-Defragment@VIDMM_SEGMENT@@UEAAX_K0@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP(VIDMM_RECYCLE_HEAP *this, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // rdi
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // rdi

  v4 = (_QWORD *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v4 )
        {
          v7 = v4;
          v4 = (_QWORD *)*v4;
          *v7 = 0LL;
        }
        if ( !v4[1] )
          break;
        v8 = v4;
        v4 = (_QWORD *)v4[1];
        v8[1] = 0LL;
      }
      v9 = v4[2];
      VIDMM_SEGMENT::Defragment((VIDMM_SEGMENT *)v4, 0LL, a3);
      v10 = v9 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v10 )
        break;
      v4 = (_QWORD *)v10;
    }
  }
  *((_QWORD *)this + 6) = 0LL;
  v5 = (_QWORD *)*((_QWORD *)this + 7);
  if ( v5 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v5 )
        {
          v11 = v5;
          v5 = (_QWORD *)*v5;
          *v11 = 0LL;
        }
        if ( !v5[1] )
          break;
        v12 = v5;
        v5 = (_QWORD *)v5[1];
        v12[1] = 0LL;
      }
      v13 = v5[2];
      VIDMM_SEGMENT::Defragment((VIDMM_SEGMENT *)v5, 0LL, a3);
      v14 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v14 )
        break;
      v5 = (_QWORD *)v14;
    }
  }
  *((_QWORD *)this + 7) = 0LL;
  v6 = (_QWORD *)*((_QWORD *)this + 8);
  if ( v6 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v6 )
        {
          v15 = v6;
          v6 = (_QWORD *)*v6;
          *v15 = 0LL;
        }
        if ( !v6[1] )
          break;
        v16 = v6;
        v6 = (_QWORD *)v6[1];
        v16[1] = 0LL;
      }
      v17 = v6[2];
      VIDMM_SEGMENT::Defragment((VIDMM_SEGMENT *)v6, 0LL, a3);
      v18 = v17 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v18 )
        break;
      v6 = (_QWORD *)v18;
    }
  }
  *((_QWORD *)this + 8) = 0LL;
}
