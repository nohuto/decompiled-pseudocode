/*
 * XREFs of IopCopyOverNewPathSecure @ 0x140582EF0
 * Callers:
 *     IopGraftName @ 0x1406AD50C (IopGraftName.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopCopyOverNewPathSecure(
        char *a1,
        const void *a2,
        unsigned __int16 a3,
        __int64 a4,
        unsigned __int16 a5)
{
  char *v8; // rbx
  __int16 v9; // r14
  unsigned __int64 v10; // rbx
  unsigned __int16 v11; // ax
  _WORD *v13; // rdx
  __int16 v14; // r14
  char *v15; // rcx

  v8 = a1;
  v9 = 2;
  if ( a3 )
  {
    v10 = a3;
    memmove(a1, a2, a3);
    v8 = &a1[2 * (v10 >> 1)];
  }
  if ( a5 )
  {
    v11 = *(_WORD *)(a4 + 88);
    if ( a5 > v11 )
      return 3221226112LL;
    v13 = (_WORD *)(v11 + *(_QWORD *)(a4 + 96) - a5);
    if ( v8 > a1 && *((_WORD *)v8 - 1) == 92 && *v13 == 92 )
    {
      v8 -= 2;
      v9 = 0;
    }
    memmove(v8, v13, a5);
    v8 += 2 * ((unsigned __int64)a5 >> 1);
  }
  v14 = a5 + a3 + v9;
  *(_WORD *)(a4 + 90) = v14;
  *(_WORD *)(a4 + 88) = v14 - 2;
  *(_WORD *)v8 = 0;
  v15 = *(char **)(a4 + 96);
  if ( a1 != v15 )
  {
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    *(_QWORD *)(a4 + 96) = a1;
  }
  return 0LL;
}
