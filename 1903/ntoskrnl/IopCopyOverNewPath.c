/*
 * XREFs of IopCopyOverNewPath @ 0x1406CF180
 * Callers:
 *     IopGraftName @ 0x1406CEEB8 (IopGraftName.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall IopCopyOverNewPath(char *a1, const void *a2, unsigned __int16 a3, __int64 a4, unsigned __int16 a5)
{
  char *v8; // rbx
  __int16 v9; // bp
  unsigned __int64 v10; // rbx
  _WORD *v11; // rdx
  __int16 v12; // bp
  char *v13; // rcx

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
    v11 = (_WORD *)(*(_QWORD *)(a4 + 96) + *(unsigned __int16 *)(a4 + 88) - a5);
    if ( v8 > a1 && *((_WORD *)v8 - 1) == 92 && *v11 == 92 )
    {
      v8 -= 2;
      v9 = 0;
    }
    memmove(v8, v11, a5);
    v8 += 2 * ((unsigned __int64)a5 >> 1);
  }
  v12 = a5 + a3 + v9;
  *(_WORD *)(a4 + 90) = v12;
  *(_WORD *)(a4 + 88) = v12 - 2;
  *(_WORD *)v8 = 0;
  v13 = *(char **)(a4 + 96);
  if ( a1 != v13 )
  {
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    *(_QWORD *)(a4 + 96) = a1;
  }
}
