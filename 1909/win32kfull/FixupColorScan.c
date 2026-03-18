/*
 * XREFs of FixupColorScan @ 0x1C014F068
 * Callers:
 *     GetFixupScan @ 0x1C0080D9C (GetFixupScan.c)
 *     RepDIB_CY @ 0x1C00D84F0 (RepDIB_CY.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 */

void *__fastcall FixupColorScan(__m128i *a1, void *a2)
{
  int v2; // eax
  void *v3; // rsi
  unsigned int v4; // edx
  __m128i *v5; // r14
  __int64 v6; // rdi
  __m128i v7; // xmm1
  int v8; // ebx
  char *v9; // r15
  __m128i v10; // xmm1
  _WORD *v11; // xmm0_8
  _WORD *v12; // rcx
  int v13; // r11d
  int v14; // esi
  int v15; // r10d
  unsigned __int64 v16; // rcx
  _BYTE *v17; // rdi
  int v18; // r14d
  _DWORD *v19; // r15
  __int64 v20; // r12
  char *v21; // r13
  __int64 v22; // r9
  int v23; // ebx
  int v24; // edx
  bool v25; // zf
  void *result; // rax
  int v27; // r8d
  int v28; // r8d
  int v29; // r8d
  int v30; // edi
  int v31; // ebx
  unsigned int v32; // eax
  int v33; // r11d
  int v34; // esi
  int v35; // r8d
  int v36; // eax
  unsigned int v37; // ecx
  unsigned int v38; // edx
  unsigned int v39; // edx
  int v40; // [rsp+20h] [rbp-A9h]
  int v41; // [rsp+24h] [rbp-A5h]
  int v42; // [rsp+28h] [rbp-A1h]
  int v43; // [rsp+2Ch] [rbp-9Dh]
  unsigned int v44; // [rsp+30h] [rbp-99h]
  int v45; // [rsp+34h] [rbp-95h]
  int v46; // [rsp+38h] [rbp-91h]
  int v47; // [rsp+40h] [rbp-89h]
  int v48; // [rsp+44h] [rbp-85h]
  int v49; // [rsp+48h] [rbp-81h]
  _BYTE *v50; // [rsp+50h] [rbp-79h]
  __int64 v51; // [rsp+58h] [rbp-71h]
  unsigned int v52; // [rsp+60h] [rbp-69h]
  int v53; // [rsp+64h] [rbp-65h]
  int v54; // [rsp+68h] [rbp-61h]
  unsigned int v55; // [rsp+6Ch] [rbp-5Dh]
  _BYTE v56[40]; // [rsp+78h] [rbp-51h]
  size_t Size; // [rsp+A0h] [rbp-29h]
  __m128i v58; // [rsp+A8h] [rbp-21h]
  __int64 v59; // [rsp+A8h] [rbp-21h]
  __m128i v60; // [rsp+B8h] [rbp-11h]
  __m128i v61; // [rsp+C8h] [rbp-1h]
  int v64; // [rsp+140h] [rbp+77h]
  int v65; // [rsp+148h] [rbp+7Fh]

  v2 = a1->m128i_i32[0];
  v3 = a2;
  v4 = a1[4].m128i_u32[0];
  v5 = a1;
  v6 = a1[3].m128i_u32[2];
  v55 = v4;
  v7 = a1[32];
  v61 = a1[30];
  *(_QWORD *)v56 = a1[30].m128i_i64[1];
  v58 = v7;
  v60 = a1[31];
  *(__m128i *)&v56[8] = v60;
  Size = a1[33].m128i_u64[0];
  v8 = HIDWORD(Size);
  *(__m128i *)&v56[24] = v7;
  if ( (a1->m128i_i32[0] & 0x20) != 0 )
  {
    v16 = v7.m128i_i64[0];
    v5->m128i_i32[0] = v2 & 0xFFFFFFDF;
    v8 = HIDWORD(Size) + 1;
  }
  else
  {
    v54 = HIDWORD(a1[33].m128i_i64[0]);
    if ( SHIDWORD(Size) <= 1 )
    {
      v16 = _mm_srli_si128(v7, 8).m128i_u64[0];
    }
    else
    {
      v9 = (char *)a1[30].m128i_i64[0];
      v10 = *(__m128i *)&v56[16];
      v61 = *(__m128i *)v56;
      *(_QWORD *)&v56[24] = *(_QWORD *)&v56[32];
      v60 = v10;
      *(_QWORD *)&v56[32] = v9;
      memmove(v9, *(const void **)&v56[16], (unsigned int)Size);
      v11 = (_WORD *)_mm_srli_si128(v10, 8).m128i_u64[0];
      if ( v5[3].m128i_i32[3] <= 0 )
      {
        memmove(v11, *(const void **)&v56[8], (unsigned int)Size);
      }
      else
      {
        ((void (__fastcall *)(__int64 *, __int64))v5[1].m128i_i64[1])(&v5->m128i_i64[1], (__int64)v11 + 3);
        *v11 = v11[3];
        v12 = &v11[v6];
        *((_BYTE *)v11 + 2) = *((_BYTE *)v11 + 8);
        *(_WORD *)((char *)v12 + v6 + 3) = *(_WORD *)((char *)v12 + v6 - 3);
        *((_BYTE *)v12 + v6 + 5) = *((_BYTE *)v12 + v6 - 1);
      }
      v13 = **(_DWORD **)&v56[8] & 0xFFFFFF;
      v14 = **(_DWORD **)&v56[16] & 0xFFFFFF;
      v42 = *(_DWORD *)(*(_QWORD *)&v56[16] + 6LL) & 0xFFFFFF;
      v15 = *(_DWORD *)(*(_QWORD *)&v56[8] + 6LL) & 0xFFFFFF;
      v49 = v6 - 1;
      v16 = *(_QWORD *)&v56[24];
      v44 = *(unsigned __int8 *)(*(_QWORD *)&v56[8] + 3LL)
          + 4 * (*(unsigned __int8 *)(*(_QWORD *)&v56[8] + 5LL) + 2 * *(unsigned __int8 *)(*(_QWORD *)&v56[8] + 4LL));
      if ( (_DWORD)v6 != 1 )
      {
        v17 = v9 + 5;
        v18 = *(_DWORD *)(*(_QWORD *)&v56[8] + 3LL) & 0xFFFFFF;
        v19 = (_DWORD *)(*(_QWORD *)&v56[16] + 9LL);
        v50 = v17;
        v20 = *(_QWORD *)&v56[8] - *(_QWORD *)&v56[16];
        v59 = *(_QWORD *)v56 - *(_QWORD *)&v56[16];
        v21 = (char *)v11 - *(_QWORD *)&v56[16];
        v22 = *(_QWORD *)&v56[24] - *(_QWORD *)&v56[16];
        v23 = *(_DWORD *)(*(_QWORD *)&v56[16] + 3LL) & 0xFFFFFF;
        v51 = *(_QWORD *)&v56[24] - *(_QWORD *)&v56[16];
        do
        {
          v41 = v13;
          v24 = v18;
          v45 = v14;
          v47 = v18;
          v13 = v18;
          v43 = v23;
          v18 = v15;
          v14 = v23;
          v23 = v42;
          v42 = *v19 & 0xFFFFFF;
          v15 = *(_DWORD *)((char *)v19 + v20) & 0xFFFFFF;
          v52 = v44;
          v53 = *((unsigned __int8 *)v19 + v20 - 1);
          v64 = v23;
          v44 = *((unsigned __int8 *)v19 + v20 - 3) + 4 * (v53 + 2 * *((unsigned __int8 *)v19 + v20 - 2));
          if ( v24 != v18 && !(v13 ^ v23 | v14 ^ v18) )
          {
            v46 = *(_DWORD *)((char *)v19 + v59 - 6) & 0xFFFFFF;
            v65 = *(_DWORD *)&v21[(_QWORD)v19 - 6] & 0xFFFFFF;
            v48 = *(_DWORD *)((char *)v19 + v59 - 3) & 0xFFFFFF;
            v40 = *(_DWORD *)&v21[(_QWORD)v19 - 3] & 0xFFFFFF;
            if ( v13 ^ v15 | v14 ^ v42 | v18 ^ v41 | v23 ^ v45
              && v13 ^ v65 | v14 ^ *(_DWORD *)((char *)v19 + v59 - 6) & 0xFFFFFF | v18 ^ v40 | v23 ^ *(_DWORD *)((char *)v19 + v59 - 3) & 0xFFFFFF )
            {
              if ( v52 < v44 )
              {
                v29 = *(_DWORD *)((char *)v19 + v22 - 3);
                v30 = (unsigned __int8)v23;
                v31 = (unsigned __int8)v13;
                v32 = ((unsigned __int8)v13
                     + (unsigned __int8)v21[(_QWORD)v19 - 3]
                     + 12 * (unsigned __int8)v29
                     + (unsigned int)(unsigned __int8)v41
                     + v30
                     + 8) >> 4;
                v33 = v13 & 0xFF00;
                *((_BYTE *)v19 + v22 - 3) = v32;
                v34 = v64 & 0xFF00;
                *((_BYTE *)v19 + v22 - 2) = (v33 + (v40 & 0xFF00) + 12 * (v29 & 0xFF00) + (v41 & 0xFF00u) + v34 + 2048) >> 12;
                *((_BYTE *)v19 + v51 - 1) = ((v47 & 0xFF0000)
                                           + v41
                                           + (v40 & 0xFF0000)
                                           + 12 * (v29 & 0xFF0000)
                                           + (v64 & 0xFF0000)
                                           + 0x80000) >> 20;
                v35 = *(_DWORD *)(v50 - 2);
                v36 = v30 + 8;
                v17 = v50;
                *(v50 - 2) = (v31
                            + (unsigned __int8)v46
                            + 12 * (unsigned __int8)v35
                            + (unsigned int)(unsigned __int8)v42
                            + v36) >> 4;
                *(v50 - 1) = (v33 + (v46 & 0xFF00) + 12 * (v35 & 0xFF00) + (v42 & 0xFF00u) + v34 + 2048) >> 12;
                *v50 = ((v47 & 0xFF0000) + v42 + (v46 & 0xFF0000) + 12 * (v35 & 0xFF0000) + (v64 & 0xFF0000) + 0x80000) >> 20;
              }
              else
              {
                v27 = *(_DWORD *)((char *)v19 + v22 - 6);
                *((_BYTE *)v19 + v22 - 6) = ((unsigned __int8)v18
                                           + (unsigned __int8)v15
                                           + 8
                                           + (unsigned __int8)v14
                                           + (unsigned __int8)v21[(_QWORD)v19 - 6]
                                           + 12 * (unsigned int)(unsigned __int8)v27) >> 4;
                *((_BYTE *)v19 + v22 - 5) = ((v18 & 0xFF00)
                                           + (v15 & 0xFF00)
                                           + 2048
                                           + (v43 & 0xFF00)
                                           + (v65 & 0xFF00)
                                           + 12 * (v27 & 0xFF00u)) >> 12;
                *((_BYTE *)v19 + v51 - 4) = ((v18 & 0xFF0000)
                                           + (v43 & 0xFF0000)
                                           + (v65 & 0xFF0000)
                                           + 12 * (v27 & 0xFF0000)
                                           + v15
                                           + 0x80000) >> 20;
                v28 = *(_DWORD *)(v50 + 1);
                v17 = v50;
                v50[1] = ((unsigned __int8)v14
                        + (unsigned __int8)v48
                        + 12 * (unsigned __int8)v28
                        + (unsigned __int8)v45
                        + (unsigned int)(unsigned __int8)v18
                        + 8) >> 4;
                v50[2] = ((v18 & 0xFF00) + (v45 & 0xFF00)
                                         + 2048
                                         + (v43 & 0xFF00)
                                         + (v48 & 0xFF00)
                                         + 12 * (v28 & 0xFF00u)) >> 12;
                v50[3] = ((v18 & 0xFF0000) + (v43 & 0xFF0000) + (v48 & 0xFF0000) + 12 * (v28 & 0xFF0000) + v45 + 0x80000) >> 20;
              }
              v22 = *(_QWORD *)&v56[24] - *(_QWORD *)&v56[16];
              v13 = v47;
              v14 = v43;
              v23 = v64;
            }
            else
            {
              v37 = ((unsigned int)*((unsigned __int8 *)v19 + v20 - 4) + v53 + 1) >> 1;
              v17[3] = v37;
              *v17 = v37;
              *((_BYTE *)v19 + v22 - 1) = v37;
              *((_BYTE *)v19 + v22 - 4) = v37;
              v38 = (*((unsigned __int8 *)v19 + v20 - 5) + 1 + (unsigned int)*((unsigned __int8 *)v19 + v20 - 2)) >> 1;
              v17[2] = v38;
              *(v17 - 1) = v38;
              *((_BYTE *)v19 + v22 - 2) = v38;
              *((_BYTE *)v19 + v22 - 5) = v38;
              v39 = (*((unsigned __int8 *)v19 + v20 - 6) + (unsigned int)*((unsigned __int8 *)v19 + v20 - 3) + 1) >> 1;
              v17[1] = v39;
              *(v17 - 2) = v39;
              *((_BYTE *)v19 + v22 - 3) = v39;
              *((_BYTE *)v19 + v22 - 6) = v39;
            }
          }
          v17 += 3;
          v19 = (_DWORD *)((char *)v19 + 3);
          v25 = v49-- == 1;
          v50 = v17;
        }
        while ( !v25 );
        v5 = a1;
        v16 = *(_QWORD *)&v56[24];
      }
      v8 = v54;
      v3 = a2;
      v4 = v55;
      v58 = *(__m128i *)&v56[24];
    }
  }
  if ( v3 )
    memmove(v3, (const void *)(v16 + 3), v4);
  result = v3;
  HIDWORD(Size) = v8 - 1;
  v5[30] = v61;
  v5[31] = v60;
  v5[32] = v58;
  v5[33].m128i_i64[0] = Size;
  return result;
}
