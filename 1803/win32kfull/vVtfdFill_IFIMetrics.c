/*
 * XREFs of vVtfdFill_IFIMetrics @ 0x1C0229378
 * Callers:
 *     bVtfdLoadFont @ 0x1C0228FC0 (bVtfdLoadFont.c)
 * Callees:
 *     StringCchLengthA @ 0x1C0225B84 (StringCchLengthA.c)
 *     fsSelectionFlags @ 0x1C0226690 (fsSelectionFlags.c)
 *     cjVTFDIFIMETRICS @ 0x1C0229258 (cjVTFDIFIMETRICS.c)
 *     iDefaultFace @ 0x1C0229344 (iDefaultFace.c)
 */

char __fastcall vVtfdFill_IFIMetrics(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char *v5; // r14
  char *v6; // r15
  char *v7; // rsi
  unsigned __int64 v8; // r12
  CHAR *v9; // r12
  unsigned __int64 v10; // rax
  int v11; // r11d
  ULONG BytesInMultiByteString; // r8d
  unsigned int v13; // r13d
  int v14; // r9d
  int v15; // edx
  int v16; // eax
  int v17; // r10d
  int v18; // ecx
  int *v19; // rdx
  char v20; // dl
  char v21; // dl
  __int16 v22; // cx
  int v23; // eax
  __int16 v24; // r9
  __int16 v25; // ax
  __int16 v26; // r8
  __int16 v27; // r11
  __int16 v28; // cx
  __int16 v29; // ax
  __int16 v30; // cx
  __int16 v31; // r8
  __int16 v32; // ax
  char v33; // cl
  CHAR v34; // al
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int16 v37; // ax
  int v38; // edx
  int v39; // ecx
  char v40; // dl
  char v41; // al
  _BYTE v43[20]; // [rsp+30h] [rbp-28h]
  PCHAR MultiByteString; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v45; // [rsp+A8h] [rbp+50h]
  CHAR v46; // [rsp+B0h] [rbp+58h] BYREF
  size_t pcchLength; // [rsp+B8h] [rbp+60h] BYREF

  v45 = a2;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = *(unsigned __int8 *)(a1 + 105) | (unsigned __int64)((*(unsigned __int8 *)(a1 + 106) | (*(unsigned __int16 *)(a1 + 107) << 8)) << 8);
  *(_DWORD *)(a3 + 4) = 0;
  v9 = (CHAR *)(a1 + v8);
  MultiByteString = v9;
  LODWORD(v10) = cjVTFDIFIMETRICS(a1);
  *(_DWORD *)a3 = v10;
  if ( !(_DWORD)v10 )
    return v10;
  *(_DWORD *)(a3 + 16) = 192;
  *(_DWORD *)(a3 + 8) = 192;
  StringCchLengthA(v9, 0x7FFFFFFFuLL, &pcchLength);
  BytesInMultiByteString = pcchLength + 1;
  v10 = 2LL * (unsigned int)(pcchLength + 1);
  if ( v10 > 0xFFFFFFFF )
    goto LABEL_49;
  LODWORD(v10) = v10 + 3;
  if ( (unsigned int)v10 < 2 * ((int)pcchLength + 1) )
    goto LABEL_49;
  LODWORD(v10) = v11 + (v10 & 0xFFFFFFFC);
  if ( (unsigned int)v10 < v11
    || (v13 = v10,
        (v15 = 2 * pcchLength, LODWORD(v10) = 2 * pcchLength + 192, *(_DWORD *)(a3 + 12) = v10, (int)v10 < v11)
     || (*(_DWORD *)(a3 + 20) = v10, a3 + 192 < a3)) )
  {
    v14 = 0;
    goto LABEL_7;
  }
  EngMultiByteToUnicodeN((LPWSTR)(a3 + 192), v15 + 2, 0LL, MultiByteString, BytesInMultiByteString);
  *(_WORD *)(a3 + *(int *)(a3 + 16) + 2LL * (unsigned int)pcchLength) = 0;
  v16 = iDefaultFace(a1);
  v17 = v14 + 12;
  v18 = v16;
  if ( v16 == 3 )
  {
    *(_DWORD *)(a3 + 24) = 0;
    goto LABEL_23;
  }
  v10 = a3 + (int)v13;
  *(_DWORD *)(a3 + 24) = v13;
  if ( v10 < a3 || (LOBYTE(v10) = v13 + 12, v13 + 12 < v13) )
  {
LABEL_7:
    *(_DWORD *)a3 = v14;
    return v10;
  }
  _mm_lfence();
  v19 = (int *)(a3 + *(int *)(a3 + 24));
  if ( v18 )
  {
    if ( (unsigned int)(v18 - 1) > 1 )
      goto LABEL_23;
    LOBYTE(v10) = (_BYTE)v19 + 12;
    *(_QWORD *)v19 = 0LL;
    v19[2] = v17;
    if ( v19 + 3 >= v19 )
    {
      LOBYTE(v10) = v13 + 32;
      if ( v13 + 32 >= v13 + 12 )
      {
        _mm_lfence();
        v7 = (char *)v19 + v19[2];
        goto LABEL_23;
      }
    }
LABEL_49:
    *(_DWORD *)a3 = 0;
    return v10;
  }
  *v19 = v17;
  v19[1] = v14 + 32;
  v19[2] = v14 + 52;
  v10 = (unsigned __int64)v19 + *v19;
  if ( v10 < (unsigned __int64)v19 )
    goto LABEL_49;
  v10 = (unsigned __int64)v19 + v19[1];
  if ( v10 < (unsigned __int64)v19 )
    goto LABEL_49;
  v10 = (unsigned __int64)v19 + v14 + 52;
  if ( v10 < (unsigned __int64)v19 )
    goto LABEL_49;
  _mm_lfence();
  LOBYTE(v10) = v13 + 72;
  v5 = (char *)v19 + *v19;
  v6 = (char *)v19 + v19[1];
  v7 = (char *)v19 + v19[2];
  if ( v13 + 72 < v13 + 12 )
    goto LABEL_49;
LABEL_23:
  *(_BYTE *)(a3 + 44) = *(_BYTE *)(a1 + 85);
  v20 = *(_BYTE *)(a1 + 90);
  *(_BYTE *)(a3 + 45) = v20;
  if ( (v20 & 0xF) != 0 )
    v21 = v20 & 0xF0 | 2;
  else
    v21 = v20 & 0xF0 | 1;
  *(_BYTE *)(a3 + 45) = v21;
  v22 = *(_WORD *)(a1 + 83);
  *(_WORD *)(a3 + 46) = v22;
  if ( (unsigned __int16)(v22 - 1) > 0x3E7u )
    *(_WORD *)(a3 + 46) = 400;
  *(_DWORD *)(a3 + 48) = 589844;
  v23 = *(_DWORD *)(a3 + 48);
  *(_DWORD *)(a3 + 28) = 0;
  if ( (v21 & 0xF) == 1 )
    v23 = 4788244;
  *(_DWORD *)(a3 + 48) = v23;
  *(_WORD *)(a3 + 52) = fsSelectionFlags((_BYTE *)a1);
  *(_WORD *)(a3 + 54) = 0;
  v24 = *(_WORD *)(a1 + 88);
  if ( *(__int16 *)(a1 + 76) <= 0 )
    v25 = *(_WORD *)(a1 + 88);
  else
    v25 = *(_WORD *)(a1 + 88) - ((*(unsigned __int8 *)(a1 + 77) << 8) | *(unsigned __int8 *)(a1 + 76));
  *(_WORD *)(a3 + 56) = v25;
  *(_WORD *)(a3 + 58) = 0;
  v26 = *(_WORD *)(a1 + 74);
  *(_WORD *)(a3 + 60) = v26;
  v27 = v24 - v26;
  *(_WORD *)(a3 + 62) = v24 - v26;
  *(_WORD *)(a3 + 64) = v26;
  *(_WORD *)(a3 + 66) = v26 - v24;
  v28 = *(_WORD *)(a1 + 78);
  *(_WORD *)(a3 + 70) = v26;
  *(_WORD *)(a3 + 68) = v28;
  *(_WORD *)(a3 + 74) = v28;
  *(_WORD *)(a3 + 72) = v26 - v24;
  *(_WORD *)(a3 + 76) = *(_WORD *)(a1 + 91);
  v29 = *(unsigned __int8 *)(a1 + 93);
  v30 = *(unsigned __int8 *)(a1 + 94);
  *(_QWORD *)(a3 + 84) = 0LL;
  *(_QWORD *)(a3 + 92) = 0LL;
  *(_WORD *)(a3 + 78) = v29 | (v30 << 8);
  if ( v24 <= 12 )
    v31 = 1;
  else
    v31 = v24 / 12;
  *(_WORD *)(a3 + 100) = v31;
  *(_WORD *)(a3 + 104) = v31;
  v32 = ~(v31 / 2);
  if ( (__int16)(((v31 + 1) >> 1) - v27 + v31 / 2 + 1) > 0 )
    v32 = ((v31 + 1) >> 1) - v27;
  *(_WORD *)(a3 + 102) = v32;
  *(_WORD *)(a3 + 106) = (__int16)((*(unsigned __int8 *)(a1 + 74) | (*(unsigned __int8 *)(a1 + 75) << 8))
                                 - (*(unsigned __int8 *)(a1 + 76) | (*(unsigned __int8 *)(a1 + 77) << 8))
                                 + 2)
                       / 3;
  *(_BYTE *)(a3 + 108) = *(_BYTE *)(a1 + 95);
  *(_BYTE *)(a3 + 109) = *(_BYTE *)(a1 + 96);
  v33 = *(_BYTE *)(a1 + 95);
  v34 = v33 + *(_BYTE *)(a1 + 98);
  LOBYTE(MultiByteString) = v33 + *(_BYTE *)(a1 + 97);
  *(_BYTE *)(a3 + 110) = (_BYTE)MultiByteString;
  v46 = v34;
  *(_BYTE *)(a3 + 111) = v34;
  EngMultiByteToUnicodeN((LPWSTR)(a3 + 116), 2u, 0LL, (PCHAR)&MultiByteString, 1u);
  EngMultiByteToUnicodeN((LPWSTR)(a3 + 118), 2u, 0LL, &v46, 1u);
  v35 = v45;
  v36 = (unsigned int)(*(_DWORD *)(v45 + 12) - 1) + 1LL;
  *(_WORD *)(a3 + 112) = *(_WORD *)(v45 + 16);
  v36 *= 2LL;
  v37 = *(_WORD *)(v35 + 8 * v36);
  LOWORD(v36) = *(_WORD *)(v35 + 8 * v36 + 2);
  *(_DWORD *)(a3 + 80) = 0;
  *(_DWORD *)(a3 + 40) = 0;
  *(_WORD *)(a3 + 114) = v37 + v36 - 1;
  *(_QWORD *)(a3 + 120) = 1LL;
  LODWORD(v36) = *(unsigned __int16 *)(a1 + 70);
  *(_DWORD *)(a3 + 132) = v36;
  v38 = *(unsigned __int16 *)(a1 + 72);
  *(_DWORD *)(a3 + 128) = v38;
  if ( !(_DWORD)v36 )
    *(_DWORD *)(a3 + 132) = 1;
  if ( !v38 )
    *(_DWORD *)(a3 + 128) = 1;
  v39 = *(_WORD *)(a3 + 52) & 1;
  *(_DWORD *)(a3 + 136) = v39;
  *(_DWORD *)(a3 + 140) = v39 + 1;
  *(_DWORD *)(a3 + 148) = *(__int16 *)(a3 + 70);
  *(_DWORD *)(a3 + 152) = *(__int16 *)(a3 + 78);
  *(_DWORD *)(a3 + 156) = *(__int16 *)(a3 + 72);
  *(_DWORD *)(a3 + 144) = 0;
  *(_DWORD *)(a3 + 160) = 1852534357;
  *(_QWORD *)(a3 + 164) = 0LL;
  *(_BYTE *)(a3 + 172) = 1;
  *(_BYTE *)(a3 + 173) = (*(_BYTE *)(a3 + 45) & 0xF0) != 32 ? 0 : 0xB;
  v40 = *(_WORD *)(a1 + 83) / 0x64u + 1;
  *(_BYTE *)(a3 + 174) = v40;
  v41 = -(*(_WORD *)(a1 + 86) != 0);
  *(_DWORD *)(a3 + 176) = 0;
  *(_WORD *)(a3 + 180) = 0;
  LOBYTE(v10) = v41 & 9;
  *(_BYTE *)(a3 + 175) = v10;
  if ( *(_DWORD *)(a3 + 24) )
  {
    *(_WORD *)v43 = 0;
    *(_WORD *)&v43[4] = *(_WORD *)(a3 + 46);
    *(_WORD *)&v43[6] = *(_WORD *)(a3 + 52);
    *(_DWORD *)&v43[8] = *(_DWORD *)(a3 + 76);
    *(_QWORD *)&v43[12] = *(_QWORD *)(a3 + 136);
    LOBYTE(v10) = v43[16];
    v43[3] = v40;
    v43[2] = 0;
    if ( v5 )
    {
      *(_OWORD *)v5 = *(_OWORD *)v43;
      *((_DWORD *)v5 + 4) = *(_DWORD *)&v43[16];
      v7[3] = 8;
      *((_WORD *)v5 + 3) |= 0x20u;
      ++*((_WORD *)v5 + 4);
      ++*((_WORD *)v5 + 5);
      *((_WORD *)v5 + 2) = 700;
    }
    if ( v6 )
    {
      *(_OWORD *)v6 = *(_OWORD *)v43;
      *((_DWORD *)v6 + 4) = *(_DWORD *)&v43[16];
      *((_WORD *)v6 + 3) |= 1u;
      *((_DWORD *)v6 + 3) = 1;
      *((_DWORD *)v6 + 4) = 2;
    }
    if ( v7 )
    {
      *(_OWORD *)v7 = *(_OWORD *)v43;
      *((_DWORD *)v7 + 4) = *(_DWORD *)&v43[16];
      *((_WORD *)v7 + 3) |= 0x21u;
      ++*((_WORD *)v7 + 4);
      ++*((_WORD *)v7 + 5);
      v7[3] = 8;
      *((_WORD *)v7 + 2) = 700;
      *((_DWORD *)v7 + 3) = 1;
      *((_DWORD *)v7 + 4) = 2;
    }
  }
  return v10;
}
