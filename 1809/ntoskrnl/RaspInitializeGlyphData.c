/*
 * XREFs of RaspInitializeGlyphData @ 0x14017B96C
 * Callers:
 *     RaspLoadGlyphData @ 0x14017C268 (RaspLoadGlyphData.c)
 * Callees:
 *     RaspFreeMemory @ 0x14017AC5C (RaspFreeMemory.c)
 *     FioFwReadUshortAtOffset @ 0x14017B938 (FioFwReadUshortAtOffset.c)
 *     FioFwReadBytesAtOffset @ 0x14017BD48 (FioFwReadBytesAtOffset.c)
 *     RaspAllocateMemory @ 0x14017C164 (RaspAllocateMemory.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall RaspInitializeGlyphData(__int64 a1, int a2, __int64 *a3, _QWORD *a4)
{
  int v6; // ecx
  unsigned int v7; // ebx
  __int64 v8; // r12
  unsigned int v9; // ebx
  __int16 v10; // r15
  unsigned int v11; // ebx
  unsigned __int16 v12; // r13
  unsigned __int16 v13; // bx
  char *Memory; // rax
  char *v15; // rdi
  __int64 v16; // r14
  int v17; // ecx
  _WORD *v18; // rdi
  int v19; // eax
  int v20; // esi
  unsigned int v21; // esi
  __int64 v22; // rbx
  unsigned int v23; // esi
  _QWORD *v24; // r15
  unsigned int v25; // esi
  char *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rbx
  int v29; // r15d
  __int64 v30; // r11
  __int64 v31; // r8
  __int16 v32; // r9
  __int64 v33; // r10
  __int64 v34; // rdx
  unsigned int v35; // esi
  char *v36; // rdi
  __int16 v37; // r13
  char *v38; // rbx
  char v39; // dl
  char *v40; // rax
  __int16 v41; // di
  char *v42; // rbx
  char v43; // cl
  _QWORD *v44; // rdx
  __int64 v45; // rcx
  unsigned __int8 v47; // cl
  __int64 v48; // rdx
  __int64 v49; // rax
  unsigned int v50; // edx
  __int16 v51; // [rsp+20h] [rbp-48h] BYREF
  size_t Size; // [rsp+28h] [rbp-40h]
  __int64 v53; // [rsp+30h] [rbp-38h]
  __int64 v54; // [rsp+38h] [rbp-30h]
  __int64 v55; // [rsp+48h] [rbp-20h] BYREF
  __int16 v56[12]; // [rsp+50h] [rbp-18h] BYREF
  char *v57; // [rsp+B0h] [rbp+48h] BYREF
  int v58; // [rsp+B8h] [rbp+50h]
  __int64 *v59; // [rsp+C0h] [rbp+58h]
  _QWORD *v60; // [rsp+C8h] [rbp+60h]

  v60 = a4;
  v59 = a3;
  v58 = a2;
  v55 = 0LL;
  v56[0] = 0;
  LOWORD(v57) = 0;
  v51 = 0;
  if ( !a1 )
    return 3221225473LL;
  v6 = *(_DWORD *)(a1 + 60);
  if ( !v6 )
    return 3221225473LL;
  v7 = v6 + a2;
  v54 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  v8 = v54;
  FioFwReadUshortAtOffset(v54, (unsigned int)(v6 + a2), &v55);
  FioFwReadUshortAtOffset(v54, v7 + 2, (_WORD *)&v55 + 1);
  v7 += 4;
  FioFwReadUshortAtOffset(v54, v7, (_WORD *)&v55 + 2);
  FioFwReadUshortAtOffset(v54, v7 + 2, (_WORD *)&v55 + 3);
  v9 = v7 + 4;
  FioFwReadUshortAtOffset(v54, v9, v56);
  v10 = v55;
  if ( (v55 & 0x8000u) != 0LL )
    return 3221225485LL;
  if ( (_WORD)v55 )
  {
    v11 = v9 + 2 * (__int16)v55;
    FioFwReadUshortAtOffset(v54, v11, &v51);
    v12 = v51 + 1;
    FioFwReadUshortAtOffset(v8, v11 + 2, &v57);
    v13 = (unsigned __int16)v57;
    v53 = (unsigned __int16)v57;
    Size = v12 + (unsigned __int64)(unsigned __int16)v57 + 8LL * v12 + 2 * (v10 + 41LL);
    Memory = (char *)RaspAllocateMemory(Size);
    v15 = Memory;
    if ( Memory )
    {
      memset(Memory, 0, Size);
      v16 = (__int64)v15;
      v17 = SWORD1(v55);
      *(_DWORD *)(v15 + 6) = SWORD2(v55);
      *(_DWORD *)(v15 + 10) = SHIWORD(v55);
      *(_DWORD *)(v15 + 14) = v56[0];
      *(_WORD *)v15 = v10;
      *(_DWORD *)(v15 + 2) = v17;
      *(_DWORD *)(v15 + 18) = v17;
      *((_WORD *)v15 + 11) = v13;
      *((_WORD *)v15 + 12) = v12;
      v18 = v15 + 66;
      v19 = *(_DWORD *)(a1 + 60);
      v20 = v58 + 10;
      *(_QWORD *)(v16 + 26) = v18;
      v21 = v19 + v20;
      if ( v10 > 0 )
      {
        v22 = (unsigned __int16)v10;
        do
        {
          FioFwReadUshortAtOffset(v8, v21, v18);
          v21 += 2;
          ++v18;
          --v22;
        }
        while ( v22 );
        v13 = (unsigned __int16)v57;
      }
      v23 = v21 + 2;
      *(_QWORD *)(v16 + 34) = v18;
      FioFwReadBytesAtOffset(v8, v23, v13, v18);
      v24 = v60;
      v25 = v13 + v23;
      v26 = (char *)v18 + v53;
      *(_QWORD *)(v16 + 42) = v26;
      v27 = RaspAllocateMemory(v12);
      v53 = v27;
      v28 = v27;
      if ( v27 )
      {
        v29 = v12;
        FioFwReadBytesAtOffset(v8, v25, v12, v27);
        LODWORD(v30) = 0;
        LODWORD(v31) = 0;
        v32 = 0;
        if ( v12 )
        {
          do
          {
            v33 = (unsigned int)v31;
            v34 = v32++;
            *(_BYTE *)(v34 + *(_QWORD *)(v16 + 42)) = *(_BYTE *)((unsigned int)v31 + v28);
            if ( (*(_BYTE *)((unsigned int)v31 + v28) & 8) != 0 )
            {
              v31 = (unsigned int)(v31 + 1);
              v47 = *(_BYTE *)(v31 + v28);
              if ( v47 )
              {
                v30 = v47;
                do
                {
                  v48 = v32++;
                  *(_BYTE *)(v48 + *(_QWORD *)(v16 + 42)) = *(_BYTE *)(v33 + v28);
                  --v30;
                }
                while ( v30 );
                v29 = v12;
              }
            }
            LODWORD(v31) = v31 + 1;
          }
          while ( v32 < v29 );
          v8 = v54;
        }
        v35 = v31 + v25;
        v36 = &v26[v12];
        v37 = v30;
        *(_QWORD *)(v16 + 50) = v36;
        if ( v29 )
        {
          while ( 1 )
          {
            v38 = &v36[4 * v37];
            *(_DWORD *)v38 = v30;
            v39 = *(_BYTE *)(v37 + *(_QWORD *)(v16 + 42));
            if ( (v39 & 2) != 0 )
            {
              FioFwReadBytesAtOffset(v8, v35++, 1LL, &v36[4 * v37]);
              if ( (*(_BYTE *)(v37 + *(_QWORD *)(v16 + 42)) & 0x10) == 0 )
                *(_DWORD *)v38 = -*(_DWORD *)v38;
            }
            else
            {
              if ( (v39 & 0x10) != 0 )
              {
                *(_DWORD *)v38 = v30;
                goto LABEL_20;
              }
              FioFwReadUshortAtOffset(v8, v35, &v36[4 * v37]);
              v35 += 2;
            }
            LODWORD(v30) = 0;
LABEL_20:
            if ( ++v37 >= v29 )
            {
              v36 = *(char **)(v16 + 50);
              break;
            }
          }
        }
        v40 = &v36[4 * v29 + 8];
        v41 = v30;
        v57 = v40;
        *(_QWORD *)(v16 + 58) = v40;
        if ( v29 )
        {
          do
          {
            v42 = &v40[4 * v41];
            *(_DWORD *)v42 = v30;
            v43 = *(_BYTE *)(*(_QWORD *)(v16 + 42) + v41);
            if ( (v43 & 4) != 0 )
            {
              FioFwReadBytesAtOffset(v8, v35++, 1LL, v42);
              if ( (*(_BYTE *)(*(_QWORD *)(v16 + 42) + v41) & 0x20) == 0 )
                *(_DWORD *)v42 = -*(_DWORD *)v42;
            }
            else
            {
              if ( (v43 & 0x20) != 0 )
              {
                *(_DWORD *)v42 = v30;
                goto LABEL_27;
              }
              FioFwReadUshortAtOffset(v8, v35, v42);
              v35 += 2;
            }
            LODWORD(v30) = 0;
LABEL_27:
            ++v41;
            v40 = v57;
          }
          while ( v41 < v29 );
        }
        v44 = v60;
        v45 = v53;
        *v59 = v16;
        RaspFreeMemory(v45, v44);
        return 0LL;
      }
      RaspFreeMemory(v16, v24);
    }
  }
  else
  {
    v49 = RaspAllocateMemory(66LL);
    if ( v49 )
    {
      v50 = SWORD1(v55);
      *(_DWORD *)(v49 + 6) = SWORD2(v55);
      *(_DWORD *)(v49 + 10) = SHIWORD(v55);
      *(_DWORD *)(v49 + 14) = v56[0];
      *(_WORD *)v49 = 0;
      *(_DWORD *)(v49 + 2) = v50;
      *(_QWORD *)(v49 + 18) = v50;
      *a3 = v49;
      return 0LL;
    }
  }
  return 3221225626LL;
}
