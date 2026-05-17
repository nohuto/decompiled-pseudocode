/*
 * XREFs of sub_18007DA44 @ 0x18007DA44
 * Callers:
 *     sub_18007D8F8 @ 0x18007D8F8 (sub_18007D8F8.c)
 *     sub_180088504 @ 0x180088504 (sub_180088504.c)
 * Callees:
 *     sub_18007DBF0 @ 0x18007DBF0 (sub_18007DBF0.c)
 *     sub_18007DC3C @ 0x18007DC3C (sub_18007DC3C.c)
 *     sub_180088360 @ 0x180088360 (sub_180088360.c)
 *     sub_180088504 @ 0x180088504 (sub_180088504.c)
 *     sub_1800F90F8 @ 0x1800F90F8 (sub_1800F90F8.c)
 *     sub_1800F9128 @ 0x1800F9128 (sub_1800F9128.c)
 *     sub_1800F9248 @ 0x1800F9248 (sub_1800F9248.c)
 *     sub_1800F92DC @ 0x1800F92DC (sub_1800F92DC.c)
 *     sub_1800F93A4 @ 0x1800F93A4 (sub_1800F93A4.c)
 *     sub_1800F944C @ 0x1800F944C (sub_1800F944C.c)
 *     sub_1800F9478 @ 0x1800F9478 (sub_1800F9478.c)
 *     sub_1800F94C4 @ 0x1800F94C4 (sub_1800F94C4.c)
 *     sub_1800F9640 @ 0x1800F9640 (sub_1800F9640.c)
 *     sub_1800F96B8 @ 0x1800F96B8 (sub_1800F96B8.c)
 *     sub_1800F9778 @ 0x1800F9778 (sub_1800F9778.c)
 *     sub_1800F9888 @ 0x1800F9888 (sub_1800F9888.c)
 */

__int64 __fastcall sub_18007DA44(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int8 v5; // r15
  unsigned __int8 v8; // dl
  char v9; // al
  char v11; // r14
  unsigned __int8 v12; // bp
  __int64 v13; // rcx
  __int64 v14; // rdx
  char v15; // al
  unsigned int v16; // eax
  unsigned int v17; // eax
  _WORD *v18; // rcx
  __int64 v19; // rdx
  unsigned __int8 v20; // r11
  unsigned __int8 v21; // r15
  unsigned __int8 v22; // cl
  unsigned __int8 v23; // r15
  int v24; // eax
  __int64 v25; // r10
  __int64 v26; // rcx
  __int64 v27; // rax
  char v28; // dl
  bool v29; // zf
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  __int64 v34; // r10
  unsigned __int64 v35; // r8
  unsigned __int8 v36; // r9
  __int64 v37; // rax
  unsigned int v38; // eax
  __int64 v39; // r9
  __int64 v40; // r8
  char v41; // di
  char v42; // di
  char v43; // al
  unsigned int v44; // eax
  __int64 v45; // r9
  __int64 v46; // r8
  char v47; // di
  int v48; // eax
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  unsigned __int16 *v51; // r10
  __int64 v52; // rcx
  signed int v53; // esi
  unsigned __int16 v54; // di
  __int64 v55; // rcx
  unsigned __int16 v56; // si
  unsigned int v57; // eax
  unsigned int v58; // r11d
  unsigned int v59; // eax
  unsigned int v60; // r11d
  unsigned __int16 *v61; // r8
  __int64 v62; // rdx
  unsigned int v63; // eax
  __int64 v64; // r8
  __int64 v65; // r10

  v4 = a4;
  v5 = a3;
  if ( !(_BYTE)a3 )
    goto LABEL_27;
  while ( 1 )
  {
    while ( 1 )
    {
      switch ( v5 )
      {
        case 0u:
          goto LABEL_131;
        case 0xFBu:
          if ( !*(_BYTE *)(a1 + 113) )
            return 3221227287LL;
LABEL_131:
          v9 = sub_18007DC3C(v4, a2);
          goto LABEL_10;
        case 0xFCu:
          return 3221227287LL;
        case 0xFDu:
          return sub_180088504(a1, a2, v4);
      }
      if ( v5 != 254 )
        break;
      v18 = *(_WORD **)(v4 + 16);
      if ( v18 == *(_WORD **)(v4 + 8) )
        return 3221227287LL;
      *(_QWORD *)(v4 + 16) = v18 + 1;
      if ( (unsigned __int16)(*v18 + 9216) > 0x3FFu )
        return 3221227287LL;
      a2 = (unsigned __int16)*v18 + ((a2 - 55287) << 10);
      v5 = *(_BYTE *)(((__int64)(int)a2 >> 7) + *(_QWORD *)(a1 + 32));
LABEL_49:
      if ( !v5 )
        goto LABEL_27;
    }
    if ( v5 != 255 )
      break;
    if ( (int)a2 < 44032 )
    {
      if ( a2 - 4352 <= 0x12 )
      {
        v61 = *(unsigned __int16 **)(v4 + 16);
        if ( v61 == *(unsigned __int16 **)(v4 + 8) )
          goto LABEL_27;
        v62 = *v61;
        *(_QWORD *)(v4 + 16) = v61 + 1;
        v63 = sub_1800F90F8(a2, v62);
        if ( !v63 )
        {
          *(_QWORD *)(v4 + 16) = v64;
          goto LABEL_27;
        }
        a2 = v63;
        if ( v51 == *(unsigned __int16 **)(v4 + 8) )
        {
LABEL_27:
          v15 = sub_18007DC3C(v4, a2);
          goto LABEL_21;
        }
        *(_QWORD *)(v4 + 16) = v51 + 1;
        v52 = v63;
        goto LABEL_128;
      }
      if ( a2 - 4449 <= 0x14 )
      {
        if ( (unsigned int)sub_1800F9248(v4) - 4352 > 0x12 )
          goto LABEL_27;
        sub_1800F9778(v4);
        v59 = sub_1800F90F8(v60, a2);
        goto LABEL_123;
      }
      if ( a2 - 4520 <= 0x1A )
      {
        v57 = sub_1800F9248(v4);
        if ( (unsigned __int8)sub_180088360(v57) )
        {
          sub_1800F9778(v4);
          v59 = sub_1800F9128(v58, a2);
          goto LABEL_123;
        }
        goto LABEL_27;
      }
      if ( ((*(_DWORD *)a1 - 13) & 0xFFFFFEFF) != 0 || a2 - 4447 > 1 )
        goto LABEL_27;
    }
    else
    {
      if ( (int)a2 < 55204 )
      {
        if ( *(_BYTE *)(a1 + 112) == 1 )
        {
          v53 = a2 - 44032;
          if ( !(unsigned __int8)sub_18007DBF0(v4, (unsigned __int16)((int)(a2 - 44032) / 588 + 4352), 0LL, 0LL) )
            return 3221225507LL;
          v54 = (int)(a2 - 44032) % 588 / 28 + 4449;
          if ( !(unsigned __int8)sub_18007DBF0(v4, v54, 0LL, 0LL) )
            return 3221225507LL;
          v56 = (unsigned __int16)(v53 % 28) != 0 ? v53 % 28 + 4519 : 0;
          if ( v56 )
          {
            if ( !(unsigned __int8)sub_18007DBF0(v55, v56, 0LL, 0LL) )
              return 3221225507LL;
            v54 = v56;
          }
          *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 40);
          *(_DWORD *)(v4 + 88) = v54;
          goto LABEL_12;
        }
        if ( !(unsigned __int8)sub_180088360(a2) )
          goto LABEL_27;
        v51 = *(unsigned __int16 **)(v4 + 16);
        if ( v51 == *(unsigned __int16 **)(v4 + 8) )
          goto LABEL_27;
        v52 = a2;
        *(_QWORD *)(v4 + 16) = v51 + 1;
LABEL_128:
        v59 = sub_1800F9128(v52, *v51);
        if ( !v59 )
        {
          *(_QWORD *)(v4 + 16) = v65;
          goto LABEL_27;
        }
LABEL_123:
        a2 = v59;
        goto LABEL_27;
      }
      if ( a2 - 55216 <= 0x16 || a2 - 55243 <= 0x30 )
        goto LABEL_27;
    }
    v5 = -5;
  }
  v8 = *(_BYTE *)((a2 & 0x7F) + ((unsigned __int64)v5 << 7) + *(_QWORD *)(a1 + 40) - 128);
  if ( !v8 )
    goto LABEL_9;
  v11 = v8 & 0xC0;
  v12 = v8 & 0x3F;
  if ( (v8 & 0x3F) != 0 && v12 != 63 )
  {
    if ( (v8 & 0x80) == 0 )
    {
      LOBYTE(a4) = v8 & 0xC0;
      LOBYTE(a3) = v8 & 0x3F;
      if ( (unsigned __int8)sub_18007DBF0(v4, a2, a3, a4) )
      {
        *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 40);
        *(_DWORD *)(v4 + 88) = a2;
        *(_BYTE *)(v4 + 92) = v12;
        *(_BYTE *)(v4 + 93) = v11;
        return 0LL;
      }
      return 3221225507LL;
    }
    sub_1800F9248(v4);
    v21 = *(_BYTE *)(v4 + 72);
    if ( !v21 || v21 == 63 || (v22 = *(_BYTE *)(v4 + 73), (v22 & v20) == 0) )
    {
      v22 = *(_BYTE *)(v4 + 73);
      *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 64) + 2LL;
      *(_DWORD *)(v4 + 88) = *(_DWORD *)(v4 + 56);
      *(_BYTE *)(v4 + 92) = v21;
      *(_BYTE *)(v4 + 93) = v22;
      *(_QWORD *)(v4 + 96) = 0LL;
    }
    if ( v11 == (char)0x80 || ((unsigned __int8)((*(_BYTE *)(v4 + 92) | *(_BYTE *)(v4 + 93)) + 64) & v20) == 0 )
    {
      LOBYTE(v19) = v12;
      sub_1800F93A4(v4, v19);
      goto LABEL_82;
    }
    if ( !v21 || v21 == 63 )
    {
      v48 = sub_1800F9888(a1, *(unsigned int *)(v4 + 88), a2);
      a4 = v48;
      if ( v48 )
      {
        sub_1800F9778(v4);
        a3 = a4 & 0x7F;
        a2 = a4;
        v49 = *(_QWORD *)(a1 + 40);
        v50 = a3 + ((unsigned __int64)*(unsigned __int8 *)((a4 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
        v11 = *(_BYTE *)(v50 + v49 - 128) & 0xC0;
        v12 = *(_BYTE *)(v50 + v49 - 128) & 0x3F;
      }
LABEL_19:
      v13 = v4;
      v14 = a2;
      goto LABEL_20;
    }
    if ( v22 )
    {
      if ( v22 != 64 )
      {
        LOBYTE(v19) = v12;
        if ( (unsigned __int8)sub_1800F93A4(v4, v19) )
          goto LABEL_82;
        v23 = *(_BYTE *)(v4 + 92);
        if ( !v23 || v23 == 63 || *(_BYTE *)(v4 + 93) == 64 )
        {
          v24 = sub_1800F9888(a1, *(unsigned int *)(v4 + 88), a2);
          v25 = v24;
          if ( v24 )
          {
            v26 = *(_QWORD *)(a1 + 32);
            v27 = *(_QWORD *)(v4 + 80);
            *(_DWORD *)(v4 + 88) = v25;
            v28 = *(_BYTE *)((v25 & 0x7F)
                           + ((unsigned __int64)*(unsigned __int8 *)((v25 >> 7) + v26) << 7)
                           + *(_QWORD *)(a1 + 40)
                           - 128);
            *(_WORD *)(v27 - 2) = v25;
            *(_BYTE *)(v4 + 93) = v28 & 0xC0;
            v29 = (v28 & 0xC0) == 64;
            *(_BYTE *)(v4 + 92) = v28 & 0x3F;
            goto LABEL_101;
          }
          if ( !v23 || v23 == 63 )
            goto LABEL_82;
        }
        if ( v23 <= v12 )
        {
LABEL_82:
          a3 = *(_QWORD *)(v4 + 104);
          v13 = v4;
          v14 = a2;
          if ( a3 != *(_QWORD *)(v4 + 40) )
          {
            v15 = sub_1800F92DC(v4, a2);
LABEL_21:
            if ( !v15 )
              return 3221225507LL;
            return 0LL;
          }
LABEL_20:
          LOBYTE(a4) = v11;
          LOBYTE(a3) = v12;
          v15 = sub_18007DBF0(v13, v14, a3, a4);
          goto LABEL_21;
        }
        if ( v23 == *(_BYTE *)(a1 + 116) )
        {
          if ( v12 >= *(_BYTE *)(a1 + 114) )
          {
            if ( v12 != *(_BYTE *)(a1 + 115) )
              goto LABEL_82;
LABEL_77:
            v30 = sub_1800F9478(v4);
            v31 = sub_1800F9888(a1, v30, a2);
            if ( !v31 )
              goto LABEL_82;
            goto LABEL_96;
          }
        }
        else if ( v23 == *(_BYTE *)(a1 + 118) && v12 == *(_BYTE *)(a1 + 117) )
        {
          goto LABEL_77;
        }
        v32 = sub_1800F944C(v4);
        v33 = sub_1800F9888(a1, v32, a2);
        if ( !v33 )
          goto LABEL_82;
LABEL_98:
        v45 = v33 & 0x7F;
        v46 = v45 + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)v33 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
        v47 = *(_BYTE *)(v46 + *(_QWORD *)(a1 + 40) - 128);
        LOBYTE(v46) = v47 & 0x3F;
        v42 = v47 & 0xC0;
        LOBYTE(v45) = v42;
        v43 = sub_1800F9640(v4, v33, v46, v45);
LABEL_99:
        if ( v43 )
        {
          v29 = v42 == 64;
LABEL_101:
          if ( v29 )
            sub_1800F94C4(v4);
          return 0LL;
        }
        return 3221225507LL;
      }
      if ( (unsigned int)sub_1800F9888(a1, *(unsigned int *)(v4 + 88), a2) )
      {
        sub_1800F9778(v4);
        v35 = (v34 & 0x7F) + ((unsigned __int64)*(unsigned __int8 *)((v34 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
        v36 = *(_BYTE *)(v35 + *(_QWORD *)(a1 + 40) - 128);
        LOBYTE(v35) = v36 & 0x3F;
        if ( (unsigned __int8)sub_18007DBF0(v4, (unsigned int)v34, v35, v36 & 0xC0) )
        {
          v37 = *(_QWORD *)(v4 + 64);
          *(_QWORD *)(v4 + 96) = 0LL;
          *(_QWORD *)(v4 + 80) = v37 + 2;
          *(_DWORD *)(v4 + 88) = *(_DWORD *)(v4 + 56);
          *(_BYTE *)(v4 + 92) = *(_BYTE *)(v4 + 72);
          *(_BYTE *)(v4 + 93) = *(_BYTE *)(v4 + 73);
          return 0LL;
        }
        return 3221225507LL;
      }
    }
    if ( v21 <= v12 )
      goto LABEL_19;
    if ( v21 == *(_BYTE *)(a1 + 116) )
    {
      if ( v12 >= *(_BYTE *)(a1 + 114) )
      {
        if ( v12 != *(_BYTE *)(a1 + 115) )
          goto LABEL_19;
LABEL_95:
        v38 = sub_1800F9478(v4);
        v31 = sub_1800F9888(a1, v38, a2);
        if ( !v31 )
          goto LABEL_19;
LABEL_96:
        v39 = v31 & 0x7F;
        v40 = v39 + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)v31 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
        v41 = *(_BYTE *)(v40 + *(_QWORD *)(a1 + 40) - 128);
        LOBYTE(v40) = v41 & 0x3F;
        v42 = v41 & 0xC0;
        LOBYTE(v39) = v42;
        v43 = sub_1800F96B8(v4, v31, v40, v39);
        goto LABEL_99;
      }
    }
    else if ( v21 == *(_BYTE *)(a1 + 118) && v12 == *(_BYTE *)(a1 + 117) )
    {
      goto LABEL_95;
    }
    v44 = sub_1800F944C(v4);
    v33 = sub_1800F9888(a1, v44, a2);
    if ( !v33 )
      goto LABEL_19;
    goto LABEL_98;
  }
  switch ( v8 )
  {
    case 0x7Fu:
      if ( !*(_BYTE *)(a1 + 113) )
        return 3221227287LL;
LABEL_9:
      v9 = sub_18007DBF0(v4, a2, 0LL, 0LL);
LABEL_10:
      if ( !v9 )
        return 3221225507LL;
      *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 40);
      *(_DWORD *)(v4 + 88) = a2;
LABEL_12:
      *(_WORD *)(v4 + 92) = 0;
      return 0LL;
    case 0xBFu:
      return sub_180088504(a1, a2, v4);
    case 0xC0u:
      v16 = sub_1800F9248(v4);
      v17 = sub_1800F9888(a1, v16, a2);
      a4 = v17;
      if ( !v17 )
        goto LABEL_19;
      sub_1800F9778(v4);
      a2 = a4;
      goto LABEL_49;
  }
  if ( v8 != 255 || !a2 && *(_QWORD *)(v4 + 16) == *(_QWORD *)(v4 + 8) )
    goto LABEL_19;
  return 3221227287LL;
}
