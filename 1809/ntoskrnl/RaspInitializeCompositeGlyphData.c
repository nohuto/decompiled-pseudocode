/*
 * XREFs of RaspInitializeCompositeGlyphData @ 0x1403293F8
 * Callers:
 *     RaspLoadCompositeGlyphData @ 0x140329780 (RaspLoadCompositeGlyphData.c)
 * Callees:
 *     RaspFreeMemory @ 0x14017AC5C (RaspFreeMemory.c)
 *     FioFwReadBytesAtOffset @ 0x14017BD48 (FioFwReadBytesAtOffset.c)
 *     RaspAllocateMemory @ 0x14017C164 (RaspAllocateMemory.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall RaspInitializeCompositeGlyphData(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int16 a4,
        __int16 a5,
        unsigned __int16 a6,
        unsigned int a7,
        _WORD *a8,
        _QWORD *a9,
        __int64 *a10)
{
  __int64 *v10; // r12
  int v12; // ebp
  unsigned __int64 v13; // r15
  char *Memory; // rax
  char *v15; // rdi
  _DWORD *v17; // rcx
  __int64 v18; // r8
  char *v19; // r13
  __int16 *v20; // rdx
  int v21; // eax
  _DWORD *v22; // rdx
  _WORD *v23; // rdi
  char *v24; // r15
  char *v25; // r14
  __int16 v26; // r9
  __int16 *v27; // rsi
  __int64 v28; // rbx
  __int64 v29; // rax
  unsigned __int16 *v30; // rbp
  unsigned __int16 v31; // r8
  __int64 v32; // rcx
  size_t v33; // r8
  __int64 v34; // r9
  __int16 v35; // cx
  __int16 v36; // dx
  __int16 v37; // ax
  unsigned __int16 v38; // r8
  __int16 v39; // r13
  __int16 v40; // r12
  __int64 v41; // r9
  __int64 v42; // r10
  __int64 v43; // rax
  __int16 v44; // cx
  __int16 v45; // ax
  _WORD *v46; // [rsp+20h] [rbp-68h]
  _DWORD *v47; // [rsp+28h] [rbp-60h]
  char *v48; // [rsp+38h] [rbp-50h]
  __int16 v52; // [rsp+A8h] [rbp+20h]
  __int16 v53; // [rsp+B0h] [rbp+28h]
  __int16 v54; // [rsp+B8h] [rbp+30h]

  v10 = a2;
  v12 = a4;
  v13 = a4 + a6 + 8 * (unsigned int)a4 + 2 * (a5 + 41);
  Memory = (char *)RaspAllocateMemory(v13, a10);
  v15 = Memory;
  if ( !Memory )
    return 3221225626LL;
  memset(Memory, 0, v13);
  v17 = v15 + 2;
  v18 = 4LL;
  v48 = v15;
  v19 = v15;
  *(_WORD *)v15 = a5;
  v20 = (__int16 *)(a3 + 2);
  do
  {
    v21 = *v20++;
    *v17++ = v21;
    --v18;
  }
  while ( v18 );
  v22 = v15 + 18;
  *(_DWORD *)(v15 + 18) = *(_DWORD *)(v15 + 2);
  *((_WORD *)v15 + 11) = a6;
  *((_WORD *)v15 + 12) = a4;
  v23 = v15 + 66;
  v47 = v22;
  v46 = v23;
  *(_QWORD *)(v19 + 26) = v23;
  v24 = (char *)&v23[a5];
  if ( a6 )
  {
    *(_QWORD *)(v19 + 34) = v24;
    v24 += a6;
    FioFwReadBytesAtOffset(a1, a7, a6, &v23[a5]);
    v22 = v47;
    v23 = *(_WORD **)(v19 + 26);
    v46 = v23;
  }
  v25 = &v24[a4];
  *(_QWORD *)(v19 + 42) = v24;
  *(_QWORD *)(v19 + 50) = v25;
  v26 = 0;
  v54 = 0;
  v53 = 0;
  v27 = (__int16 *)&v25[4 * (v12 + 2)];
  *(_QWORD *)(v19 + 58) = v27;
  while ( 1 )
  {
    v28 = *v10;
    if ( (__int64 *)*v10 == v10 )
      break;
    if ( *(__int64 **)(v28 + 8) != v10 || (v29 = *(_QWORD *)v28, *(_QWORD *)(*(_QWORD *)v28 + 8LL) != v28) )
      __fastfail(3u);
    *v10 = v29;
    *(_QWORD *)(v29 + 8) = v10;
    v30 = *(unsigned __int16 **)(v28 + 16);
    if ( (*(_WORD *)(v28 + 24) & 0x200) != 0 )
    {
      *a8 = *(_WORD *)(v28 + 26);
      *v22 = *(_DWORD *)(v30 + 1);
    }
    v31 = 0;
    if ( (__int16)*v30 > 0 )
    {
      do
      {
        v32 = v31++;
        *v23++ = v26 + *(_WORD *)(*(_QWORD *)(v30 + 13) + 2 * v32);
      }
      while ( v31 < (__int16)*v30 );
      v46 = v23;
    }
    v33 = v30[12];
    v52 = v33 + v26;
    memmove(v24, *(const void **)(v30 + 21), v33);
    v34 = v30[12];
    v35 = 0x4000;
    v36 = *(_WORD *)(v28 + 24);
    v24 += v34;
    v37 = 0x4000;
    if ( (v36 & 8) != 0 )
    {
      v37 = *(_WORD *)(v28 + 32);
      v35 = v37;
    }
    else if ( (v36 & 0x40) != 0 )
    {
      v37 = *(_WORD *)(v28 + 32);
      v35 = *(_WORD *)(v28 + 34);
    }
    v38 = 0;
    if ( (_WORD)v34 )
    {
      v39 = v54;
      v40 = v53;
      v41 = v37;
      v42 = v35;
      do
      {
        *(_WORD *)v25 = *(_WORD *)(*(_QWORD *)(v30 + 25) + 4LL * v38);
        *v27 = *(_WORD *)(*(_QWORD *)(v30 + 29) + 4LL * v38);
        *(_WORD *)v25 = v41 * *(__int16 *)v25 / 0x4000;
        v43 = v42 * *v27 / 0x4000;
        *v27 = v43;
        if ( !v38 )
        {
          *(_WORD *)v25 -= v39;
          *v27 -= v40;
          v44 = *(_WORD *)(v28 + 24);
          LOWORD(v43) = *v27;
          if ( (v44 & 2) != 0 )
          {
            if ( (v44 & 1) != 0 )
            {
              *(_WORD *)v25 += *(_WORD *)(v28 + 28);
              v45 = *(_WORD *)(v28 + 30);
            }
            else
            {
              *(_WORD *)v25 += *(char *)(v28 + 28);
              v45 = *(char *)(v28 + 29);
            }
            *v27 += v45;
            LOWORD(v43) = *v27;
          }
        }
        v39 += *(_WORD *)v25;
        v40 += v43;
        v25 += 4;
        v27 += 2;
        ++v38;
      }
      while ( v38 < v30[12] );
      v23 = v46;
      v53 = v40;
      v10 = a2;
      v54 = v39;
      v19 = v48;
    }
    RaspFreeMemory((__int64)v30, a10);
    RaspFreeMemory(v28, a10);
    v26 = v52;
    v22 = v47;
  }
  *a9 = v19;
  return 0LL;
}
