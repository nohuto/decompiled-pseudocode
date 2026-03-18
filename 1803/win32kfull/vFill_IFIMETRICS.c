/*
 * XREFs of vFill_IFIMETRICS @ 0x1C021C0F0
 * Callers:
 *     bLoadTTF @ 0x1C021995C (bLoadTTF.c)
 * Callees:
 *     IsAnyCharsetDbcs @ 0x1C00C7060 (IsAnyCharsetDbcs.c)
 *     IsBogusSignature @ 0x1C0217D08 (IsBogusSignature.c)
 *     IsCurrentCodePageDBCS @ 0x1C0217E0C (IsCurrentCodePageDBCS.c)
 *     bContainGlyphSet @ 0x1C0218AD0 (bContainGlyphSet.c)
 *     bConvertExtras @ 0x1C0218B40 (bConvertExtras.c)
 *     bValidRangeKERN @ 0x1C021A71C (bValidRangeKERN.c)
 *     fsSelectionTTFD @ 0x1C021B954 (fsSelectionTTFD.c)
 *     pjTable @ 0x1C021B99C (pjTable.c)
 *     vFillIFICharsets @ 0x1C021BC34 (vFillIFICharsets.c)
 */

char __fastcall vFill_IFIMETRICS(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v8; // r8
  __int64 v9; // rcx
  _WORD *v10; // r14
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rsi
  int v15; // eax
  int v16; // edi
  unsigned __int8 *v17; // r8
  __int64 v18; // rax
  int v19; // edi
  unsigned __int16 v20; // ax
  __int16 v21; // r10
  __int64 v22; // r11
  __int16 v23; // r12
  __int16 v24; // cx
  __int16 v25; // r8
  __int16 v26; // r9
  __int16 v27; // cx
  __int16 v28; // dx
  __int16 v29; // cx
  __int16 v30; // dx
  int v31; // eax
  __int16 v32; // dx
  __int16 v33; // ax
  int v34; // r10d
  __int64 v35; // rdi
  int v36; // r8d
  unsigned __int16 v37; // ax
  __int16 v38; // ax
  __int64 v39; // rcx
  int v40; // eax
  int v41; // ecx
  unsigned __int32 v42; // edx
  int v43; // eax
  int v44; // eax
  unsigned __int16 v45; // r8
  char v46; // al
  __int64 v47; // rdi
  int v48; // edx
  char v49; // al
  unsigned __int8 v50; // cl
  char v51; // dl
  char v52; // al
  char v53; // cl
  char v54; // cl
  __int16 v55; // cx
  __int16 v56; // ax
  BOOL v57; // eax
  bool v58; // zf
  char v59; // cl
  char v60; // cl
  char v61; // al
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rdx
  int v65; // eax
  char v66; // al
  __int64 v67; // rax
  __int64 v68; // rcx
  _DWORD *v69; // r8
  unsigned __int8 v70; // al
  char v71; // al
  char v72; // al
  unsigned __int8 v73; // al
  _DWORD *v74; // r14
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rdi
  __int64 v83; // r8
  _DWORD *v84; // rcx
  char result; // al
  __int64 v86; // [rsp+30h] [rbp-38h]
  __int64 v87; // [rsp+38h] [rbp-30h]
  _WORD *v88; // [rsp+40h] [rbp-28h]
  _BYTE v89[20]; // [rsp+48h] [rbp-20h]
  unsigned __int32 AnsiCodePage; // [rsp+B0h] [rbp+48h] BYREF
  USHORT OemCodePage; // [rsp+B8h] [rbp+50h] BYREF
  _DWORD *v92; // [rsp+C0h] [rbp+58h]
  __int64 v93; // [rsp+C8h] [rbp+60h]

  v93 = a4;
  v92 = a3;
  v4 = *(unsigned int *)(a1 + 128);
  v8 = *(_QWORD *)(a1 + 64);
  v9 = *(unsigned int *)(a1 + 160);
  v10 = (_WORD *)(v8 + v4);
  v11 = *(unsigned int *)(a1 + 216);
  v88 = (_WORD *)(v8 + *(unsigned int *)(a1 + 136));
  v87 = v8;
  if ( !(_DWORD)v11 || (v12 = v8 + v11, *(_DWORD *)(a1 + 220) < 0x10u) )
    v12 = 0LL;
  v13 = *(unsigned int *)(a1 + 176);
  v86 = v12;
  v14 = v8 + v13;
  if ( !(_DWORD)v13 )
    v14 = 0LL;
  *(_DWORD *)a2 = *a3;
  *(_DWORD *)(a2 + 4) = 12;
  *(_DWORD *)(a2 + 192) = 0;
  *(_DWORD *)(a2 + 200) = (unsigned __int16)__ROR2__(*(_WORD *)(v9 + v8 + 4), 8);
  bConvertExtras(a2, (__int64)a3);
  *(_DWORD *)(a2 + 8) = a3[23];
  *(_DWORD *)(a2 + 20) = a3[26];
  *(_DWORD *)(a2 + 16) = a3[27];
  v15 = a3[25];
  v16 = 688241;
  *(_DWORD *)(a2 + 48) = 688241;
  *(_DWORD *)(a2 + 12) = v15;
  if ( *(_DWORD *)(a1 + 272) )
  {
    v17 = *(unsigned __int8 **)(a1 + 64);
    v18 = 4 * (v17[11] | ((v17[10] | ((v17[9] | (v17[8] << 8)) << 8)) << 8)) + 12;
    if ( (v17[v18 + 3] | ((v17[v18 + 2] | ((v17[v18 + 1] | (v17[v18] << 8)) << 8)) << 8)) != 0x44534947 )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( pjTable(1195987780, a1, &AnsiCodePage) && AnsiCodePage )
  {
LABEL_11:
    v16 = 950385;
    *(_DWORD *)(a2 + 48) = 950385;
  }
LABEL_12:
  if ( *((_QWORD *)v92 + 3) )
  {
    v16 |= 0x8000000u;
    *(_DWORD *)(a2 + 48) = v16;
  }
  if ( v12 )
  {
    if ( _byteswap_ulong(*(_DWORD *)(v12 + 12)) )
    {
      v19 = v16 | 0x400000;
      *(_DWORD *)(a2 + 48) = v19;
      if ( (__int16)__ROR2__(v10[18], 8) >= 0
        && __ROR2__(v10[20], 8) <= __ROR2__(
                                     *(_WORD *)(v87
                                              + *(unsigned int *)(a1 + 144)
                                              + 4LL * ((unsigned int)(unsigned __int16)__ROR2__(v88[17], 8) - 1)),
                                     8) )
      {
        *(_DWORD *)(a2 + 48) = v19 | 0x20000000;
      }
    }
  }
  *(_DWORD *)(a2 + 40) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  v20 = fsSelectionTTFD(v87, a1 + 112);
  *(_WORD *)(a2 + 52) = v20;
  v23 = HIBYTE(v20);
  if ( v14 )
    v24 = __ROR2__(*(_WORD *)(v14 + 8), 8) & 0xE;
  else
    v24 = v21;
  *(_WORD *)(a2 + 54) = v24;
  v25 = __ROR2__(v10[9], 8);
  *(_WORD *)(a2 + 56) = v25;
  *(_WORD *)(a2 + 58) = __ROR2__(v10[23], 8);
  v26 = __ROR2__(*(_WORD *)(v22 + 4), 8);
  *(_WORD *)(a2 + 64) = v26;
  v27 = __ROR2__(*(_WORD *)(v22 + 6), 8);
  *(_WORD *)(a2 + 66) = v27;
  v28 = __ROR2__(*(_WORD *)(v22 + 8), 8);
  *(_WORD *)(a2 + 68) = v28;
  if ( v14 )
  {
    *(_WORD *)(a2 + 60) = __ROR2__(*(_WORD *)(v14 + 74), 8);
    *(_WORD *)(a2 + 62) = __ROR2__(*(_WORD *)(v14 + 76), 8);
    *(_WORD *)(a2 + 70) = __ROR2__(*(_WORD *)(v14 + 68), 8);
    *(_WORD *)(a2 + 72) = __ROR2__(*(_WORD *)(v14 + 70), 8);
    *(_WORD *)(a2 + 74) = __ROR2__(*(_WORD *)(v14 + 72), 8);
  }
  else
  {
    *(_WORD *)(a2 + 60) = v26;
    *(_WORD *)(a2 + 70) = v26;
    *(_WORD *)(a2 + 62) = -v27;
    *(_WORD *)(a2 + 72) = v27;
    *(_WORD *)(a2 + 74) = v28;
  }
  v29 = __ROR2__(v10[18], 8);
  *(_DWORD *)(a2 + 144) = v29;
  *(_DWORD *)(a2 + 148) = (__int16)__ROR2__(v10[21], 8);
  v30 = __ROR2__(v10[20], 8);
  v31 = v30;
  v32 = v30 - v29;
  *(_DWORD *)(a2 + 152) = v31;
  *(_DWORD *)(a2 + 156) = (__int16)__ROR2__(v10[19], 8);
  *(_WORD *)(a2 + 78) = v32;
  if ( v14 )
  {
    v33 = __ROR2__(*(_WORD *)(v14 + 2), 8);
    *(_WORD *)(a2 + 76) = v33;
    if ( !v33 )
      *(_WORD *)(a2 + 76) = v32 / 2;
  }
  else
  {
    *(_WORD *)(a2 + 76) = 2 * v32 / 3;
  }
  v34 = v25;
  v35 = v86;
  *(_WORD *)(a2 + 80) = v25 / 2;
  *(_WORD *)(a2 + 82) = v25 / 4;
  if ( v86 )
  {
    LOWORD(v36) = __ROR2__(*(_WORD *)(v86 + 10), 8);
    *(_WORD *)(a2 + 100) = v36;
    *(_WORD *)(a2 + 102) = __ROR2__(*(_WORD *)(v86 + 8), 8);
  }
  else
  {
    v36 = (v25 + 7) / 14;
    *(_WORD *)(a2 + 100) = v36;
    *(_WORD *)(a2 + 102) = (v34 + 5) / -10;
  }
  if ( v14 )
  {
    *(_WORD *)(a2 + 84) = __ROR2__(*(_WORD *)(v14 + 10), 8);
    *(_WORD *)(a2 + 86) = __ROR2__(*(_WORD *)(v14 + 12), 8);
    *(_WORD *)(a2 + 88) = __ROR2__(*(_WORD *)(v14 + 14), 8);
    *(_WORD *)(a2 + 90) = __ROR2__(*(_WORD *)(v14 + 16), 8);
    *(_WORD *)(a2 + 92) = __ROR2__(*(_WORD *)(v14 + 18), 8);
    *(_WORD *)(a2 + 94) = __ROR2__(*(_WORD *)(v14 + 20), 8);
    *(_WORD *)(a2 + 96) = __ROR2__(*(_WORD *)(v14 + 22), 8);
    *(_WORD *)(a2 + 98) = __ROR2__(*(_WORD *)(v14 + 24), 8);
    *(_WORD *)(a2 + 104) = __ROR2__(*(_WORD *)(v14 + 26), 8);
    *(_WORD *)(a2 + 106) = __ROR2__(*(_WORD *)(v14 + 28), 8);
  }
  else
  {
    *(_QWORD *)(a2 + 84) = 0LL;
    *(_QWORD *)(a2 + 92) = 0LL;
    *(_WORD *)(a2 + 104) = v36;
    *(_WORD *)(a2 + 106) = v26 / 3;
  }
  *(_DWORD *)(a2 + 168) = 0;
  if ( v14 )
  {
    v37 = __ROR2__(*(_WORD *)(v14 + 4), 8);
    *(_WORD *)(a2 + 46) = v37;
    if ( v37 < 0xAu )
      *(_WORD *)(a2 + 46) = ausIFIMetrics2WinWeight[v37];
    *(_QWORD *)(a2 + 172) = *(_QWORD *)(v14 + 32);
    *(_WORD *)(a2 + 180) = *(_WORD *)(v14 + 40);
  }
  else
  {
    *(_WORD *)(a2 + 172) = 2;
    v38 = v10[22];
    *(_DWORD *)(a2 + 176) = 0;
    *(_WORD *)(a2 + 180) = 0;
    v39 = (unsigned __int8)((__ROR2__(v38, 8) & 1) != 0 ? 8 : 5);
    v40 = *(_DWORD *)(a2 + 48) & 0x400000;
    *(_BYTE *)(a2 + 174) = v39;
    *(_BYTE *)(a2 + 175) = v40 != 0 ? 9 : 0;
    *(_WORD *)(a2 + 46) = ausIFIMetrics2WinWeight[v39];
  }
  *(_DWORD *)(a2 + 36) = 0;
  if ( (*(_DWORD *)(a1 + 300) & 2) == 0 )
  {
    if ( v14 )
    {
      if ( *(_WORD *)v14 )
      {
        v41 = _byteswap_ulong(*(_DWORD *)(v14 + 78));
        if ( v41 )
        {
          if ( !IsBogusSignature(v41, a1) )
          {
            v42 = _byteswap_ulong(*(_DWORD *)(v14 + 78));
            if ( (v42 & 0x1E0000) != 0 )
            {
              if ( (gfsCurSignature & v42) != 0 )
              {
                RtlGetDefaultCodePage((PUSHORT)&AnsiCodePage, &OemCodePage);
                v43 = (unsigned __int16)AnsiCodePage;
                *(_BYTE *)(a2 + 44) = gjCurCharset;
                *(_DWORD *)(a1 + 288) = v43;
              }
              else if ( (v42 & 1) != 0 )
              {
                *(_BYTE *)(a2 + 44) = 0;
                *(_DWORD *)(a1 + 288) = 1252;
              }
              else if ( (v42 & 0x20000) != 0 )
              {
                *(_BYTE *)(a2 + 44) = 0x80;
                *(_DWORD *)(a1 + 288) = 932;
              }
              else if ( (v42 & 0x100000) != 0 )
              {
                *(_BYTE *)(a2 + 44) = -120;
                *(_DWORD *)(a1 + 288) = 950;
              }
              else if ( (v42 & 0x40000) != 0 )
              {
                *(_BYTE *)(a2 + 44) = -122;
                *(_DWORD *)(a1 + 288) = 936;
              }
              else if ( (v42 & 0x80000) != 0 )
              {
                *(_BYTE *)(a2 + 44) = -127;
                *(_DWORD *)(a1 + 288) = 949;
              }
            }
            else
            {
              *(_BYTE *)(a2 + 44) = v23;
              if ( !(_BYTE)v23 && *(_BYTE *)(a2 + 172) == 5 )
              {
                v46 = 0;
                if ( *(_DWORD *)(a1 + 316) == 4 )
                  v46 = 2;
                *(_BYTE *)(a2 + 44) = v46;
              }
              *(_DWORD *)(a1 + 288) = 1252;
            }
            goto LABEL_48;
          }
        }
      }
    }
    if ( *(_DWORD *)(a1 + 316) == 5 )
    {
      switch ( *(_WORD *)(a1 + 312) )
      {
        case 2:
          *(_BYTE *)(a2 + 44) = 0x80;
          *(_DWORD *)(a1 + 288) = 932;
          break;
        case 3:
          *(_BYTE *)(a2 + 44) = -122;
          *(_DWORD *)(a1 + 288) = 936;
          break;
        case 4:
          *(_BYTE *)(a2 + 44) = -120;
          *(_DWORD *)(a1 + 288) = 950;
          break;
        case 5:
          *(_BYTE *)(a2 + 44) = -127;
          *(_DWORD *)(a1 + 288) = 949;
          break;
        default:
          *(_BYTE *)(a2 + 44) = 0;
          *(_DWORD *)(a1 + 288) = 1252;
          break;
      }
      goto LABEL_48;
    }
    v47 = *(_QWORD *)(a1 + 88);
    if ( bContainGlyphSet(0xFF71u, v47)
      && bContainGlyphSet(0xFF72u, v47)
      && bContainGlyphSet(0xFF73u, v47)
      && bContainGlyphSet(0xFF74u, v47)
      && bContainGlyphSet(0xFF75u, v47) )
    {
      *(_BYTE *)(a2 + 44) = 0x80;
      *(_DWORD *)(a1 + 288) = 932;
    }
    else if ( bContainGlyphSet(0x61D4u, v47) && bContainGlyphSet(0x9EE2u, v47) )
    {
      *(_BYTE *)(a2 + 44) = -122;
      *(_DWORD *)(a1 + 288) = 936;
    }
    else if ( bContainGlyphSet(0x9F98u, v47) && bContainGlyphSet(0x9F79u, v47) )
    {
      *(_BYTE *)(a2 + 44) = -120;
      *(_DWORD *)(a1 + 288) = 950;
    }
    else if ( bContainGlyphSet(0xAC00u, v47) && bContainGlyphSet(0xD558u, v47) )
    {
      *(_BYTE *)(a2 + 44) = -127;
      *(_DWORD *)(a1 + 288) = 949;
    }
    else
    {
      if ( !bContainGlyphSet(0xE000u, v47) || !IsCurrentCodePageDBCS() )
      {
        *(_BYTE *)(a2 + 44) = v23;
        if ( !(_BYTE)v23 && *(_BYTE *)(a2 + 172) == 5 )
        {
          v49 = 0;
          if ( *(_DWORD *)(a1 + 316) == 4 )
            v49 = 2;
          *(_BYTE *)(a2 + 44) = v49;
        }
        v35 = v86;
        *(_DWORD *)(a1 + 288) = 1252;
LABEL_48:
        if ( *(_WORD *)(a1 + 310) != 3 || !v14 )
        {
          v59 = *(_BYTE *)(a2 + 44);
          *(_WORD *)(a2 + 108) = -226;
          if ( v59 == (char)0x80 )
          {
            *(_WORD *)(a2 + 110) = 8357;
            v55 = 32;
            v56 = -155;
          }
          else
          {
            *(_BYTE *)(a2 + 111) = 32;
            *(_BYTE *)(a2 + 110) = 32 - (((v59 + 122) & 0xFD) != 0);
            v58 = ((v59 + 122) & 0xFD) == 0;
            v55 = 32;
            v56 = 31;
            if ( v58 )
              v56 = 9633;
          }
          goto LABEL_142;
        }
        LOWORD(v44) = __ROR2__(*(_WORD *)(v14 + 64), 8);
        v45 = __ROR2__(*(_WORD *)(v14 + 66), 8);
        if ( v45 <= 0xFFu )
        {
          *(_BYTE *)(a2 + 108) = v44;
          *(_BYTE *)(a2 + 109) = v45;
        }
        else
        {
          if ( (unsigned __int16)v44 <= 0xFFu )
          {
            *(_BYTE *)(a2 + 108) = v44;
            LOBYTE(v44) = -1;
          }
          else
          {
            *(_BYTE *)(a2 + 44) = 2;
            *(_DWORD *)(a2 + 36) = (unsigned __int16)v44 - 32;
            *(_BYTE *)(a2 + 108) = 32;
            v44 = v45 - (unsigned __int16)v44 + 32;
            if ( v44 > 255 )
              LOBYTE(v44) = -1;
          }
          *(_BYTE *)(a2 + 109) = v44;
        }
        v50 = *(_BYTE *)(a2 + 108);
        if ( v50 >= 2u )
        {
          v50 -= 2;
          *(_BYTE *)(a2 + 108) = v50;
        }
        v51 = *(_BYTE *)(a2 + 44);
        if ( v51 == (char)0x80 )
        {
          v52 = -91;
        }
        else
        {
          if ( ((v51 + 122) & 0xFD) != 0 )
          {
            if ( v51 == -127 )
            {
              v52 = 127;
              v53 = 31;
            }
            else
            {
              v52 = v50 + 1;
              v53 = v50 + 2;
            }
            goto LABEL_129;
          }
          v52 = 32;
        }
        v53 = v50 + 2;
LABEL_129:
        *(_BYTE *)(a2 + 110) = v52;
        *(_BYTE *)(a2 + 111) = v53;
        v54 = *(_BYTE *)(a2 + 44);
        if ( v54 == (char)0x80 )
        {
          LOBYTE(v55) = *(_BYTE *)(a2 + 111);
          v56 = -155;
        }
        else
        {
          v57 = v54 == -127 || v54 == -120 || *(_BYTE *)(a2 + 44) == 0x86;
          LOBYTE(v55) = *(_BYTE *)(a2 + 111);
          v58 = !v57;
          v56 = 9633;
          if ( v58 )
            v56 = *(unsigned __int8 *)(a2 + 110);
        }
        v55 = (unsigned __int8)v55;
LABEL_142:
        *(_WORD *)(a2 + 116) = v56;
        *(_WORD *)(a2 + 118) = v55;
        goto LABEL_149;
      }
      RtlGetDefaultCodePage((PUSHORT)&AnsiCodePage, &OemCodePage);
      v48 = (unsigned __int16)AnsiCodePage;
      switch ( (unsigned __int16)AnsiCodePage )
      {
        case 0x3A4u:
          *(_BYTE *)(a2 + 44) = 0x80;
          break;
        case 0x3A8u:
          *(_BYTE *)(a2 + 44) = -122;
          break;
        case 0x3B5u:
          *(_BYTE *)(a2 + 44) = -127;
          break;
        case 0x3B6u:
          *(_BYTE *)(a2 + 44) = -120;
          break;
        case 0x551u:
          *(_BYTE *)(a2 + 44) = -126;
          break;
      }
      *(_DWORD *)(a1 + 288) = v48;
    }
    v35 = v86;
    goto LABEL_48;
  }
  v60 = *(_BYTE *)(v22 + 22);
  *(_BYTE *)(a2 + 108) = v60;
  *(_BYTE *)(a2 + 109) = *(_BYTE *)(v22 + 24);
  *(_BYTE *)(a2 + 110) = -107;
  *(_BYTE *)(a2 + 111) = v60 + *(_BYTE *)(v22 + 28);
  v61 = *(_BYTE *)(v22 + 30);
  v62 = *(int *)(a2 + 8);
  if ( v61 == -56 )
    v61 = 0;
  *(_BYTE *)(a2 + 44) = v61;
  if ( (!_wcsicmp((const wchar_t *)(a2 + v62), L"ZapfDingbats")
     || !_wcsicmp((const wchar_t *)(a2 + *(int *)(a2 + 8)), L"Symbol"))
    && !*(_BYTE *)(a2 + 44) )
  {
    *(_BYTE *)(a2 + 44) = 2;
  }
LABEL_149:
  v63 = *(_QWORD *)(a1 + 88);
  v64 = (unsigned int)(*(_DWORD *)(v63 + 12) - 1);
  *(_WORD *)(a2 + 112) = *(_WORD *)(v63 + 16);
  *(_WORD *)(a2 + 114) = *(_WORD *)(v63 + 16 * (v64 + 1)) + *(_WORD *)(v63 + 16 * (v64 + 1) + 2) - 1;
  *(_QWORD *)(a2 + 120) = 1LL;
  *(_DWORD *)(a2 + 128) = 1;
  *(_DWORD *)(a2 + 132) = 1;
  *(_DWORD *)(a2 + 136) = (__int16)__ROR2__(v88[10], 8);
  *(_DWORD *)(a2 + 140) = (__int16)__ROR2__(v88[9], 8);
  if ( v35 )
    v65 = (__int16)((10 * _byteswap_ulong(*(_DWORD *)(v35 + 4))) >> 16);
  else
    v65 = 0;
  *(_DWORD *)(a2 + 32) = v65;
  if ( v14 )
  {
    *(_BYTE *)(a2 + 160) = *(_BYTE *)(v14 + 58);
    *(_BYTE *)(a2 + 161) = *(_BYTE *)(v14 + 59);
    *(_BYTE *)(a2 + 162) = *(_BYTE *)(v14 + 60);
    v66 = *(_BYTE *)(v14 + 61);
  }
  else
  {
    *(_WORD *)(a2 + 160) = 28245;
    v66 = 110;
    *(_BYTE *)(a2 + 162) = 107;
  }
  *(_BYTE *)(a2 + 163) = v66;
  v67 = *(unsigned int *)(a1 + 200);
  v68 = v87 + v67;
  if ( !(_DWORD)v67 )
    v68 = 0LL;
  v69 = (_DWORD *)(a2 + 164);
  if ( v68 )
  {
    if ( !(unsigned int)bValidRangeKERN(v68, *(_DWORD *)(a1 + 204), v69) )
      *(_QWORD *)(a1 + 200) = 0LL;
  }
  else
  {
    *v69 = 0;
  }
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 44) + 0x80) <= 1u )
  {
    if ( *(_BYTE *)(a2 + 172) == 3 )
    {
      v72 = 64;
    }
    else
    {
      v73 = *(_BYTE *)(a2 + 173);
      if ( v73 < 0x10u )
        v72 = byte_1C02E8258[v73];
      else
        v72 = 0;
    }
    *(_BYTE *)(a2 + 45) = v72;
    if ( *(_BYTE *)(a2 + 175) == 9 )
      *(_DWORD *)(a2 + 48) |= 0x10400000u;
  }
  else
  {
    if ( *(_BYTE *)(a2 + 172) == 3 )
    {
      v71 = 64;
LABEL_169:
      *(_BYTE *)(a2 + 45) = v71;
      goto LABEL_179;
    }
    if ( *(_BYTE *)(a2 + 172) != 4 )
    {
      if ( *(_BYTE *)(a2 + 175) == 9 )
      {
        *(_BYTE *)(a2 + 45) = 48;
        goto LABEL_179;
      }
      v70 = *(_BYTE *)(a2 + 173);
      if ( v70 >= 0x10u )
      {
        *(_BYTE *)(a2 + 45) = 0;
        goto LABEL_179;
      }
      v71 = ajPanoseFamilyForTtfd[v70];
      goto LABEL_169;
    }
    *(_BYTE *)(a2 + 45) = 80;
  }
LABEL_179:
  v74 = v92;
  v75 = (int)v92[1];
  *(_DWORD *)(a2 + 24) = v75;
  if ( (_DWORD)v75 )
  {
    v76 = a2 + v75;
    v77 = 0LL;
    v78 = 0LL;
    v79 = 0LL;
    if ( (*(_WORD *)(a2 + 52) & 0x21) != 0 )
    {
      if ( (*(_WORD *)(a2 + 52) & 0x21) == 1 || (*(_WORD *)(a2 + 52) & 0x21) == 0x20 )
      {
        *(_QWORD *)v76 = 0LL;
        v79 = v76 + 12;
        *(_DWORD *)(v76 + 8) = 12;
      }
    }
    else
    {
      *(_DWORD *)v76 = 12;
      *(_DWORD *)(v76 + 4) = 32;
      v77 = v76 + 12;
      *(_DWORD *)(v76 + 8) = 52;
      v78 = v76 + 32;
      v79 = v76 + 52;
    }
    *(_WORD *)v89 = 0;
    v89[3] = *(_BYTE *)(a2 + 174);
    *(_WORD *)&v89[4] = *(_WORD *)(a2 + 46);
    v89[2] = 0;
    *(_WORD *)&v89[6] = *(_WORD *)(a2 + 52) & 0xFFBF;
    *(_DWORD *)&v89[8] = *(_DWORD *)(a2 + 76);
    *(_QWORD *)&v89[12] = *(_QWORD *)(a2 + 136);
    if ( v77 )
    {
      *(_OWORD *)v77 = *(_OWORD *)v89;
      *(_DWORD *)(v77 + 16) = *(_DWORD *)&v89[16];
      *(_BYTE *)(v79 + 3) = 8;
      *(_WORD *)(v77 + 6) |= 0x20u;
      ++*(_WORD *)(v77 + 8);
      ++*(_WORD *)(v77 + 10);
      *(_WORD *)(v77 + 4) = 700;
    }
    if ( v78 )
    {
      *(_OWORD *)v78 = *(_OWORD *)v89;
      *(_DWORD *)(v78 + 16) = *(_DWORD *)&v89[16];
      *(_WORD *)(v78 + 6) |= 1u;
      *(_DWORD *)(v78 + 12) = 7;
      *(_DWORD *)(v78 + 16) = 33;
    }
    if ( v79 )
    {
      *(_OWORD *)v79 = *(_OWORD *)v89;
      *(_DWORD *)(v79 + 16) = *(_DWORD *)&v89[16];
      ++*(_WORD *)(v79 + 8);
      *(_WORD *)(v79 + 6) |= 0x21u;
      ++*(_WORD *)(v79 + 10);
      *(_BYTE *)(v79 + 3) = 8;
      *(_WORD *)(v79 + 4) = 700;
      *(_DWORD *)(v79 + 12) = 7;
      *(_DWORD *)(v79 + 16) = 33;
    }
  }
  v80 = (int)v74[21];
  *(_DWORD *)(a2 + 40) = v80;
  vFillIFICharsets(a1, a2, (_BYTE *)(a2 + v80), v87, v14, v93);
  v81 = (int)v74[22];
  *(_DWORD *)(a2 + 196) = v81;
  if ( (_DWORD)v81 )
  {
    v82 = a2 + v81;
    v83 = 4LL;
    v84 = (_DWORD *)(a2 + v81);
    do
    {
      *v84 = _byteswap_ulong(*(_DWORD *)((char *)v84 + v14 - (a2 + v81) + 42));
      ++v84;
      --v83;
    }
    while ( v83 );
    if ( *(_WORD *)v14 )
    {
      if ( IsBogusSignature(_byteswap_ulong(*(_DWORD *)(v14 + 78)), a1) )
        *(_DWORD *)(v82 + 16) = 0x20000;
      else
        *(_DWORD *)(v82 + 16) = _byteswap_ulong(*(_DWORD *)(v14 + 78));
      *(_DWORD *)(v82 + 20) = _byteswap_ulong(*(_DWORD *)(v14 + 82));
    }
    else
    {
      *(_QWORD *)(v82 + 16) = 0LL;
    }
  }
  if ( (unsigned int)IsAnyCharsetDbcs(a1 + 352) )
  {
    *(_DWORD *)(a1 + 300) |= 0x100u;
    if ( *(_BYTE *)(a2 + 175) == 9 )
      *(_DWORD *)(a2 + 48) |= 0x10400000u;
  }
  result = 2 - ((*(_DWORD *)(a2 + 48) & 0x400000) != 0);
  *(_BYTE *)(a2 + 45) |= result;
  return result;
}
