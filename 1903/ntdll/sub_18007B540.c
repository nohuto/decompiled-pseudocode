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
        PVOID *a4,
        char a5,
        int a6,
        GENERIC_MAPPING *a7,
        HANDLE TokenHandle)
{
  HANDLE v8; // rbx
  __int16 v11; // dx
  int v12; // r15d
  ACL *v13; // rdi
  char *v14; // rcx
  unsigned __int16 *v15; // r14
  __int16 v16; // r11
  PVOID ProcessHeap; // r13
  int v18; // r8d
  int v19; // r9d
  char *v20; // rax
  _QWORD *v21; // rax
  char *v22; // rcx
  PVOID v23; // rdi
  __int16 v24; // cx
  unsigned __int16 *v25; // rsi
  int v26; // ecx
  int v27; // r8d
  unsigned int v28; // ebx
  unsigned int v29; // r12d
  char *v30; // rax
  _WORD *v31; // rdi
  char *v32; // r14
  int v33; // eax
  __int16 v34; // ax
  unsigned __int16 *v35; // r15
  __int64 v36; // rcx
  char v37; // bl
  PVOID *v38; // r15
  __int64 v39; // rcx
  __int64 v40; // rbx
  int v41; // eax
  char *v42; // r14
  int v43; // ebx
  PVOID v44; // r14
  __int64 v46; // r8
  _QWORD *v47; // rax
  __int16 v48; // dx
  __int64 v49; // rcx
  PVOID v50; // rdi
  __int64 v51; // r14
  int v52; // r14d
  unsigned int v53; // edx
  ACL *v54; // rax
  PACL v55; // r14
  unsigned __int8 *v56; // rdx
  int v57; // esi
  unsigned int v58; // eax
  int v59; // eax
  unsigned int v60; // eax
  void *v61; // rax
  void *v62; // rax
  void *v63; // r14
  _DWORD *v64; // rax
  _DWORD *v65; // rdi
  void *v66; // rcx
  _DWORD *AceByType; // rax
  __int64 v68; // r8
  _DWORD *v69; // rbx
  PVOID v70; // r8
  __int64 v71; // rdx
  unsigned int v72; // edx
  unsigned int v73; // edx
  unsigned int v74; // edx
  unsigned int v75; // edx
  __int16 v76; // ax
  _QWORD *Heap; // rdi
  void *v78; // r8
  int v79; // edx
  char *v80; // rax
  char *v81; // rcx
  __int64 v82; // rax
  char v83; // cl
  ACL *v84; // [rsp+50h] [rbp-B0h]
  char v85; // [rsp+59h] [rbp-A7h]
  char v86; // [rsp+5Ah] [rbp-A6h]
  char v87; // [rsp+5Bh] [rbp-A5h]
  char v88; // [rsp+5Ch] [rbp-A4h]
  char v89; // [rsp+5Dh] [rbp-A3h]
  char v90; // [rsp+5Eh] [rbp-A2h]
  char v91; // [rsp+5Fh] [rbp-A1h]
  char v92; // [rsp+60h] [rbp-A0h]
  char v93; // [rsp+61h] [rbp-9Fh]
  char v94[2]; // [rsp+62h] [rbp-9Eh] BYREF
  _WORD v95[2]; // [rsp+64h] [rbp-9Ch] BYREF
  ULONG v96; // [rsp+68h] [rbp-98h] BYREF
  PVOID v97; // [rsp+70h] [rbp-90h] BYREF
  size_t v98; // [rsp+78h] [rbp-88h] BYREF
  PVOID v99; // [rsp+80h] [rbp-80h] BYREF
  char v100; // [rsp+88h] [rbp-78h]
  bool v101; // [rsp+89h] [rbp-77h]
  void *v102; // [rsp+90h] [rbp-70h]
  void *v103; // [rsp+98h] [rbp-68h]
  PACL Acl; // [rsp+A0h] [rbp-60h]
  PVOID *v105; // [rsp+A8h] [rbp-58h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v107; // [rsp+B8h] [rbp-48h]
  int v108; // [rsp+BCh] [rbp-44h]
  int v109; // [rsp+C0h] [rbp-40h]
  HANDLE Handle; // [rsp+C8h] [rbp-38h] BYREF
  size_t Size; // [rsp+D0h] [rbp-30h]
  void *Src; // [rsp+D8h] [rbp-28h]
  unsigned int v113; // [rsp+E0h] [rbp-20h]
  ULONG TokenInformationLength; // [rsp+E4h] [rbp-1Ch] BYREF
  PVOID v115; // [rsp+E8h] [rbp-18h] BYREF
  PVOID v116; // [rsp+F0h] [rbp-10h] BYREF
  PVOID v117; // [rsp+F8h] [rbp-8h] BYREF
  ULONG ReturnLength; // [rsp+100h] [rbp+0h] BYREF
  PVOID v119; // [rsp+108h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+110h] [rbp+10h] BYREF
  PVOID v121; // [rsp+118h] [rbp+18h] BYREF
  PVOID v122[2]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v123; // [rsp+130h] [rbp+30h]
  _BYTE TokenInformation[24]; // [rsp+138h] [rbp+38h] BYREF
  int v125; // [rsp+150h] [rbp+50h]
  int v126; // [rsp+154h] [rbp+54h]
  char Sid[8]; // [rsp+170h] [rbp+70h] BYREF
  int v128; // [rsp+178h] [rbp+78h]

  v8 = TokenHandle;
  v123 = a3;
  v105 = a4;
  Size = (size_t)TokenHandle;
  v11 = *(_WORD *)(a3 + 2);
  v12 = 0x8000;
  v86 = 0;
  v85 = 0;
  v94[0] = 0;
  v87 = 0;
  v93 = 0;
  v88 = 0;
  v89 = 0;
  v90 = 0;
  v91 = 0;
  v92 = 0;
  BaseAddress = 0LL;
  Src = 0LL;
  v119 = 0LL;
  v97 = 0LL;
  v115 = 0LL;
  v99 = 0LL;
  v116 = 0LL;
  v117 = 0LL;
  LOBYTE(v113) = 0;
  LOBYTE(v108) = 0;
  v121 = 0LL;
  if ( (v11 & 0x10) == 0 )
    goto LABEL_2;
  if ( v11 >= 0 )
  {
    v13 = *(ACL **)(a3 + 24);
  }
  else
  {
    if ( !*(_DWORD *)(a3 + 12) )
    {
LABEL_2:
      v13 = 0LL;
      goto LABEL_3;
    }
    v13 = (ACL *)(a3 + *(unsigned int *)(a3 + 12));
  }
LABEL_3:
  v14 = (char *)*a4;
  Acl = v13;
  if ( (v14[2] & 0x10) == 0 )
  {
LABEL_116:
    v15 = 0LL;
    goto LABEL_7;
  }
  if ( *((__int16 *)v14 + 1) < 0 )
  {
    if ( *((_DWORD *)v14 + 3) )
    {
      v15 = (unsigned __int16 *)&v14[*((unsigned int *)v14 + 3)];
      goto LABEL_7;
    }
    goto LABEL_116;
  }
  v15 = (unsigned __int16 *)*((_QWORD *)v14 + 3);
LABEL_7:
  Handle = 0LL;
  v16 = *((_WORD *)v14 + 1);
  v84 = (ACL *)v15;
  v122[0] = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( v16 >= 0 )
    return (unsigned int)-1073741593;
  v107 = v11 & 0x80;
  v100 = v107 != 0;
  v18 = a2 & 0x80;
  v19 = a2 & 0x100;
  v101 = (v11 & 0x40) != 0;
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
        v59 = (unsigned __int8)v108;
        if ( (v11 & 0x800) != 0 )
          v59 = 1;
        v108 = v59;
      }
    }
  }
  if ( (a2 & 1) == 0 )
  {
    if ( !*((_DWORD *)v14 + 1) )
      return (unsigned int)-1073741734;
    v20 = &v14[*((unsigned int *)v14 + 1)];
    v102 = v20;
    if ( !v20 )
      return (unsigned int)-1073741734;
    goto LABEL_12;
  }
  v60 = a2 >> 2;
  LOBYTE(v60) = (a2 & 4) == 0;
  v113 = v60;
  if ( v11 >= 0 )
  {
    v61 = *(void **)(a3 + 8);
  }
  else
  {
    if ( !*(_DWORD *)(a3 + 4) )
    {
      v102 = 0LL;
      goto LABEL_136;
    }
    v61 = (void *)(a3 + *(unsigned int *)(a3 + 4));
  }
  v102 = v61;
LABEL_136:
  v85 = 1;
  if ( (a5 & 8) == 0 )
  {
    if ( !TokenHandle )
      return (unsigned int)-1073741734;
    LODWORD(v98) = ZwQueryInformationToken(TokenHandle, 0xAu, TokenInformation, 0x38u, &ReturnLength);
    v43 = v98;
    if ( (v98 & 0x80000000) != 0LL )
      return (unsigned int)v43;
    if ( v125 == 2 && v126 < 1 )
      return (unsigned int)-1073741659;
    v8 = (HANDLE)Size;
    if ( !sub_180066D68((void *)Size, v102, v100, (NTSTATUS *)&v98) )
      return (unsigned int)-1073741734;
  }
  v20 = (char *)v102;
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
        v103 = 0LL;
LABEL_149:
        v22 = (char *)v103;
        v86 = 1;
        goto LABEL_18;
      }
      v62 = (void *)(a3 + *(unsigned int *)(a3 + 8));
    }
    v103 = v62;
    goto LABEL_149;
  }
  v21 = *v105;
  if ( *((__int16 *)*v105 + 1) >= 0 )
  {
    v22 = (char *)v21[2];
  }
  else
  {
    if ( !*((_DWORD *)v21 + 2) )
    {
LABEL_253:
      v43 = -1073741733;
      goto LABEL_55;
    }
    v22 = (char *)v21 + *((unsigned int *)v21 + 2);
  }
  v103 = v22;
LABEL_18:
  if ( !v22 )
    goto LABEL_253;
  if ( !RtlValidSid(v22) )
    return (unsigned int)-1073741733;
  if ( (a2 & 0x1F8) == 0 )
  {
    v23 = v99;
    Src = v15;
    goto LABEL_22;
  }
  v109 = a2 & 0x10;
  if ( (a2 & 0x10) == 0 )
  {
LABEL_83:
    LODWORD(v98) = sub_18000F3AC(v8, v122);
    v43 = v98;
    if ( (v98 & 0x80000000) != 0LL )
      return (unsigned int)v43;
    v50 = v122[0];
    LODWORD(Size) = a2 & 0x80;
    v51 = *(_QWORD *)v122[0];
    if ( (a2 & 0x80) != 0 )
    {
      if ( !v51 )
      {
LABEL_175:
        v43 = -1073741790;
        goto LABEL_177;
      }
      v96 = 0;
      do
      {
        AceByType = RtlFindAceByType(Acl, 0x14u, &v96);
        v69 = AceByType;
        if ( AceByType )
        {
          if ( (AceByType[1] & 0xFF000000) != 0 )
          {
            v43 = -1073740730;
            goto LABEL_177;
          }
          if ( !(unsigned __int8)sub_18008B9D4(v51, AceByType + 2, v68, &v98) )
            goto LABEL_175;
        }
        ++v96;
      }
      while ( v69 );
    }
    LODWORD(v98) = a2 & 0x100;
    if ( (a2 & 0x100) == 0 )
      goto LABEL_86;
    v43 = sub_18000FB00(Acl, v51);
    if ( v43 >= 0 )
    {
      if ( (a5 & 2) != 0 )
      {
LABEL_86:
        v52 = (int)v84;
        goto LABEL_87;
      }
      v71 = v51;
      v52 = (int)v84;
      v43 = sub_18000FB00(v84, v71);
      if ( v43 >= 0 )
      {
LABEL_87:
        RtlFreeHeap(ProcessHeap, 0, v50);
        if ( (a2 & 8) != 0 )
        {
          v53 = *(unsigned __int16 *)(a3 + 2);
          if ( (a5 & 2) != 0 )
          {
            v43 = sub_180088788(
                    v52,
                    (*((_WORD *)*v105 + 1) & 0x2800 | (*((unsigned __int16 *)*v105 + 1) >> 1) & 0x18u) >> 1,
                    (int)Acl,
                    (v53 & 0x2800 | (v53 >> 1) & 0x18) >> 1,
                    (__int64)v102,
                    (__int64)v103,
                    (__int64)a7,
                    2,
                    (__int64)&v97,
                    (__int64)v95);
            if ( v43 < 0 )
            {
              v44 = v97;
              v23 = v99;
              goto LABEL_57;
            }
            v88 = 1;
            v12 = 2 * (v95[0] & 0x1400 | (2 * (v95[0] & 8 | 0x2004)));
          }
          else
          {
            v97 = Acl;
            v12 = v53 & 0x2000 | 0x8010;
            if ( (v53 & 0xA00) == 0xA00 )
              v12 = v53 & 0x2000 | 0x8810;
          }
          v54 = v84;
        }
        else
        {
          v54 = v84;
          v97 = v84;
        }
        v55 = Acl;
        if ( (a2 & 0x20) != 0 )
        {
          v72 = *(unsigned __int16 *)(a3 + 2);
          if ( (a5 & 2) != 0 )
          {
            v43 = sub_180088788(
                    (int)v84,
                    (*((_WORD *)*v105 + 1) & 0x800 | (*((unsigned __int16 *)*v105 + 1) >> 1) & 0x18u) >> 1,
                    (int)Acl,
                    (v72 & 0x800 | (v72 >> 1) & 0x18) >> 1,
                    (__int64)v102,
                    (__int64)v103,
                    (__int64)a7,
                    2,
                    (__int64)&v99,
                    (__int64)v95);
            if ( v43 < 0 )
              goto LABEL_192;
            v89 = 1;
            v12 |= 2 * (v95[0] & 0x1400 | (2 * (v95[0] & 8 | 4)));
          }
          else
          {
            v99 = Acl;
            v12 |= v72 & 0x2000 | 0x10;
            if ( (v72 & 0xA00) == 0xA00 )
              v12 |= 0x800u;
          }
          v54 = v84;
        }
        else
        {
          v99 = v54;
        }
        if ( (a2 & 0x40) != 0 )
        {
          v73 = *(unsigned __int16 *)(a3 + 2);
          if ( (a5 & 2) != 0 )
          {
            v43 = sub_180088788(
                    (int)v84,
                    (*((_WORD *)*v105 + 1) & 0x800 | (*((unsigned __int16 *)*v105 + 1) >> 1) & 0x18u) >> 1,
                    (int)v55,
                    (v73 & 0x800 | (v73 >> 1) & 0x18) >> 1,
                    (__int64)v102,
                    (__int64)v103,
                    (__int64)a7,
                    2,
                    (__int64)&v115,
                    (__int64)v95);
            if ( v43 < 0 )
              goto LABEL_192;
            v90 = 1;
            v12 |= 2 * (v95[0] & 0x1400 | (2 * (v95[0] & 8 | 4)));
          }
          else
          {
            v115 = v55;
            v12 |= v73 & 0x2000 | 0x10;
            if ( (v73 & 0xA00) == 0xA00 )
              v12 |= 0x800u;
          }
          v54 = v84;
        }
        else
        {
          v115 = v54;
        }
        if ( (_DWORD)Size )
        {
          v74 = *(unsigned __int16 *)(a3 + 2);
          if ( (a5 & 2) != 0 )
          {
            v43 = sub_180088788(
                    (int)v84,
                    (*((_WORD *)*v105 + 1) & 0x800 | (*((unsigned __int16 *)*v105 + 1) >> 1) & 0x18u) >> 1,
                    (int)v55,
                    (v74 & 0x800 | (v74 >> 1) & 0x18) >> 1,
                    (__int64)v102,
                    (__int64)v103,
                    (__int64)a7,
                    2,
                    (__int64)&v116,
                    (__int64)v95);
            if ( v43 < 0 )
              goto LABEL_192;
            v91 = 1;
            v12 |= 2 * (v95[0] & 0x1400 | (2 * (v95[0] & 8 | 4)));
          }
          else
          {
            v116 = v55;
            v12 |= v74 & 0x2000 | 0x10;
            if ( (v74 & 0xA00) == 0xA00 )
              v12 |= 0x800u;
          }
          v54 = v84;
        }
        else
        {
          v116 = v54;
        }
        if ( !(_DWORD)v98 )
        {
          v117 = v54;
LABEL_100:
          if ( v109 )
          {
            v76 = *(_WORD *)(a3 + 2);
            v12 |= v76 & 0x2000 | 0x10;
            if ( (v76 & 0xA00) == 0xA00 )
              v12 |= 0x800u;
          }
          else
          {
            v55 = v54;
          }
          v23 = v99;
          v56 = (unsigned __int8 *)v55;
          v44 = v97;
          v43 = sub_18000F5AC(
                  (unsigned __int8 *)v97,
                  v56,
                  (unsigned __int8 *)v99,
                  (unsigned __int8 *)v115,
                  (unsigned __int8 *)v116,
                  (unsigned __int8 *)v117,
                  (ACL **)&v119,
                  0LL);
          if ( v43 < 0 )
            goto LABEL_57;
          v15 = (unsigned __int16 *)v119;
          Src = v119;
          if ( !v97 && v119 && !*((_WORD *)v119 + 2) )
          {
            RtlFreeHeap(ProcessHeap, 0, v119);
            v15 = 0LL;
            Src = 0LL;
          }
          v93 = 1;
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
              if ( !v107 )
                goto LABEL_30;
              TokenInformationLength = 76;
              Heap = RtlAllocateHeap(ProcessHeap, Flags + 1310720, 0x4CuLL);
              if ( !Heap )
              {
LABEL_229:
                v43 = -1073741801;
                goto LABEL_55;
              }
              v43 = ZwOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &Handle);
              v78 = Heap;
              if ( v43 < 0 )
              {
LABEL_228:
                RtlFreeHeap(ProcessHeap, 0, v78);
                goto LABEL_55;
              }
              v43 = ZwQueryInformationToken(Handle, 4u, Heap, TokenInformationLength, &TokenInformationLength);
              ZwClose(Handle);
              if ( v43 < 0 )
              {
                v78 = Heap;
                goto LABEL_228;
              }
              LOBYTE(v79) = v101;
              v43 = sub_1800E6098((_DWORD)v25, v79, *Heap, (unsigned int)&v121, (__int64)v94);
              RtlFreeHeap(ProcessHeap, 0, Heap);
              if ( v43 >= 0 )
              {
                v25 = (unsigned __int16 *)v121;
                goto LABEL_30;
              }
LABEL_55:
              v44 = v97;
              v23 = v99;
              if ( v87 )
                RtlFreeHeap(ProcessHeap, 0, BaseAddress);
              goto LABEL_57;
            }
            if ( (v24 & 4) != 0 )
            {
              if ( v24 >= 0 )
              {
                v46 = *(_QWORD *)(a3 + 32);
LABEL_71:
                v47 = *v105;
                v48 = *((_WORD *)*v105 + 1);
                if ( (v48 & 4) != 0 )
                {
                  if ( v48 >= 0 )
                  {
                    v49 = v47[4];
LABEL_75:
                    v43 = sub_180088788(
                            v49,
                            v48 & 0x140C,
                            v46,
                            *(_WORD *)(a3 + 2) & 0x140C,
                            (__int64)v102,
                            (__int64)v103,
                            (__int64)a7,
                            1,
                            (__int64)&BaseAddress,
                            (__int64)v95);
                    if ( v43 >= 0 )
                    {
                      v25 = (unsigned __int16 *)BaseAddress;
                      v87 = 1;
                      v12 |= v95[0] & 0x1408 | 4;
                      goto LABEL_29;
                    }
                    goto LABEL_193;
                  }
                  if ( *((_DWORD *)v47 + 4) )
                  {
                    LODWORD(v49) = (_DWORD)v47 + *((_DWORD *)v47 + 4);
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
          v80 = (char *)*v105;
          if ( (*((_BYTE *)*v105 + 2) & 4) != 0 )
          {
            if ( *((__int16 *)v80 + 1) >= 0 )
            {
              v25 = (unsigned __int16 *)*((_QWORD *)v80 + 4);
LABEL_30:
              v26 = 4 * *((unsigned __int8 *)v102 + 1) + 8;
              LODWORD(Size) = v26;
              v27 = 4 * *((unsigned __int8 *)v103 + 1) + 8;
              LODWORD(v98) = v27;
              if ( v15 )
                v28 = (v15[1] + 3) & 0xFFFFFFFC;
              else
                v28 = 0;
              if ( v25 )
                v29 = (v25[1] + 3) & 0xFFFFFFFC;
              else
                v29 = 0;
              v30 = (char *)RtlAllocateHeap(ProcessHeap, Flags + 1310720, v27 + v29 + v28 + v26 + 20);
              v31 = v30;
              if ( v30 )
              {
                v32 = v30 + 20;
                *(_QWORD *)v30 = 0LL;
                *((_QWORD *)v30 + 1) = 0LL;
                *((_DWORD *)v30 + 4) = 0;
                *v30 = 1;
                v33 = v12 | 0x800;
                if ( !(_BYTE)v108 )
                  v33 = v12;
                v109 = v33;
                v34 = v31[1] | v33;
                v31[1] = v34;
                if ( (*(_WORD *)(v123 + 2) & 0x4000) != 0 )
                {
                  *((_BYTE *)v31 + 1) = *(_BYTE *)(v123 + 1);
                  v31[1] = v34 | 0x4000;
                }
                v35 = (unsigned __int16 *)Src;
                if ( Src )
                {
                  memmove(v31 + 10, Src, *((unsigned __int16 *)Src + 1));
                  sub_18000E718((__int64)(v31 + 10), a7);
                  *((_DWORD *)v31 + 3) = (_DWORD)v32 - (_DWORD)v31;
                  v36 = v35[1];
                  if ( v28 > (unsigned int)v36 )
                    memset(&v32[v36], 0, v28 - (unsigned int)v36);
                  v32 += v28;
                }
                else
                {
                  *((_DWORD *)v31 + 3) = 0;
                }
                v37 = v109;
                v38 = v105;
                if ( (v109 & 0x10) == 0 )
                  v31[1] |= *((_WORD *)*v105 + 1) & 0x2830;
                if ( v25 )
                {
                  memmove(v32, v25, v25[1]);
                  sub_18000E718((__int64)v32, a7);
                  *((_DWORD *)v31 + 4) = (_DWORD)v32 - (_DWORD)v31;
                  v39 = v25[1];
                  if ( v29 > (unsigned int)v39 )
                    memset(&v32[v39], 0, v29 - (unsigned int)v39);
                  v32 += v29;
                }
                else
                {
                  *((_DWORD *)v31 + 4) = 0;
                }
                if ( (v37 & 4) != 0 || (v31[1] |= *((_WORD *)*v38 + 1) & 0x140C, !(_BYTE)v113) )
                {
LABEL_50:
                  v40 = (unsigned int)Size;
                  memmove(v32, v102, (unsigned int)Size);
                  v41 = (int)v32;
                  v42 = &v32[v40];
                  v43 = 0;
                  *((_DWORD *)v31 + 1) = v41 - (_DWORD)v31;
                  if ( !v85 )
                    v31[1] |= *((_WORD *)*v38 + 1) & 1;
                  memmove(v42, v103, (unsigned int)v98);
                  *((_DWORD *)v31 + 2) = (_DWORD)v42 - (_DWORD)v31;
                  if ( !v86 )
                    v31[1] |= *((_WORD *)*v38 + 1) & 2;
                  RtlFreeHeap(ProcessHeap, 0, *v38);
                  *v38 = v31;
                }
                else
                {
                  *(_DWORD *)IdentifierAuthority.Value = 0;
                  *(_WORD *)&IdentifierAuthority.Value[4] = 768;
                  v43 = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
                  if ( v43 >= 0 )
                  {
                    v128 = 4;
                    v96 = 0;
                    while ( 1 )
                    {
                      if ( (v31[1] & 4) == 0 )
                        goto LABEL_249;
                      if ( (__int16)v31[1] < 0 )
                        break;
                      v81 = (char *)*((_QWORD *)v31 + 4);
LABEL_251:
                      v82 = sub_1800E7704(v81, Sid, &v96);
                      if ( !v82 )
                        goto LABEL_50;
                      v83 = *(_BYTE *)(v82 + 1) & 0xF4 | 8;
                      ++v96;
                      *(_BYTE *)(v82 + 1) = v83;
                    }
                    if ( *((_DWORD *)v31 + 4) )
                    {
                      v81 = (char *)v31 + *((unsigned int *)v31 + 4);
                      goto LABEL_251;
                    }
LABEL_249:
                    v81 = 0LL;
                    goto LABEL_251;
                  }
                }
                goto LABEL_55;
              }
              goto LABEL_229;
            }
            if ( *((_DWORD *)v80 + 4) )
            {
              v25 = (unsigned __int16 *)&v80[*((unsigned int *)v80 + 4)];
              goto LABEL_30;
            }
          }
          v25 = 0LL;
          goto LABEL_30;
        }
        v75 = *(unsigned __int16 *)(a3 + 2);
        if ( (a5 & 2) == 0 )
        {
          v117 = v55;
          v12 |= v75 & 0x2000 | 0x10;
          if ( (v75 & 0xA00) == 0xA00 )
            v12 |= 0x800u;
          goto LABEL_213;
        }
        v43 = sub_180088788(
                (int)v84,
                (*((_WORD *)*v105 + 1) & 0x800 | (*((unsigned __int16 *)*v105 + 1) >> 1) & 0x18u) >> 1,
                (int)v55,
                (v75 & 0x800 | (v75 >> 1) & 0x18) >> 1,
                (__int64)v102,
                (__int64)v103,
                (__int64)a7,
                2,
                (__int64)&v117,
                (__int64)v95);
        if ( v43 >= 0 )
        {
          v92 = 1;
          v12 |= 2 * (v95[0] & 0x1400 | (2 * (v95[0] & 8 | 4)));
LABEL_213:
          v54 = v84;
          goto LABEL_100;
        }
LABEL_192:
        v23 = v99;
LABEL_193:
        v44 = v97;
LABEL_57:
        if ( v44 && v88 )
          RtlFreeHeap(ProcessHeap, 0, v44);
        if ( v23 && v89 )
          RtlFreeHeap(ProcessHeap, 0, v23);
        if ( v115 && v90 )
          RtlFreeHeap(ProcessHeap, 0, v115);
        if ( v116 && v91 )
          RtlFreeHeap(ProcessHeap, 0, v116);
        if ( v117 && v92 )
          RtlFreeHeap(ProcessHeap, 0, v117);
        if ( Src && v93 )
          RtlFreeHeap(ProcessHeap, 0, Src);
        if ( !v94[0] )
          return (unsigned int)v43;
        v70 = v121;
LABEL_179:
        RtlFreeHeap(ProcessHeap, 0, v70);
        return (unsigned int)v43;
      }
    }
LABEL_177:
    v70 = v50;
    goto LABEL_179;
  }
  v96 = 0;
  v63 = 0LL;
  while ( 1 )
  {
    v64 = RtlFindAceByType(v13, 0x11u, &v96);
    v65 = v64;
    if ( v64 )
    {
      v63 = v64 + 2;
      if ( (v64[1] & 0xFFFFFFF8) != 0 )
        break;
    }
    if ( v8 )
    {
      LODWORD(v98) = ZwQueryInformationToken(v8, 0xAu, TokenInformation, 0x38u, &ReturnLength);
      v43 = v98;
      if ( (v98 & 0x80000000) != 0LL )
        return (unsigned int)v43;
      if ( v125 == 2 && v126 < 1 )
        return (unsigned int)-1073741659;
    }
    else
    {
      LODWORD(v98) = ZwOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, &Handle);
      v43 = v98;
      if ( (v98 & 0x80000000) != 0LL )
        return (unsigned int)v43;
    }
    v8 = (HANDLE)Size;
    v66 = Handle;
    if ( Size )
      v66 = (void *)Size;
    if ( !(unsigned __int8)sub_1800E65E8(v66, v63) )
    {
      ZwClose(Handle);
      break;
    }
    ZwClose(Handle);
    ++v96;
    if ( !v65 )
      goto LABEL_83;
    v13 = Acl;
  }
  return (unsigned int)-1073740730;
}
