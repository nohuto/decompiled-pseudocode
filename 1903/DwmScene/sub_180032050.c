/*
 * XREFs of sub_180032050 @ 0x180032050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180032050(__int64 a1, _QWORD *a2, __int64 a3, int a4, char a5)
{
  __int64 v9; // rbp
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // r11
  __int64 v13; // r10
  int v14; // esi
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ecx

  v9 = std::streambuf::gptr(a1);
  v10 = std::streambuf::pptr(a1);
  v11 = v10;
  if ( v10 && *(_QWORD *)(a1 + 104) < v10 )
    *(_QWORD *)(a1 + 104) = v10;
  v12 = *(_QWORD *)(a1 + 104);
  v13 = **(_QWORD **)(a1 + 24);
  if ( !a4 )
  {
    v15 = 0LL;
    goto LABEL_20;
  }
  v14 = a4 - 1;
  if ( !v14 )
  {
    if ( (a5 & 3) != 3 )
    {
      if ( (a5 & 1) != 0 )
      {
        if ( !v9 && v13 )
          goto LABEL_18;
        v10 = v9;
      }
      else if ( (a5 & 2) == 0 || !v10 && v13 )
      {
        goto LABEL_18;
      }
      v15 = v10 - v13;
      goto LABEL_20;
    }
LABEL_18:
    *a2 = -1LL;
    goto LABEL_33;
  }
  if ( v14 != 1 )
    goto LABEL_18;
  v15 = *(_QWORD *)(a1 + 104) - v13;
LABEL_20:
  v16 = v15 + a3;
  if ( v15 + a3 > (unsigned __int64)(*(_QWORD *)(a1 + 104) - v13)
    || v16 && ((a5 & 1) != 0 && !v9 || (a5 & 2) != 0 && !v11) )
  {
    goto LABEL_18;
  }
  v17 = v13 + v16;
  if ( (a5 & 1) != 0 && v9 )
  {
    **(_QWORD **)(a1 + 56) = v17;
    **(_DWORD **)(a1 + 80) = v12 - v17;
  }
  if ( (a5 & 2) != 0 && v11 )
  {
    v18 = **(_DWORD **)(a1 + 64) + **(_DWORD **)(a1 + 88) - v17;
    **(_QWORD **)(a1 + 32) = v13;
    **(_QWORD **)(a1 + 64) = v17;
    **(_DWORD **)(a1 + 88) = v18;
  }
  *a2 = v16;
LABEL_33:
  a2[1] = 0LL;
  a2[2] = 0LL;
  return a2;
}
