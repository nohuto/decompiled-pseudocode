/*
 * XREFs of fsc_CalcSpline @ 0x1C02C442C
 * Callers:
 *     EvaluateSpline @ 0x1C02B5C4C (EvaluateSpline.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     PowerOf2 @ 0x1C02B3240 (PowerOf2.c)
 *     fsc_BeginElement @ 0x1C02C31D4 (fsc_BeginElement.c)
 */

__int64 __fastcall fsc_CalcSpline(int a1, int a2, int a3, int a4, int a5, int a6, __int16 a7)
{
  int v8; // r11d
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // r14d
  int v12; // r12d
  int v13; // r8d
  int v14; // esi
  signed int v15; // ebx
  int v17; // r11d
  unsigned int v18; // edi
  int v19; // r15d
  int v20; // eax
  int v21; // eax
  signed int v22; // edi
  int v23; // eax
  __int64 result; // rax
  unsigned int v25; // edi
  unsigned int v26; // edi
  unsigned int v27; // ebx
  int v28; // r10d
  int v29; // ecx
  int v30; // eax
  int v31; // r8d
  int v32; // r9d
  int v33; // r10d
  int v34; // r11d
  int v35; // r9d
  char v36; // cl
  int v37; // eax
  int v38; // r9d
  int v39; // r13d
  int v40; // r10d
  int v41; // esi
  int v42; // edx
  int v43; // eax
  int v44; // esi
  int v45; // r10d
  int v46; // esi
  int v47; // r12d
  int v48; // esi
  int v49; // edx
  int v50; // r8d
  int v51; // r9d
  int v52; // r12d
  int v53; // r13d
  unsigned int v54; // esi
  int v55; // r10d
  int v56; // r8d
  int v57; // r13d
  int v58; // r8d
  __int64 v59; // r9
  int v60; // eax
  __int64 v61; // r8
  int v62; // edx
  unsigned int v63; // edi
  int v64; // r15d
  int v65; // ecx
  int v66; // ecx
  int v67; // r8d
  int v68; // ecx
  int v69; // edx
  unsigned int v70; // edi
  int v71; // ecx
  int v72; // edx
  int v73; // [rsp+40h] [rbp-41h]
  int v74; // [rsp+44h] [rbp-3Dh]
  char v75; // [rsp+48h] [rbp-39h]
  int v76; // [rsp+4Ch] [rbp-35h]
  __int64 (__fastcall *v77)(_QWORD, _QWORD); // [rsp+50h] [rbp-31h] BYREF
  int v78; // [rsp+58h] [rbp-29h]
  _DWORD v79[2]; // [rsp+60h] [rbp-21h] BYREF
  int v80[2]; // [rsp+68h] [rbp-19h] BYREF
  _QWORD v81[10]; // [rsp+70h] [rbp-11h] BYREF
  int v82; // [rsp+D0h] [rbp+4Fh]
  int v83; // [rsp+D0h] [rbp+4Fh]
  unsigned int v84; // [rsp+D0h] [rbp+4Fh]
  int v85; // [rsp+D8h] [rbp+57h]
  int v87; // [rsp+E0h] [rbp+5Fh]
  unsigned int v88; // [rsp+E0h] [rbp+5Fh]
  int v89; // [rsp+E8h] [rbp+67h]
  int v90; // [rsp+F0h] [rbp+6Fh]
  int v91; // [rsp+F0h] [rbp+6Fh]
  int v92; // [rsp+F8h] [rbp+77h]
  __int16 v93; // [rsp+100h] [rbp+7Fh]

  v85 = -1;
  if ( a6 <= a2 )
  {
    v92 = -1;
    v82 = 4;
    v15 = ((a2 - 33) & 0xFFFFFFC0) + 32;
    v9 = a2 - v15;
    v10 = v15 >> 6;
    v11 = ((a6 + 32) >> 6) - 1;
    v12 = a2 - a4;
    v14 = a2 - a6;
    v8 = 1;
    v13 = 4;
  }
  else
  {
    v8 = 0;
    v82 = 1;
    v92 = 1;
    v9 = ((a2 + 32) & 0xFFFFFFC0) + 32 - a2;
    v10 = (int)(((a2 + 32) & 0xFFFFFFC0) + 32) >> 6;
    v11 = ((a6 - 33) >> 6) + 1;
    v12 = a4 - a2;
    v13 = 1;
    v14 = a6 - a2;
  }
  v74 = v9;
  v78 = v8;
  v76 = v8;
  if ( a5 <= a1 )
  {
    v89 = 1;
    v21 = 1 - v8;
    v17 = a3;
    v78 = v21;
    v22 = ((a1 - 33) & 0xFFFFFFC0) + 32;
    v19 = ((a5 + 32) >> 6) - 1;
    v23 = a1 - v22;
    v18 = v22 >> 6;
    v90 = v23;
    v87 = a1 - a3;
    v73 = a1 - a5;
    v20 = (v13 != 1) + 2;
  }
  else
  {
    v17 = a3;
    v85 = 1;
    v18 = (int)(((a1 + 32) & 0xFFFFFFC0) + 32) >> 6;
    v90 = ((a1 + 32) & 0xFFFFFFC0) + 32 - a1;
    v19 = ((a5 - 33) >> 6) + 1;
    v89 = 0;
    v87 = a3 - a1;
    v73 = a5 - a1;
    v20 = v82;
  }
  v80[0] = a4;
  v79[1] = a5;
  v79[0] = v17;
  v80[1] = a6;
  fsc_BeginElement(a7, v20, 1, 2, (__int64)v79, v80, &v77, v81);
  v93 = a7 & 2;
  if ( v93 )
  {
    if ( v10 == v11 )
      return 0LL;
    if ( v18 == v19 )
    {
      v25 = v89 + v18;
      while ( 1 )
      {
        result = v77(v25, v10);
        if ( (_DWORD)result )
          break;
        v10 += v92;
        if ( v10 == v11 )
          return 0LL;
      }
      return result;
    }
LABEL_25:
    PowerOf2(2 * (v14 * v87 - v12 * v73));
    v29 = v28;
    if ( v28 <= v14 )
      v29 = v14;
    v30 = PowerOf2(v29);
    v83 = v30;
    if ( v30 > 12 || v32 > 25 )
      return 4870LL;
    v35 = dword_1C02ECD40[v30 + v32];
    v36 = 6 - v35;
    v75 = 6 - v35;
    if ( v35 <= 0 )
    {
      v38 = v74;
    }
    else
    {
      v37 = 1 << (v35 - 1);
      v31 = (v37 + v31) >> v35;
      v33 = (v37 + v33) >> v35;
      v12 = (v37 + v12) >> v35;
      v14 = (v37 + v14) >> v35;
      v90 = (v37 + v90) >> v35;
      v38 = (v37 + v74) >> v35;
      v36 = v75;
      v74 = v38;
      v34 = 2 * (v14 * v31 - v12 * v33);
    }
    if ( (int)abs32(v33 * v34) >= 587202560 || (int)abs32(v14 * v34) >= 587202560 )
      return 4870LL;
    v39 = 1 << v36;
    v40 = v33 - 2 * v31;
    v41 = v14 - 2 * v12;
    v42 = v12 * v34;
    v43 = v41 * v41;
    v44 = v40 * v41;
    v45 = v40 * v40;
    v79[0] = v12 * v34;
    v46 = -v44;
    v47 = -(v31 * v34);
    v80[0] = v47;
    if ( v83 > 7 )
    {
      v57 = v39 >> 1;
      v52 = v79[0] + v38 * v46 + v43 * (v90 + v57);
      v53 = v80[0] + v45 * (v38 + v57) + v90 * v46;
      v58 = v79[0] + v38 * v46 + v90 * (v43 >> 1);
      v84 = v43 << (v75 - 1);
      v54 = v46 << v75;
      v56 = v58 >> v75;
      v88 = v45 << (v75 - 1);
      v55 = v38 * ((v80[0] + v38 * (v45 >> 1)) >> v75);
    }
    else
    {
      v48 = 2 * v46;
      v49 = 2 * v42;
      v50 = v38 * v48;
      v51 = 2 * v47;
      v52 = (v50 + v49 + v43 * (v39 + 2 * v90)) << v75;
      v53 = (v51 + v45 * (v39 + 2 * v74) + v90 * v48) << v75;
      v84 = v43 << (2 * v75);
      v88 = v45 << (2 * v75);
      v54 = v48 << (2 * v75);
      v55 = v74 * (v51 + v74 * v45);
      v56 = v50 + v49 + v90 * v43;
    }
    v59 = v88;
    v60 = v55 + v90 * v56 + v78;
    v61 = v84;
    v91 = v60;
    v62 = 2 * v84;
    if ( v93 )
    {
      v63 = v89 + v18;
      v64 = v89 + v19;
      if ( v34 <= 0 )
      {
        while ( v63 != v64 )
        {
          if ( v10 == v11 )
            return 0LL;
          if ( v60 < 0 || v52 > (int)v61 )
          {
            result = v77(v63, v10);
            if ( (_DWORD)result )
              return result;
            v10 += v92;
            v66 = v53;
            v62 = v54;
            v60 = v91;
            v67 = 2 * v88;
          }
          else
          {
            v63 += v85;
            v66 = v52;
            v67 = v54;
          }
          v60 += v66;
          v52 += v62;
          v62 = 2 * v84;
          v53 += v67;
          LODWORD(v61) = v84;
          v91 = v60;
        }
LABEL_59:
        while ( v10 != v11 )
        {
          result = v77(v63, v10);
          if ( (_DWORD)result )
            return result;
          v10 += v92;
        }
      }
      else
      {
        if ( v63 == v64 )
          goto LABEL_59;
        while ( v10 != v11 )
        {
          if ( v60 < 0 || v53 > (int)v59 )
          {
            v63 += v85;
            v65 = v52;
            v61 = v54;
          }
          else
          {
            result = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))v77)(v63, v10, v61, v59);
            if ( (_DWORD)result )
              return result;
            v59 = v88;
            v65 = v53;
            v10 += v92;
            v62 = v54;
            v60 = v91;
            v61 = 2 * v88;
          }
          v60 += v65;
          v52 += v62;
          v53 += v61;
          v91 = v60;
          if ( v63 == v64 )
            goto LABEL_59;
          v62 = 2 * v84;
        }
      }
      return 0LL;
    }
    if ( v34 <= 0 )
    {
      while ( v10 != v11 )
      {
        if ( v60 < 0 || v52 > (int)v61 )
        {
          result = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))v77)(v18 + v89, v10, v61, v59);
          if ( (_DWORD)result )
            return result;
          v10 += v92;
          v71 = v53;
          v72 = v54;
          v61 = 2 * v88;
        }
        else
        {
          result = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))v81[0])(v18, v10 + v76, v61, v59);
          if ( (_DWORD)result )
            return result;
          v18 += v85;
          v71 = v52;
          v72 = 2 * v84;
          v61 = v54;
        }
        v52 += v72;
        v60 = v71 + v91;
        v53 += v61;
        v91 += v71;
        if ( v18 == v19 )
          goto LABEL_73;
        v61 = v84;
      }
    }
    else
    {
      do
      {
        if ( v10 == v11 )
          break;
        if ( v60 < 0 || v53 > (int)v59 )
        {
          result = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))v81[0])(v18, v10 + v76, v61, v59);
          if ( (_DWORD)result )
            return result;
          v18 += v85;
          v68 = v52;
          v69 = 2 * v84;
          v61 = v54;
          v59 = v88;
        }
        else
        {
          result = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))v77)(v18 + v89, v10, v61, v59);
          if ( (_DWORD)result )
            return result;
          v59 = v88;
          v68 = v53;
          v10 += v92;
          v69 = v54;
          v61 = 2 * v88;
        }
        v52 += v69;
        v60 = v68 + v91;
        v53 += v61;
        v91 += v68;
      }
      while ( v18 != v19 );
    }
    if ( v18 == v19 )
    {
LABEL_73:
      if ( v10 == v11 )
        return 0LL;
      v70 = v89 + v18;
      while ( 1 )
      {
        result = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))v77)(v70, v10, v61, v59);
        if ( (_DWORD)result )
          break;
        v10 += v92;
        if ( v10 == v11 )
          return 0LL;
      }
    }
    else
    {
      while ( 1 )
      {
        result = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))v81[0])(v18, v10 + v76, v61, v59);
        if ( (_DWORD)result )
          break;
        v18 += v85;
        if ( v18 == v19 )
          goto LABEL_73;
      }
    }
    return result;
  }
  if ( v18 != v19 )
  {
    if ( v10 == v11 )
    {
      v27 = v76 + v10;
      while ( 1 )
      {
        result = ((__int64 (__fastcall *)(_QWORD, _QWORD))v81[0])(v18, v27);
        if ( (_DWORD)result )
          break;
        v18 += v85;
        if ( v18 == v19 )
          return 0LL;
      }
      return result;
    }
    goto LABEL_25;
  }
  v26 = v89 + v18;
  if ( v10 == v11 )
    return 0LL;
  while ( 1 )
  {
    result = v77(v26, v10);
    if ( (_DWORD)result )
      break;
    v10 += v92;
    if ( v10 == v11 )
      return 0LL;
  }
  return result;
}
