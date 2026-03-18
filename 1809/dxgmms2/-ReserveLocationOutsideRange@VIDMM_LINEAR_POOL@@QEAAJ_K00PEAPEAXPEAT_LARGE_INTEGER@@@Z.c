/*
 * XREFs of ?ReserveLocationOutsideRange@VIDMM_LINEAR_POOL@@QEAAJ_K00PEAPEAXPEAT_LARGE_INTEGER@@@Z @ 0x1C00C6334
 * Callers:
 *     ?FindSegmentLocationOutsideRange@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C00BCB18 (-FindSegmentLocationOutsideRange@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 * Callees:
 *     ?SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAPEAU2@E@Z @ 0x1C0077654 (-SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAPEAU2@E@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::ReserveLocationOutsideRange(
        VIDMM_LINEAR_POOL *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        void **a5,
        union _LARGE_INTEGER *a6)
{
  VIDMM_LINEAR_POOL *v7; // r11
  __int64 *v9; // rsi
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rbx
  bool v14; // cf
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rax
  struct _VIDMM_POOL_BLOCK *v22; // [rsp+40h] [rbp+8h] BYREF

  v7 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 5);
  while ( 1 )
  {
    do
    {
      if ( v7 == (VIDMM_LINEAR_POOL *)((char *)this + 40) )
        return 3221225495LL;
      v9 = (__int64 *)((char *)v7 - 24);
      v7 = *(VIDMM_LINEAR_POOL **)v7;
      v10 = *v9;
      v11 = *v9 + v9[1];
    }
    while ( *v9 >= a2 && v11 <= a3 );
    if ( v11 > a3 )
      break;
    v12 = a2;
    v13 = *v9;
    if ( v11 < a2 )
      v12 = *v9 + v9[1];
    v14 = v12 - v10 < a4;
LABEL_16:
    if ( !v14 )
      goto LABEL_17;
  }
  if ( v10 >= a2 )
    goto LABEL_13;
  v15 = a2;
  v13 = *v9;
  if ( v11 < a2 )
    v15 = *v9 + v9[1];
  if ( v15 - v10 < a4 )
  {
LABEL_13:
    v13 = a3;
    if ( v10 > a3 )
      v13 = *v9;
    v14 = v11 - v13 < a4;
    goto LABEL_16;
  }
LABEL_17:
  v22 = 0LL;
  v16 = VIDMM_LINEAR_POOL::SplitBlock(this, (struct _VIDMM_POOL_BLOCK *)v9, v13, v13 + a4, &v22);
  v19 = v16;
  if ( v16 >= 0 )
  {
    *a5 = v22;
    a6->QuadPart = v13;
    return 0LL;
  }
  else
  {
    v20 = WdLogNewEntry5_WdWarning(v18, v17);
    *(_QWORD *)(v20 + 24) = v19;
    WdLogEvent5_WdWarning(v20);
    return (unsigned int)v19;
  }
}
