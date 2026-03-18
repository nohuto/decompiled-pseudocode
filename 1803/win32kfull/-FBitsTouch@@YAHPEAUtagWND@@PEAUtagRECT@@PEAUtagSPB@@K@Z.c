/*
 * XREFs of ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x1C01CE1F4
 * Callers:
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C01CE418 (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 * Callees:
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     IsVisible @ 0x1C002FD68 (IsVisible.c)
 *     SubtractRect @ 0x1C00EE444 (SubtractRect.c)
 */

__int64 __fastcall FBitsTouch(struct tagWND *a1, struct tagRECT *a2, struct tagSPB *a3)
{
  _QWORD *v5; // rcx
  __int16 v6; // r9
  _QWORD *k; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // r9
  _QWORD *v11; // rdi
  _QWORD *i; // rdx
  _QWORD *j; // rax
  __int64 v14; // r8

  if ( a1 )
  {
    if ( !(unsigned int)IsVisible((__int64)a1) )
      return 0LL;
    k = (_QWORD *)*((_QWORD *)a3 + 1);
    if ( (*((_DWORD *)a3 + 12) & 2) != 0 && (v6 & 0x400) != 0 )
      return 0LL;
    v9 = (_QWORD *)k[10];
    if ( v5 != v9 )
    {
      v10 = v5 + 10;
      v11 = v5;
      for ( i = (_QWORD *)v5[10]; v9 != i; i = (_QWORD *)i[10] )
      {
        v5 = i;
        if ( !i )
          return 0LL;
      }
      if ( v5 == k )
      {
        if ( (*((_DWORD *)a3 + 12) & 2) != 0 )
        {
          if ( v11 != k )
          {
            for ( j = (_QWORD *)*v10; k != j; j = (_QWORD *)j[10] )
              v11 = j;
            for ( k = (_QWORD *)k[11]; k && k != v11; k = (_QWORD *)k[8] )
            {
              v14 = k[5];
              if ( (*(_BYTE *)(v14 + 31) & 0x10) != 0
                && !*(_QWORD *)(v14 + 168)
                && (*(_BYTE *)(v14 + 26) & 8) == 0
                && !SubtractRect((__int64)a2, &a2->left, (int *)(v14 + 88)) )
              {
                return 0LL;
              }
LABEL_27:
              ;
            }
          }
          return IntersectRect(a2, &a2->left, (int *)a3 + 6);
        }
      }
      else
      {
        v11 = v5;
        while ( v5 != k )
        {
          v5 = (_QWORD *)v5[8];
          if ( !v5 )
            goto LABEL_27;
        }
      }
      return 0LL;
    }
  }
  return IntersectRect(a2, &a2->left, (int *)a3 + 6);
}
