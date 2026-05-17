/*
 * XREFs of sub_18007B540 @ 0x18007B540
 * Callers:
 *     RtlSetSecurityObject @ 0x18007B510 (RtlSetSecurityObject.c)
 *     RtlSetSecurityObjectEx @ 0x180089430 (RtlSetSecurityObjectEx.c)
 * Callees:
 *     RtlInitializeSid @ 0x18000BAC0 (RtlInitializeSid.c)
 *     sub_18000E718 @ 0x18000E718 (sub_18000E718.c)
 *     sub_18000F3AC @ 0x18000F3AC (sub_18000F3AC.c)
 *     sub_18000F5AC @ 0x18000F5AC (sub_18000F5AC.c)
 *     sub_18000FB00 @ 0x18000FB00 (sub_18000FB00.c)
 *     RtlFindAceByType @ 0x1800126F0 (RtlFindAceByType.c)
 *     RtlValidSid @ 0x180014E00 (RtlValidSid.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_180066D68 @ 0x180066D68 (sub_180066D68.c)
 *     sub_180088788 @ 0x180088788 (sub_180088788.c)
 *     sub_18008B9D4 @ 0x18008B9D4 (sub_18008B9D4.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x18009CB00 (ZwQueryInformationToken.c)
 *     ZwOpenProcessToken @ 0x18009EB30 (ZwOpenProcessToken.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800E6098 @ 0x1800E6098 (sub_1800E6098.c)
 *     sub_1800E65E8 @ 0x1800E65E8 (sub_1800E65E8.c)
 *     sub_1800E7704 @ 0x1800E7704 (sub_1800E7704.c)
 */

__int64 __fastcall sub_18007B540(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 *a4,
        char a5,
        __int64 a6,
        __int64 a7,
        size_t a8)
{
  size_t v8; // rbx
  __int16 v11; // dx
  int v12; // r15d
  unsigned __int8 *v13; // rdi
  __int64 v14; // rcx
  unsigned __int16 *v15; // r14
  __int16 v16; // r11
  void *ProcessHeap; // r13
  int v18; // r8d
  int v19; // r9d
  _BYTE *v20; // rax
  __int64 v21; // rax
  _BYTE *v22; // rcx
  unsigned __int8 *v23; // rdi
  __int16 v24; // cx
  unsigned __int16 *v25; // rsi
  int v26; // ecx
  int v27; // r8d
  unsigned int v28; // ebx
  unsigned int v29; // r12d
  __int64 v30; // rax
  __int64 v31; // rdi
  char *v32; // r14
  int v33; // eax
  __int16 v34; // ax
  unsigned __int16 *v35; // r15
  __int64 v36; // rcx
  char v37; // bl
  __int64 *v38; // r15
  __int64 v39; // rcx
  __int64 v40; // rbx
  int v41; // eax
  char *v42; // r14
  int v43; // ebx
  unsigned __int8 *v44; // r14
  __int64 v46; // r8
  __int64 v47; // rax
  __int16 v48; // dx
  __int64 v49; // rcx
  __int64 v50; // rdi
  __int64 v51; // r14
  int v52; // r14d
  unsigned int v53; // edx
  unsigned __int8 *v54; // rax
  unsigned __int8 *v55; // r14
  unsigned __int8 *v56; // rdx
  int v57; // esi
  unsigned int v58; // eax
  int v59; // eax
  unsigned int v60; // eax
  void *v61; // rax
  void *v62; // rax
  unsigned __int8 *v63; // r14
  unsigned __int8 *v64; // rax
  unsigned __int8 *v65; // rdi
  __int64 v66; // r8
  size_t v67; // rcx
  unsigned __int8 *AceByType; // rax
  __int64 v69; // r8
  unsigned __int8 *v70; // rbx
  __int64 v71; // r8
  __int64 v72; // rdx
  unsigned int v73; // edx
  unsigned int v74; // edx
  unsigned int v75; // edx
  unsigned int v76; // edx
  __int16 v77; // ax
  _QWORD *Heap; // rdi
  __int64 v79; // r8
  int v80; // edx
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rax
  char v84; // cl
  unsigned __int8 *v85; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v86; // [rsp+58h] [rbp-A8h]
  char v87; // [rsp+59h] [rbp-A7h]
  char v88; // [rsp+5Ah] [rbp-A6h]
  char v89; // [rsp+5Bh] [rbp-A5h]
  char v90; // [rsp+5Ch] [rbp-A4h]
  char v91; // [rsp+5Dh] [rbp-A3h]
  char v92; // [rsp+5Eh] [rbp-A2h]
  char v93; // [rsp+5Fh] [rbp-A1h]
  char v94; // [rsp+60h] [rbp-A0h]
  char v95; // [rsp+61h] [rbp-9Fh]
  char v96[2]; // [rsp+62h] [rbp-9Eh] BYREF
  int v97; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v98; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int8 *v99; // [rsp+70h] [rbp-90h] BYREF
  size_t v100; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int8 *v101; // [rsp+80h] [rbp-80h] BYREF
  char v102; // [rsp+88h] [rbp-78h]
  bool v103; // [rsp+89h] [rbp-77h]
  void *v104; // [rsp+90h] [rbp-70h]
  void *v105; // [rsp+98h] [rbp-68h]
  unsigned __int8 *v106; // [rsp+A0h] [rbp-60h]
  __int64 *v107; // [rsp+A8h] [rbp-58h]
  int v108; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v109; // [rsp+B4h] [rbp-4Ch]
  __int16 v110; // [rsp+B8h] [rbp-48h]
  int v111; // [rsp+BCh] [rbp-44h]
  int v112; // [rsp+C0h] [rbp-40h]
  size_t v113; // [rsp+C8h] [rbp-38h] BYREF
  size_t Size; // [rsp+D0h] [rbp-30h]
  void *Src; // [rsp+D8h] [rbp-28h]
  unsigned int v116; // [rsp+E0h] [rbp-20h]
  unsigned int v117; // [rsp+E4h] [rbp-1Ch] BYREF
  unsigned __int8 *v118; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int8 *v119; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int8 *v120; // [rsp+F8h] [rbp-8h] BYREF
  char v121[8]; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int16 *v122; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int16 *v123; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int16 *v124; // [rsp+118h] [rbp+18h] BYREF
  __int64 *v125; // [rsp+120h] [rbp+20h] BYREF
  __int64 v126; // [rsp+130h] [rbp+30h]
  _BYTE v127[24]; // [rsp+138h] [rbp+38h] BYREF
  int v128; // [rsp+150h] [rbp+50h]
  int v129; // [rsp+154h] [rbp+54h]
  char v130[8]; // [rsp+170h] [rbp+70h] BYREF
  int v131; // [rsp+178h] [rbp+78h]

  v8 = a8;
  v126 = a3;
  v107 = a4;
  Size = a8;
  v11 = *(_WORD *)(a3 + 2);
  v12 = 0x8000;
  v88 = 0;
  v87 = 0;
  v96[0] = 0;
  v89 = 0;
  v95 = 0;
  v90 = 0;
  v91 = 0;
  v92 = 0;
  v93 = 0;
  v94 = 0;
  v123 = 0LL;
  Src = 0LL;
  v122 = 0LL;
  v99 = 0LL;
  v118 = 0LL;
  v101 = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  v86 = 0;
  LOBYTE(v116) = 0;
  LOBYTE(v111) = 0;
  v124 = 0LL;
  if ( (v11 & 0x10) == 0 )
    goto LABEL_2;
  if ( v11 >= 0 )
  {
    v13 = *(unsigned __int8 **)(a3 + 24);
  }
  else
  {
    if ( !*(_DWORD *)(a3 + 12) )
    {
LABEL_2:
      v13 = 0LL;
      goto LABEL_3;
    }
    v13 = (unsigned __int8 *)(a3 + *(unsigned int *)(a3 + 12));
  }
LABEL_3:
  v14 = *a4;
  v106 = v13;
  if ( (*(_BYTE *)(v14 + 2) & 0x10) == 0 )
  {
LABEL_116:
    v15 = 0LL;
    goto LABEL_7;
  }
  if ( *(__int16 *)(v14 + 2) < 0 )
  {
    if ( *(_DWORD *)(v14 + 12) )
    {
      v15 = (unsigned __int16 *)(v14 + *(unsigned int *)(v14 + 12));
      goto LABEL_7;
    }
    goto LABEL_116;
  }
  v15 = *(unsigned __int16 **)(v14 + 24);
LABEL_7:
  v113 = 0LL;
  v16 = *(_WORD *)(v14 + 2);
  v85 = (unsigned __int8 *)v15;
  v125 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( v16 >= 0 )
    return (unsigned int)-1073741593;
  v110 = v11 & 0x80;
  v102 = v110 != 0;
  v18 = a2 & 0x80;
  v19 = a2 & 0x100;
  v103 = (v11 & 0x40) != 0;
  if ( (a2 & 0x10000) != 0 )
  {
    v57 = a2 | 0x1FF;
    v58 = v57 & 0xFFFFFF7F;
    if ( v18 )
      v58 = v57;
    a2 = v58 & 0xFFFFFEFF;
    if ( v19 )
      a2 = v58;
    if ( !v15 && !v13 )
    {
      a2 &= 0xFFFFFE07;
      if ( (v11 & 0x10) != 0 )
      {
        a2 |= 8u;
      }
      else
      {
        v59 = (unsigned __int8)v111;
        if ( (v11 & 0x800) != 0 )
          v59 = 1;
        v111 = v59;
      }
    }
  }
  if ( (a2 & 1) == 0 )
  {
    if ( !*(_DWORD *)(v14 + 4) )
      return (unsigned int)-1073741734;
    v20 = (_BYTE *)(v14 + *(unsigned int *)(v14 + 4));
    v104 = v20;
    if ( !v20 )
      return (unsigned int)-1073741734;
    goto LABEL_12;
  }
  v60 = a2 >> 2;
  LOBYTE(v60) = (a2 & 4) == 0;
  v116 = v60;
  if ( v11 >= 0 )
  {
    v61 = *(void **)(a3 + 8);
  }
  else
  {
    if ( !*(_DWORD *)(a3 + 4) )
    {
      v104 = 0LL;
      goto LABEL_136;
    }
    v61 = (void *)(a3 + *(unsigned int *)(a3 + 4));
  }
  v104 = v61;
LABEL_136:
  v87 = 1;
  if ( (a5 & 8) == 0 )
  {
    if ( !a8 )
      return (unsigned int)-1073741734;
    LODWORD(v100) = ZwQueryInformationToken(a8, 10LL, v127, 56LL, v121);
    v43 = v100;
    if ( (v100 & 0x80000000) != 0LL )
      return (unsigned int)v43;
    if ( v128 == 2 && v129 < 1 )
      return (unsigned int)-1073741659;
    v8 = Size;
    if ( !sub_180066D68(Size, (__int64)v104, v102, (int *)&v100) )
      return (unsigned int)-1073741734;
  }
  v20 = v104;
LABEL_12:
  if ( !RtlValidSid(v20) )
    return (unsigned int)-1073741734;
  if ( (a2 & 2) != 0 )
  {
    if ( *(__int16 *)(a3 + 2) >= 0 )
    {
      v62 = *(void **)(a3 + 16);
    }
    else
    {
      if ( !*(_DWORD *)(a3 + 8) )
      {
        v105 = 0LL;
LABEL_149:
        v22 = v105;
        v88 = 1;
        goto LABEL_18;
      }
      v62 = (void *)(a3 + *(unsigned int *)(a3 + 8));
    }
    v105 = v62;
    goto LABEL_149;
  }
  v21 = *v107;
  if ( *(__int16 *)(*v107 + 2) >= 0 )
  {
    v22 = *(_BYTE **)(v21 + 16);
  }
  else
  {
    if ( !*(_DWORD *)(v21 + 8) )
    {
LABEL_253:
      v43 = -1073741733;
      goto LABEL_55;
    }
    v22 = (_BYTE *)(v21 + *(unsigned int *)(v21 + 8));
  }
  v105 = v22;
LABEL_18:
  if ( !v22 )
    goto LABEL_253;
  if ( !RtlValidSid(v22) )
    return (unsigned int)-1073741733;
  if ( (a2 & 0x1F8) == 0 )
  {
    v23 = v101;
    Src = v15;
    goto LABEL_22;
  }
  v112 = a2 & 0x10;
  if ( (a2 & 0x10) == 0 )
  {
LABEL_83:
    LODWORD(v100) = sub_18000F3AC(v8, &v125);
    v43 = v100;
    if ( (v100 & 0x80000000) != 0LL )
      return (unsigned int)v43;
    v50 = (__int64)v125;
    LODWORD(Size) = a2 & 0x80;
    v51 = *v125;
    if ( (a2 & 0x80) != 0 )
    {
      if ( !v51 )
      {
LABEL_175:
        v43 = -1073741790;
        goto LABEL_177;
      }
      v98 = 0;
      do
      {
        AceByType = RtlFindAceByType((__int64)v106, 20, &v98);
        v70 = AceByType;
        if ( AceByType )
        {
          if ( (*((_DWORD *)AceByType + 1) & 0xFF000000) != 0 )
          {
            v43 = -1073740730;
            goto LABEL_177;
          }
          if ( !(unsigned __int8)sub_18008B9D4(v51, AceByType + 8, v69, &v100) )
            goto LABEL_175;
        }
        ++v98;
      }
      while ( v70 );
    }
    LODWORD(v100) = a2 & 0x100;
    if ( (a2 & 0x100) == 0 )
      goto LABEL_86;
    v43 = sub_18000FB00((__int64)v106, v51);
    if ( v43 >= 0 )
    {
      if ( (a5 & 2) != 0 )
      {
LABEL_86:
        v52 = (int)v85;
        goto LABEL_87;
      }
      v72 = v51;
      v52 = (int)v85;
      v43 = sub_18000FB00((__int64)v85, v72);
      if ( v43 >= 0 )
      {
LABEL_87:
        RtlFreeHeap((__int64)ProcessHeap, 0, v50);
        if ( (a2 & 8) != 0 )
        {
          v53 = *(unsigned __int16 *)(a3 + 2);
          if ( (a5 & 2) != 0 )
          {
            v43 = sub_180088788(
                    v52,
                    (*(_WORD *)(*v107 + 2) & 0x2800 | (*(unsigned __int16 *)(*v107 + 2) >> 1) & 0x18u) >> 1,
                    (_DWORD)v106,
                    (v53 & 0x2800 | (v53 >> 1) & 0x18) >> 1,
                    (__int64)v104,
                    (__int64)v105,
                    a7,
                    2,
                    (__int64)&v99,
                    (__int64)&v97);
            if ( v43 < 0 )
            {
              v44 = v99;
              v23 = v101;
              goto LABEL_57;
            }
            v90 = 1;
            v12 = 2 * (v97 & 0x1400 | (2 * (v97 & 8 | 0x2004)));
          }
          else
          {
            v99 = v106;
            v12 = v53 & 0x2000 | 0x8010;
            if ( (v53 & 0xA00) == 0xA00 )
              v12 = v53 & 0x2000 | 0x8810;
          }
          v54 = v85;
        }
        else
        {
          v54 = v85;
          v99 = v85;
        }
        v55 = v106;
        if ( (a2 & 0x20) != 0 )
        {
          v73 = *(unsigned __int16 *)(a3 + 2);
          if ( (a5 & 2) != 0 )
          {
            v43 = sub_180088788(
                    (_DWORD)v85,
                    (*(_WORD *)(*v107 + 2) & 0x800 | (*(unsigned __int16 *)(*v107 + 2) >> 1) & 0x18u) >> 1,
                    (_DWORD)v106,
                    (v73 & 0x800 | (v73 >> 1) & 0x18) >> 1,
                    (__int64)v104,
                    (__int64)v105,
                    a7,
                    2,
                    (__int64)&v101,
                    (__int64)&v97);
            if ( v43 < 0 )
              goto LABEL_192;
            v91 = 1;
            v12 |= 2 * (v97 & 0x1400 | (2 * (v97 & 8 | 4)));
          }
          else
          {
            v101 = v106;
            v12 |= v73 & 0x2000 | 0x10;
            if ( (v73 & 0xA00) == 0xA00 )
              v12 |= 0x800u;
          }
          v54 = v85;
        }
        else
        {
          v101 = v54;
        }
        if ( (a2 & 0x40) != 0 )
        {
          v74 = *(unsigned __int16 *)(a3 + 2);
          if ( (a5 & 2) != 0 )
          {
            v43 = sub_180088788(
                    (_DWORD)v85,
                    (*(_WORD *)(*v107 + 2) & 0x800 | (*(unsigned __int16 *)(*v107 + 2) >> 1) & 0x18u) >> 1,
                    (_DWORD)v55,
                    (v74 & 0x800 | (v74 >> 1) & 0x18) >> 1,
                    (__int64)v104,
                    (__int64)v105,
                    a7,
                    2,
                    (__int64)&v118,
                    (__int64)&v97);
            if ( v43 < 0 )
              goto LABEL_192;
            v92 = 1;
            v12 |= 2 * (v97 & 0x1400 | (2 * (v97 & 8 | 4)));
          }
          else
          {
            v118 = v55;
            v12 |= v74 & 0x2000 | 0x10;
            if ( (v74 & 0xA00) == 0xA00 )
              v12 |= 0x800u;
          }
          v54 = v85;
        }
        else
        {
          v118 = v54;
        }
        if ( (_DWORD)Size )
        {
          v75 = *(unsigned __int16 *)(a3 + 2);
          if ( (a5 & 2) != 0 )
          {
            v43 = sub_180088788(
                    (_DWORD)v85,
                    (*(_WORD *)(*v107 + 2) & 0x800 | (*(unsigned __int16 *)(*v107 + 2) >> 1) & 0x18u) >> 1,
                    (_DWORD)v55,
                    (v75 & 0x800 | (v75 >> 1) & 0x18) >> 1,
                    (__int64)v104,
                    (__int64)v105,
                    a7,
                    2,
                    (__int64)&v119,
                    (__int64)&v97);
            if ( v43 < 0 )
              goto LABEL_192;
            v93 = 1;
            v12 |= 2 * (v97 & 0x1400 | (2 * (v97 & 8 | 4)));
          }
          else
          {
            v119 = v55;
            v12 |= v75 & 0x2000 | 0x10;
            if ( (v75 & 0xA00) == 0xA00 )
              v12 |= 0x800u;
          }
          v54 = v85;
        }
        else
        {
          v119 = v54;
        }
        if ( !(_DWORD)v100 )
        {
          v120 = v54;
LABEL_100:
          if ( v112 )
          {
            v77 = *(_WORD *)(a3 + 2);
            v12 |= v77 & 0x2000 | 0x10;
            if ( (v77 & 0xA00) == 0xA00 )
              v12 |= 0x800u;
          }
          else
          {
            v55 = v54;
          }
          v23 = v101;
          v56 = v55;
          v44 = v99;
          v43 = sub_18000F5AC(v99, v56, v101, v118, v119, v120, (__int64 *)&v122, 0LL);
          if ( v43 < 0 )
            goto LABEL_57;
          v15 = v122;
          Src = v122;
          if ( !v99 && v122 && !v122[2] )
          {
            RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v122);
            v15 = 0LL;
            Src = 0LL;
          }
          v95 = 1;
LABEL_22:
          if ( (a2 & 4) != 0 )
          {
            v24 = *(_WORD *)(a3 + 2);
            if ( (a5 & 1) == 0 )
            {
              if ( (v24 & 4) == 0 )
                goto LABEL_223;
              if ( v24 >= 0 )
              {
                v25 = *(unsigned __int16 **)(a3 + 32);
                goto LABEL_27;
              }
              if ( *(_DWORD *)(a3 + 16) )
                v25 = (unsigned __int16 *)(a3 + *(unsigned int *)(a3 + 16));
              else
LABEL_223:
                v25 = 0LL;
LABEL_27:
              v12 |= v24 & 0x1000 | 4;
              if ( (v24 & 0x500) == 0x500 )
                v12 |= 0x400u;
LABEL_29:
              if ( !v110 )
                goto LABEL_30;
              v117 = 76;
              Heap = (_QWORD *)RtlAllocateHeap((__int64)ProcessHeap, dword_18016542C + 1310720, 76LL);
              if ( !Heap )
              {
LABEL_229:
                v43 = -1073741801;
                goto LABEL_55;
              }
              v43 = ZwOpenProcessToken(-1LL, 8LL, &v113);
              v79 = (__int64)Heap;
              if ( v43 < 0 )
              {
LABEL_228:
                RtlFreeHeap((__int64)ProcessHeap, 0, v79);
                goto LABEL_55;
              }
              v43 = ZwQueryInformationToken(v113, 4LL, Heap, v117, &v117);
              ZwClose(v113);
              if ( v43 < 0 )
              {
                v79 = (__int64)Heap;
                goto LABEL_228;
              }
              LOBYTE(v80) = v103;
              v43 = sub_1800E6098((_DWORD)v25, v80, *Heap, (unsigned int)&v124, (__int64)v96);
              RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)Heap);
              if ( v43 >= 0 )
              {
                v25 = v124;
                goto LABEL_30;
              }
LABEL_55:
              v44 = v99;
              v23 = v101;
              if ( v89 )
                RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v123);
              goto LABEL_57;
            }
            if ( (v24 & 4) != 0 )
            {
              if ( v24 >= 0 )
              {
                v46 = *(_QWORD *)(a3 + 32);
LABEL_71:
                v47 = *v107;
                v48 = *(_WORD *)(*v107 + 2);
                if ( (v48 & 4) != 0 )
                {
                  if ( v48 >= 0 )
                  {
                    v49 = *(_QWORD *)(v47 + 32);
LABEL_75:
                    v43 = sub_180088788(
                            v49,
                            v48 & 0x140C,
                            v46,
                            *(_WORD *)(a3 + 2) & 0x140C,
                            (__int64)v104,
                            (__int64)v105,
                            a7,
                            1,
                            (__int64)&v123,
                            (__int64)&v97);
                    if ( v43 >= 0 )
                    {
                      v25 = v123;
                      v89 = 1;
                      v12 |= v97 & 0x1408 | 4;
                      goto LABEL_29;
                    }
                    goto LABEL_193;
                  }
                  if ( *(_DWORD *)(v47 + 16) )
                  {
                    LODWORD(v49) = v47 + *(_DWORD *)(v47 + 16);
                    goto LABEL_75;
                  }
                }
                LODWORD(v49) = 0;
                goto LABEL_75;
              }
              if ( *(_DWORD *)(a3 + 16) )
              {
                LODWORD(v46) = a3 + *(_DWORD *)(a3 + 16);
                goto LABEL_71;
              }
            }
            LODWORD(v46) = 0;
            goto LABEL_71;
          }
          v81 = *v107;
          if ( (*(_BYTE *)(*v107 + 2) & 4) != 0 )
          {
            if ( *(__int16 *)(v81 + 2) >= 0 )
            {
              v25 = *(unsigned __int16 **)(v81 + 32);
LABEL_30:
              v26 = 4 * *((unsigned __int8 *)v104 + 1) + 8;
              LODWORD(Size) = v26;
              v27 = 4 * *((unsigned __int8 *)v105 + 1) + 8;
              LODWORD(v100) = v27;
              if ( v15 )
                v28 = (v15[1] + 3) & 0xFFFFFFFC;
              else
                v28 = 0;
              if ( v25 )
                v29 = (v25[1] + 3) & 0xFFFFFFFC;
              else
                v29 = 0;
              v30 = RtlAllocateHeap((__int64)ProcessHeap, dword_18016542C + 1310720, v27 + v29 + v28 + v26 + 20);
              v31 = v30;
              if ( v30 )
              {
                v32 = (char *)(v30 + 20);
                *(_QWORD *)v30 = 0LL;
                *(_QWORD *)(v30 + 8) = 0LL;
                *(_DWORD *)(v30 + 16) = 0;
                *(_BYTE *)v30 = 1;
                v33 = v12 | 0x800;
                if ( !(_BYTE)v111 )
                  v33 = v12;
                v112 = v33;
                v34 = *(_WORD *)(v31 + 2) | v33;
                *(_WORD *)(v31 + 2) = v34;
                if ( (*(_WORD *)(v126 + 2) & 0x4000) != 0 )
                {
                  *(_BYTE *)(v31 + 1) = *(_BYTE *)(v126 + 1);
                  *(_WORD *)(v31 + 2) = v34 | 0x4000;
                }
                v35 = (unsigned __int16 *)Src;
                if ( Src )
                {
                  memmove((void *)(v31 + 20), Src, *((unsigned __int16 *)Src + 1));
                  sub_18000E718(v31 + 20, a7);
                  *(_DWORD *)(v31 + 12) = (_DWORD)v32 - v31;
                  v36 = v35[1];
                  if ( v28 > (unsigned int)v36 )
                    memset(&v32[v36], 0, v28 - (unsigned int)v36);
                  v32 += v28;
                }
                else
                {
                  *(_DWORD *)(v31 + 12) = 0;
                }
                v37 = v112;
                v38 = v107;
                if ( (v112 & 0x10) == 0 )
                  *(_WORD *)(v31 + 2) |= *(_WORD *)(*v107 + 2) & 0x2830;
                if ( v25 )
                {
                  memmove(v32, v25, v25[1]);
                  sub_18000E718((__int64)v32, a7);
                  *(_DWORD *)(v31 + 16) = (_DWORD)v32 - v31;
                  v39 = v25[1];
                  if ( v29 > (unsigned int)v39 )
                    memset(&v32[v39], 0, v29 - (unsigned int)v39);
                  v32 += v29;
                }
                else
                {
                  *(_DWORD *)(v31 + 16) = 0;
                }
                if ( (v37 & 4) != 0 || (*(_WORD *)(v31 + 2) |= *(_WORD *)(*v38 + 2) & 0x140C, !(_BYTE)v116) )
                {
LABEL_50:
                  v40 = (unsigned int)Size;
                  memmove(v32, v104, (unsigned int)Size);
                  v41 = (int)v32;
                  v42 = &v32[v40];
                  v43 = 0;
                  *(_DWORD *)(v31 + 4) = v41 - v31;
                  if ( !v87 )
                    *(_WORD *)(v31 + 2) |= *(_WORD *)(*v38 + 2) & 1;
                  memmove(v42, v105, (unsigned int)v100);
                  *(_DWORD *)(v31 + 8) = (_DWORD)v42 - v31;
                  if ( !v88 )
                    *(_WORD *)(v31 + 2) |= *(_WORD *)(*v38 + 2) & 2;
                  RtlFreeHeap((__int64)ProcessHeap, 0, *v38);
                  *v38 = v31;
                }
                else
                {
                  v108 = 0;
                  v109 = 768;
                  v43 = RtlInitializeSid((__int64)v130, (__int64)&v108, 1u);
                  if ( v43 >= 0 )
                  {
                    v131 = 4;
                    v98 = 0;
                    while ( 1 )
                    {
                      if ( (*(_BYTE *)(v31 + 2) & 4) == 0 )
                        goto LABEL_249;
                      if ( *(__int16 *)(v31 + 2) < 0 )
                        break;
                      v82 = *(_QWORD *)(v31 + 32);
LABEL_251:
                      v83 = sub_1800E7704(v82, v130, &v98);
                      if ( !v83 )
                        goto LABEL_50;
                      v84 = *(_BYTE *)(v83 + 1) & 0xF4 | 8;
                      ++v98;
                      *(_BYTE *)(v83 + 1) = v84;
                    }
                    if ( *(_DWORD *)(v31 + 16) )
                    {
                      v82 = v31 + *(unsigned int *)(v31 + 16);
                      goto LABEL_251;
                    }
LABEL_249:
                    v82 = 0LL;
                    goto LABEL_251;
                  }
                }
                goto LABEL_55;
              }
              goto LABEL_229;
            }
            if ( *(_DWORD *)(v81 + 16) )
            {
              v25 = (unsigned __int16 *)(v81 + *(unsigned int *)(v81 + 16));
              goto LABEL_30;
            }
          }
          v25 = 0LL;
          goto LABEL_30;
        }
        v76 = *(unsigned __int16 *)(a3 + 2);
        if ( (a5 & 2) == 0 )
        {
          v120 = v55;
          v12 |= v76 & 0x2000 | 0x10;
          if ( (v76 & 0xA00) == 0xA00 )
            v12 |= 0x800u;
          goto LABEL_213;
        }
        v43 = sub_180088788(
                (_DWORD)v85,
                (*(_WORD *)(*v107 + 2) & 0x800 | (*(unsigned __int16 *)(*v107 + 2) >> 1) & 0x18u) >> 1,
                (_DWORD)v55,
                (v76 & 0x800 | (v76 >> 1) & 0x18) >> 1,
                (__int64)v104,
                (__int64)v105,
                a7,
                2,
                (__int64)&v120,
                (__int64)&v97);
        if ( v43 >= 0 )
        {
          v94 = 1;
          v12 |= 2 * (v97 & 0x1400 | (2 * (v97 & 8 | 4)));
LABEL_213:
          v54 = v85;
          goto LABEL_100;
        }
LABEL_192:
        v23 = v101;
LABEL_193:
        v44 = v99;
LABEL_57:
        if ( v44 && v90 )
          RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v44);
        if ( v23 && v91 )
          RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v23);
        if ( v118 && v92 )
          RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v118);
        if ( v119 && v93 )
          RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v119);
        if ( v120 && v94 )
          RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)v120);
        if ( Src && v95 )
          RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)Src);
        if ( !v96[0] )
          return (unsigned int)v43;
        v71 = (__int64)v124;
LABEL_179:
        RtlFreeHeap((__int64)ProcessHeap, 0, v71);
        return (unsigned int)v43;
      }
    }
LABEL_177:
    v71 = v50;
    goto LABEL_179;
  }
  v98 = 0;
  v63 = 0LL;
  while ( 1 )
  {
    v64 = RtlFindAceByType((__int64)v13, 17, &v98);
    v65 = v64;
    if ( v64 )
    {
      v63 = v64 + 8;
      v86 = v64[1];
      if ( (*((_DWORD *)v64 + 1) & 0xFFFFFFF8) != 0 )
        break;
    }
    if ( v8 )
    {
      LODWORD(v100) = ZwQueryInformationToken(v8, 10LL, v127, 56LL, v121);
      v43 = v100;
      if ( (v100 & 0x80000000) != 0LL )
        return (unsigned int)v43;
      if ( v128 == 2 && v129 < 1 )
        return (unsigned int)-1073741659;
    }
    else
    {
      LODWORD(v100) = ZwOpenProcessToken(-1LL, 8LL, &v113);
      v43 = v100;
      if ( (v100 & 0x80000000) != 0LL )
        return (unsigned int)v43;
    }
    v8 = Size;
    v67 = v113;
    LOBYTE(v66) = v86;
    if ( Size )
      v67 = Size;
    if ( !(unsigned __int8)sub_1800E65E8(v67, v63, v66, &v100) )
    {
      ZwClose(v113);
      break;
    }
    ZwClose(v113);
    ++v98;
    if ( !v65 )
      goto LABEL_83;
    v13 = v106;
  }
  return (unsigned int)-1073740730;
}
