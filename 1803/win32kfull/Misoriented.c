/*
 * XREFs of Misoriented @ 0x1C02BB8E0
 * Callers:
 *     fsg_CheckOutlineOrientation @ 0x1C02BBFA4 (fsg_CheckOutlineOrientation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     CheckBoundingBoxCurve @ 0x1C02BAEA4 (CheckBoundingBoxCurve.c)
 *     CheckBoundingBoxSegment @ 0x1C02BAF88 (CheckBoundingBoxSegment.c)
 *     CurveTransitions @ 0x1C02BB044 (CurveTransitions.c)
 *     CurveTransitionsSegment @ 0x1C02BB214 (CurveTransitionsSegment.c)
 *     SetLineToInfinity @ 0x1C02BBEC4 (SetLineToInfinity.c)
 */

__int64 __fastcall Misoriented(int a1, unsigned __int16 a2, __int16 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // r14d
  _WORD *v7; // r13
  __int16 v8; // bx
  __int16 v9; // r15
  __int64 v10; // r10
  int v11; // r11d
  __int64 v12; // r9
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // edi
  unsigned int v18; // r12d
  __int16 v19; // r9
  unsigned int v20; // r8d
  unsigned int v21; // r10^4
  unsigned int v22; // r11d
  int v23; // edx
  int v24; // esi
  int v25; // r13d
  __int64 v26; // rcx
  int v27; // r8d
  int v28; // eax
  int v29; // eax
  __int64 i; // rcx
  __int64 v31; // r11
  __int16 v32; // ax
  int v33; // r15d
  __int16 v34; // cx
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // r12
  int v39; // r8d
  __int16 v40; // r9
  __int16 v41; // dx
  __int64 v42; // rbx
  int v43; // r11d
  int v44; // r8d
  unsigned __int64 v45; // r13
  __int64 v46; // rcx
  int v47; // edx
  __int16 v48; // ax
  __int16 v49; // cx
  __int16 v50; // r10
  __int16 v51; // ax
  __int64 v52; // rcx
  int v53; // edx
  int v54; // r10d
  int v55; // eax
  __int64 v56; // rbx
  int v57; // eax
  __int64 v58; // rbx
  __int64 v59; // rbx
  __int16 v61; // [rsp+38h] [rbp-61h]
  __int16 v63; // [rsp+3Ch] [rbp-5Dh]
  unsigned __int64 v64; // [rsp+40h] [rbp-59h]
  unsigned __int64 v65; // [rsp+40h] [rbp-59h]
  __int64 v66; // [rsp+40h] [rbp-59h]
  __int16 v67; // [rsp+48h] [rbp-51h]
  unsigned __int64 v68; // [rsp+50h] [rbp-49h]
  unsigned __int64 v69; // [rsp+58h] [rbp-41h]
  unsigned __int64 v70; // [rsp+60h] [rbp-39h]
  int v71; // [rsp+68h] [rbp-31h]
  int v72; // [rsp+6Ch] [rbp-2Dh]
  int v73; // [rsp+70h] [rbp-29h]
  int v74; // [rsp+74h] [rbp-25h]
  __int64 v75; // [rsp+78h] [rbp-21h]
  __int64 v76; // [rsp+80h] [rbp-19h]
  int v77; // [rsp+88h] [rbp-11h]
  __int64 v78; // [rsp+90h] [rbp-9h]
  _WORD *v79; // [rsp+98h] [rbp-1h]
  __int64 v80; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v81; // [rsp+A8h] [rbp+Fh] BYREF
  unsigned __int64 v82; // [rsp+B0h] [rbp+17h]

  v74 = a1;
  v6 = 0;
  v7 = *(_WORD **)(a5 + 64);
  v76 = *(_QWORD *)(a5 + 56);
  v8 = 0;
  v79 = v7;
  v9 = v7[a1] - *(_WORD *)(v76 + 2LL * a1) + 1;
  SetLineToInfinity(a2, a4, &v80, &v81);
  v10 = *(_QWORD *)(a5 + 32);
  v12 = *(_QWORD *)(a5 + 40);
  v13 = 0;
  v72 = (unsigned __int16)(a3 - v11);
  v78 = v10;
  v71 = v11;
  v75 = v12;
  v73 = 0;
  v14 = v11 + (__int16)((v9 + (__int16)v72 - 1) % v9);
  v15 = v11 + (__int16)v72;
  v16 = *(_DWORD *)(v12 + 4 * v14);
  v17 = *(_DWORD *)(v10 + 4 * v15);
  v18 = *(_DWORD *)(v12 + 4 * v15);
  v19 = 0;
  v20 = *(_DWORD *)(v10 + 4 * v14);
  v69 = __PAIR64__(v18, v17);
  LODWORD(v64) = v17 - v20;
  v21 = v18;
  v68 = __PAIR64__(v16, v20);
  HIDWORD(v64) = v18 - v16;
  v22 = v17 - v20;
  v82 = v64;
  if ( v9 > 0 )
  {
    LOWORD(v23) = v72;
    v24 = v71;
    v25 = v9;
    do
    {
      if ( v8 )
        break;
      v23 = ((__int16)v23 + 1) % v25;
      v26 = v24 + v23;
      v27 = *(_DWORD *)(v78 + 4 * v26);
      LODWORD(v70) = v27;
      v28 = *(_DWORD *)(v75 + 4 * v26);
      HIDWORD(v70) = v28;
      if ( v17 != v27 || v18 != v28 )
      {
        LODWORD(v65) = v27 - v17;
        HIDWORD(v65) = HIDWORD(v70) - v21;
        v29 = v22 * (HIDWORD(v70) - v21) - HIDWORD(v82) * (v27 - v17);
        if ( v29 >= 0 )
          v8 = v29 > 0;
        else
          v8 = -1;
        for ( i = 0LL; i < 2; ++i )
          *(&v68 + i) = *(&v69 + i);
        v22 = v65;
        v18 = HIDWORD(v69);
        v17 = v69;
        v21 = HIDWORD(v69);
        v82 = v65;
        v25 = v9;
      }
      ++v19;
    }
    while ( v19 < v9 );
    v7 = v79;
    v13 = 0;
    if ( v19 < v9 )
    {
      if ( v8 > 0 )
        v13 = 2;
      v73 = v13;
    }
  }
  v31 = a5;
  v32 = 0;
  v33 = 0;
  v67 = 0;
  v34 = *(_WORD *)(a5 + 80);
  LOWORD(v72) = v34;
  if ( v34 > 0 )
  {
    v35 = v81;
    v36 = v76 - (_QWORD)v7;
    v37 = v80;
    v38 = v68;
    v39 = v74;
    v76 -= (__int64)v7;
    while ( 1 )
    {
      if ( v32 == v39 )
        goto LABEL_54;
      v40 = *(_WORD *)((char *)v7 + v36);
      v41 = *v7;
      v61 = v40;
      v63 = *v7;
      if ( (__int16)(*v7 - v40 + 1) <= 2 )
        goto LABEL_53;
      v42 = *(_QWORD *)(v31 + 48);
      v66 = v42;
      v43 = *(unsigned __int8 *)(v40 + v42);
      v44 = 2 * *(_DWORD *)(v78 + 4LL * v40);
      LODWORD(v69) = v44;
      HIDWORD(v69) = 2 * *(_DWORD *)(v75 + 4LL * v40);
      v45 = v69;
      if ( !v43 )
      {
        v46 = v41;
        v47 = 2 * *(_DWORD *)(v78 + 4LL * v41);
        LODWORD(v68) = v47;
        HIDWORD(v68) = 2 * *(_DWORD *)(v75 + 4 * v46);
        if ( *(_BYTE *)(v46 + v42) )
        {
          v38 = v68;
        }
        else
        {
          HIDWORD(v82) = (HIDWORD(v69) + HIDWORD(v68)) >> 1;
          LODWORD(v82) = (v47 + v44) >> 1;
          v38 = v82;
          v68 = v82;
        }
        v41 = v63;
      }
      v48 = v40;
      while ( 1 )
      {
        v49 = v48;
        v50 = v40;
        v51 = v48 + 1;
        if ( v49 != v41 )
          v50 = v51;
        v52 = v50;
        LOWORD(v71) = v50;
        v53 = 2 * *(_DWORD *)(v78 + 4LL * v50);
        LODWORD(v70) = v53;
        v54 = 2 * *(_DWORD *)(v75 + 4LL * v50);
        v55 = *(unsigned __int8 *)(v52 + v42);
        HIDWORD(v70) = v54;
        v77 = v55;
        switch ( v55 | (2 * v43) )
        {
          case 0:
            HIDWORD(v80) = (HIDWORD(v45) + HIDWORD(v70)) >> 1;
            LODWORD(v80) = (v44 + v53) >> 1;
            v59 = v80;
            if ( v68 != v80 )
            {
              if ( (unsigned int)CheckBoundingBoxCurve(v37, v38, v45, v80, a2) )
                v33 += CurveTransitions(v37, v35, v38, v45, v59);
              v40 = v61;
            }
            v38 = v59;
            v68 = v59;
            goto LABEL_39;
          case 1:
            if ( (_DWORD)v68 != v53 || HIDWORD(v38) != v54 )
            {
              v58 = v70;
              if ( (unsigned int)CheckBoundingBoxCurve(v37, v38, v45, v70, a2) )
              {
                v57 = CurveTransitions(v37, v35, v38, v45, v58);
LABEL_37:
                v33 += v57;
              }
LABEL_38:
              v40 = v61;
LABEL_39:
              v42 = v66;
            }
            break;
          case 2:
            v38 = v45;
            v68 = v45;
            break;
          default:
            if ( (v55 | (2 * v43)) == 3 && (v44 != v53 || HIDWORD(v45) != v54) )
            {
              v56 = v70;
              if ( (unsigned int)CheckBoundingBoxSegment(v37, v45, v70, a2) )
              {
                v57 = CurveTransitionsSegment(v37, v35, v45, v56);
                goto LABEL_37;
              }
              goto LABEL_38;
            }
            break;
        }
        v48 = v71;
        v45 = v70;
        v43 = v77;
        v69 = v70;
        if ( (_WORD)v71 == v40 )
          break;
        v41 = v63;
        v44 = v70;
      }
      v7 = v79;
      v34 = v72;
      v31 = a5;
      v39 = v74;
LABEL_53:
      v36 = v76;
LABEL_54:
      ++v7;
      v32 = v67 + 1;
      v79 = v7;
      v67 = v32;
      if ( v32 >= v34 )
      {
        v13 = v73;
        break;
      }
    }
  }
  LOBYTE(v6) = 2 * ((v33 & 1) == 0) == v13;
  return v6;
}
