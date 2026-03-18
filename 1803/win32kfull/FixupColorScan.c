/*
 * XREFs of FixupColorScan @ 0x1C012702C
 * Callers:
 *     GetFixupScan @ 0x1C00D5270 (GetFixupScan.c)
 *     RepDIB_CY @ 0x1C0114DE0 (RepDIB_CY.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

void *__fastcall FixupColorScan(__m128i *a1, void *a2)
{
  int v2; // eax
  void *v3; // rdi
  unsigned int v4; // edx
  __m128i *v5; // r14
  __int64 v6; // r15
  __m128i v7; // xmm0
  int v8; // ebx
  __m128i v9; // xmm1
  void *v10; // rcx
  __int64 v11; // rcx
  int v12; // esi
  int v13; // edi
  int v14; // r10d
  unsigned __int64 v15; // rcx
  _DWORD *v16; // r15
  _BYTE *v17; // r11
  int v18; // r14d
  __int64 v19; // r12
  __int64 v20; // r13
  __int64 v21; // r9
  int v22; // ebx
  int v23; // edx
  bool v24; // zf
  void *result; // rax
  int v26; // r8d
  int v27; // r8d
  int v28; // r8d
  int v29; // r11d
  int v30; // edi
  int v31; // esi
  int v32; // ebx
  int v33; // r8d
  int v34; // eax
  unsigned int v35; // ecx
  unsigned int v36; // edx
  unsigned int v37; // edx
  int v38; // [rsp+20h] [rbp-89h]
  int v39; // [rsp+24h] [rbp-85h]
  int v40; // [rsp+2Ch] [rbp-7Dh]
  int v41; // [rsp+30h] [rbp-79h]
  int v42; // [rsp+34h] [rbp-75h]
  unsigned int v43; // [rsp+38h] [rbp-71h]
  int v44; // [rsp+3Ch] [rbp-6Dh]
  __int64 v45; // [rsp+40h] [rbp-69h]
  __int64 v46; // [rsp+40h] [rbp-69h]
  int v47; // [rsp+48h] [rbp-61h]
  int v48; // [rsp+4Ch] [rbp-5Dh]
  int v49; // [rsp+50h] [rbp-59h]
  _BYTE *v50; // [rsp+58h] [rbp-51h]
  unsigned int v51; // [rsp+60h] [rbp-49h]
  int v52; // [rsp+64h] [rbp-45h]
  int v53; // [rsp+68h] [rbp-41h]
  unsigned int v54; // [rsp+6Ch] [rbp-3Dh]
  _BYTE v55[48]; // [rsp+70h] [rbp-39h]
  size_t Size; // [rsp+A0h] [rbp-9h]
  __m128i v57; // [rsp+A8h] [rbp-1h]
  __int64 v58; // [rsp+B8h] [rbp+Fh]
  int v61; // [rsp+120h] [rbp+77h]
  int v62; // [rsp+128h] [rbp+7Fh]

  v2 = a1->m128i_i32[0];
  v3 = a2;
  v4 = a1[4].m128i_u32[0];
  v5 = a1;
  v6 = a1[3].m128i_u32[2];
  v54 = v4;
  v57 = a1[31];
  *(__m128i *)v55 = a1[30];
  v7 = a1[32];
  *(__m128i *)&v55[16] = v57;
  Size = a1[33].m128i_u64[0];
  v8 = HIDWORD(Size);
  *(__m128i *)&v55[32] = v7;
  if ( (a1->m128i_i32[0] & 0x20) != 0 )
  {
    v15 = v7.m128i_i64[0];
    v5->m128i_i32[0] = v2 & 0xFFFFFFDF;
    v8 = HIDWORD(Size) + 1;
  }
  else
  {
    v53 = HIDWORD(a1[33].m128i_i64[0]);
    if ( SHIDWORD(Size) <= 1 )
    {
      v15 = _mm_srli_si128(v7, 8).m128i_u64[0];
    }
    else
    {
      v9 = *(__m128i *)&v55[24];
      v10 = *(void **)v55;
      v45 = *(_QWORD *)v55;
      *(_OWORD *)v55 = *(_OWORD *)&v55[8];
      *(_QWORD *)&v55[32] = v7.m128i_i64[1];
      v57 = v9;
      *(_QWORD *)&v55[40] = v45;
      memmove(v10, *(const void **)&v55[24], (unsigned int)Size);
      v7.m128i_i64[0] = _mm_srli_si128(v9, 8).m128i_u64[0];
      if ( v5[3].m128i_i32[3] <= 0 )
      {
        memmove((void *)v7.m128i_i64[0], *(const void **)&v55[8], (unsigned int)Size);
      }
      else
      {
        ((void (__fastcall *)(__int64 *, __int64))v5[1].m128i_i64[1])(&v5->m128i_i64[1], v7.m128i_i64[0] + 3);
        *(_WORD *)v7.m128i_i64[0] = *(_WORD *)(v7.m128i_i64[0] + 6);
        v11 = v7.m128i_i64[0] + 2 * v6;
        *(_BYTE *)(v7.m128i_i64[0] + 2) = *(_BYTE *)(v7.m128i_i64[0] + 8);
        *(_WORD *)(v6 + v11 + 3) = *(_WORD *)(v6 + v11 - 3);
        *(_BYTE *)(v6 + v11 + 5) = *(_BYTE *)(v6 + v11 - 1);
      }
      v12 = **(_DWORD **)&v55[8] & 0xFFFFFF;
      v13 = **(_DWORD **)&v55[24] & 0xFFFFFF;
      v14 = *(_DWORD *)(*(_QWORD *)&v55[8] + 6LL) & 0xFFFFFF;
      v61 = *(_DWORD *)(*(_QWORD *)&v55[24] + 6LL) & 0xFFFFFF;
      v49 = v6 - 1;
      v15 = v7.m128i_u64[1];
      v43 = (unsigned __int8)*(_DWORD *)(*(_QWORD *)&v55[8] + 3LL)
          + 4
          * ((unsigned __int8)BYTE2(*(_DWORD *)(*(_QWORD *)&v55[8] + 3LL))
           + 2 * (unsigned __int8)BYTE1(*(_DWORD *)(*(_QWORD *)&v55[8] + 3LL)));
      if ( (_DWORD)v6 != 1 )
      {
        v16 = (_DWORD *)(*(_QWORD *)&v55[24] + 9LL);
        v17 = (_BYTE *)(v45 + 5);
        v18 = *(_DWORD *)(*(_QWORD *)&v55[8] + 3LL) & 0xFFFFFF;
        v19 = *(_QWORD *)&v55[8] - *(_QWORD *)&v55[24];
        v50 = (_BYTE *)(v45 + 5);
        v20 = v7.m128i_i64[0] - *(_QWORD *)&v55[24];
        v58 = *(_QWORD *)v55 - *(_QWORD *)&v55[24];
        v21 = v7.m128i_i64[1] - *(_QWORD *)&v55[24];
        v22 = *(_DWORD *)(*(_QWORD *)&v55[24] + 3LL) & 0xFFFFFF;
        v46 = v7.m128i_i64[1] - *(_QWORD *)&v55[24];
        do
        {
          v39 = v12;
          v23 = v18;
          v44 = v13;
          v40 = v18;
          v12 = v18;
          v41 = v22;
          v18 = v14;
          v13 = v22;
          v22 = v61;
          v61 = *v16 & 0xFFFFFF;
          v14 = *(_DWORD *)((char *)v16 + v19) & 0xFFFFFF;
          v51 = v43;
          v52 = *((unsigned __int8 *)v16 + v19 - 1);
          v42 = v22;
          v43 = *((unsigned __int8 *)v16 + v19 - 3) + 4 * (v52 + 2 * *((unsigned __int8 *)v16 + v19 - 2));
          if ( v23 != v18 && !(v12 ^ v22 | v13 ^ v18) )
          {
            v48 = *(_DWORD *)((char *)v16 + v58 - 6) & 0xFFFFFF;
            v62 = *(_DWORD *)((char *)v16 + v20 - 6) & 0xFFFFFF;
            v47 = *(_DWORD *)((char *)v16 + v58 - 3) & 0xFFFFFF;
            v38 = *(_DWORD *)((char *)v16 + v20 - 3) & 0xFFFFFF;
            if ( v12 ^ v14 | v13 ^ v61 | v18 ^ v39 | v22 ^ v44
              && v12 ^ v62 | v13 ^ *(_DWORD *)((char *)v16 + v58 - 6) & 0xFFFFFF | v18 ^ v38 | v22 ^ *(_DWORD *)((char *)v16 + v58 - 3) & 0xFFFFFF )
            {
              if ( v51 < v43 )
              {
                v28 = *(_DWORD *)((char *)v16 + v21 - 3);
                v29 = (unsigned __int8)v12;
                v30 = (unsigned __int8)v22;
                *((_BYTE *)v16 + v21 - 3) = ((unsigned __int8)v12
                                           + *((unsigned __int8 *)v16 + v20 - 3)
                                           + 12 * (unsigned __int8)v28
                                           + (unsigned __int8)v39
                                           + (unsigned int)(unsigned __int8)v22
                                           + 8) >> 4;
                v31 = v22 & 0xFF00;
                v32 = v22 & 0xFF0000;
                *((_BYTE *)v16 + v21 - 2) = ((v40 & 0xFF00)
                                           + (v38 & 0xFF00)
                                           + 12 * (v28 & 0xFF00)
                                           + (v39 & 0xFF00u)
                                           + v31
                                           + 2048) >> 12;
                *((_BYTE *)v16 + v46 - 1) = ((v40 & 0xFF0000)
                                           + (v38 & 0xFF0000)
                                           + 12 * (v28 & 0xFF0000)
                                           + (v39 & 0xFF0000)
                                           + v32
                                           + 0x80000) >> 20;
                v33 = *(_DWORD *)(v50 - 2);
                v34 = v29 + (unsigned __int8)v48;
                v17 = v50;
                *(v50 - 2) = (v34 + 12 * (unsigned __int8)v33 + (unsigned int)(unsigned __int8)v61 + v30 + 8) >> 4;
                *(v50 - 1) = ((v40 & 0xFF00) + (v48 & 0xFF00) + 12 * (v33 & 0xFF00) + (v61 & 0xFF00u) + v31 + 2048) >> 12;
                *v50 = ((v40 & 0xFF0000) + (v48 & 0xFF0000) + 12 * (v33 & 0xFF0000) + (v61 & 0xFF0000) + v32 + 0x80000) >> 20;
              }
              else
              {
                v26 = *(_DWORD *)((char *)v16 + v21 - 6);
                *((_BYTE *)v16 + v21 - 6) = ((unsigned __int8)v18
                                           + (unsigned __int8)v14
                                           + 8
                                           + (unsigned __int8)v41
                                           + *((unsigned __int8 *)v16 + v20 - 6)
                                           + 12 * (unsigned int)(unsigned __int8)v26) >> 4;
                *((_BYTE *)v16 + v21 - 5) = ((v18 & 0xFF00)
                                           + (v14 & 0xFF00)
                                           + 2048
                                           + (v41 & 0xFF00)
                                           + (v62 & 0xFF00)
                                           + 12 * (v26 & 0xFF00u)) >> 12;
                *((_BYTE *)v16 + v46 - 4) = ((v18 & 0xFF0000)
                                           + (v14 & 0xFF0000)
                                           + 0x80000
                                           + (v41 & 0xFF0000)
                                           + (v62 & 0xFF0000)
                                           + 12 * (v26 & 0xFF0000)) >> 20;
                v27 = *(_DWORD *)(v50 + 1);
                v17 = v50;
                v50[1] = ((unsigned __int8)v18
                        + (unsigned __int8)v44
                        + 8
                        + (unsigned __int8)v41
                        + (unsigned __int8)v47
                        + 12 * (unsigned int)(unsigned __int8)v27) >> 4;
                v50[2] = ((v18 & 0xFF00) + (v44 & 0xFF00)
                                         + 2048
                                         + (v41 & 0xFF00)
                                         + (v47 & 0xFF00)
                                         + 12 * (v27 & 0xFF00u)) >> 12;
                v50[3] = ((v18 & 0xFF0000)
                        + (v44 & 0xFF0000)
                        + 0x80000
                        + (v41 & 0xFF0000)
                        + (v47 & 0xFF0000)
                        + 12 * (v27 & 0xFF0000)) >> 20;
              }
              v21 = v7.m128i_i64[1] - *(_QWORD *)&v55[24];
              v12 = v40;
              v13 = v41;
              v22 = v42;
            }
            else
            {
              v35 = ((unsigned int)*((unsigned __int8 *)v16 + v19 - 4) + v52 + 1) >> 1;
              v17[3] = v35;
              *v17 = v35;
              *((_BYTE *)v16 + v21 - 1) = v35;
              *((_BYTE *)v16 + v21 - 4) = v35;
              v36 = (*((unsigned __int8 *)v16 + v19 - 5) + 1 + (unsigned int)*((unsigned __int8 *)v16 + v19 - 2)) >> 1;
              v17[2] = v36;
              *(v17 - 1) = v36;
              *((_BYTE *)v16 + v21 - 2) = v36;
              *((_BYTE *)v16 + v21 - 5) = v36;
              v37 = (*((unsigned __int8 *)v16 + v19 - 6) + (unsigned int)*((unsigned __int8 *)v16 + v19 - 3) + 1) >> 1;
              v17[1] = v37;
              *(v17 - 2) = v37;
              *((_BYTE *)v16 + v21 - 3) = v37;
              *((_BYTE *)v16 + v21 - 6) = v37;
            }
          }
          v17 += 3;
          v16 = (_DWORD *)((char *)v16 + 3);
          v24 = v49-- == 1;
          v50 = v17;
        }
        while ( !v24 );
        v5 = a1;
        v15 = v7.m128i_u64[1];
      }
      v8 = v53;
      v3 = a2;
      v4 = v54;
    }
  }
  if ( v3 )
    memmove(v3, (const void *)(v15 + 3), v4);
  result = v3;
  HIDWORD(Size) = v8 - 1;
  v5[30] = *(__m128i *)v55;
  v5[31] = v57;
  v5[32] = *(__m128i *)&v55[32];
  v5[33].m128i_i64[0] = Size;
  return result;
}
