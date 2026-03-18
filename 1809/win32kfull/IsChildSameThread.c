/*
 * XREFs of IsChildSameThread @ 0x1C0004BCC
 * Callers:
 *     ImeCanDestroyDefIMEforChild @ 0x1C00AD5D8 (ImeCanDestroyDefIMEforChild.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsChildSameThread(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r11
  _QWORD *i; // r8
  char v5; // r9
  int v7; // r10d
  _QWORD *v8; // rdx
  __int64 v9; // r9
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9

  v2 = a2[2];
  for ( i = *(_QWORD **)(a1 + 88); ; i = (_QWORD *)i[8] )
  {
    if ( !i )
      return 0LL;
    v5 = *(_BYTE *)(i[5] + 31LL) & 0xC0;
    if ( v5 == 64 )
      break;
    v10 = i;
    if ( **(_WORD **)(i[14] + 8LL) != *(_WORD *)(gpsi + 906LL) )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(v10[14] + 8LL);
        if ( (*(_BYTE *)(v11 + 10) & 1) != 0 || *(_WORD *)v11 == *(_WORD *)(gpsi + 898LL) )
          break;
        v10 = (_QWORD *)v10[12];
        if ( !v10 )
          goto LABEL_4;
      }
    }
LABEL_6:
    ;
  }
LABEL_4:
  if ( i == a2 || i[2] != v2 )
    goto LABEL_6;
  v7 = 0;
  v8 = i;
  if ( v5 == 64 )
  {
    do
    {
      if ( v8[2] != v2 )
        break;
      v9 = *(_QWORD *)(v8[14] + 8LL);
      if ( (*(_BYTE *)(v9 + 10) & 1) != 0 || *(_WORD *)v9 == *(_WORD *)(gpsi + 898LL) )
        v7 = 1;
      v8 = (_QWORD *)v8[10];
    }
    while ( (*(_BYTE *)(v8[5] + 31LL) & 0xC0) == 0x40 );
  }
  if ( (*(_BYTE *)(v8[5] + 31LL) & 0xC0) != 0x40 )
  {
    do
    {
      if ( v8[2] != v2 )
        break;
      v12 = *(_QWORD *)(v8[14] + 8LL);
      if ( (*(_BYTE *)(v12 + 10) & 1) != 0 || *(_WORD *)v12 == *(_WORD *)(gpsi + 898LL) )
        v7 = 1;
      v8 = (_QWORD *)v8[12];
    }
    while ( v8 );
  }
  if ( v7 )
    goto LABEL_6;
  return 1LL;
}
