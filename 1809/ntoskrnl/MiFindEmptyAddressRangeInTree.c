/*
 * XREFs of MiFindEmptyAddressRangeInTree @ 0x14069C53C
 * Callers:
 *     MiFindEmptyAddressRange @ 0x1405F3500 (MiFindEmptyAddressRange.c)
 * Callees:
 *     MiHonorRangeStraddleRequirement @ 0x140118CDC (MiHonorRangeStraddleRequirement.c)
 */

__int64 __fastcall MiFindEmptyAddressRangeInTree(
        _QWORD **a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rsi
  unsigned int v9; // r10d
  __int64 v10; // r14
  __int64 v12; // rbp
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rdi
  _QWORD *v15; // rax
  unsigned __int64 i; // rbx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rcx
  _QWORD **v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  _QWORD *v24; // rcx
  unsigned __int64 v26; // rbp

  v7 = a3 >> 12;
  v8 = (unsigned __int64)(a2 + 4095) >> 12;
  v9 = 0;
  v10 = a4 >> 12;
  v12 = ~((a3 >> 12) - 1);
  v13 = v12 & ((a3 >> 12) + (a5 >> 12) - 1);
  if ( a4 >> 12 )
    v13 = MiHonorRangeStraddleRequirement(v13, (unsigned __int64)(a2 + 4095) >> 12, v10, 0);
  v14 = a6 >> 12;
  if ( v13 > a6 >> 12 || v8 > v14 - v13 + 1 )
    return (unsigned int)-1073741801;
  v15 = *a1;
  if ( !*a1 )
    goto LABEL_35;
  do
  {
    i = (unsigned __int64)v15;
    v15 = (_QWORD *)*v15;
  }
  while ( v15 );
  v17 = i;
  v18 = *(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32);
  if ( v18 > v13 && v8 <= v18 - v13 )
    goto LABEL_35;
  while ( 1 )
  {
    v19 = *(_QWORD ***)(i + 8);
    v20 = i;
    if ( v19 )
    {
      v24 = *v19;
      for ( i = *(_QWORD *)(i + 8); v24; v24 = (_QWORD *)*v24 )
        i = (unsigned __int64)v24;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v20 )
          break;
        v20 = i;
      }
    }
    v21 = v7 + (*(unsigned int *)(v17 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 33) << 32));
    if ( !i )
      break;
    if ( (v12 & (v21 - 1)) < v13 )
    {
      if ( (*(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32)) <= v13 )
        goto LABEL_18;
      v22 = v13;
    }
    else
    {
      v22 = v21 & v12;
    }
    if ( v10 )
      v22 = MiHonorRangeStraddleRequirement(v22, v8, v10, 0);
    if ( v22 > v14 )
      return (unsigned int)-1073741801;
    v23 = *(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32);
    if ( v23 > v22 && v8 <= v23 - v22 && v8 <= v14 - v22 + 1 )
    {
      *a7 = v22 << 12;
      return v9;
    }
LABEL_18:
    v17 = i;
  }
  v26 = v21 & v12;
  if ( v26 >= v13 )
    v13 = v26;
  if ( v10 )
    v13 = MiHonorRangeStraddleRequirement(v13, v8, v10, 0);
  if ( v14 < v13 || v8 > v14 - v13 + 1 )
    return (unsigned int)-1073741801;
LABEL_35:
  *a7 = v13 << 12;
  return v9;
}
