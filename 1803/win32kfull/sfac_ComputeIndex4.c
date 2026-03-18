/*
 * XREFs of sfac_ComputeIndex4 @ 0x1C02BEFBC
 * Callers:
 *     InvokeGlyphMappingF @ 0x1C02BEC78 (InvokeGlyphMappingF.c)
 * Callees:
 *     sfac_ComputeBinarySearchParams @ 0x1C02BEEC0 (sfac_ComputeBinarySearchParams.c)
 */

__int64 __fastcall sfac_ComputeIndex4(_WORD *a1, unsigned __int16 a2, _WORD *a3)
{
  _WORD *v3; // rbx
  unsigned __int16 v4; // si
  unsigned __int16 v6; // r9
  unsigned __int16 v7; // r8
  unsigned __int16 v8; // dx
  _WORD *v9; // r8
  unsigned __int16 v10; // ax
  __int16 *v11; // r8
  __int16 v12; // dx
  _WORD *v13; // r8
  __int16 v14; // dx
  unsigned __int16 v15; // cx
  __int16 v17; // r8
  unsigned __int16 v19; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int16 v20; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int16 v21; // [rsp+58h] [rbp+20h] BYREF

  v3 = a1 + 4;
  v4 = __ROR2__(*a1, 8);
  if ( v4 < 0x10u || a2 <= 0xFFu )
    goto LABEL_48;
  if ( a3 )
  {
    v8 = a3[109];
    v6 = a3[111];
    v7 = a3[110];
  }
  else
  {
    sfac_ComputeBinarySearchParams(v4 >> 1, &v21, &v19, &v20);
    v6 = v20;
    v7 = v19;
    v8 = v21;
  }
  if ( a2 >= __ROR2__(*(_WORD *)((char *)v3 + v8), 8) )
    v3 = (_WORD *)((char *)v3 + v6);
  if ( v7 > 0xAu )
  {
    if ( v7 != 11 )
    {
      if ( v7 != 12 )
      {
        if ( v7 != 13 )
        {
          if ( v7 != 14 )
          {
            if ( v7 != 15 )
              goto LABEL_48;
            v8 >>= 1;
            if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v8), 8) )
              v3 = (_WORD *)((char *)v3 + v8);
          }
          v8 >>= 1;
          if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v8), 8) )
            v3 = (_WORD *)((char *)v3 + v8);
        }
        v8 >>= 1;
        if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v8), 8) )
          v3 = (_WORD *)((char *)v3 + v8);
      }
      v8 >>= 1;
      if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v8), 8) )
        v3 = (_WORD *)((char *)v3 + v8);
    }
    v8 >>= 1;
    if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v8), 8) )
      v3 = (_WORD *)((char *)v3 + v8);
    goto LABEL_32;
  }
  if ( v7 == 10 )
  {
LABEL_32:
    v8 >>= 1;
    if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v8), 8) )
      v3 = (_WORD *)((char *)v3 + v8);
    goto LABEL_34;
  }
  if ( v7 != 4 )
  {
    switch ( v7 )
    {
      case 5u:
LABEL_42:
        v8 >>= 1;
        if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v8), 8) )
          v3 = (_WORD *)((char *)v3 + v8);
        goto LABEL_44;
      case 6u:
LABEL_40:
        v8 >>= 1;
        if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v8), 8) )
          v3 = (_WORD *)((char *)v3 + v8);
        goto LABEL_42;
      case 7u:
LABEL_38:
        v8 >>= 1;
        if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v8), 8) )
          v3 = (_WORD *)((char *)v3 + v8);
        goto LABEL_40;
      case 8u:
LABEL_36:
        v8 >>= 1;
        if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v8), 8) )
          v3 = (_WORD *)((char *)v3 + v8);
        goto LABEL_38;
    }
    if ( v7 != 9 )
      goto LABEL_48;
LABEL_34:
    v8 >>= 1;
    if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v8), 8) )
      v3 = (_WORD *)((char *)v3 + v8);
    goto LABEL_36;
  }
LABEL_44:
  if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + ((unsigned __int64)v8 >> 1)), 8) )
    v3 = (_WORD *)((char *)v3 + ((unsigned __int64)v8 >> 1));
LABEL_48:
  while ( a2 > __ROR2__(*v3, 8) )
    ++v3;
  v9 = (_WORD *)((char *)v3 + v4 + 2);
  v10 = __ROR2__(*v9, 8);
  if ( a2 < v10 )
  {
    return 0;
  }
  else
  {
    v11 = (_WORD *)((char *)v9 + v4);
    v12 = *v11;
    v13 = (__int16 *)((char *)v11 + v4);
    v14 = __ROR2__(v12, 8);
    v15 = __ROR2__(*v13, 8);
    if ( v15 )
    {
      v17 = __ROR2__(*(_WORD *)((char *)v13 + (unsigned __int16)(2 * (a2 - v10)) + v15), 8);
      if ( v17 )
        return (unsigned __int16)(v17 + v14);
      else
        return 0;
    }
    else
    {
      return (unsigned __int16)(a2 + v14);
    }
  }
}
