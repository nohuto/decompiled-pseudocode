/*
 * XREFs of sub_18003AAA0 @ 0x18003AAA0
 * Callers:
 *     sub_18003A9E0 @ 0x18003A9E0 (sub_18003A9E0.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     sub_18004DC8C @ 0x18004DC8C (sub_18004DC8C.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     sub_180036D88 @ 0x180036D88 (sub_180036D88.c)
 *     sub_180038840 @ 0x180038840 (sub_180038840.c)
 *     sub_18003B6C0 @ 0x18003B6C0 (sub_18003B6C0.c)
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 *     sub_18003E150 @ 0x18003E150 (sub_18003E150.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18004AFB0 @ 0x18004AFB0 (sub_18004AFB0.c)
 *     sub_18004CC7C @ 0x18004CC7C (sub_18004CC7C.c)
 *     sub_1800508C8 @ 0x1800508C8 (sub_1800508C8.c)
 *     sub_1800515E8 @ 0x1800515E8 (sub_1800515E8.c)
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     sub_180068E3C @ 0x180068E3C (sub_180068E3C.c)
 *     sub_180084338 @ 0x180084338 (sub_180084338.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800EFD34 @ 0x1800EFD34 (sub_1800EFD34.c)
 *     sub_1800F2E64 @ 0x1800F2E64 (sub_1800F2E64.c)
 *     sub_1800F3190 @ 0x1800F3190 (sub_1800F3190.c)
 *     sub_180101B5C @ 0x180101B5C (sub_180101B5C.c)
 *     sub_1801030B4 @ 0x1801030B4 (sub_1801030B4.c)
 *     sub_18010A694 @ 0x18010A694 (sub_18010A694.c)
 *     sub_18010B150 @ 0x18010B150 (sub_18010B150.c)
 */

__int64 __fastcall sub_18003AAA0(__int64 a1, unsigned __int64 a2, int a3, __int16 a4)
{
  int v7; // ecx
  int v8; // edx
  unsigned int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  int v13; // r8d
  int v14; // edx
  int v15; // eax
  unsigned __int64 v16; // r15
  size_t v17; // rdi
  __int64 v18; // rdi
  unsigned int v19; // ebx
  unsigned __int64 v20; // rax
  __int64 v21; // r9
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // rax
  int v24; // r10d
  int v25; // edx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned int v28; // ebx
  unsigned __int64 v29; // rax
  int v30; // eax
  __int64 v31; // r11
  unsigned __int8 *v32; // rcx
  __int64 v33; // r10
  __int64 v34; // r9
  volatile signed __int64 *v35; // rbx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // rcx
  size_t v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // r10
  __int64 v44; // r8
  unsigned __int8 v45; // al
  void *v46; // rax
  bool v47; // zf
  __int64 v48; // rcx
  void *v49; // rax
  char v50; // dh
  int v51; // r8d
  _QWORD *v52; // rax
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rbx
  _QWORD *v55; // rbx
  __int64 v56; // rax
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // r15
  __int64 v60; // r8
  __int64 v61; // rdx
  char v62; // al
  char v63; // cl
  __int64 v64; // r8
  __int64 v65; // r9
  unsigned __int64 v66; // rcx
  int v67; // ecx
  _DWORD *v68; // rcx
  __int64 v69; // rcx
  struct _TEB *v70; // rbx
  int v71; // edx
  unsigned int v72; // r15d
  unsigned __int64 v73; // r13
  int v74; // edx
  __int64 v75; // rcx
  unsigned __int64 v76; // rax
  __int64 v77; // r9
  int v78; // ecx
  unsigned __int64 v79; // rcx
  __int64 v80; // r13
  unsigned __int64 v81; // rbx
  __int64 v82; // rax
  __int64 v83; // rcx
  int v84; // r9d
  __int64 *v85; // rdx
  __int64 *v86; // rax
  unsigned __int64 v87; // rcx
  __int64 v88; // rbx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // rax
  struct _TEB *v92; // rbx
  unsigned __int64 v93; // rcx
  _DWORD *HotpatchInformation; // rcx
  __int64 v95; // rcx
  _BYTE *v96; // rdx
  char v97; // r8
  __int64 v98; // rcx
  __int64 v100; // [rsp+20h] [rbp-89h]
  int v101; // [rsp+30h] [rbp-79h] BYREF
  size_t Size; // [rsp+38h] [rbp-71h]
  unsigned __int64 v103; // [rsp+40h] [rbp-69h]
  int v104; // [rsp+48h] [rbp-61h]
  int v105; // [rsp+4Ch] [rbp-5Dh] BYREF
  unsigned int v106; // [rsp+50h] [rbp-59h]
  int v107; // [rsp+54h] [rbp-55h]
  int v108; // [rsp+58h] [rbp-51h]
  unsigned __int64 v109; // [rsp+60h] [rbp-49h] BYREF
  int v110; // [rsp+68h] [rbp-41h]
  int v111; // [rsp+6Ch] [rbp-3Dh]
  unsigned __int64 v112; // [rsp+70h] [rbp-39h]
  unsigned __int64 v113; // [rsp+78h] [rbp-31h] BYREF
  __int64 v114; // [rsp+80h] [rbp-29h]
  __int64 v115; // [rsp+88h] [rbp-21h]
  __int64 v116; // [rsp+90h] [rbp-19h]
  __int64 v117; // [rsp+98h] [rbp-11h] BYREF
  volatile signed __int64 *v118; // [rsp+A0h] [rbp-9h]
  __int64 v119; // [rsp+A8h] [rbp-1h]
  __int128 v120; // [rsp+B0h] [rbp+7h] BYREF
  __int128 v121[4]; // [rsp+C0h] [rbp+17h] BYREF
  int v122; // [rsp+110h] [rbp+67h]

  if ( *(_DWORD *)(a1 + 16) != -571548178 )
  {
    v71 = *(_DWORD *)(a1 + 116);
    v72 = v71 | a3;
    v101 = 0;
    v109 = 0LL;
    v73 = 0LL;
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    {
      v101 = 5;
LABEL_182:
      v18 = 0LL;
LABEL_183:
      NtCurrentTeb()->LastStatusValue = -1073741801;
      v92 = NtCurrentTeb();
      v92->LastErrorValue = RtlNtStatusToDosError(-1073741801);
      if ( (v72 & 4) != 0 )
      {
        v93 = a2;
        if ( v73 )
          v93 = v73;
        sub_1800F2E64(v93);
      }
LABEL_187:
      HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
      if ( HotpatchInformation && *HotpatchInformation )
        v95 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
      else
        v95 = 2147353472LL;
      if ( *(_BYTE *)v95
        && (NtCurrentPeb()->TracingFlags & 1) != 0
        && (*(_DWORD *)(a1 + 116) & 0x1000000) == 0
        && ((v72 & 0x61000000) == 0 || (v72 & 0x10000000) != 0)
        && v101 != 5 )
      {
        if ( !v18 )
          goto LABEL_204;
        v96 = (_BYTE *)(v18 - 16);
        _m_prefetchw((const void *)(v18 - 16));
        v97 = *(_BYTE *)(v18 - 16 + 15);
        v98 = v18 - 16;
        if ( v97 == 5 )
          v98 -= 16LL * (unsigned __int8)v96[14];
        if ( *(char *)(v98 + 15) < 0 )
          goto LABEL_204;
        _m_prefetchw(v96);
        if ( v97 == 5 )
          v96 -= 16 * (unsigned __int8)v96[14];
        if ( ((v96[10] ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 17))) & 8) == 0 )
LABEL_204:
          sub_1801030B4(a1, v18, a2);
      }
      if ( (dword_180166398 & 1) != 0 && (dword_180166398 & 2) != 0 )
      {
        if ( NtCurrentPeb()->ProcessHeap )
        {
          v121[0] = xmmword_1801638B0;
          if ( a1 != *(_QWORD *)sub_18004CC7C(v121) && v18 && (v72 & 0x10000000) == 0 )
            goto LABEL_211;
        }
      }
      return v18;
    }
    v74 = v71 & 0x1000000;
    if ( !v74 && !dword_18015F9B8 )
    {
      v75 = *(_QWORD *)(a1 + 392);
      v76 = v75;
      if ( (v75 || (v76 = qword_180163568) != 0) && a2 > v76 )
      {
        v77 = *(_QWORD *)(a1 + 400);
        if ( v77 )
          sub_18010A694(20, a1, 0, v77, a2, v75);
        v101 = 5;
        goto LABEL_182;
      }
    }
    v78 = *(_DWORD *)(a1 + 144);
    v122 = v78;
    if ( v78 )
    {
      if ( (v72 & 0x3C000102) != 0 || v74 )
      {
        v122 = 0;
      }
      else
      {
        if ( (int)sub_1800EFD34(v78, a1, 0, 1, (__int64)&v109) < 0 )
          goto LABEL_182;
        v79 = (v109 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        a2 += v79 + 16;
        v109 = v79 + 16;
      }
    }
    v80 = 1LL;
    if ( a2 )
      v80 = a2;
    v73 = (v80 + 23) & 0xFFFFFFFFFFFFFFF0uLL;
    v81 = v73 >> 4;
    if ( (v72 & 0x7D810F61) != 0 )
      goto LABEL_177;
    if ( a2 <= qword_1801627A0 && ((unsigned __int8)(1 << ((v73 >> 4) & 7)) & *(_BYTE *)((v73 >> 7) + a1 + 434)) != 0 )
    {
      v82 = *(_QWORD *)(a1 + 424);
      v83 = *(_QWORD *)(a1 + 408);
      v101 = 2;
      v18 = sub_18003B6C0(v83, *(unsigned __int16 *)(v82 + 2 * v81), a2, v72);
      if ( v18 )
      {
LABEL_179:
        if ( !v122 )
          goto LABEL_187;
        a2 -= v109;
        v91 = sub_1800F3190(a1, v72, v18, v84, v109, v122);
        v100 = v18;
        v18 = v91;
        if ( (int)sub_1800EFD34(v122, a1, v91, 2, v100) >= 0 )
          goto LABEL_187;
        RtlFreeHeap(a1, 0LL, v18);
        goto LABEL_182;
      }
    }
    v85 = *(__int64 **)(a1 + 312);
    if ( v81 < *((unsigned int *)v85 + 2) )
    {
LABEL_170:
      v87 = v73 >> 4;
    }
    else
    {
      while ( 1 )
      {
        v86 = (__int64 *)*v85;
        if ( !*v85 )
          break;
        v85 = (__int64 *)*v85;
        if ( v81 < *((unsigned int *)v86 + 2) )
          goto LABEL_170;
      }
      v87 = (unsigned int)(*((_DWORD *)v85 + 2) - 1);
    }
    if ( v87 >= *((unsigned int *)v85 + 2) || v81 != v87 )
    {
LABEL_177:
      v90 = 0LL;
    }
    else
    {
      v88 = v81 - *((unsigned int *)v85 + 6);
      v89 = 2 * v88;
      if ( !*((_DWORD *)v85 + 3) )
        v89 = v88;
      v90 = v85[6] + 8 * v89;
    }
    v18 = sub_18003C350(a1, v72 | 2, a2, v73, v90, (__int64)&v101);
    if ( !v18 )
      goto LABEL_183;
    goto LABEL_179;
  }
  if ( a3 )
  {
    if ( a3 == 8 )
    {
      v7 = 2;
    }
    else
    {
      v8 = a3 & 1 | 2;
      if ( (a3 & 8) == 0 )
        v8 = a3 & 1;
      v9 = v8 | 0x80000000;
      if ( (a3 & 4) == 0 )
        v9 = v8;
      v10 = v9 | 0x100;
      if ( (a3 & 0x100) == 0 )
        v10 = v9;
      v11 = a3 & 0xE00 | v10;
      if ( (a3 & 0xE00) == 0 )
        v11 = v10;
      v12 = v11 | 0x2000000;
      if ( (a3 & 0x10) == 0 )
        v12 = v11;
      v7 = v12 | 0x1000000;
      if ( (a3 & 2) == 0 )
        v7 = v12;
    }
  }
  else
  {
    v7 = 0;
  }
  v13 = *(_DWORD *)(a1 + 220);
  v14 = 0;
  if ( v13 )
    LOBYTE(v14) = v13 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v15 = v7 | 1;
  if ( !v14 )
    v15 = v7;
  v111 = v15;
  if ( (dword_18016273C & 2) != 0 )
  {
    v16 = 64LL;
    if ( a2 <= 0xFEFF8 )
      v16 = 16LL;
  }
  else
  {
    v16 = 0LL;
  }
  v17 = v16 + a2;
  v103 = v16;
  Size = v16 + a2;
  if ( v16 + a2 < a2 )
  {
    v18 = 0LL;
LABEL_133:
    NtCurrentTeb()->LastStatusValue = -1073741801;
    v70 = NtCurrentTeb();
    v70->LastErrorValue = RtlNtStatusToDosError(-1073741801);
    if ( v111 < 0 || *(int *)(a1 + 20) < 0 )
      sub_1800F2E64(a2);
    return v18;
  }
  v19 = (v15 | *(_DWORD *)(a1 + 20)) & 0x93000F0B;
  if ( dword_18015F9B8 || (v20 = *(_QWORD *)(a1 + 48)) == 0 && (v20 = qword_180163568) == 0 || v17 <= v20 )
  {
    v107 = 0;
    v23 = 0LL;
    v113 = 0LL;
    if ( (v19 & 0x1000000) == 0 )
    {
      v24 = *(_DWORD *)(a1 + 24);
      v107 = v24;
      if ( v24 )
      {
        v19 |= 8u;
        if ( (int)sub_1800EFD34(v24, a1, 0, 1, (__int64)&v113) < 0 )
        {
          v18 = 0LL;
          v22 = 0LL;
LABEL_123:
          v16 = v103;
          goto LABEL_124;
        }
        v23 = v113;
      }
    }
    v25 = v19 | 8;
    if ( !a4 )
      v25 = v19;
    v26 = v17 + v23;
    v106 = v25;
    v110 = v25 & 0x10000000;
    v27 = v26 + 16;
    if ( (v25 & 0x10000000) == 0 )
      v27 = v26;
    v108 = v25 & 0x20000F08;
    if ( (v25 & 0x20000F08) != 0 )
      v27 = ((v27 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
    v22 = 1LL;
    if ( v27 )
      v22 = v27;
    if ( v22 < v17 || v17 > 0x7FFFFFFFFFFFFFFFLL )
    {
      v18 = 0LL;
      goto LABEL_123;
    }
    v28 = v25 & 0x13000003;
    v29 = (unsigned int)*(unsigned __int16 *)(a1 + 892) - 16;
    v104 = v25 & 0x13000003;
    if ( v22 > v29 )
      goto LABEL_78;
    v30 = v22 + 2;
    if ( (_DWORD)v17 == (_DWORD)v22 )
      v30 = v22;
    v31 = a1 + 832;
    v32 = &byte_180120E60[(unsigned __int64)(unsigned int)(v30 + 15) >> 4];
    v33 = *v32;
    v114 = v33;
    if ( (*(_QWORD *)(a1 + 832 + 8 * v33 + 128) & 1) != 0 )
    {
      v34 = *v32;
      v35 = (volatile signed __int64 *)(a1 + 960 + 8 * v34);
      if ( (*v35 & 1) != 0 )
      {
        v36 = *v35;
        v112 = v36;
        v37 = v36;
        if ( (v36 & 1) != 0 )
        {
          v38 = v36 >> 16;
          LOWORD(v39) = WORD1(v36);
          do
          {
            if ( (v38 & 0x1F) > 0x10 )
              break;
            if ( (unsigned __int16)v39 > 0xFF00u )
              break;
            WORD1(v112) = WORD1(v36) + 33;
            v37 = v112;
            if ( v36 == _InterlockedCompareExchange64(v35, v112, v36) )
              break;
            v112 = *v35;
            v36 = v112;
            v39 = v112 >> 16;
            v37 = v112;
            LOBYTE(v38) = BYTE2(v112);
          }
          while ( (v112 & 1) != 0 );
          LODWORD(v17) = Size;
        }
        v40 = v37 >> 16;
        if ( (v40 & 0x1F) > 0x10 || (unsigned __int16)v40 > 0xFF00u )
        {
          sub_18004AFB0(a1 + 832, (unsigned int)v34);
          v33 = v114;
          v31 = a1 + 832;
        }
      }
      if ( (*v35 & 1) != 0 )
      {
        v18 = -1LL;
        goto LABEL_67;
      }
      v28 = v104;
    }
    v42 = *(unsigned __int8 *)(v31 + 56);
    v43 = *(_QWORD *)(v31 + 8 * v33 + 128);
    v115 = ((((unsigned int)dword_180163534 >> 10) & 1) + 2LL) << 6;
    v44 = v115 - (((_BYTE)v42 - 1) & 7) + v42 + 7;
    v116 = v44;
    if ( *(_BYTE *)(v43 + 2) == 1 )
    {
      v45 = 0;
    }
    else
    {
      v45 = *(_BYTE *)(v115 + BYTE1(NtCurrentTeb()->HeapVirtualAffinity) + v43);
      v44 = v116;
    }
    v46 = (void *)sub_18003E150(v31, v43, *(_QWORD *)(v44 + 8LL * v45 + v43), v17, v28);
    v18 = (__int64)v46;
    if ( v46 )
    {
      v47 = (v28 & 2) == 0;
      v41 = Size;
      if ( !v47 )
        memset(v46, 0, (unsigned int)Size);
      goto LABEL_68;
    }
LABEL_67:
    v41 = Size;
LABEL_68:
    if ( v18 != -1 )
      goto LABEL_89;
    v17 = Size;
    v28 = v104;
LABEL_78:
    if ( v22 > 0x20000 )
    {
      if ( v22 > *(unsigned int *)(a1 + 464) )
      {
        v49 = (void *)sub_1800508C8(a1, v17, v22, v28);
      }
      else
      {
        v48 = 448LL;
        if ( v22 <= *(unsigned int *)(a1 + 272) )
          v48 = 256LL;
        v49 = sub_180036D88(a1 + v48, v17, v22, v22, v28);
      }
      v18 = (__int64)v49;
    }
    else
    {
      v105 = 0;
      v117 = 0LL;
      v118 = 0LL;
      v119 = 0LL;
      v18 = (__int64)sub_180038840(a1 + 640, v17, v22, v28, (__int64)&v117, &v105);
      if ( v105 && (v28 & 1) == 0 )
      {
        RtlReleaseSRWLockExclusive(v118);
        v118 = 0LL;
      }
    }
    v41 = Size;
LABEL_89:
    if ( !v18 )
      goto LABEL_123;
    v50 = BYTE1(v106);
    if ( (v106 & 0x30000F08) == 0 )
      goto LABEL_123;
    v51 = v110;
    v52 = (_QWORD *)(v41 + v18);
    v53 = v113;
    if ( v110 )
    {
      *v52 = 0xABABABABABABABABuLL;
      v52[1] = 0xABABABABABABABABuLL;
    }
    v54 = 0LL;
    if ( !v108 )
    {
LABEL_120:
      v67 = v107;
      if ( v107 )
      {
        *(_BYTE *)(v54 + 2) &= 0xF0u;
        *(_BYTE *)(v54 + 2) |= v67 & 0xF;
        if ( (int)sub_1800EFD34(v67, a1, v18, 2, v54 + 16) < 0 )
        {
          RtlFreeHeap(a1, 0LL, v18);
          v18 = 0LL;
        }
      }
      goto LABEL_123;
    }
    v55 = v52 + 2;
    if ( !v51 )
      v55 = v52;
    v54 = ((unsigned __int64)v55 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    *(_QWORD *)v54 = 0LL;
    *(_QWORD *)(v54 + 8) = 0LL;
    *(_BYTE *)(v54 + 2) &= 0xFu;
    *(_BYTE *)(v54 + 3) = v53 >> 4;
    *(_BYTE *)(v54 + 2) |= 16 * (v50 & 0xFE);
    *(_WORD *)v54 = a4;
    v108 = 1;
    if ( (_WORD)v18 )
    {
      v57 = 0;
    }
    else
    {
      v56 = sub_1800515E8(&unk_180166A60, 2 * ((unsigned __int64)(v18 - qword_180166A58) >> 20));
      if ( !v56 || (v57 = v56 - 1, v57 == 2) )
      {
        sub_180084338(a1, v18, v106);
        goto LABEL_120;
      }
    }
    v58 = 192LL * v57;
    v59 = v58 + a1 + 256;
    if ( (dword_18016273C & 1) != 0 )
    {
      v61 = sub_18010B150(v58 + a1 + 256, v18);
    }
    else
    {
      v60 = *(_QWORD *)v59 & v18;
      if ( (qword_180163540 ^ v59 ^ v60 ^ *(_QWORD *)(v60 + 0x10)) == 0xA2E64EADA2E64EADuLL )
        v61 = v60 + 32 * ((unsigned __int64)(unsigned int)(v18 - v60) >> *(_BYTE *)(v59 + 8));
      else
        v61 = 0LL;
    }
    if ( v61 )
    {
      v62 = *(_BYTE *)(v61 + 24);
      if ( (v62 & 1) != 0 )
      {
        if ( (v62 & 2) != 0 )
        {
          if ( (v62 & 0xCu) >= 8 || (((1 << *(_BYTE *)(v59 + 8)) - 1) & (unsigned __int64)v18) == 0 )
            goto LABEL_115;
        }
        else
        {
          v61 += -32LL * *(unsigned __int8 *)(v61 + 31);
          v63 = *(_BYTE *)(v61 + 24);
          if ( (v63 & 3) == 3 && (v63 & 0xCu) >= 8 )
            goto LABEL_115;
        }
      }
    }
    v61 = 0LL;
LABEL_115:
    v64 = *(unsigned __int8 *)(v61 + 24);
    LOBYTE(v64) = v64 & 0xC;
    if ( (unsigned __int8)v64 < 8u )
    {
      *(_WORD *)(v61 + 8) |= 1u;
    }
    else
    {
      v65 = ((v61 - (*(_QWORD *)v59 & v61)) >> 5 << *(_BYTE *)(v59 + 8)) + (*(_QWORD *)v59 & v61);
      if ( (_BYTE)v64 == 8 )
      {
        v66 = (unsigned __int16)qword_180163548 ^ *(unsigned __int16 *)(v65 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)v65 >> 12);
        *(_WORD *)(v66 + v18 - 2) |= 0x4000u;
      }
      else
      {
        sub_180068E3C(*(_QWORD *)(v59 + 32), v18, v64, v65);
      }
    }
    goto LABEL_120;
  }
  v21 = *(_QWORD *)(a1 + 56);
  if ( v21 )
    sub_18010A694(20, a1, 0, v21, v16 + a2, *(_QWORD *)(a1 + 48));
  v18 = 0LL;
  v22 = 0LL;
LABEL_124:
  v68 = NtCurrentPeb()->HotpatchInformation;
  if ( v68 && *v68 )
    v69 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
  else
    v69 = 2147353472LL;
  if ( *(_BYTE *)v69 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    sub_1801030B4(a1, v18, v22);
  if ( !v18 )
    goto LABEL_133;
  if ( (dword_18016273C & 2) != 0 )
  {
    *(_QWORD *)(v18 + v16 - 16) = v16;
    if ( v16 > 0x10 )
      *(_QWORD *)v18 = v16;
    v18 += v16;
  }
  if ( (dword_180166398 & 1) != 0 && (dword_180166398 & 2) != 0 )
  {
    if ( NtCurrentPeb()->ProcessHeap )
    {
      v120 = xmmword_1801638B0;
      if ( a1 != *(_QWORD *)sub_18004CC7C(&v120) )
LABEL_211:
        sub_180101B5C(a1, v18);
    }
  }
  return v18;
}
