/*
 * XREFs of MiFindEmptyAddressRangeDownTree @ 0x1406BE700
 * Callers:
 *     MiFinishCreateSection @ 0x1405D74C0 (MiFinishCreateSection.c)
 *     MiFindEmptyAddressRangeDown @ 0x1406BE5E0 (MiFindEmptyAddressRangeDown.c)
 * Callees:
 *     MiHonorRangeStraddleRequirement @ 0x14011CDD4 (MiHonorRangeStraddleRequirement.c)
 *     memset @ 0x1401D6BC0 (memset.c)
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
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  __int64 v13; // r15
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r13
  __int64 v16; // rdi
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // r12
  __int64 v21; // rax
  unsigned __int64 i; // r10
  _DWORD *v23; // rbp
  _DWORD *v24; // rdi
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  _DWORD *v28; // r11
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rbx
  __int64 v33; // rsi
  unsigned __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  _DWORD v44[26]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v45; // [rsp+98h] [rbp+10h]

  memset(v44, 0, 0x40uLL);
  v11 = a6;
  v12 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v13 = a4 >> 12;
  v14 = v12 >> 12;
  v45 = v12 >> 12;
  if ( a5 >= a6 || a6 - a5 < v12 )
    return 3221225495LL;
  v15 = a3;
  v16 = -(__int64)a3;
  v17 = a6 >> 12;
  v18 = v16 & (a6 - v12);
  v19 = v15 >> 12;
  v20 = v18 >> 12;
  if ( v13 )
  {
    v41 = MiHonorRangeStraddleRequirement((v16 & (a6 - v12)) >> 12, v45, v13, 1);
    v17 = a6 >> 12;
    v11 = a6;
    v14 = v12 >> 12;
    v20 = ~(v19 - 1) & v41;
    v18 = v20 << 12;
  }
  if ( v18 < a5 )
    return 3221225495LL;
  v21 = *a1;
  if ( *a1 )
  {
    i = 0LL;
    do
    {
      v23 = (_DWORD *)v21;
      v21 = *(_QWORD *)(v21 + 8);
    }
    while ( v21 );
    v24 = v23;
    v25 = a5 >> 12;
    while ( 1 )
    {
      if ( v23 )
      {
        i = (unsigned __int64)v23;
        v44[6] = v17;
        v23 = 0LL;
        v24 = v44;
        LOBYTE(v44[8]) = v11 >> 44;
      }
      else
      {
        v26 = *(_QWORD *)i;
        v27 = i;
        if ( *(_QWORD *)i )
        {
          i = *(_QWORD *)i;
          if ( *(_QWORD *)(v26 + 8) )
          {
            do
              i = *(_QWORD *)(i + 8);
            while ( *(_QWORD *)(i + 8) );
          }
        }
        else
        {
          for ( i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
          {
            if ( *(_QWORD *)(i + 8) == v27 )
              break;
            v27 = i;
          }
        }
      }
      if ( i )
      {
        v28 = (_DWORD *)i;
        v29 = (*(unsigned int *)(i + 28) | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) + 1;
        if ( v29 < v25 )
          v28 = v44;
        v30 = a5 >> 12;
        if ( v29 >= v25 )
          v30 = (*(unsigned int *)(i + 28) | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) + 1;
        v31 = v19 - 1;
        v32 = v30 + v19 - 1;
      }
      else
      {
        v44[7] = 0;
        v31 = v19 - 1;
        BYTE1(v44[8]) = 0;
        v32 = v25 + v19 - 1;
        v28 = v44;
      }
      v33 = ~v31;
      v34 = v33 & v32;
      if ( v13 )
      {
        v42 = MiHonorRangeStraddleRequirement(v34, v45, v13, 0);
        v17 = a6 >> 12;
        v34 = v42;
        v14 = v43;
      }
      if ( v34 <= v20 )
      {
        v35 = *((unsigned __int8 *)v24 + 32);
        v36 = (unsigned int)v24[6];
        v37 = v17;
        v38 = v36 | (v35 << 32);
        if ( v38 <= v17 )
          v37 = v38;
        if ( v37 > v34 && v14 <= v37 - v34 )
          break;
      }
      if ( v28 == v44 )
        return 3221225495LL;
      v11 = a6;
      v24 = v28;
    }
    v39 = v33 & (v37 - v14);
    if ( v13 )
      v39 = v33 & MiHonorRangeStraddleRequirement(v39, v45, v13, 1);
    *a7 = v39 << 12;
    return 0LL;
  }
  else
  {
    *a7 = v18;
    return 0LL;
  }
}
