/*
 * XREFs of RtlFormatMessageEx @ 0x180051F80
 * Callers:
 *     RtlFormatMessage @ 0x1800F61D0 (RtlFormatMessage.c)
 * Callees:
 *     RtlStringCopyWorkerW_0 @ 0x180051F00 (RtlStringCopyWorkerW_0.c)
 *     RtlStringCchPrintfExW @ 0x180052670 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

__int64 __fastcall RtlFormatMessageEx(
        __int16 *a1,
        unsigned int a2,
        char a3,
        char a4,
        char a5,
        __int64 *a6,
        unsigned __int64 a7,
        unsigned int a8,
        _DWORD *a9,
        __int64 a10)
{
  unsigned int v10; // r13d
  int v12; // r10d
  unsigned __int64 v13; // r8
  unsigned int v14; // r14d
  _WORD *v15; // rbx
  _WORD *v16; // rsi
  __int16 *v17; // r12
  __int16 v18; // ax
  _WORD *v19; // rcx
  __int64 result; // rax
  unsigned __int16 v21; // cx
  _WORD *v22; // rdx
  int v23; // r15d
  unsigned __int16 v24; // ax
  __int64 v25; // r8
  int v26; // r14d
  __int64 v27; // r15
  unsigned int v28; // r13d
  int v29; // r8d
  _WORD *v30; // r11
  char v31; // r9
  __int64 *v32; // r14
  unsigned int v33; // r11d
  unsigned int v34; // edx
  __int64 v35; // rax
  _WORD *v36; // r9
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rax
  bool v40; // sf
  __int16 *v41; // r12
  __int16 v42; // cx
  __int16 v43; // dx
  char *v44; // r8
  __int64 v45; // rsi
  __int64 v46; // rax
  unsigned int v47; // ecx
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned int v50; // eax
  unsigned int v51; // r14d
  __int16 v52; // ax
  int v53; // eax
  int v54; // ecx
  char *v55; // rcx
  unsigned __int16 v56; // ax
  int v57; // r9d
  __int64 v58; // rdx
  char *v59; // r8
  __int16 v60; // ax
  unsigned __int16 v61; // ax
  char *v62; // r8
  __int16 v63; // ax
  char *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rdx
  unsigned int v67; // r11d
  _WORD *v68; // rdx
  _WORD *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rbx
  _WORD *v72; // rsi
  _WORD *v73; // rbx
  __int64 v74; // [rsp+38h] [rbp-D0h]
  int v75; // [rsp+58h] [rbp-B0h]
  unsigned int v78; // [rsp+60h] [rbp-A8h]
  int v79; // [rsp+68h] [rbp-A0h]
  _WORD *v80; // [rsp+70h] [rbp-98h]
  __int64 *v81; // [rsp+80h] [rbp-88h]
  __int64 v82; // [rsp+88h] [rbp-80h] BYREF
  __int16 *v83; // [rsp+90h] [rbp-78h]
  unsigned int v84; // [rsp+98h] [rbp-70h]
  __int64 v85; // [rsp+A0h] [rbp-68h] BYREF
  _WORD *v86; // [rsp+A8h] [rbp-60h]
  __int16 *v87; // [rsp+B0h] [rbp-58h]
  _DWORD *v88; // [rsp+B8h] [rbp-50h]
  _QWORD v89[200]; // [rsp+C8h] [rbp-40h]
  unsigned __int16 v90; // [rsp+708h] [rbp+600h] BYREF
  _WORD v91[30]; // [rsp+70Ah] [rbp+602h] BYREF
  char v92; // [rsp+746h] [rbp+63Eh] BYREF

  v10 = a2;
  v84 = a2;
  v12 = a8 >> 1;
  v88 = a9;
  v13 = a7;
  v87 = a1;
  v81 = a6;
  v78 = 0;
  v75 = a8 >> 1;
  if ( a10 && (*(_DWORD *)a10 & 1) != 0 )
  {
    v46 = *(_QWORD *)(a10 + 8);
    v47 = *(_DWORD *)a10 & 0xFFFFFFFE;
    v14 = *(_DWORD *)(a10 + 4);
    v16 = 0LL;
    *(_DWORD *)a10 = v47;
    v79 = v14;
    v17 = &a1[v46];
    v48 = *(_QWORD *)(a10 + 16);
    v83 = v17;
    v15 = (_WORD *)(a7 + 2 * v48);
    v49 = *(_QWORD *)(a10 + 24);
    if ( v49 != -1 )
      v16 = (_WORD *)(a7 + 2 * v49);
    v12 -= *(_DWORD *)(a10 + 16);
    v75 = v12;
    if ( !a5 && a6 )
    {
      *a6 = *(_QWORD *)(a10 + 32);
      v47 = *(_DWORD *)a10;
    }
    if ( (v47 & 2) != 0 )
    {
      *(_DWORD *)a10 = v47 & 0xFFFFFFFD;
      v80 = (_WORD *)a7;
      goto LABEL_155;
    }
  }
  else
  {
    v14 = 0;
    v83 = a1;
    v15 = (_WORD *)a7;
    v16 = 0LL;
    v79 = 0;
    v17 = a1;
    if ( !a5 && a6 && a10 )
      *(_QWORD *)(a10 + 32) = *a6;
  }
  v80 = (_WORD *)a7;
  while ( 1 )
  {
    v18 = *v17;
    v19 = v15;
    if ( !*v17 )
      break;
    ++v17;
    if ( v18 == 37 )
    {
      v21 = *v17;
      v22 = v15;
      v86 = v15;
      if ( (unsigned __int16)(v21 - 49) > 8u )
      {
        switch ( v21 )
        {
          case 0x30u:
            goto LABEL_17;
          case 0u:
            return 3221225485LL;
          case 0x72u:
            v75 = --v12;
            if ( v12 < 0 )
              goto LABEL_78;
            *v15++ = 13;
            goto LABEL_76;
          case 0x6Eu:
            v12 -= 2;
            v75 = v12;
            if ( v12 < 0 )
              goto LABEL_78;
            *(_DWORD *)v15 = 655373;
            v15 += 2;
LABEL_76:
            ++v17;
            goto LABEL_77;
          case 0x74u:
            v75 = --v12;
            if ( v12 < 0 )
              goto LABEL_78;
            if ( (v14 & 7) != 0 )
              v51 = (v14 + 7) & 0xFFFFFFF8;
            else
              v51 = v14 + 8;
            v79 = v51;
            v52 = 9;
            goto LABEL_104;
          case 0x62u:
            v75 = --v12;
            if ( v12 < 0 )
              goto LABEL_78;
            v52 = 32;
LABEL_104:
            v16 = v15;
            *v15 = v52;
            break;
          default:
            if ( a3 )
            {
              v12 -= 2;
              v75 = v12;
              if ( v12 < 0 )
                goto LABEL_78;
              *v15 = 37;
              v15[1] = *v17;
              v15 += 2;
              goto LABEL_106;
            }
            v75 = --v12;
            if ( v12 < 0 )
              goto LABEL_78;
            *v15 = v21;
            break;
        }
        ++v15;
LABEL_106:
        ++v17;
        goto LABEL_47;
      }
      ++v17;
      v23 = v21 - 48;
      v24 = *v17;
      if ( (unsigned __int16)*v17 >= 0x30u )
      {
        v24 = *v17;
        if ( (unsigned __int16)*v17 <= 0x39u )
        {
          ++v17;
          v23 = v24 + 2 * (5 * v23 - 24);
          v24 = *v17;
          if ( (unsigned __int16)*v17 >= 0x30u && v24 <= 0x39u )
          {
            v53 = (unsigned __int16)*v17++;
            v23 = v53 + 2 * (5 * v23 - 24);
            v24 = *v17;
            if ( (unsigned __int16)*v17 >= 0x30u && v24 <= 0x39u )
              return 3221225485LL;
          }
        }
      }
      v25 = 0LL;
      v26 = v23;
      v27 = (unsigned int)(v23 - 1);
      v28 = 0;
      if ( v24 == 33 )
      {
        v41 = v17 + 1;
        v90 = 37;
        v30 = v91;
        v31 = 0;
        v80 = v91;
        v42 = *v41;
        if ( *v41 != 33 )
        {
          v43 = *v41;
          v44 = (char *)v91;
          while ( v43 )
          {
            if ( v44 >= &v92 )
              break;
            if ( v43 == 42 )
            {
              v50 = v28;
              v43 = v42;
              ++v28;
              if ( v50 > 1 )
                break;
            }
            *v30 = v43;
            ++v41;
            v30 = v44 + 2;
            v80 = v44 + 2;
            v44 += 2;
            v42 = *v41;
            v43 = *v41;
            if ( *v41 == 33 )
            {
              v25 = 0LL;
              goto LABEL_56;
            }
          }
          return 3221225485LL;
        }
LABEL_56:
        v17 = v41 + 1;
        *v30 = 0;
      }
      else
      {
        v85 = 0LL;
        v29 = RtlStringCopyWorkerW_0(&v90, 48LL, &v85, (__int64)L"%s");
        if ( (int)(v29 + 0x80000000) < 0 || v29 == -2147483643 )
        {
          v30 = &v91[v85 - 1];
          v80 = v30;
        }
        else
        {
          v30 = v80;
        }
        v12 = v75;
        v31 = 1;
        v25 = 0LL;
      }
      if ( a3 )
      {
        if ( v31 == 1 )
          goto LABEL_63;
        v54 = v90 - aS_0[0];
        if ( v90 == aS_0[0] )
        {
          v54 = v91[0] - aS_0[1];
          if ( v91[0] == aS_0[1] )
            v54 = v91[1] - aS_0[2];
        }
        if ( !v54 )
        {
LABEL_63:
          LODWORD(v74) = v26;
          v38 = RtlStringCchPrintfExW((_DWORD)v15, v12, (unsigned int)&v82, 0, 0, (__int64)L"%%%u", v74);
        }
        else
        {
          LODWORD(v74) = v26;
          v38 = RtlStringCchPrintfExW((_DWORD)v15, v12, (unsigned int)&v82, 0, 0, (__int64)L"%%%u!%s!", v74, v91);
        }
        goto LABEL_44;
      }
      v32 = v81;
      if ( !v81 || (unsigned int)v27 + v28 >= 0xC8 )
        return 3221225485LL;
      if ( a4 )
      {
        v55 = (char *)(v30 - 1);
        if ( *(v30 - 1) == 99 )
        {
          v56 = *(v30 - 2) - 104;
          if ( v56 > 0xFu || (v57 = 32785, !_bittest(&v57, v56)) )
          {
            v58 = 3LL;
            v59 = (char *)((char *)L"hc" - v55);
            do
            {
              if ( v58 == -2147483643 )
                break;
              v60 = *(_WORD *)&v55[(_QWORD)v59];
              if ( !v60 )
                break;
              *(_WORD *)v55 = v60;
              v55 += 2;
              --v58;
            }
            while ( v58 );
LABEL_140:
            v25 = 0LL;
            v64 = v55 - 2;
            if ( v58 )
              v64 = v55;
            *(_WORD *)v64 = 0;
            goto LABEL_37;
          }
        }
        else
        {
          v57 = 32785;
        }
        if ( *(_WORD *)v55 != 115 || (v61 = *(v30 - 2) - 104, v61 <= 0xFu) && _bittest(&v57, v61) )
        {
          if ( *(_WORD *)v55 == 83 )
          {
            *(_WORD *)v55 = 115;
          }
          else if ( *(_WORD *)v55 == 67 )
          {
            *(_WORD *)v55 = 99;
          }
          goto LABEL_37;
        }
        v58 = 3LL;
        v62 = (char *)((char *)L"hs" - v55);
        do
        {
          if ( v58 == -2147483643 )
            break;
          v63 = *(_WORD *)&v62[(_QWORD)v55];
          if ( !v63 )
            break;
          *(_WORD *)v55 = v63;
          v55 += 2;
          --v58;
        }
        while ( v58 );
        goto LABEL_140;
      }
LABEL_37:
      v33 = v78;
      if ( (unsigned int)v27 >= v78 )
      {
        do
        {
          v34 = v33 + 1;
          if ( a5 )
          {
            v35 = *v32++;
          }
          else
          {
            *v32 += 8LL;
            v35 = *(_QWORD *)(*v32 - 8);
          }
          v89[v33++] = v35;
        }
        while ( v34 <= (unsigned int)v27 );
        v12 = v75;
        v81 = v32;
        v78 = v34;
      }
      v36 = (_WORD *)v89[v27];
      v80 = v36;
      v37 = 0LL;
      if ( v28 )
      {
        if ( a5 )
        {
          v25 = *v32;
          v65 = v33++;
          ++v32;
          v78 = v33;
          v81 = v32;
          v89[v65] = v25;
        }
        else
        {
          *v32 += 8LL;
          v25 = *(_QWORD *)(*v32 - 8);
        }
        if ( v28 > 1 )
        {
          v66 = v33;
          v67 = v33 + 1;
          v78 = v67;
          if ( a5 )
          {
            v37 = *v32;
            v81 = v32 + 1;
          }
          else
          {
            *v32 += 8LL;
            v78 = v67;
            v37 = *(_QWORD *)(*v32 - 8);
          }
          v89[v66] = v37;
        }
      }
      v38 = RtlStringCchPrintfExW((_DWORD)v15, v12, (unsigned int)&v82, 0, 0, (__int64)&v90, v36, v25, v37);
LABEL_44:
      if ( v38 < 0 )
        goto LABEL_78;
      v39 = (v82 - (__int64)v15) >> 1;
      v40 = v75 - (int)v39 < 0;
      v12 = v75 - v39;
      v75 -= v39;
      if ( v40 )
        goto LABEL_78;
      v22 = v86;
      v13 = a7;
      v10 = v84;
      v15 += (int)v39;
LABEL_47:
      if ( v22 )
      {
        v14 = v15 - v22 + v79;
        goto LABEL_14;
      }
LABEL_77:
      v16 = 0LL;
      v14 = 0;
LABEL_14:
      v79 = v14;
      v83 = v17;
      if ( v10 && v10 != -1 && v14 >= v10 )
      {
LABEL_155:
        if ( v16 )
        {
          v68 = v16;
          do
          {
            if ( *v68 != 32 && *v68 != 9 )
              break;
            ++v68;
          }
          while ( v68 != v15 );
          if ( (unsigned __int64)v16 > a7 )
          {
            do
            {
              v69 = v16 - 1;
              if ( *(v16 - 1) != 32 && *v69 != 9 )
                break;
              --v16;
            }
            while ( (unsigned __int64)v69 > a7 );
          }
          v70 = v68 - v16;
          if ( (_DWORD)v70 == 1 )
          {
            v75 = v12 - 1;
            if ( v12 - 1 < 0 )
              goto LABEL_166;
          }
          else if ( (unsigned int)v70 > 2 )
          {
            v75 = v70 + v12 - 2;
          }
          v71 = v15 - v68;
          v14 = v71;
          v79 = v71;
          memmove(v16 + 2, v68, 2 * v71);
          v12 = v75;
          *v16 = 13;
          v72 = v16 + 1;
          *v72 = 10;
          v73 = &v72[(unsigned int)v71];
        }
        else
        {
          v12 -= 2;
          v75 = v12;
          if ( v12 < 0 )
          {
LABEL_166:
            if ( a10 )
            {
              *(_DWORD *)a10 |= 2u;
              goto LABEL_78;
            }
            return 2147483653LL;
          }
          v14 = 0;
          *v15 = 13;
          v73 = v15 + 1;
          v79 = 0;
          *v73 = 10;
        }
        v13 = a7;
        v16 = 0LL;
        v15 = v73 + 1;
      }
    }
    else
    {
      if ( v18 != 13 && v18 != 10 )
        goto LABEL_10;
      if ( v18 == 10 && *v17 == 13 || v18 == 13 && *v17 == 10 )
        ++v17;
      if ( v10 )
      {
        v16 = v15;
        v18 = 32;
LABEL_10:
        v75 = --v12;
        if ( v12 < 0 )
          goto LABEL_78;
        *v15 = v18;
        ++v14;
        ++v15;
        if ( v18 != 32 )
          v19 = v16;
        v16 = v19;
        goto LABEL_14;
      }
      v12 -= 2;
      v75 = v12;
      if ( v12 < 0 )
        goto LABEL_78;
      v14 = 0;
      *(_DWORD *)v15 = 655373;
      v79 = 0;
      v83 = v17;
      v15 += 2;
      v16 = 0LL;
    }
  }
LABEL_17:
  if ( v12 < 1 )
  {
LABEL_78:
    if ( a10 )
    {
      *(_DWORD *)(a10 + 4) = v79;
      *(_QWORD *)(a10 + 8) = v83 - v87;
      *(_QWORD *)(a10 + 16) = (__int64)((__int64)v15 - a7) >> 1;
      if ( v16 )
        v45 = (__int64)((__int64)v16 - a7) >> 1;
      else
        v45 = -1LL;
      *(_DWORD *)a10 |= 1u;
      *(_QWORD *)(a10 + 24) = v45;
    }
    return 2147483653LL;
  }
  *v15 = 0;
  result = 0LL;
  if ( v88 )
    *v88 = 2 * ((__int64)((__int64)v15 - v13 + 2) >> 1);
  return result;
}
