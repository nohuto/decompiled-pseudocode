/*
 * XREFs of ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x1C0208A64
 * Callers:
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C0208C90 (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 * Callees:
 *     IsVisible @ 0x1C0028D70 (IsVisible.c)
 *     IntersectRect @ 0x1C00C7044 (IntersectRect.c)
 *     SubtractRect @ 0x1C011219C (SubtractRect.c)
 */

__int64 __fastcall FBitsTouch(struct tagWND *a1, struct tagRECT *a2, struct tagSPB *a3)
{
  _QWORD *v5; // rcx
  __int16 v6; // r9
  _QWORD *k; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // r9
  _QWORD *v10; // rdi
  _QWORD *i; // rdx
  _QWORD *j; // rax
  __int64 v13; // r8

  if ( !a1 )
    return IntersectRect(a2, &a2->left, (int *)a3 + 6);
  if ( !(unsigned int)IsVisible((__int64)a1) )
    return 0LL;
  k = (_QWORD *)*((_QWORD *)a3 + 1);
  if ( (*((_DWORD *)a3 + 12) & 2) != 0 && (v6 & 0x400) != 0 )
    return 0LL;
  v8 = (_QWORD *)k[13];
  if ( v5 == v8 )
    return IntersectRect(a2, &a2->left, (int *)a3 + 6);
  v9 = v5 + 13;
  v10 = v5;
  for ( i = (_QWORD *)v5[13]; v8 != i; i = (_QWORD *)i[13] )
  {
    v5 = i;
    if ( !i )
      return 0LL;
  }
  if ( v5 == k )
  {
    if ( (*((_DWORD *)a3 + 12) & 2) != 0 )
    {
      if ( v10 != k )
      {
        for ( j = (_QWORD *)*v9; k != j; j = (_QWORD *)j[13] )
          v10 = j;
        for ( k = (_QWORD *)k[14]; k && k != v10; k = (_QWORD *)k[11] )
        {
          v13 = k[5];
          if ( (*(_BYTE *)(v13 + 31) & 0x10) != 0
            && !*(_QWORD *)(v13 + 168)
            && (*(_BYTE *)(v13 + 26) & 8) == 0
            && !SubtractRect((__int64)a2, &a2->left, (int *)(v13 + 88)) )
          {
            return 0LL;
          }
LABEL_26:
          ;
        }
      }
      return IntersectRect(a2, &a2->left, (int *)a3 + 6);
    }
  }
  else
  {
    v10 = v5;
    while ( v5 != k )
    {
      v5 = (_QWORD *)v5[11];
      if ( !v5 )
        goto LABEL_26;
    }
  }
  return 0LL;
}
