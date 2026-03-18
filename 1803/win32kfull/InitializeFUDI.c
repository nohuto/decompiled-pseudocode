/*
 * XREFs of InitializeFUDI @ 0x1C0126F3C
 * Callers:
 *     AAHalftoneBitmap @ 0x1C00D09A8 (AAHalftoneBitmap.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

void *__fastcall InitializeFUDI(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rsi
  __int64 v4; // r15
  bool v5; // zf
  const void **v6; // r14
  _QWORD *v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rsi
  _BYTE *v10; // rbx
  _BYTE *v12; // rbx

  if ( (*(_DWORD *)a1 & 0x400) != 0 )
    v2 = *(_DWORD *)(a1 + 148);
  else
    v2 = *(_DWORD *)(a1 + 60);
  v3 = *(unsigned int *)(a1 + 56);
  v4 = a1 + 8;
  v5 = (*(_BYTE *)(a1 + 8) & 4) == 0;
  v6 = (const void **)(a1 + 496);
  *(_DWORD *)(a1 + 532) = v2;
  v7 = (_QWORD *)(a1 + 496);
  v8 = 2LL;
  if ( v5 )
  {
    v9 = 3 * v3;
    do
    {
      v10 = (_BYTE *)*v7;
      (*(void (__fastcall **)(__int64, __int64))(a1 + 24))(v4, *v7++ + 3LL);
      *(_WORD *)v10 = *((_WORD *)v10 + 3);
      v10[2] = v10[8];
      *(_WORD *)&v10[v9 + 3] = *(_WORD *)&v10[v9 - 3];
      v10[v9 + 5] = v10[v9 - 1];
      --v8;
    }
    while ( v8 );
  }
  else
  {
    do
    {
      v12 = (_BYTE *)*v7;
      (*(void (__fastcall **)(__int64, __int64))(a1 + 24))(v4, *v7++ + 1LL);
      *v12 = v12[2];
      v12[v3 + 1] = v12[v3 - 1];
      --v8;
    }
    while ( v8 );
  }
  memmove(*(void **)(a1 + 520), *v6, *(unsigned int *)(a1 + 528));
  return memmove(*(void **)(a1 + 488), *(const void **)(a1 + 504), *(unsigned int *)(a1 + 528));
}
