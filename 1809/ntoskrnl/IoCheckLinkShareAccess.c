/*
 * XREFs of IoCheckLinkShareAccess @ 0x1405FADE0
 * Callers:
 *     RawCreate @ 0x140690610 (RawCreate.c)
 *     IoCheckShareAccess @ 0x1406CEC20 (IoCheckShareAccess.c)
 *     IoCheckShareAccessEx @ 0x140708340 (IoCheckShareAccessEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoCheckLinkShareAccess(int a1, char a2, __int64 a3, unsigned int *a4, _DWORD *a5, int a6)
{
  bool v6; // r12
  bool v7; // r13
  int v8; // r11d
  bool v10; // r14
  bool v11; // r15
  unsigned __int8 v12; // di
  _DWORD *v13; // rax
  unsigned int v14; // r8d
  bool v15; // al
  char v16; // al
  bool v17; // [rsp+30h] [rbp+8h]

  v6 = (a1 & 0x21) != 0;
  v7 = (a1 & 6) != 0;
  v8 = a1 & 0x10000;
  v17 = (a1 & 0x10000) != 0;
  if ( (a6 & 2) == 0 )
  {
    *(_BYTE *)(a3 + 74) = v6;
    *(_BYTE *)(a3 + 75) = v7;
    *(_BYTE *)(a3 + 76) = v8 != 0;
  }
  if ( (a1 & 0x21) == 0 && (a1 & 6) == 0 && !v8 && (a6 & 0x20) == 0 )
    return 0LL;
  v10 = (a2 & 2) != 0;
  v11 = (a2 & 4) != 0;
  v12 = a2 & 1;
  if ( a6 < 0 )
  {
    v16 = a2 & 1;
    if ( !v12 )
      v16 = 1;
    v12 = v16;
  }
  if ( (a6 & 2) == 0 )
  {
    *(_BYTE *)(a3 + 77) = v12;
    *(_BYTE *)(a3 + 78) = v10;
    *(_BYTE *)(a3 + 79) = v11;
  }
  if ( a3 )
  {
    v13 = *(_DWORD **)(a3 + 208);
    if ( v13 )
    {
      if ( (*v13 & 1) != 0 )
        return 0LL;
    }
  }
  v14 = *a4;
  v15 = 0;
  if ( (a6 & 4) == 0 )
    v15 = (a1 & 0x21) != 0 && a4[4] < v14 || a4[1] && !v12;
  if ( (a6 & 8) == 0 && !v15 )
    v15 = (a1 & 6) != 0 && a4[5] < v14 || a4[2] && (a2 & 2) == 0;
  if ( (a6 & 0x10) == 0 )
  {
    if ( v15 )
      return 3221225539LL;
    if ( !a5 )
    {
      if ( v8 && a4[6] < v14 || a4[3] && (a2 & 4) == 0 )
        return 3221225539LL;
LABEL_31:
      if ( (a6 & 1) != 0 )
      {
        *a4 = v14 + 1;
        a4[1] += v6;
        a4[2] += v7;
        a4[4] += v12;
        a4[5] += v10;
        if ( a5 )
        {
          ++*a5;
          a5[1] += v17;
          a5[2] += v11;
        }
        else
        {
          a4[3] += v17;
          a4[6] += v11;
        }
      }
      return 0LL;
    }
    if ( v8 && a5[2] < *a5 || a5[1] && (a2 & 4) == 0 )
      return 3221225539LL;
    v15 = 0;
  }
  if ( !v15 )
    goto LABEL_31;
  return 3221225539LL;
}
