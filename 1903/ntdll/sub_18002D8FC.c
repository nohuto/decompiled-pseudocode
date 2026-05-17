/*
 * XREFs of sub_18002D8FC @ 0x18002D8FC
 * Callers:
 *     sub_1800219E8 @ 0x1800219E8 (sub_1800219E8.c)
 *     sub_18002DEC8 @ 0x18002DEC8 (sub_18002DEC8.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1800150A0 (RtlCopyUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x180019EE0 (RtlCompareUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x18001A040 (RtlCompareUnicodeStrings.c)
 *     RtlAppendUnicodeStringToString @ 0x180026140 (RtlAppendUnicodeStringToString.c)
 *     sub_180029CEC @ 0x180029CEC (sub_180029CEC.c)
 *     sub_180029E90 @ 0x180029E90 (sub_180029E90.c)
 *     sub_18002DE68 @ 0x18002DE68 (sub_18002DE68.c)
 *     sub_18002E1A4 @ 0x18002E1A4 (sub_18002E1A4.c)
 *     sub_18002E8CC @ 0x18002E8CC (sub_18002E8CC.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     EtwEventWriteNoRegistration @ 0x1800835F0 (EtwEventWriteNoRegistration.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 *     sub_1800DDF30 @ 0x1800DDF30 (sub_1800DDF30.c)
 */

__int64 __fastcall sub_18002D8FC(
        __int16 *a1,
        __int64 a2,
        char a3,
        __int16 **a4,
        _WORD *a5,
        __int64 a6,
        unsigned __int16 *a7,
        bool *a8,
        __int64 a9)
{
  unsigned int v9; // ebx
  __int16 *v13; // rdi
  unsigned __int16 *v14; // r13
  int v15; // edi
  unsigned int v16; // r9d
  __int16 *v17; // rdx
  __int16 *v18; // r8
  __int16 *v19; // rcx
  int v20; // r10d
  unsigned int v21; // eax
  __int16 *v22; // rax
  _WORD *v23; // rdx
  __int16 *v24; // r14
  __int16 *v25; // rsi
  _WORD *v26; // rax
  bool v27; // r15
  __int16 v28; // cx
  int v29; // eax
  __int16 **v30; // r15
  _DWORD *v31; // r14
  _QWORD *v33; // rax
  _QWORD *v34; // r13
  _QWORD *v35; // r15
  unsigned __int16 *v36; // r10
  unsigned __int16 v37; // cx
  unsigned __int16 v38; // ax
  __int64 Heap; // rax
  int v40; // eax
  void *v41; // rdx
  _DWORD *v42; // rdx
  int v43; // r10d
  _QWORD *v44; // r8
  unsigned __int16 v46; // [rsp+32h] [rbp-97h]
  unsigned __int16 *v48; // [rsp+48h] [rbp-81h]
  unsigned __int16 v49; // [rsp+58h] [rbp-71h] BYREF
  _WORD *v50; // [rsp+60h] [rbp-69h]
  __int64 v51; // [rsp+68h] [rbp-61h]
  _WORD *v52; // [rsp+70h] [rbp-59h]
  __int16 **v53; // [rsp+78h] [rbp-51h]
  bool *v54; // [rsp+80h] [rbp-49h]
  __int64 v55; // [rsp+88h] [rbp-41h]
  __int64 v56; // [rsp+90h] [rbp-39h] BYREF
  int v57; // [rsp+98h] [rbp-31h]
  int v58; // [rsp+9Ch] [rbp-2Dh]
  __int64 v59; // [rsp+A0h] [rbp-29h]
  int v60; // [rsp+A8h] [rbp-21h]
  int v61; // [rsp+ACh] [rbp-1Dh]
  __int64 v62; // [rsp+B0h] [rbp-19h]
  int v63; // [rsp+B8h] [rbp-11h]
  int v64; // [rsp+BCh] [rbp-Dh]

  v9 = 0;
  v51 = a6;
  v13 = a1;
  v14 = 0LL;
  v54 = a8;
  v55 = a9;
  v53 = a4;
  v48 = 0LL;
  if ( (dword_18015FAB0 & 9) != 0 )
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1225,
      (unsigned int)"LdrpSearchPath",
      3,
      (__int64)"DLL name: %wZ\n",
      a1);
  if ( !*(_QWORD *)a2 )
  {
    v15 = sub_18002E8CC(a2);
    if ( v15 < 0 )
      goto LABEL_49;
    v13 = a1;
  }
  v16 = 0;
  if ( a4 )
  {
    v17 = *a4;
    if ( *a4 )
    {
      v19 = a4[1];
      v18 = *(__int16 **)(a2 + 16);
      goto LABEL_11;
    }
  }
  v18 = *(__int16 **)(a2 + 16);
  v17 = v18;
  if ( v18 )
    goto LABEL_10;
  do
  {
    v17 = *(__int16 **)a2;
LABEL_10:
    v19 = v17;
LABEL_11:
    if ( *v19 )
    {
      do
      {
        v20 = (int)v19;
        while ( *v19 && *v19 != 59 )
          ++v19;
        v21 = (_DWORD)v19 - v20;
        if ( (int)v19 - v20 <= v16 )
          v21 = v16;
        v16 = v21;
        v22 = v19 + 1;
        if ( *v19 != 59 )
          v22 = v19;
        v19 = v22;
      }
      while ( *v22 );
    }
  }
  while ( v17 == v18 && !a3 );
  v15 = sub_180029E90((__int64)&v49, (unsigned __int16)*v13 + v16 + 2);
  if ( v15 < 0 )
    goto LABEL_49;
  v23 = v50;
  v52 = v50;
  if ( a4 && (v24 = *a4) != 0LL )
  {
    v25 = a4[1];
  }
  else
  {
    v24 = *(__int16 **)(a2 + 16);
    if ( !v24 )
      v24 = *(__int16 **)a2;
    v25 = v24;
  }
  while ( 1 )
  {
    while ( *v25 )
    {
      if ( *v25 == 59 )
      {
        ++v25;
      }
      else
      {
        v26 = v23;
        v27 = v25 == *(__int16 **)(a2 + 8);
        while ( 1 )
        {
          v28 = *v25;
          if ( !*v25 )
            break;
          if ( v28 == 59 )
            goto LABEL_34;
          *v26++ = v28;
          ++v25;
        }
        if ( *v25 == 59 )
LABEL_34:
          ++v25;
        if ( v26 != v23 )
        {
          if ( *(v26 - 1) != 92 && *(v26 - 1) != 47 )
          {
            *v26 = 92;
            LOWORD(v26) = (_WORD)v26 + 2;
          }
          v49 = (_WORD)v26 - (_WORD)v23;
          RtlAppendUnicodeStringToString(&v49, a1);
          v29 = sub_180029CEC(&v49, (__int64)a5, v51, a7, 0);
          v15 = v29;
          if ( v27 )
          {
            if ( v29 < 0 )
              goto LABEL_53;
            v33 = (_QWORD *)sub_1800DDF30();
            v34 = v33;
            if ( v33 )
            {
              v35 = (_QWORD *)*v33;
              if ( (_QWORD *)*v33 != v33 )
              {
                v36 = a7;
                v37 = *a7 >> 1;
                v46 = v37;
                do
                {
                  v38 = *((_WORD *)v35 + 8) >> 1;
                  if ( v37 > v38 )
                  {
                    if ( !(unsigned int)RtlCompareUnicodeStrings(*((_WORD **)v36 + 1), v38, v35[3], v38, 1) )
                    {
                      v14 = v48;
                      goto LABEL_40;
                    }
                    v37 = v46;
                    v36 = a7;
                  }
                  v35 = (_QWORD *)*v35;
                }
                while ( v35 != v34 );
              }
            }
            Heap = RtlAllocateHeap(qword_180165420, (unsigned int)(dword_18016542C + 0x40000), *a7 + 18LL);
            v48 = (unsigned __int16 *)Heap;
            v14 = (unsigned __int16 *)Heap;
            if ( Heap )
            {
              *(_WORD *)Heap = 0;
              *(_WORD *)(Heap + 2) = *a7;
              *(_QWORD *)(Heap + 8) = Heap + 16;
              RtlCopyUnicodeString((unsigned __int16 *)Heap, a7);
              *(_WORD *)(*((_QWORD *)v14 + 1) + 2 * ((unsigned __int64)*a7 >> 1)) = 0;
            }
            v15 = -1073741515;
          }
LABEL_40:
          if ( v15 >= 0 )
            goto LABEL_41;
LABEL_53:
          if ( v15 != -1073741515 && v15 != -1073741790 && v15 != -1073741757 && v15 != -1073741715 )
            goto LABEL_41;
          v23 = v52;
          *a5 = 0;
        }
      }
    }
    if ( v24 != *(__int16 **)(a2 + 16) || a3 )
      break;
    v24 = *(__int16 **)a2;
    v25 = *(__int16 **)a2;
  }
  v15 = -1073741515;
LABEL_41:
  if ( v14 )
  {
    if ( v15 < 0 || (unsigned int)RtlCompareUnicodeString(a7, v14, 1) )
    {
      v58 = 0;
      v61 = 0;
      v56 = *(_QWORD *)(qword_180164FC8 + 80);
      v57 = *(unsigned __int16 *)(qword_180164FC8 + 72) + 2;
      v59 = *((_QWORD *)v14 + 1);
      v60 = *v14 + 2;
      if ( v15 >= 0 )
      {
        v62 = *((_QWORD *)a7 + 1);
        v40 = *a7;
        v64 = 0;
        v63 = v40 + 2;
      }
      v41 = &unk_18012C1F0;
      if ( v15 < 0 )
        v41 = &unk_18012C1A0;
      EtwEventWriteNoRegistration(&unk_18011E318, v41, (unsigned int)((v15 >> 31) + 3), &v56);
    }
    RtlFreeHeap(qword_180165420, 0LL, v14);
  }
  sub_18002E1A4(&v49);
  if ( v15 >= 0 )
  {
    v30 = v53;
    if ( v53 )
    {
      *v53 = v24;
      v30[1] = v25;
    }
    if ( v54 )
      *v54 = v24 == *(__int16 **)(a2 + 16);
  }
  v31 = (_DWORD *)v55;
  if ( v55 && (unsigned __int8)sub_18002DE68() )
  {
    v42 = (_DWORD *)(a2 + 40);
    v43 = 0;
    if ( *(_WORD *)(a2 + 112) )
    {
      v44 = (_QWORD *)(a2 + 64);
      do
      {
        if ( (unsigned __int64)v25 <= *v44 )
          break;
        ++v9;
        v43 |= 16 << *v42;
        ++v44;
        ++v42;
      }
      while ( v9 < *(unsigned __int16 *)(a2 + 112) );
    }
    *v31 = v43;
  }
LABEL_49:
  if ( (dword_18015FAB0 & 9) != 0 )
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1543,
      (unsigned int)"LdrpSearchPath",
      4,
      (__int64)"Status: 0x%08lx\n",
      v15);
  return (unsigned int)v15;
}
