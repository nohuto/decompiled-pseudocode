/*
 * XREFs of RtlAvlInsertNodeEx @ 0x1800660C0
 * Callers:
 *     RtlInstallFunctionTableCallback @ 0x180065170 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x180065BC0 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180065EC0 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x18006627C (RtlpTreeDoubleRotateNodes.c)
 */

void __fastcall RtlAvlInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, unsigned __int64 a4)
{
  bool v6; // r9
  _BYTE *v7; // r11
  char v8; // cl
  char v9; // di
  _BOOL8 v10; // r9
  _BOOL8 v11; // r11
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  char v17; // r9
  __int64 v18; // rcx

  v6 = a3;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_QWORD *)(a4 + 16) = a2;
  if ( !a2 )
  {
    *a1 = a4;
    return;
  }
  *(_QWORD *)(a2 + 8LL * a3) = a4;
  while ( 1 )
  {
    v7 = (_BYTE *)(a2 + 16);
    v8 = (-1 - 2 * v6) & 3;
    v9 = *(_BYTE *)(a2 + 16) & 3;
    if ( v9 )
      break;
    a4 = a2;
    *v7 = v8 | *(_BYTE *)(a2 + 16) & 0xFC;
    a2 = *(_QWORD *)v7 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !a2 )
      return;
    v6 = *(_QWORD *)a2 != a4;
  }
  if ( v9 != v8 )
    goto LABEL_15;
  if ( (*(_BYTE *)(a4 + 16) & 3) == v9 )
  {
    v10 = !v6;
    if ( (*(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == a2 )
    {
      v11 = v10;
      v12 = !v10;
      if ( *(_QWORD *)(a2 + 8 * v12) == a4 )
      {
        v13 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v13 )
        {
          if ( *(_QWORD *)(v13 + 8) == a2 )
          {
            *(_QWORD *)(v13 + 8) = a4;
          }
          else
          {
            if ( *(_QWORD *)v13 != a2 )
              goto LABEL_29;
            *(_QWORD *)v13 = a4;
          }
        }
        else
        {
          if ( *a1 != a2 )
            goto LABEL_29;
          *a1 = a4;
        }
        *(_QWORD *)(a4 + 16) &= 3uLL;
        *(_QWORD *)(a4 + 16) |= v13;
        v14 = *(_QWORD *)(a4 + 8 * v11);
        if ( !v14 )
        {
LABEL_14:
          *(_QWORD *)(a2 + 8 * v12) = v14;
          *(_QWORD *)(a4 + 8 * v11) = a2;
          *(_QWORD *)(a2 + 16) &= 3uLL;
          *(_QWORD *)(a2 + 16) |= a4;
          *(_BYTE *)(a4 + 16) &= 0xFCu;
LABEL_15:
          *(_BYTE *)(a2 + 16) &= 0xFCu;
          return;
        }
        v18 = *(_QWORD *)(v14 + 16);
        if ( (v18 & 0xFFFFFFFFFFFFFFFCuLL) == a4 )
        {
          *(_QWORD *)(v14 + 16) = a2 | v18 & 3;
          goto LABEL_14;
        }
      }
    }
LABEL_29:
    __fastfail(0x1Du);
  }
  v15 = RtlpTreeDoubleRotateNodes(a1, a2, a4, v6);
  *(_BYTE *)(v16 + 16) &= 0xFCu;
  v17 = *(_BYTE *)(a4 + 16) & 0xFC;
  *(_BYTE *)(a4 + 16) = v17;
  if ( v9 == (*(_BYTE *)(v15 + 16) & 3) )
  {
    *(_BYTE *)(v16 + 16) &= 0xFCu;
    *(_BYTE *)(v16 + 16) |= (v9 ^ 0xFE) & 3;
  }
  else if ( v9 == ((*(_BYTE *)(v15 + 16) ^ 0xFE) & 3) )
  {
    *(_BYTE *)(a4 + 16) = v9 | v17;
  }
  *(_BYTE *)(v15 + 16) &= 0xFCu;
}
