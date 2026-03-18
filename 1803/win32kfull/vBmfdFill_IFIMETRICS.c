/*
 * XREFs of vBmfdFill_IFIMETRICS @ 0x1C02268EC
 * Callers:
 *     bConvertFontRes @ 0x1C0226134 (bConvertFontRes.c)
 * Callees:
 *     StringCchLengthA @ 0x1C0225B84 (StringCchLengthA.c)
 *     fsSelectionFlags @ 0x1C0226690 (fsSelectionFlags.c)
 *     vComputeSpecialChars @ 0x1C0226F88 (vComputeSpecialChars.c)
 */

char __fastcall vBmfdFill_IFIMETRICS(__int64 a1, _QWORD *a2)
{
  const char *v2; // r11
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rdi
  HRESULT v9; // eax
  const CHAR *v10; // r11
  int v11; // r8d
  __int64 v12; // r12
  int v13; // ecx
  ULONG v14; // edx
  ULONG BytesInMultiByteString; // eax
  unsigned int v16; // eax
  char v17; // r12
  signed int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  char v21; // cl
  char v22; // dl
  __int16 v23; // cx
  int v24; // eax
  __int16 v25; // r10
  __int16 v26; // ax
  __int16 v27; // cx
  __int16 v28; // dx
  __int16 v29; // dx
  __int16 v30; // ax
  __int16 v31; // r10
  __int16 v32; // r8
  __int16 v33; // r11
  __int16 v34; // ax
  __int16 v35; // cx
  __int16 v36; // cx
  __int16 v37; // dx
  __int16 v38; // r8
  __int16 v39; // ax
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // edx
  int v43; // ecx
  int v44; // ecx
  char v45; // al
  char v46; // dl
  __int16 v47; // cx
  _BYTE v49[20]; // [rsp+30h] [rbp-20h]
  __int16 v50; // [rsp+90h] [rbp+40h]
  __int16 v51; // [rsp+90h] [rbp+40h]
  size_t pcchLength; // [rsp+A0h] [rbp+50h] BYREF

  v2 = (const char *)a2[2];
  v4 = *a2;
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 80);
  v7 = 0LL;
  v50 = *(_WORD *)(a1 + 48);
  v8 = 0LL;
  if ( !v2 )
    v2 = (const char *)(v4
                      + ((*(unsigned __int8 *)(v4 + 108) << 24) | *(unsigned __int8 *)(v4 + 105) | (unsigned __int64)(*(unsigned __int16 *)(v4 + 106) << 8)));
  *(_DWORD *)(v6 + 4) = 0;
  *(_DWORD *)(v6 + 16) = 192;
  *(_DWORD *)(v6 + 8) = 192;
  v9 = StringCchLengthA(v2, 0x7FFFFFFFuLL, &pcchLength);
  if ( v9 >= 0 )
  {
    v11 = pcchLength;
    v12 = 2LL * (unsigned int)pcchLength;
    v13 = 2 * pcchLength;
    *(_DWORD *)(v6 + 12) = 2 * pcchLength + 192;
    v14 = v13 + 2;
    *(_DWORD *)(v6 + 20) = v13 + 192;
    BytesInMultiByteString = v11 + 1;
    if ( *(_DWORD *)(a1 + 32) )
    {
      RtlMultiByteToUnicodeN((PWCH)(v6 + 194), v14, 0LL, v10, BytesInMultiByteString);
      *(_WORD *)(v12 + *(int *)(v6 + 16) + v6 + 2) = 0;
      *(_WORD *)(*(int *)(v6 + 16) + v6) = 64;
    }
    else
    {
      RtlMultiByteToUnicodeN((PWCH)(v6 + 192), v14, 0LL, v10, BytesInMultiByteString);
      *(_WORD *)(v12 + *(int *)(v6 + 16) + v6) = 0;
    }
    *(_DWORD *)v6 = *(_DWORD *)(a1 + 60);
    v16 = *(_DWORD *)(a1 + 68);
    LODWORD(pcchLength) = 2;
    v17 = 3;
    if ( v16 <= 2 )
    {
      v18 = (*(_DWORD *)(a1 + 56) + 195) & 0xFFFFFFFC;
      v19 = v6 + v18;
      *(_DWORD *)(v6 + 24) = v18;
      v20 = *(_DWORD *)(a1 + 68);
      if ( v20 )
      {
        if ( (unsigned int)(v20 - 1) <= 1 )
        {
          *(_QWORD *)v19 = 0LL;
          v8 = v19 + 12;
          *(_DWORD *)(v19 + 8) = 12;
        }
      }
      else
      {
        *(_DWORD *)v19 = 12;
        v5 = v19 + 12;
        *(_DWORD *)(v19 + 4) = 32;
        v7 = v19 + 32;
        *(_DWORD *)(v19 + 8) = 52;
        v8 = v19 + 52;
      }
    }
    else if ( v16 == 3 )
    {
      *(_DWORD *)(v6 + 24) = 0;
    }
    *(_BYTE *)(v6 + 44) = *(_BYTE *)(v4 + 85);
    v21 = *(_BYTE *)(v4 + 90) & 0xF0;
    *(_BYTE *)(v6 + 45) = v21;
    v22 = v21 | (2 - (*(_BYTE *)(v4 + 86) != 0));
    *(_BYTE *)(v6 + 45) = v22;
    v23 = *(_WORD *)(v4 + 83);
    *(_WORD *)(v6 + 46) = v23;
    if ( (unsigned __int16)(v23 - 1) > 0x3E7u )
      *(_WORD *)(v6 + 46) = 400;
    v24 = 540674082;
    *(_DWORD *)(v6 + 48) = 540674082;
    if ( (v22 & 0xF) == 1 )
    {
      if ( !v50 )
      {
        v24 = 540678178;
        *(_DWORD *)(v6 + 48) = 540678178;
      }
      v24 |= 0x400000u;
      *(_DWORD *)(v6 + 48) = v24;
    }
    if ( v50 )
      *(_DWORD *)(v6 + 48) = v24 | 0x10000000;
    *(_DWORD *)(v6 + 28) = 0;
    *(_WORD *)(v6 + 52) = fsSelectionFlags((_BYTE *)v4);
    *(_WORD *)(v6 + 54) = v25;
    v26 = *(unsigned __int8 *)(v4 + 76);
    v27 = *(_WORD *)(a1 + 44);
    v28 = *(unsigned __int8 *)(v4 + 77);
    *(_WORD *)(v6 + 58) = v25;
    v29 = v26 | (v28 << 8);
    v30 = v27 - v29;
    v51 = v29;
    if ( v29 <= 0 )
      v30 = v27;
    *(_WORD *)(v6 + 56) = v30;
    v31 = *(_WORD *)(v4 + 74);
    *(_WORD *)(v6 + 60) = v31;
    v32 = *(_WORD *)(a1 + 44);
    *(_WORD *)(v6 + 64) = v31;
    v33 = v32 - v31;
    *(_WORD *)(v6 + 62) = v32 - v31;
    *(_WORD *)(v6 + 66) = v31 - v32;
    v34 = *(unsigned __int8 *)(v4 + 78);
    v35 = *(unsigned __int8 *)(v4 + 79);
    *(_WORD *)(v6 + 72) = v31 - v32;
    v36 = v34 | (v35 << 8);
    *(_WORD *)(v6 + 70) = v31;
    *(_WORD *)(v6 + 68) = v36;
    *(_WORD *)(v6 + 74) = v36;
    *(_WORD *)(v6 + 78) = *(_WORD *)(a1 + 46);
    v37 = *(_WORD *)(v4 + 91);
    *(_WORD *)(v6 + 76) = v37;
    if ( v37 > (int)*(unsigned __int16 *)(a1 + 46) )
      v37 = *(_WORD *)(a1 + 46);
    *(_QWORD *)(v6 + 84) = 0LL;
    *(_QWORD *)(v6 + 92) = 0LL;
    *(_WORD *)(v6 + 76) = v37;
    if ( v32 <= 12 )
      v38 = 1;
    else
      v38 = v32 / 12;
    *(_WORD *)(v6 + 100) = v38;
    *(_WORD *)(v6 + 104) = v38;
    v39 = ~(unsigned __int16)(v38 / (int)pcchLength);
    if ( (__int16)(((v38 + 1) >> 1) - v33 + v38 / (int)pcchLength + 1) > 0 )
      v39 = ((v38 + 1) >> 1) - v33;
    *(_WORD *)(v6 + 102) = v39;
    *(_WORD *)(v6 + 106) = (__int16)(v31 - v51 + 2) / 3;
    *(_BYTE *)(v6 + 108) = *(_BYTE *)(a1 + 40);
    *(_BYTE *)(v6 + 109) = *(_BYTE *)(a1 + 41);
    *(_BYTE *)(v6 + 111) = *(_BYTE *)(a1 + 40) + *(_BYTE *)(a1 + 43);
    *(_BYTE *)(v6 + 110) = *(_BYTE *)(*a2 + 95LL) + *(_BYTE *)(*a2 + 97LL);
    vComputeSpecialChars(a1 + 36, v6 + 116, v6 + 118);
    v40 = *(_QWORD *)(a1 + 72);
    v41 = (unsigned int)(*(_DWORD *)(v40 + 36) - 1);
    *(_WORD *)(v6 + 112) = *(_WORD *)(v40 + 40);
    LOWORD(v41) = *(_WORD *)(v40 + 16 * (v41 + 1) + 24) + *(_WORD *)(v40 + 16 * (v41 + 1) + 26);
    *(_DWORD *)(v6 + 40) = 0;
    *(_QWORD *)(v6 + 120) = 1LL;
    *(_WORD *)(v6 + 114) = v41 - 1;
    LODWORD(v41) = *(__int16 *)(v6 + 56);
    *(_WORD *)(v6 + 80) = *(__int16 *)(v6 + 56) / 2;
    *(_WORD *)(v6 + 82) = (int)v41 / 4;
    v42 = *(unsigned __int8 *)(v4 + 70) | (unsigned __int16)(*(unsigned __int8 *)(v4 + 71) << 8);
    *(_DWORD *)(v6 + 132) = v42;
    v43 = *(unsigned __int8 *)(v4 + 72) | (unsigned __int16)(*(unsigned __int8 *)(v4 + 73) << 8);
    *(_DWORD *)(v6 + 128) = v43;
    if ( !v42 )
      v42 = 1;
    *(_DWORD *)(v6 + 132) = v42;
    if ( !v43 )
      *(_DWORD *)(v6 + 128) = 1;
    v44 = *(_WORD *)(v6 + 52) & 1;
    *(_DWORD *)(v6 + 136) = v44;
    *(_DWORD *)(v6 + 140) = v44 + 1;
    *(_DWORD *)(v6 + 148) = *(__int16 *)(v6 + 70);
    *(_DWORD *)(v6 + 152) = *(__int16 *)(v6 + 78);
    *(_DWORD *)(v6 + 156) = *(__int16 *)(v6 + 72);
    *(_DWORD *)(v6 + 144) = 0;
    *(_DWORD *)(v6 + 160) = 1852534357;
    v45 = *(_BYTE *)(v6 + 45);
    *(_QWORD *)(v6 + 164) = 0LL;
    if ( (v45 & 0x40) == 0 )
      v17 = (v45 & 0x50) != 0 ? 4 : 2;
    *(_BYTE *)(v6 + 172) = v17;
    *(_BYTE *)(v6 + 173) = (*(_BYTE *)(v6 + 45) & 0xF0) != 32 ? 0 : 0xB;
    v46 = *(_WORD *)(v6 + 46) / 0x64u + 1;
    *(_BYTE *)(v6 + 174) = v46;
    LOWORD(v9) = *(unsigned __int8 *)(v4 + 86);
    v47 = *(unsigned __int8 *)(v4 + 87);
    *(_DWORD *)(v6 + 176) = 0;
    *(_WORD *)(v6 + 180) = 0;
    LOBYTE(v9) = ((unsigned __int16)v9 | (unsigned __int16)(v47 << 8)) != 0 ? 9 : 0;
    *(_BYTE *)(v6 + 175) = v9;
    if ( *(_DWORD *)(v6 + 24) )
    {
      *(_WORD *)&v49[4] = *(_WORD *)(v6 + 46);
      *(_WORD *)&v49[6] = *(_WORD *)(v6 + 52);
      *(_DWORD *)&v49[8] = *(_DWORD *)(v6 + 76);
      *(_QWORD *)&v49[12] = *(_QWORD *)(v6 + 136);
      LOBYTE(v9) = v49[16];
      v49[3] = v46;
      *(_WORD *)v49 = 0;
      v49[2] = 0;
      if ( v5 )
      {
        *(_OWORD *)v5 = *(_OWORD *)v49;
        *(_DWORD *)(v5 + 16) = *(_DWORD *)&v49[16];
        *(_BYTE *)(v8 + 3) = 8;
        *(_WORD *)(v5 + 6) |= 0x20u;
        ++*(_WORD *)(v5 + 8);
        ++*(_WORD *)(v5 + 10);
        *(_WORD *)(v5 + 4) = 700;
      }
      if ( v7 )
      {
        *(_OWORD *)v7 = *(_OWORD *)v49;
        *(_DWORD *)(v7 + 16) = *(_DWORD *)&v49[16];
        *(_WORD *)(v7 + 6) |= 1u;
        *(_DWORD *)(v7 + 12) = 1;
        *(_DWORD *)(v7 + 16) = 2;
      }
      if ( v8 )
      {
        *(_OWORD *)v8 = *(_OWORD *)v49;
        *(_DWORD *)(v8 + 16) = *(_DWORD *)&v49[16];
        *(_WORD *)(v8 + 6) |= 0x21u;
        ++*(_WORD *)(v8 + 8);
        ++*(_WORD *)(v8 + 10);
        *(_BYTE *)(v8 + 3) = 8;
        *(_WORD *)(v8 + 4) = 700;
        *(_DWORD *)(v8 + 12) = 1;
        *(_DWORD *)(v8 + 16) = 2;
      }
    }
  }
  else
  {
    *(_DWORD *)v6 = 0;
  }
  return v9;
}
