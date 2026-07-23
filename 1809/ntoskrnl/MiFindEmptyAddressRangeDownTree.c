/*
 * XREFs of MiFindEmptyAddressRangeDownTree @ 0x14069A030
 * Callers:
 *     MiFinishCreateSection @ 0x1405DF0B0 (MiFinishCreateSection.c)
 *     MiFindEmptyAddressRangeDown @ 0x140699F10 (MiFindEmptyAddressRangeDown.c)
 * Callees:
 *     MiHonorRangeStraddleRequirement @ 0x140118CDC (MiHonorRangeStraddleRequirement.c)
 */

__int64 __fastcall MiFindEmptyAddressRangeDownTree(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 *a7)
{
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  __int64 v10; // r15
  __int64 *v11; // r10
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r12
  __int64 v16; // rax
  unsigned __int64 j; // r10
  _BYTE *v18; // rbp
  _BYTE *v19; // rdi
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  _BYTE *v24; // r11
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rbx
  __int64 v29; // rsi
  unsigned __int64 v30; // rbx
  unsigned __int64 i; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v38; // rax
  _BYTE v39[24]; // [rsp+20h] [rbp-68h] BYREF
  int v40; // [rsp+38h] [rbp-50h]
  int v41; // [rsp+3Ch] [rbp-4Ch]
  char v42; // [rsp+40h] [rbp-48h]
  char v43; // [rsp+41h] [rbp-47h]

  v7 = a6;
  v8 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v9 = v8 >> 12;
  v10 = a4 >> 12;
  v11 = a1;
  if ( a5 >= a6 || a6 - a5 < v8 )
    return 3221225495LL;
  v12 = a6 >> 12;
  v13 = a3 >> 12;
  v14 = -(__int64)a3 & (a6 - v8);
  v15 = v14 >> 12;
  if ( v10 )
  {
    v38 = MiHonorRangeStraddleRequirement(v15, v8 >> 12, v10, 1);
    v12 = a6 >> 12;
    v15 = ~(v13 - 1) & v38;
    v14 = v15 << 12;
  }
  if ( v14 < a5 )
    return 3221225495LL;
  v16 = *v11;
  if ( *v11 )
  {
    j = 0LL;
    do
    {
      v18 = (_BYTE *)v16;
      v16 = *(_QWORD *)(v16 + 8);
    }
    while ( v16 );
    v19 = v18;
    v20 = a5 >> 12;
    v21 = v9;
    while ( 1 )
    {
      if ( v18 )
      {
        j = (unsigned __int64)v18;
        v40 = v12;
        v18 = 0LL;
        v19 = v39;
        v42 = v7 >> 44;
      }
      else
      {
        v22 = *(_QWORD *)j;
        v23 = j;
        if ( *(_QWORD *)j )
        {
          j = *(_QWORD *)j;
          for ( i = *(_QWORD *)(v22 + 8); i; i = *(_QWORD *)(i + 8) )
            j = i;
        }
        else
        {
          for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
          {
            if ( *(_QWORD *)(j + 8) == v23 )
              break;
            v23 = j;
          }
        }
      }
      if ( j )
      {
        v24 = (_BYTE *)j;
        v25 = (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) + 1;
        if ( v25 < v20 )
          v24 = v39;
        v26 = a5 >> 12;
        v27 = v13 - 1;
        if ( v25 >= v20 )
          v26 = (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) + 1;
        v28 = v26 + v13 - 1;
      }
      else
      {
        v41 = 0;
        v27 = v13 - 1;
        v43 = 0;
        v28 = v20 + v13 - 1;
        v24 = v39;
      }
      v29 = ~v27;
      v30 = v29 & v28;
      if ( v10 )
        v30 = MiHonorRangeStraddleRequirement(v30, v21, v10, 0);
      if ( v30 <= v15 )
      {
        v32 = (unsigned __int8)v19[32];
        v33 = *((unsigned int *)v19 + 6);
        v34 = a6 >> 12;
        v35 = v33 | (v32 << 32);
        if ( v35 <= a6 >> 12 )
          v34 = v35;
        if ( v34 > v30 && v21 <= v34 - v30 )
          break;
      }
      if ( v24 == v39 )
        return 3221225495LL;
      v12 = a6 >> 12;
      v19 = v24;
      v7 = a6;
    }
    v36 = v29 & (v34 - v21);
    if ( v10 )
      v36 = v29 & MiHonorRangeStraddleRequirement(v36, v21, v10, 1);
    *a7 = v36 << 12;
    return 0LL;
  }
  else
  {
    *a7 = v14;
    return 0LL;
  }
}
