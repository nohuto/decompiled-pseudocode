/*
 * XREFs of fsg_CheckOutlineOrientation @ 0x1C02BBFA4
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C02BD004 (fsg_ExecuteGlyph.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     CalculateXExtremum @ 0x1C02BAC3C (CalculateXExtremum.c)
 *     CalculateYExtremum @ 0x1C02BAD70 (CalculateYExtremum.c)
 *     Misoriented @ 0x1C02BB8E0 (Misoriented.c)
 */

unsigned __int64 __fastcall fsg_CheckOutlineOrientation(__int64 a1)
{
  unsigned __int64 result; // rax
  int v3; // r12d
  __int64 v4; // r15
  __int16 v5; // r14
  __int16 v6; // r8
  __int16 v7; // dx
  __int64 v8; // r12
  __int64 v9; // r15
  __int16 v10; // bx
  __int64 v11; // r9
  __int64 v12; // r10
  int v13; // r11d
  __int16 v14; // ax
  int *v15; // rsi
  __int64 v16; // r13
  int v17; // r11d
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int16 v22; // ax
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // edx
  __int64 v26; // rdx
  __int16 v27; // ax
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // r10d
  __int64 v34; // rdx
  __int16 v35; // ax
  __int64 v36; // rax
  __int64 v37; // r8
  int v38; // r11d
  __int64 v39; // rdx
  __int16 v40; // ax
  __int64 v41; // r11
  __int64 v42; // r10
  int v43; // edx
  int v44; // r13d
  int v45; // ebx
  int v46; // esi
  int v47; // eax
  int v48; // esi
  int v49; // r9d
  int v50; // eax
  int v51; // r9d
  int v52; // r8d
  int v53; // r13d
  int v54; // eax
  int v55; // ebx
  int v56; // r13d
  unsigned __int16 v57; // bx
  unsigned __int16 v58; // r14
  int v59; // esi
  __int16 v60; // [rsp+68h] [rbp-49h]
  __int16 v61; // [rsp+6Ch] [rbp-45h]
  __int64 v62; // [rsp+70h] [rbp-41h]
  __int16 v63; // [rsp+78h] [rbp-39h]
  int v64; // [rsp+7Ch] [rbp-35h]
  int v65; // [rsp+80h] [rbp-31h]
  int v66; // [rsp+84h] [rbp-2Dh]
  int v67; // [rsp+90h] [rbp-21h]
  signed int v68; // [rsp+94h] [rbp-1Dh]
  int v69; // [rsp+98h] [rbp-19h]
  __int64 v70; // [rsp+A0h] [rbp-11h]
  __int64 v71; // [rsp+A0h] [rbp-11h]
  int v72; // [rsp+A0h] [rbp-11h]
  __int64 v73; // [rsp+A8h] [rbp-9h]
  __int64 v74; // [rsp+B0h] [rbp-1h] BYREF
  int v75; // [rsp+B8h] [rbp+7h] BYREF
  int v76; // [rsp+BCh] [rbp+Bh] BYREF
  int v77; // [rsp+C0h] [rbp+Fh] BYREF
  int v78; // [rsp+C4h] [rbp+13h] BYREF
  int v79; // [rsp+C8h] [rbp+17h] BYREF
  int v80; // [rsp+CCh] [rbp+1Bh] BYREF
  __int16 v81; // [rsp+D0h] [rbp+1Fh]
  __int16 v82; // [rsp+D2h] [rbp+21h]
  __int16 v83; // [rsp+D4h] [rbp+23h]
  __int16 v84; // [rsp+D6h] [rbp+25h]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+5Fh] BYREF

  result = (unsigned __int64)&retaddr;
  v3 = 0;
  v69 = 0;
  if ( *(__int16 *)(a1 + 80) <= 0 )
    return result;
  v4 = 0LL;
  v73 = 0LL;
  do
  {
    *(_BYTE *)(v4 + *(_QWORD *)(a1 + 88)) = 0;
    v5 = *(_WORD *)(*(_QWORD *)(a1 + 56) + 2 * v4);
    v6 = *(_WORD *)(*(_QWORD *)(a1 + 64) + 2 * v4);
    v60 = v6;
    v63 = v6 - v5 + 1;
    if ( v63 <= 2 )
      goto LABEL_84;
    v7 = -1;
    v67 = 0x7FFFFFFF;
    v61 = -1;
    v81 = -1;
    v82 = -1;
    v83 = -1;
    v84 = -1;
    v64 = 0x7FFFFFFF;
    v68 = 0x80000000;
    v65 = 0x80000000;
    v8 = *(_QWORD *)(a1 + 32);
    v9 = *(_QWORD *)(a1 + 40);
    v10 = v5;
    v11 = v5;
    v12 = v9 - v8;
    v13 = v5;
    v14 = -v5;
    v62 = v5;
    v15 = (int *)(v8 + 4LL * v5);
    do
    {
      v16 = v13 + (__int16)(v10 + v14);
      v17 = *(_DWORD *)(v8 + 4 * v16);
      v66 = v17;
      if ( v17 < v64
        || v17 == v64
        && ((v18 = *(_QWORD *)(a1 + 48), !*(_BYTE *)(v7 + v18))
         || *(_BYTE *)(v18 + v16) && *(_DWORD *)(v9 + 4 * v16) < *(_DWORD *)(v9 + 4LL * v7)) )
      {
        v19 = *v15;
        v61 = v10;
        v20 = *(_QWORD *)(a1 + 48);
        v81 = v10;
        v64 = v19;
        v70 = v20;
        if ( *(_BYTE *)(v11 + v20) )
        {
          LODWORD(v74) = 2 * v19;
          HIDWORD(v74) = 2 * *(int *)((char *)v15 + v12);
        }
        else
        {
          if ( v10 == v5 )
            LOWORD(v21) = v6;
          else
            LOWORD(v21) = v10 - 1;
          v21 = (__int16)v21;
          v22 = v5;
          if ( v10 != v6 )
            v22 = v10 + 1;
          CalculateXExtremum(
            1,
            *(_DWORD *)(v8 + 4 * v21),
            *(_DWORD *)(v9 + 4 * v21),
            *(_BYTE *)(v21 + v70) & 1,
            v19,
            *(int *)((char *)v15 + v12),
            *(_DWORD *)(v8 + 4LL * v22),
            *(_DWORD *)(v9 + 4LL * v22),
            *(_BYTE *)(v22 + v70) & 1,
            (int *)&v74,
            (_DWORD *)&v74 + 1);
          v6 = v60;
          v12 = v9 - v8;
          v11 = v62;
          v17 = v66;
        }
      }
      if ( v17 > v65
        || v17 == v65
        && ((v23 = *(_QWORD *)(a1 + 48), !*(_BYTE *)(v82 + v23))
         || *(_BYTE *)(v23 + v16) && *(_DWORD *)(v9 + 4 * v16) > *(_DWORD *)(v9 + 4LL * v82)) )
      {
        v24 = *(_QWORD *)(a1 + 48);
        v25 = *v15;
        v82 = v10;
        v65 = v25;
        v71 = v24;
        if ( *(_BYTE *)(v11 + v24) )
        {
          v75 = 2 * v25;
          v76 = 2 * *(int *)((char *)v15 + v12);
        }
        else
        {
          if ( v10 == v5 )
            LOWORD(v26) = v6;
          else
            LOWORD(v26) = v10 - 1;
          v26 = (__int16)v26;
          v27 = v5;
          if ( v10 != v6 )
            v27 = v10 + 1;
          CalculateXExtremum(
            0,
            *(_DWORD *)(v8 + 4 * v26),
            *(_DWORD *)(v9 + 4 * v26),
            *(_BYTE *)(v26 + v71) & 1,
            v65,
            *(int *)((char *)v15 + v12),
            *(_DWORD *)(v8 + 4LL * v27),
            *(_DWORD *)(v9 + 4LL * v27),
            *(_BYTE *)(v27 + v71) & 1,
            &v75,
            &v76);
          v17 = v66;
        }
      }
      v28 = *(_DWORD *)(v9 + 4 * v16);
      v72 = v28;
      if ( v28 >= v67 )
      {
        if ( v28 != v67 )
          goto LABEL_45;
        v29 = *(_QWORD *)(a1 + 48);
        if ( *(_BYTE *)(v83 + v29) )
        {
          if ( !*(_BYTE *)(v29 + v16) || v17 <= *(_DWORD *)(v8 + 4LL * v83) )
            goto LABEL_45;
        }
      }
      v30 = v9 - v8;
      v31 = *(_QWORD *)(a1 + 48);
      v32 = v62;
      v83 = v10;
      v33 = *(int *)((char *)v15 + v9 - v8);
      v67 = v33;
      if ( !*(_BYTE *)(v62 + v31) )
      {
        if ( v10 == v5 )
          LOWORD(v34) = v60;
        else
          LOWORD(v34) = v10 - 1;
        v34 = (__int16)v34;
        v35 = v5;
        if ( v10 != v60 )
          v35 = v10 + 1;
        CalculateYExtremum(
          1,
          *(_DWORD *)(v8 + 4 * v34),
          *(_DWORD *)(v9 + 4 * v34),
          *(_BYTE *)(v34 + v31) & 1,
          *v15,
          v33,
          *(_DWORD *)(v8 + 4LL * v35),
          *(_DWORD *)(v9 + 4LL * v35),
          *(_BYTE *)(v35 + v31) & 1,
          &v77,
          &v78);
        v28 = v72;
LABEL_45:
        v32 = v62;
        v30 = v9 - v8;
        goto LABEL_46;
      }
      v77 = 2 * *v15;
      v78 = 2 * v33;
LABEL_46:
      if ( v28 > v68
        || v28 == v68
        && ((v36 = *(_QWORD *)(a1 + 48), !*(_BYTE *)(v36 + v84))
         || *(_BYTE *)(v36 + v16) && v66 < *(_DWORD *)(v8 + 4LL * v84)) )
      {
        v37 = *(_QWORD *)(a1 + 48);
        v38 = *(int *)((char *)v15 + v30);
        v84 = v10;
        v68 = v38;
        if ( *(_BYTE *)(v32 + v37) )
        {
          v79 = 2 * *v15;
          v80 = 2 * v38;
        }
        else
        {
          if ( v10 == v5 )
            LOWORD(v39) = v60;
          else
            LOWORD(v39) = v10 - 1;
          v39 = (__int16)v39;
          v40 = v5;
          if ( v10 != v60 )
            v40 = v10 + 1;
          CalculateYExtremum(
            0,
            *(_DWORD *)(v8 + 4 * v39),
            *(_DWORD *)(v9 + 4 * v39),
            *(_BYTE *)(v39 + v37) & 1,
            *v15,
            v38,
            *(_DWORD *)(v8 + 4LL * v40),
            *(_DWORD *)(v9 + 4LL * v40),
            *(_BYTE *)(v40 + v37) & 1,
            &v79,
            &v80);
        }
      }
      v7 = v61;
      v11 = v62 + 1;
      v6 = v60;
      ++v10;
      ++v15;
      v12 = v9 - v8;
      v14 = -v5;
      ++v62;
      v13 = v5;
    }
    while ( (__int16)(v10 - v5) < v63 );
    v4 = v73;
    v3 = v69;
    v41 = *(_QWORD *)(a1 + 32);
    v42 = *(_QWORD *)(a1 + 40);
    v43 = *(_DWORD *)(v41 + 4LL * v82);
    v44 = *(_DWORD *)(v41 + 4LL * v61);
    v45 = *(_DWORD *)(v42 + 4LL * v61);
    v46 = v44 - v43;
    if ( v43 - v44 >= 0 )
      v46 = v43 - v44;
    v47 = *(_DWORD *)(v42 + 4LL * v61) - *(_DWORD *)(v42 + 4LL * v82);
    if ( *(_DWORD *)(v42 + 4LL * v82) - v45 >= 0 )
      v47 = *(_DWORD *)(v42 + 4LL * v82) - v45;
    v48 = v47 + v46;
    v49 = v45 - *(_DWORD *)(v42 + 4LL * v83);
    if ( *(_DWORD *)(v42 + 4LL * v83) - v45 >= 0 )
      v49 = *(_DWORD *)(v42 + 4LL * v83) - v45;
    v50 = v44 - *(_DWORD *)(v41 + 4LL * v83);
    if ( *(_DWORD *)(v41 + 4LL * v83) - v44 >= 0 )
      v50 = *(_DWORD *)(v41 + 4LL * v83) - v44;
    v51 = v50 + v49;
    v52 = *(_DWORD *)(v41 + 4LL * v84) - v44;
    v53 = v44 - *(_DWORD *)(v41 + 4LL * v84);
    v54 = *(_DWORD *)(v42 + 4LL * v84) - v45;
    if ( v52 >= 0 )
      v53 = v52;
    v55 = v45 - *(_DWORD *)(v42 + 4LL * v84);
    if ( v54 >= 0 )
      v55 = v54;
    v56 = v55 + v53;
    if ( v51 <= v56 )
    {
      v58 = 3;
      if ( v51 <= v48 )
        v57 = 1;
      else
        v57 = 2;
    }
    else
    {
      v57 = 3;
      v58 = 2;
      if ( v56 <= v48 )
        v57 = 1;
    }
    v59 = Misoriented(v69, 0, v61, v74, a1);
    if ( v59 != (unsigned int)Misoriented(v69, v58, *(&v81 + v58), *(&v74 + v58), a1) )
      v59 = Misoriented(v69, v57, *(&v81 + v57), *(&v74 + v57), a1);
    if ( v59 )
      *(_BYTE *)(*(_QWORD *)(a1 + 88) + v73) |= 1u;
LABEL_84:
    result = (unsigned int)*(__int16 *)(a1 + 80);
    ++v3;
    ++v4;
    v69 = v3;
    v73 = v4;
  }
  while ( v3 < (int)result );
  return result;
}
