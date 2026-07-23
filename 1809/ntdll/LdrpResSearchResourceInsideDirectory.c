/*
 * XREFs of LdrpResSearchResourceInsideDirectory @ 0x1800385D8
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180037AB4 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800E581C (LdrpResSearchResourceHandle.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x180035BD0 (LdrpSectionTableFromVirtualAddress.c)
 *     LdrpResCompareResourceNames @ 0x180039618 (LdrpResCompareResourceNames.c)
 *     RtlULongLongSub @ 0x180039A50 (RtlULongLongSub.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E2D68 (LdrpTraceLoadMUIDll.c)
 *     LdrpResReadFile @ 0x1800E5768 (LdrpResReadFile.c)
 */

__int64 __fastcall LdrpResSearchResourceInsideDirectory(
        __int64 a1,
        char *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        unsigned __int64 *a10,
        _QWORD *a11,
        int a12,
        _WORD *a13)
{
  unsigned __int64 v13; // r15
  __int64 v16; // rdi
  unsigned int v17; // r13d
  __int64 v18; // rcx
  _QWORD *v19; // r8
  int v20; // edx
  int v21; // r14d
  int v22; // r12d
  int v23; // r11d
  int v24; // ecx
  unsigned __int64 v25; // rbx
  unsigned int *v26; // rsi
  int v27; // eax
  int v28; // ecx
  __int64 v29; // r10
  int v30; // r13d
  unsigned int *v31; // r8
  __int64 v32; // rax
  unsigned int *v33; // r12
  unsigned int *v34; // rax
  int v35; // r15d
  int v36; // r14d
  bool v37; // zf
  __int64 result; // rax
  int v39; // r14d
  int v40; // edx
  unsigned int *Heap; // rbx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  char v46; // r15
  __int64 v47; // rax
  unsigned int *v48; // rdi
  int v49; // edx
  unsigned __int64 v50; // rbx
  unsigned __int64 v51; // rdi
  unsigned __int64 v52; // r13
  int v53; // r10d
  unsigned __int64 v54; // r11
  unsigned __int64 v55; // rdx
  __int64 v56; // rcx
  unsigned __int64 *v57; // r9
  unsigned __int64 v58; // r8
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rdx
  int v61; // edx
  __int64 v62; // rax
  unsigned int v63; // r10d
  __int64 v64; // rdi
  __int64 v65; // r14
  __int64 v66; // r15
  __int64 v67; // rax
  __int64 v68; // r14
  __int64 v69; // rax
  __int64 v70; // r11
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // rcx
  int v73; // eax
  __int64 v74; // r14
  __int64 v75; // rcx
  unsigned __int64 v76; // rdi
  __int64 v77; // rdx
  __int64 v78; // rcx
  unsigned int v79; // [rsp+40h] [rbp-188h]
  unsigned int *BaseAddress; // [rsp+48h] [rbp-180h]
  unsigned __int64 v81; // [rsp+50h] [rbp-178h] BYREF
  char v82; // [rsp+58h] [rbp-170h]
  unsigned __int16 v83; // [rsp+5Ch] [rbp-16Ch]
  int v84; // [rsp+60h] [rbp-168h]
  char v85; // [rsp+64h] [rbp-164h]
  int v86; // [rsp+68h] [rbp-160h]
  int v87; // [rsp+6Ch] [rbp-15Ch]
  unsigned int *v88; // [rsp+70h] [rbp-158h]
  int v89; // [rsp+78h] [rbp-150h]
  __int64 v90; // [rsp+80h] [rbp-148h]
  signed __int16 v91; // [rsp+88h] [rbp-140h]
  unsigned __int64 v92; // [rsp+90h] [rbp-138h]
  __int64 v93; // [rsp+98h] [rbp-130h]
  int v94; // [rsp+A0h] [rbp-128h]
  int v95; // [rsp+A4h] [rbp-124h]
  __int64 v96; // [rsp+A8h] [rbp-120h]
  unsigned __int64 v97; // [rsp+B0h] [rbp-118h]
  int v98; // [rsp+B8h] [rbp-110h]
  unsigned __int64 v99; // [rsp+C0h] [rbp-108h]
  unsigned int *v100; // [rsp+C8h] [rbp-100h]
  HANDLE Handle; // [rsp+D0h] [rbp-F8h]
  __int64 v102; // [rsp+D8h] [rbp-F0h]
  unsigned int *v103; // [rsp+E0h] [rbp-E8h]
  __int64 v104; // [rsp+E8h] [rbp-E0h]
  int v105; // [rsp+F0h] [rbp-D8h]
  __int64 v106; // [rsp+F8h] [rbp-D0h]
  __int64 v107; // [rsp+100h] [rbp-C8h]
  unsigned int *v108; // [rsp+108h] [rbp-C0h]
  unsigned int *v109; // [rsp+110h] [rbp-B8h]
  _QWORD *v110; // [rsp+118h] [rbp-B0h]
  _WORD *v111; // [rsp+120h] [rbp-A8h]
  unsigned __int64 v112; // [rsp+128h] [rbp-A0h]
  unsigned __int64 *v113; // [rsp+130h] [rbp-98h]
  _QWORD v114[2]; // [rsp+138h] [rbp-90h] BYREF
  _QWORD *v115; // [rsp+148h] [rbp-80h]
  int v116; // [rsp+150h] [rbp-78h] BYREF
  const wchar_t *v117; // [rsp+158h] [rbp-70h]
  __int64 v118; // [rsp+160h] [rbp-68h]
  __int64 v119; // [rsp+168h] [rbp-60h]
  _BYTE v120[16]; // [rsp+170h] [rbp-58h] BYREF

  v13 = a4;
  v92 = a4;
  v93 = a3;
  Handle = a2;
  v16 = a1;
  v96 = a1;
  v102 = a5;
  v107 = a6;
  v104 = a7;
  v106 = a9;
  v113 = a10;
  v115 = a11;
  v111 = a13;
  v118 = 0LL;
  v119 = 0LL;
  v91 = 0;
  LOWORD(v17) = 0;
  v90 = 0LL;
  BaseAddress = 0LL;
  v89 = 0;
  v83 = 0;
  LODWORD(v114[0]) = 5636180;
  v114[1] = L"LdrpResSearchResourceInsideDirectory Enter";
  v116 = 5505106;
  v117 = L"LdrpResSearchResourceInsideDirectory Exit";
  if ( RtlGetCurrentServiceSessionId() )
  {
    v18 = (__int64)NtCurrentPeb()->SharedData + 555;
    v89 = v83;
    LOWORD(v17) = v90;
  }
  else
  {
    v18 = 2147353477LL;
  }
  if ( (*(_BYTE *)v18 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
    {
      v78 = (__int64)NtCurrentPeb()->SharedData + 554;
      v89 = v83;
      LOWORD(v17) = v90;
    }
    else
    {
      v78 = 2147353476LL;
    }
    LdrpTraceLoadMUIDll(v114, *(unsigned __int8 *)v78);
  }
  if ( !v13 )
    return 3221225485LL;
  if ( !v102 )
    return 3221225485LL;
  v19 = (_QWORD *)v104;
  if ( !v104 )
    return 3221225485LL;
  v20 = a8;
  if ( (unsigned int)(a8 - 1) > 3 )
    return 3221225485LL;
  LOBYTE(v21) = a12;
  v84 = a12;
  if ( (a12 & 0x8000) != 0 && ((unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL || !a6) )
    return 3221225485LL;
  v22 = a12 & 0x1000;
  v87 = v22;
  v82 = v22 != 0;
  v23 = a12 & 0x8800;
  v94 = v23;
  if ( (a12 & 0x1000) != 0 && !a3 )
    return 3221225485LL;
  if ( v23 != 34816 )
  {
    if ( v16 )
      goto LABEL_13;
    return 3221225485LL;
  }
  if ( !a2 )
    return 3221225485LL;
LABEL_13:
  v110 = (_QWORD *)v104;
  v24 = a8;
  v95 = a8;
  v25 = v13;
  v26 = 0LL;
  v88 = 0LL;
  v99 = 0LL;
  if ( v111 )
    *v111 = 0;
LABEL_15:
  if ( !v25 )
    goto LABEL_48;
  v27 = v24;
  v28 = v24 - 1;
  v95 = v28;
  v105 = v28;
  if ( !v27 )
    goto LABEL_48;
  v90 = *v19;
  if ( !v28 && v20 == 3 )
  {
    v99 = v25;
    if ( !v106 )
      goto LABEL_178;
    v91 = *(_WORD *)v106;
    v89 = 0;
    v83 = 0;
    if ( (~(_BYTE)v21 & 4) != 0 )
      v90 = *(unsigned __int16 *)(v106 + 4);
  }
  if ( v23 == 34816 )
  {
    result = LdrpResReadFile(Handle);
    if ( (int)result < 0 )
      return result;
    v20 = a8;
    v23 = v94;
    if ( v94 == 34816 )
      goto LABEL_175;
  }
  if ( !v22 )
  {
LABEL_175:
    v29 = v93;
  }
  else
  {
    if ( v25 + 24 < v25 )
      goto LABEL_184;
    v81 = v25 + 24;
    v29 = v93;
    if ( v25 + 24 > v93 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
      goto LABEL_183;
  }
  v30 = WORD2(v119);
  if ( v23 != 34816 )
    v30 = *(unsigned __int16 *)(v25 + 12);
  v86 = v30;
  if ( v30 && v22 )
  {
    v45 = 8LL * (unsigned int)v30;
    v103 = (unsigned int *)v45;
    if ( v45 + v25 + 16 < v25 )
      goto LABEL_184;
    v81 = v45 + v25 + 16;
    if ( v25 + v45 + 16 > v29 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
      goto LABEL_183;
  }
  v31 = (unsigned int *)(v25 + 16);
  v103 = (unsigned int *)(v25 + 16);
  v100 = (unsigned int *)(v25 + 16);
  if ( (v90 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( v30 )
    {
      if ( v22 )
      {
        if ( (unsigned int *)((char *)v31 + v30) < v31 )
          goto LABEL_184;
        v81 = (unsigned __int64)v31 + v30;
      }
      v31 += 2 * v30;
      v103 = v31;
      v100 = v31;
    }
    v30 = HIWORD(v119);
    if ( v23 != 34816 )
      v30 = *(unsigned __int16 *)(v25 + 14);
    v86 = v30;
    if ( v22 )
    {
      v32 = 2LL * (unsigned int)v30;
      v114[0] = v32 * 4;
      if ( &v31[v32] < v31 )
        goto LABEL_184;
      v81 = (unsigned __int64)&v31[v32];
      if ( (unsigned __int64)&v31[v32] > v29 + (v16 & 0xFFFFFFFFFFFFFFFCuLL) )
        goto LABEL_183;
    }
  }
  if ( !v30 )
  {
    v97 = 0LL;
    goto LABEL_50;
  }
  if ( v23 != 34816 )
    goto LABEL_34;
  if ( BaseAddress )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    v30 = v86;
  }
  Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v30);
  BaseAddress = Heap;
  if ( !Heap )
  {
    v79 = -1073741801;
    goto LABEL_53;
  }
  v30 = v86;
  result = LdrpResReadFile(Handle);
  if ( (int)result >= 0 )
  {
    v31 = Heap;
    v103 = Heap;
    v100 = Heap;
    LOBYTE(v21) = a12;
    v84 = a12;
    v89 = v83;
    v104 = (__int64)v110;
    v95 = v105;
    v26 = v88;
LABEL_34:
    if ( v99 && (v21 & 0x20) != 0 )
    {
      v25 = 0LL;
      v97 = 0LL;
      v26 = (unsigned int *)(v13 + v31[1]);
      if ( v22 )
      {
        if ( (unsigned __int64)v26 < v13 )
          goto LABEL_184;
        v81 = v13 + v31[1];
      }
      v88 = v26;
      v17 = *v31;
      v90 = *v31;
      v20 = a8;
      goto LABEL_48;
    }
LABEL_35:
    v25 = 0LL;
    v97 = 0LL;
    v33 = v31;
    v100 = v31;
    v34 = &v31[2 * v30 - 2];
    v109 = v34;
    v86 = v30;
    v35 = v30;
    while ( 1 )
    {
      if ( v33 > v34 )
      {
        v13 = v92;
        v16 = v96;
        v21 = v84;
        goto LABEL_41;
      }
      v36 = v35 >> 1;
      if ( !(v35 >> 1) )
      {
        v21 = v84;
        v16 = v96;
        v37 = v35 == 0;
        v13 = v92;
        if ( !v37 )
        {
          result = LdrpResCompareResourceNames(v96, Handle, v93);
          if ( (int)result < 0 )
            return result;
          if ( !v98 )
          {
            v44 = v33[1];
            v22 = v87;
            if ( (int)v44 >= 0 )
            {
              if ( v87 )
              {
                if ( !v99 )
                  goto LABEL_183;
                v26 = (unsigned int *)(v92 + v44);
                if ( v92 + v44 < v92 )
                  goto LABEL_184;
                v81 = v92 + v44;
              }
              else
              {
                v26 = (unsigned int *)(v92 + v44);
              }
              v88 = v26;
            }
            else
            {
              if ( v87 )
              {
                if ( v99 )
                  goto LABEL_183;
                LODWORD(v44) = v44 & 0x7FFFFFFF;
                v25 = v92 + v44;
                if ( v92 + v44 < v92 )
                  goto LABEL_184;
                v81 = v92 + v44;
              }
              else
              {
                v25 = v92 + (v44 & 0xFFFFFFFF7FFFFFFFuLL);
              }
              v97 = v25;
            }
            goto LABEL_42;
          }
        }
LABEL_41:
        v22 = v87;
        goto LABEL_42;
      }
      v108 = v33;
      v46 = v35 & 1;
      v37 = v46 == 0;
      v85 = v46;
      v35 = v36 - 1;
      v47 = v36;
      if ( v37 )
        v47 = v35;
      v48 = &v33[2 * v47];
      v108 = v48;
      result = LdrpResCompareResourceNames(v96, Handle, v93);
      if ( (int)result < 0 )
        return result;
      if ( !v98 )
      {
        v62 = v48[1];
        v22 = v87;
        if ( (int)v62 >= 0 )
        {
          v25 = 0LL;
          v97 = 0LL;
          if ( v87 )
          {
            if ( !v99 )
              goto LABEL_183;
            v13 = v92;
            v26 = (unsigned int *)(v92 + v62);
            if ( v92 + v62 < v92 )
              goto LABEL_184;
            v81 = v92 + v62;
          }
          else
          {
            v13 = v92;
            v26 = (unsigned int *)(v92 + v62);
          }
          v88 = v26;
        }
        else
        {
          if ( v87 )
          {
            if ( !v99 )
            {
              LODWORD(v62) = v62 & 0x7FFFFFFF;
              v13 = v92;
              v25 = v92 + v62;
              if ( v92 + v62 >= v92 )
              {
                v81 = v92 + v62;
                goto LABEL_136;
              }
LABEL_184:
              v81 = -1LL;
            }
LABEL_183:
            v79 = -1073741701;
LABEL_52:
            Heap = BaseAddress;
LABEL_53:
            if ( Heap )
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
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
              LdrpTraceLoadMUIDll(&v116, *(unsigned __int8 *)v43);
            }
            return v79;
          }
          v13 = v92;
          v25 = v92 + (v62 & 0xFFFFFFFF7FFFFFFFuLL);
LABEL_136:
          v97 = v25;
        }
        v16 = v96;
        v21 = v84;
LABEL_42:
        if ( !v99 || v26 )
          goto LABEL_43;
        if ( (v21 & 4) == 0 )
        {
          HIWORD(v49) = HIWORD(v89);
          LOWORD(v49) = v89 + 1;
          v89 = v49;
          v83 = v49;
          if ( (unsigned __int16)v49 < v91 )
          {
            v90 = *(unsigned __int16 *)(v106 + 8LL * (unsigned __int16)v49 + 4);
            v31 = v103;
            goto LABEL_35;
          }
          if ( !*(_BYTE *)(v106 + 516) )
          {
            v21 |= 0x20u;
            v84 = v21;
            a12 = v21;
            v31 = v103;
            goto LABEL_34;
          }
LABEL_43:
          v19 = (_QWORD *)(v104 + 8);
          v104 = (__int64)v19;
          v110 = v19;
          v20 = a8;
          LOWORD(v17) = v90;
          v23 = v94;
          v24 = v95;
          goto LABEL_15;
        }
        v20 = a8;
        LOWORD(v17) = v90;
LABEL_48:
        v39 = v21 & 2;
        if ( v26 && !v39 )
        {
          if ( v22
            && ((unsigned __int64)v26 <= v13 || (unsigned __int64)(v26 + 4) > v93 + (v16 & 0xFFFFFFFFFFFFFFFCuLL)) )
          {
            v88 = 0LL;
            goto LABEL_183;
          }
          if ( v111 )
            *v111 = v17;
          v50 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (v16 & 1) == 0 && v94 != 34816 )
          {
            v51 = 0LL;
            v112 = 0LL;
            v52 = v93;
            goto LABEL_98;
          }
          if ( *(_WORD *)(v102 + 24) == 267 )
          {
            v63 = *(_DWORD *)(v102 + 136);
          }
          else if ( *(_WORD *)(v102 + 24) == 523 )
          {
            v63 = *(_DWORD *)(v102 + 152);
          }
          else
          {
            v63 = 0;
          }
          if ( !v63 )
          {
            v88 = 0LL;
            v79 = -1073741687;
            goto LABEL_52;
          }
          v64 = v63;
          if ( v22 )
          {
            if ( v63 + v50 < v50 )
              goto LABEL_184;
            v81 = v63 + v50;
            if ( (int)RtlULongLongSub(v81, v13, &v81) < 0 )
              goto LABEL_183;
          }
          v51 = v50 + v64 - v13;
          v112 = v51;
          v52 = v93;
          v65 = LdrpSectionTableFromVirtualAddress(v50, v93, v102, v107, v63, v82);
          if ( !v65 )
            goto LABEL_208;
          if ( v94 == 34816 )
          {
            result = LdrpResReadFile(Handle);
            if ( (int)result < 0 )
              return result;
            v26 = (unsigned int *)v120;
            v88 = (unsigned int *)v120;
          }
          if ( *v26 <= *(_DWORD *)(v65 + 8) )
          {
LABEL_98:
            v53 = -1073741675;
            goto LABEL_99;
          }
          v66 = *(unsigned int *)(v65 + 12);
          v67 = LdrpSectionTableFromVirtualAddress(v50, v52, v102, v107, *v26, v82);
          if ( !v67 )
            goto LABEL_208;
          v68 = *(unsigned int *)(v67 + 12);
          v69 = LdrpSectionTableFromVirtualAddress(v50, v52, v102, v107, *(_DWORD *)(v67 + 12), v82);
          v70 = v69;
          v53 = -1073741675;
          if ( v69 )
          {
            if ( v22 )
            {
              v71 = (unsigned int)v68 - (unsigned __int64)*(unsigned int *)(v69 + 12);
              v72 = v71 + v50;
              if ( v71 + v50 < v50 )
              {
                v81 = -1LL;
                v73 = -1073741675;
                v72 = -1LL;
              }
              else
              {
                v81 = v71 + v50;
                v73 = 0;
              }
              if ( v73 < 0 )
                goto LABEL_183;
              if ( v72 + *(unsigned int *)(v70 + 20) < v72 )
                goto LABEL_184;
              v81 = v72 + *(unsigned int *)(v70 + 20);
            }
            v74 = v50 + *(unsigned int *)(v70 + 20) - (unsigned __int64)*(unsigned int *)(v70 + 12) + v68;
          }
          else
          {
            v74 = 0LL;
          }
          if ( v22
            && ((int)RtlULongLongSub(*(unsigned int *)(v70 + 12), v66, &v81) < 0
             || (int)RtlULongLongSub(v81, v74 - v92, &v81) < 0) )
          {
            goto LABEL_183;
          }
          v75 = *(unsigned int *)(v70 + 12) - v66 - v74;
          v13 = v92;
          v51 += v92 + v75;
          v112 = v51;
LABEL_99:
          if ( v22 )
          {
            if ( (int)RtlULongLongSub(*v26, v51, &v81) < 0 )
              goto LABEL_183;
            v55 = v81;
            if ( v81 >= v13 - v96 && v81 <= v52 )
            {
              if ( (_DWORD)v54 )
              {
                v56 = (unsigned int)v54;
                if ( v54 <= v52 && v81 + v54 <= v52 )
                  goto LABEL_106;
              }
            }
LABEL_208:
            v88 = 0LL;
            goto LABEL_183;
          }
          v55 = 0LL;
          v56 = v26[1];
LABEL_106:
          v57 = v113;
          if ( v113 )
          {
            if ( v22 )
            {
              v58 = v55 + v50;
              if ( v55 + v50 < v50 )
              {
                v81 = -1LL;
                v59 = -1LL;
              }
              else
              {
                v81 = v55 + v50;
                v53 = 0;
                v59 = v55 + v50;
              }
              if ( v53 < 0 || v59 < v50 || v59 > v52 + (v50 & 0xFFFFFFFFFFFFFFFCuLL) )
                goto LABEL_183;
              *v113 = v58;
            }
            else
            {
              *v113 = v50 + *v26 - v51;
            }
          }
          if ( v115 )
          {
            if ( v22 && v57 )
            {
              v60 = *v57 + v56;
              if ( v60 < *v57 )
                goto LABEL_184;
              v81 = *v57 + v56;
              if ( v60 > v50 + v52 )
                goto LABEL_183;
            }
            *v115 = v56;
          }
LABEL_120:
          v79 = 0;
          goto LABEL_52;
        }
        if ( v25 && v39 )
        {
          if ( v22 )
          {
            if ( v25 + 24 < v25 )
            {
              v81 = -1LL;
              v97 = 0LL;
              goto LABEL_183;
            }
            v81 = v25 + 24;
            v76 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
            v77 = v93;
            if ( v25 + 24 > v93 + v76 )
            {
              v97 = 0LL;
              goto LABEL_183;
            }
          }
          else
          {
            v76 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
            v77 = v93;
          }
          if ( v113 )
          {
            if ( v22 && (v25 < v76 || v25 > v76 + v77) )
              goto LABEL_183;
            *v113 = v25;
          }
          goto LABEL_120;
        }
LABEL_50:
        v40 = v20 - v95 - 1;
        if ( !v40 )
        {
          v79 = -1073741686;
          goto LABEL_52;
        }
        v61 = v40 - 1;
        if ( !v61 )
        {
          v79 = -1073741685;
          goto LABEL_52;
        }
        if ( v61 == 1 )
        {
          v79 = -1073741308;
          goto LABEL_52;
        }
LABEL_178:
        v79 = -1073741811;
        goto LABEL_52;
      }
      if ( v98 >= 0 )
        break;
      v34 = v48 - 2;
      v109 = v48 - 2;
      if ( v85 )
      {
        v86 = v36;
LABEL_80:
        v35 = v36;
      }
      else
      {
        v86 = v36 - 1;
      }
    }
    v33 = v48 + 2;
    v100 = v48 + 2;
    v86 = v36;
    v34 = v109;
    goto LABEL_80;
  }
  return result;
}
