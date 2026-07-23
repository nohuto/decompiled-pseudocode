/*
 * XREFs of LdrpResSearchResourceInsideDirectory @ 0x180057680
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180056B60 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800E2B8C (LdrpResSearchResourceHandle.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     LdrpResCompareResourceNames @ 0x180058680 (LdrpResCompareResourceNames.c)
 *     RtlULongLongSub @ 0x1800589C8 (RtlULongLongSub.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x180059350 (LdrpSectionTableFromVirtualAddress.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E0910 (LdrpTraceLoadMUIDll.c)
 *     LdrpResReadFile @ 0x1800E2AD8 (LdrpResReadFile.c)
 */

__int64 __fastcall LdrpResSearchResourceInsideDirectory(
        __int64 a1,
        char *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        unsigned int a8,
        __int64 a9,
        unsigned __int64 *a10,
        _QWORD *a11,
        int a12,
        _WORD *a13)
{
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r14
  __int64 v16; // r12
  __int64 *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r9
  int v20; // r8d
  int v21; // r13d
  int v22; // r11d
  unsigned int v23; // ecx
  unsigned __int64 v24; // rbx
  unsigned int *v25; // rsi
  unsigned int v26; // eax
  unsigned int v27; // ecx
  __int64 v28; // rdi
  __int64 v29; // r14
  unsigned __int64 v30; // r10
  char *v31; // rdx
  char *v32; // rcx
  unsigned int *v33; // r12
  unsigned int *v34; // rcx
  int v35; // edi
  int v36; // eax
  int v37; // r15d
  int v38; // edi
  __int64 result; // rax
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  bool v45; // zf
  char v46; // di
  __int64 v47; // rax
  unsigned int *v48; // r13
  __int64 v49; // rax
  int v50; // edi
  unsigned __int64 v51; // rbx
  unsigned __int64 v52; // rdi
  int v53; // r10d
  unsigned __int64 v54; // r11
  __int64 v55; // rdx
  unsigned __int64 v56; // r9
  __int64 v57; // rcx
  unsigned __int64 *v58; // r11
  unsigned __int64 v59; // r8
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rdx
  int v62; // r9d
  __int64 v63; // rax
  int v64; // edx
  unsigned int v65; // r10d
  __int64 v66; // rdi
  __int64 v67; // r14
  __int64 v68; // r15
  __int64 v69; // rax
  __int64 v70; // r14
  __int64 v71; // rax
  __int64 v72; // r11
  unsigned __int64 v73; // rdx
  unsigned __int64 v74; // rcx
  int v75; // eax
  __int64 v76; // r14
  __int64 v77; // r9
  __int64 v78; // rcx
  unsigned __int64 v79; // r12
  unsigned int *Heap; // rdi
  __int64 v81; // rcx
  int v82; // [rsp+40h] [rbp-178h]
  unsigned int v83; // [rsp+40h] [rbp-178h]
  unsigned __int64 v84; // [rsp+48h] [rbp-170h] BYREF
  char v85; // [rsp+50h] [rbp-168h]
  int v86; // [rsp+54h] [rbp-164h]
  unsigned __int16 v87; // [rsp+58h] [rbp-160h]
  char v88; // [rsp+5Ch] [rbp-15Ch]
  __int64 v89; // [rsp+60h] [rbp-158h]
  unsigned int *v90; // [rsp+68h] [rbp-150h]
  int v91; // [rsp+70h] [rbp-148h]
  unsigned __int64 v92; // [rsp+78h] [rbp-140h]
  signed __int16 v93; // [rsp+80h] [rbp-138h]
  int v94; // [rsp+84h] [rbp-134h]
  unsigned __int64 v95; // [rsp+88h] [rbp-130h]
  int v96; // [rsp+90h] [rbp-128h]
  unsigned int v97; // [rsp+94h] [rbp-124h]
  unsigned __int64 v98; // [rsp+98h] [rbp-120h]
  int v99; // [rsp+A0h] [rbp-118h]
  int v100; // [rsp+A4h] [rbp-114h] BYREF
  PVOID BaseAddress; // [rsp+A8h] [rbp-110h]
  unsigned __int64 v102; // [rsp+B0h] [rbp-108h]
  char *v103; // [rsp+B8h] [rbp-100h]
  __int64 v104; // [rsp+C0h] [rbp-F8h]
  HANDLE Handle; // [rsp+C8h] [rbp-F0h]
  __int64 v106; // [rsp+D0h] [rbp-E8h]
  __int64 v107; // [rsp+D8h] [rbp-E0h]
  unsigned int v108; // [rsp+E0h] [rbp-D8h]
  __int64 v109; // [rsp+E8h] [rbp-D0h]
  __int64 v110; // [rsp+F0h] [rbp-C8h]
  __int64 v111; // [rsp+F8h] [rbp-C0h]
  unsigned int *v112; // [rsp+100h] [rbp-B8h]
  unsigned int *v113; // [rsp+108h] [rbp-B0h]
  __int64 v114; // [rsp+110h] [rbp-A8h]
  _WORD *v115; // [rsp+118h] [rbp-A0h]
  unsigned __int64 v116; // [rsp+120h] [rbp-98h]
  unsigned __int64 *v117; // [rsp+128h] [rbp-90h]
  _QWORD v118[2]; // [rsp+130h] [rbp-88h] BYREF
  _QWORD *v119; // [rsp+140h] [rbp-78h]
  int v120; // [rsp+148h] [rbp-70h] BYREF
  const wchar_t *v121; // [rsp+150h] [rbp-68h]
  __int64 v122; // [rsp+158h] [rbp-60h]
  __int64 v123; // [rsp+160h] [rbp-58h]
  _BYTE v124[16]; // [rsp+168h] [rbp-50h] BYREF

  v13 = a4;
  v95 = a4;
  v14 = a3;
  v92 = a3;
  Handle = a2;
  v16 = a1;
  v104 = a1;
  v106 = a5;
  v111 = a6;
  v17 = a7;
  v110 = (__int64)a7;
  v109 = a9;
  v117 = a10;
  v119 = a11;
  v115 = a13;
  v122 = 0LL;
  v123 = 0LL;
  v93 = 0;
  v89 = 0LL;
  BaseAddress = 0LL;
  v91 = 0;
  v87 = 0;
  LODWORD(v118[0]) = 5636180;
  v118[1] = L"LdrpResSearchResourceInsideDirectory Enter";
  v120 = 5505106;
  v121 = L"LdrpResSearchResourceInsideDirectory Exit";
  if ( RtlGetCurrentServiceSessionId() )
  {
    v18 = (__int64)NtCurrentPeb()->SharedData + 555;
    v91 = v87;
  }
  else
  {
    v18 = 2147353477LL;
  }
  if ( (*(_BYTE *)v18 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
    {
      v81 = (__int64)NtCurrentPeb()->SharedData + 554;
      v91 = v87;
    }
    else
    {
      v81 = 2147353476LL;
    }
    LdrpTraceLoadMUIDll(v118, *(unsigned __int8 *)v81);
  }
  if ( !v13 )
    return 3221225485LL;
  if ( !v106 )
    return 3221225485LL;
  if ( !a7 )
    return 3221225485LL;
  v19 = a8;
  if ( a8 - 1 > 3 )
    return 3221225485LL;
  v20 = a12;
  v86 = a12;
  if ( (a12 & 0x8000) != 0 && ((unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL || !a6) )
    return 3221225485LL;
  v21 = a12 & 0x1000;
  v99 = v21;
  v85 = v21 != 0;
  v22 = a12 & 0x8800;
  v96 = v22;
  if ( (a12 & 0x1000) != 0 && !v14 )
    return 3221225485LL;
  if ( v22 == 34816 )
  {
    if ( a2 )
      goto LABEL_13;
    return 3221225485LL;
  }
  if ( !v16 )
    return 3221225485LL;
LABEL_13:
  v114 = (__int64)a7;
  v23 = a8;
  v97 = a8;
  v24 = v13;
  v25 = 0LL;
  v90 = 0LL;
  v102 = 0LL;
  if ( v115 )
    *v115 = 0;
LABEL_15:
  if ( !v24 || (v26 = v23, v27 = v23 - 1, v97 = v27, v108 = v27, !v26) )
  {
    LOWORD(v38) = v89;
    goto LABEL_46;
  }
  v28 = *v17;
  v89 = v28;
  if ( !v27 && (_DWORD)v19 == 3 )
  {
    v102 = v24;
    if ( !v109 )
    {
      v83 = -1073741811;
      goto LABEL_51;
    }
    v93 = *(_WORD *)v109;
    v91 = 0;
    v87 = 0;
    if ( (~(_BYTE)v20 & 4) != 0 )
    {
      v28 = *(unsigned __int16 *)(v109 + 4);
      v89 = v28;
    }
  }
  if ( v22 == 34816 )
  {
    result = LdrpResReadFile(Handle);
    v82 = result;
    if ( (int)result < 0 )
      return result;
    v20 = v86;
    LODWORD(v19) = a8;
    v22 = v96;
    if ( v96 == 34816 )
      goto LABEL_183;
  }
  if ( v21 )
  {
    if ( v24 + 24 < v24 )
      goto LABEL_186;
    v84 = v24 + 24;
    if ( v24 + 24 > v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
      goto LABEL_185;
  }
  if ( v22 == 34816 )
LABEL_183:
    v29 = WORD2(v123);
  else
    v29 = *(unsigned __int16 *)(v24 + 12);
  v94 = v29;
  if ( (_DWORD)v29 && v21 )
  {
    v107 = 8LL * (unsigned int)v29;
    v44 = (unsigned int)(8 * v29);
    if ( v44 + v24 + 16 < v24 )
      goto LABEL_186;
    v84 = v44 + v24 + 16;
    v30 = v92;
    if ( v84 > v92 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
      goto LABEL_185;
  }
  else
  {
    v30 = v92;
  }
  v31 = (char *)(v24 + 16);
  v107 = v24 + 16;
  v103 = (char *)(v24 + 16);
  if ( (v28 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( (_DWORD)v29 )
    {
      if ( v21 )
      {
        if ( &v31[(int)v29] < v31 )
          goto LABEL_186;
        v84 = (unsigned __int64)&v31[(int)v29];
      }
      v31 += 8 * (int)v29;
      v107 = (__int64)v31;
      v103 = v31;
    }
    v29 = HIWORD(v123);
    if ( v22 != 34816 )
      v29 = *(unsigned __int16 *)(v24 + 14);
    v94 = v29;
    if ( v21 )
    {
      v118[0] = 8LL * (unsigned int)v29;
      v32 = &v31[(unsigned int)(8 * v29)];
      if ( v32 < v31 )
        goto LABEL_186;
      v84 = (unsigned __int64)&v31[(unsigned int)(8 * v29)];
      if ( (unsigned __int64)v32 > v30 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
      {
LABEL_185:
        v83 = -1073741701;
        goto LABEL_51;
      }
    }
  }
  if ( !(_DWORD)v29 )
  {
    v98 = 0LL;
    goto LABEL_49;
  }
  if ( v22 == 34816 )
  {
    if ( BaseAddress )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      BaseAddress = 0LL;
    }
    Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8 * v29);
    BaseAddress = Heap;
    if ( !Heap )
    {
      v83 = -1073741801;
      goto LABEL_51;
    }
    result = LdrpResReadFile(Handle);
    v82 = result;
    if ( (int)result < 0 )
      return result;
    v31 = (char *)Heap;
    v107 = (__int64)Heap;
    v103 = (char *)Heap;
    v20 = a12;
    v86 = a12;
    v91 = v87;
    v110 = v114;
    v97 = v108;
    v25 = v90;
  }
LABEL_35:
  if ( v102 && (v20 & 0x20) != 0 )
  {
    v24 = 0LL;
    v98 = 0LL;
    v25 = (unsigned int *)(v13 + *((unsigned int *)v31 + 1));
    if ( v21 )
    {
      if ( (unsigned __int64)v25 < v13 )
        goto LABEL_186;
      v84 = v13 + *((unsigned int *)v31 + 1);
    }
    v90 = v25;
    v38 = *(_DWORD *)v31;
    v89 = *(unsigned int *)v31;
    goto LABEL_127;
  }
  while ( 2 )
  {
    v24 = 0LL;
    v98 = 0LL;
    v33 = (unsigned int *)v31;
    v103 = v31;
    v34 = (unsigned int *)&v31[8 * (unsigned int)v29 - 8];
    v113 = v34;
    LOBYTE(v35) = v29;
    v94 = v29;
    v36 = v29;
    while ( 1 )
    {
      if ( v33 > v34 )
        goto LABEL_142;
      v37 = v36 >> 1;
      if ( !(v36 >> 1) )
      {
        v13 = v95;
        LOWORD(v38) = v89;
        if ( v36 )
        {
          result = LdrpResCompareResourceNames(v104, Handle, v92, v89, v95, v33, v20, &v100, v82);
          v82 = result;
          if ( (int)result < 0 )
            return result;
          if ( v100 )
          {
            v20 = v86;
          }
          else
          {
            v49 = v33[1];
            if ( (int)v49 >= 0 )
            {
              if ( v21 )
              {
                if ( !v102 )
                  goto LABEL_185;
                v25 = (unsigned int *)(v95 + v49);
                if ( v95 + v49 < v95 )
                  goto LABEL_186;
                v84 = v95 + v49;
              }
              else
              {
                v25 = (unsigned int *)(v95 + v49);
              }
              v90 = v25;
            }
            else
            {
              if ( v21 )
              {
                if ( v102 )
                  goto LABEL_185;
                LODWORD(v49) = v49 & 0x7FFFFFFF;
                v24 = v95 + v49;
                if ( v95 + v49 < v95 )
                  goto LABEL_186;
                v84 = v95 + v49;
              }
              else
              {
                v24 = v95 + (v49 & 0xFFFFFFFF7FFFFFFFuLL);
              }
              v98 = v24;
            }
            v20 = v86;
          }
        }
        goto LABEL_43;
      }
      v112 = v33;
      v46 = v35 & 1;
      v45 = v46 == 0;
      v88 = v46;
      v35 = v37 - 1;
      v47 = v37;
      if ( v45 )
        v47 = v35;
      v48 = &v33[2 * v47];
      v112 = v48;
      result = LdrpResCompareResourceNames(v104, Handle, v92, v89, v95, v48, v20, &v100, v82);
      v82 = result;
      if ( (int)result < 0 )
        return result;
      if ( !v100 )
        break;
      if ( v100 >= 0 )
      {
        v33 = v48 + 2;
        v103 = (char *)(v48 + 2);
        v94 = v37;
        v34 = v113;
LABEL_72:
        v36 = v37;
        LOBYTE(v35) = v37;
        goto LABEL_73;
      }
      v34 = v48 - 2;
      v113 = v48 - 2;
      if ( v88 )
      {
        v94 = v37;
        goto LABEL_72;
      }
      v94 = v37 - 1;
      v36 = v37 - 1;
LABEL_73:
      v20 = v86;
      v21 = v99;
      v13 = v95;
    }
    v63 = v48[1];
    v21 = v99;
    if ( (int)v63 >= 0 )
    {
      v24 = 0LL;
      v98 = 0LL;
      if ( v99 )
      {
        if ( !v102 )
          goto LABEL_185;
        v13 = v95;
        v25 = (unsigned int *)(v95 + v63);
        if ( v95 + v63 < v95 )
          goto LABEL_186;
        v84 = v95 + v63;
      }
      else
      {
        v13 = v95;
        v25 = (unsigned int *)(v95 + v63);
      }
      v90 = v25;
    }
    else
    {
      if ( v99 )
      {
        if ( !v102 )
        {
          LODWORD(v63) = v63 & 0x7FFFFFFF;
          v13 = v95;
          v24 = v95 + v63;
          if ( v95 + v63 >= v95 )
          {
            v84 = v95 + v63;
            goto LABEL_140;
          }
LABEL_186:
          v84 = -1LL;
        }
        goto LABEL_185;
      }
      v13 = v95;
      v24 = v95 + (v63 & 0xFFFFFFFF7FFFFFFFuLL);
LABEL_140:
      v98 = v24;
    }
    v20 = v86;
LABEL_142:
    LOWORD(v38) = v89;
LABEL_43:
    if ( !v102 || v25 )
      goto LABEL_44;
    if ( (v20 & 4) == 0 )
    {
      HIWORD(v50) = HIWORD(v91);
      LOWORD(v50) = v91 + 1;
      v91 = v50;
      v87 = v50;
      if ( (unsigned __int16)v50 < v93 )
      {
        v89 = *(unsigned __int16 *)(v109 + 8LL * (unsigned __int16)v50 + 4);
        v31 = (char *)v107;
        continue;
      }
      if ( !*(_BYTE *)(v109 + 516) )
      {
        v20 |= 0x20u;
        v86 = v20;
        a12 = v20;
        v31 = (char *)v107;
        goto LABEL_35;
      }
LABEL_44:
      v17 = (__int64 *)(v110 + 8);
      v110 = (__int64)v17;
      v114 = (__int64)v17;
      v19 = a8;
      v16 = v104;
      v14 = v92;
      v22 = v96;
      v23 = v97;
      goto LABEL_15;
    }
    break;
  }
LABEL_127:
  v19 = a8;
  v16 = v104;
  v14 = v92;
LABEL_46:
  if ( v25 )
  {
    v40 = v20 & 2;
    if ( v40 )
      goto LABEL_48;
    if ( v21 && ((unsigned __int64)v25 <= v13 || (unsigned __int64)(v25 + 4) > v14 + (v16 & 0xFFFFFFFFFFFFFFFCuLL)) )
    {
      v90 = 0LL;
      goto LABEL_185;
    }
    if ( v115 )
      *v115 = v38;
    v51 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v16 & 1) != 0 || v96 == 34816 )
    {
      v64 = v106;
      if ( *(_WORD *)(v106 + 24) == 267 )
      {
        v65 = *(_DWORD *)(v106 + 136);
      }
      else if ( *(_WORD *)(v106 + 24) == 523 )
      {
        v65 = *(_DWORD *)(v106 + 152);
      }
      else
      {
        v65 = 0;
      }
      if ( !v65 )
      {
        v90 = 0LL;
        v83 = -1073741687;
        goto LABEL_51;
      }
      v66 = v65;
      if ( v21 )
      {
        if ( v65 + v51 < v51 )
          goto LABEL_186;
        v84 = v65 + v51;
        if ( (int)RtlULongLongSub(v84, v13, &v84, v19) < 0 )
          goto LABEL_185;
        v64 = v106;
      }
      v52 = v51 + v66 - v13;
      v116 = v52;
      v67 = LdrpSectionTableFromVirtualAddress((unsigned int)v16 & 0xFFFFFFFC, v14, v64, v111, v65, v85);
      if ( !v67 )
        goto LABEL_211;
      if ( v96 == 34816 )
      {
        result = LdrpResReadFile(Handle);
        if ( (int)result < 0 )
          return result;
        v25 = (unsigned int *)v124;
        v90 = (unsigned int *)v124;
      }
      if ( *v25 > *(_DWORD *)(v67 + 8) )
      {
        v68 = *(unsigned int *)(v67 + 12);
        v69 = LdrpSectionTableFromVirtualAddress((unsigned int)v16 & 0xFFFFFFFC, v92, v106, v111, *v25, v85);
        if ( !v69 )
          goto LABEL_211;
        v70 = *(unsigned int *)(v69 + 12);
        v71 = LdrpSectionTableFromVirtualAddress(
                (unsigned int)v16 & 0xFFFFFFFC,
                v92,
                v106,
                v111,
                *(_DWORD *)(v69 + 12),
                v85);
        v72 = v71;
        v53 = -1073741675;
        if ( v71 )
        {
          if ( v21 )
          {
            v73 = (unsigned int)v70 - (unsigned __int64)*(unsigned int *)(v71 + 12);
            v74 = v73 + v51;
            if ( v73 + v51 < v51 )
            {
              v84 = -1LL;
              v75 = -1073741675;
              v74 = -1LL;
            }
            else
            {
              v84 = v73 + v51;
              v75 = 0;
            }
            if ( v75 < 0 )
              goto LABEL_185;
            if ( v74 + *(unsigned int *)(v72 + 20) < v74 )
              goto LABEL_186;
            v84 = v74 + *(unsigned int *)(v72 + 20);
          }
          v76 = v51 + *(unsigned int *)(v72 + 20) - (unsigned __int64)*(unsigned int *)(v72 + 12) + v70;
        }
        else
        {
          v76 = 0LL;
        }
        if ( v21
          && ((int)RtlULongLongSub(*(unsigned int *)(v72 + 12), v68, &v84, v19) < 0
           || (int)RtlULongLongSub(v84, v76 - v95, &v84, v77) < 0) )
        {
          goto LABEL_185;
        }
        v78 = *(unsigned int *)(v72 + 12) - v68 - v76;
        v13 = v95;
        v52 += v95 + v78;
        v116 = v52;
        goto LABEL_100;
      }
    }
    else
    {
      v52 = 0LL;
      v116 = 0LL;
    }
    v53 = -1073741675;
LABEL_100:
    if ( !v21 )
    {
      v55 = 0LL;
      v57 = v25[1];
      v56 = v92;
LABEL_107:
      v58 = v117;
      if ( v117 )
      {
        if ( v21 )
        {
          v59 = v55 + v51;
          if ( v55 + v51 < v51 )
          {
            v84 = -1LL;
            v60 = -1LL;
          }
          else
          {
            v84 = v55 + v51;
            v53 = 0;
            v60 = v55 + v51;
          }
          if ( v53 < 0 || v60 < v51 || v60 > v56 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
            goto LABEL_185;
          *v117 = v59;
        }
        else
        {
          *v117 = v51 + *v25 - v52;
        }
      }
      if ( v119 )
      {
        if ( v21 && v58 )
        {
          v61 = *v58 + v57;
          if ( v61 < *v58 )
            goto LABEL_186;
          v84 = *v58 + v57;
          if ( v61 > v56 + v51 )
            goto LABEL_185;
        }
        *v119 = v57;
      }
LABEL_121:
      v83 = 0;
      goto LABEL_51;
    }
    if ( (int)RtlULongLongSub(*v25, v52, &v84, v19) < 0 )
      goto LABEL_185;
    v55 = v84;
    if ( v84 >= v13 - v16 )
    {
      v56 = v92;
      if ( v84 <= v92 )
      {
        if ( (_DWORD)v54 )
        {
          v57 = (unsigned int)v54;
          if ( v54 <= v92 && v84 + v54 <= v92 )
            goto LABEL_107;
        }
      }
    }
LABEL_211:
    v90 = 0LL;
    goto LABEL_185;
  }
  v40 = v20 & 2;
LABEL_48:
  if ( v24 && v40 )
  {
    if ( v21 )
    {
      if ( v24 + 24 < v24 )
      {
        v84 = -1LL;
        v98 = 0LL;
        goto LABEL_185;
      }
      v84 = v24 + 24;
      v79 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v24 + 24 > v14 + v79 )
      {
        v98 = 0LL;
        goto LABEL_185;
      }
    }
    else
    {
      v79 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
    }
    if ( v117 )
    {
      if ( v21 && (v24 < v79 || v24 > v79 + v14) )
        goto LABEL_185;
      *v117 = v24;
    }
    goto LABEL_121;
  }
LABEL_49:
  v41 = v19 - v97 - 1;
  if ( v41 )
  {
    v62 = v41 - 1;
    if ( v62 )
    {
      if ( v62 == 1 )
        v83 = -1073741308;
      else
        v83 = -1073741811;
    }
    else
    {
      v83 = -1073741685;
    }
  }
  else
  {
    v83 = -1073741686;
  }
LABEL_51:
  if ( BaseAddress )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    BaseAddress = 0LL;
  }
  if ( RtlGetCurrentServiceSessionId() )
    v42 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v42 = 2147353477LL;
  if ( (*(_BYTE *)v42 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v43 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v43 = 2147353476LL;
    LdrpTraceLoadMUIDll(&v120, *(unsigned __int8 *)v43);
  }
  return v83;
}
