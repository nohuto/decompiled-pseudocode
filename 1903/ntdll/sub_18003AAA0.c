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

__int64 __fastcall sub_18003AAA0(unsigned __int16 *HeapHandle, unsigned __int64 a2, int a3, __int16 a4)
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
  int v28; // ebx
  unsigned __int64 v29; // rax
  int v30; // eax
  char *v31; // r11
  unsigned __int8 *v32; // rcx
  __int64 v33; // r9
  volatile signed __int64 *v34; // rbx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // rcx
  size_t v40; // rbx
  __int64 v41; // rcx
  void *v42; // rax
  bool v43; // zf
  __int64 v44; // rcx
  void *v45; // rax
  char v46; // dh
  int v47; // r8d
  _QWORD *v48; // rax
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rbx
  _QWORD *v51; // rbx
  __int64 v52; // rax
  int v53; // eax
  __int64 v54; // rcx
  unsigned __int64 v55; // r15
  __int64 v56; // r8
  __int64 v57; // rdx
  char v58; // al
  char v59; // cl
  __int64 v60; // r8
  __int64 v61; // r9
  unsigned __int64 v62; // rcx
  int v63; // ecx
  PSILO_USER_SHARED_DATA v64; // rcx
  __int64 v65; // rcx
  struct _TEB *v66; // rbx
  int v67; // edx
  unsigned int v68; // r15d
  unsigned __int64 v69; // r13
  int v70; // edx
  __int64 v71; // rcx
  unsigned __int64 v72; // rax
  __int64 v73; // r9
  int v74; // ecx
  unsigned __int64 v75; // rcx
  __int64 v76; // r13
  unsigned __int64 v77; // rbx
  __int64 v78; // rax
  __int64 v79; // rcx
  int v80; // r9d
  __int64 *v81; // rdx
  __int64 *v82; // rax
  unsigned __int64 v83; // rcx
  __int64 v84; // rbx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // rax
  struct _TEB *v88; // rbx
  unsigned __int64 v89; // rcx
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 UserModeGlobalLogger; // rcx
  _BYTE *v92; // rdx
  char v93; // r8
  __int64 v94; // rcx
  __int64 v96; // [rsp+20h] [rbp-89h]
  __int64 v97; // [rsp+30h] [rbp-79h] BYREF
  size_t Size; // [rsp+38h] [rbp-71h]
  unsigned __int64 v99; // [rsp+40h] [rbp-69h]
  int v100; // [rsp+48h] [rbp-61h]
  int v101; // [rsp+4Ch] [rbp-5Dh] BYREF
  unsigned int v102; // [rsp+50h] [rbp-59h]
  int v103; // [rsp+54h] [rbp-55h]
  int v104; // [rsp+58h] [rbp-51h]
  unsigned __int64 v105; // [rsp+60h] [rbp-49h] BYREF
  int v106; // [rsp+68h] [rbp-41h]
  int v107; // [rsp+6Ch] [rbp-3Dh]
  unsigned __int64 v108; // [rsp+70h] [rbp-39h]
  unsigned __int64 v109; // [rsp+78h] [rbp-31h] BYREF
  __int64 v110; // [rsp+80h] [rbp-29h]
  __int64 v111; // [rsp+88h] [rbp-21h]
  __int64 v112; // [rsp+90h] [rbp-19h]
  __int64 v113; // [rsp+98h] [rbp-11h] BYREF
  PRTL_SRWLOCK SRWLock; // [rsp+A0h] [rbp-9h]
  __int64 v115; // [rsp+A8h] [rbp-1h]
  __int128 v116; // [rsp+B0h] [rbp+7h] BYREF
  __int128 v117[4]; // [rsp+C0h] [rbp+17h] BYREF
  int v118; // [rsp+110h] [rbp+67h]

  if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
  {
    v67 = *((_DWORD *)HeapHandle + 29);
    v68 = v67 | a3;
    LODWORD(v97) = 0;
    v105 = 0LL;
    v69 = 0LL;
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    {
      LODWORD(v97) = 5;
LABEL_178:
      v18 = 0LL;
LABEL_179:
      NtCurrentTeb()->LastStatusValue = -1073741801;
      v88 = NtCurrentTeb();
      v88->LastErrorValue = RtlNtStatusToDosError(-1073741801);
      if ( (v68 & 4) != 0 )
      {
        v89 = a2;
        if ( v69 )
          v89 = v69;
        sub_1800F2E64(v89);
      }
LABEL_183:
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && SharedData->ServiceSessionId )
        UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      else
        UserModeGlobalLogger = 2147353472LL;
      if ( *(_BYTE *)UserModeGlobalLogger
        && (NtCurrentPeb()->TracingFlags & 1) != 0
        && (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0
        && ((v68 & 0x61000000) == 0 || (v68 & 0x10000000) != 0)
        && (_DWORD)v97 != 5 )
      {
        if ( !v18 )
          goto LABEL_200;
        v92 = (_BYTE *)(v18 - 16);
        _m_prefetchw((const void *)(v18 - 16));
        v93 = *(_BYTE *)(v18 - 16 + 15);
        v94 = v18 - 16;
        if ( v93 == 5 )
          v94 -= 16LL * (unsigned __int8)v92[14];
        if ( *(char *)(v94 + 15) < 0 )
          goto LABEL_200;
        _m_prefetchw(v92);
        if ( v93 == 5 )
          v92 -= 16 * (unsigned __int8)v92[14];
        if ( ((v92[10] ^ (unsigned __int8)(HeapHandle[69] & (*((_DWORD *)HeapHandle + 31) >> 17))) & 8) == 0 )
LABEL_200:
          sub_1801030B4(HeapHandle, v18, a2);
      }
      if ( (dword_180166398 & 1) != 0 && (dword_180166398 & 2) != 0 )
      {
        if ( NtCurrentPeb()->ProcessHeap )
        {
          v117[0] = xmmword_1801638B0;
          if ( HeapHandle != *(unsigned __int16 **)sub_18004CC7C(v117) && v18 && (v68 & 0x10000000) == 0 )
            goto LABEL_207;
        }
      }
      return v18;
    }
    v70 = v67 & 0x1000000;
    if ( !v70 && !dword_18015F9B8 )
    {
      v71 = *((_QWORD *)HeapHandle + 49);
      v72 = v71;
      if ( (v71 || (v72 = qword_180163568) != 0) && a2 > v72 )
      {
        v73 = *((_QWORD *)HeapHandle + 50);
        if ( v73 )
          sub_18010A694(20, (_DWORD)HeapHandle, 0, v73, a2, v71);
        LODWORD(v97) = 5;
        goto LABEL_178;
      }
    }
    v74 = *((_DWORD *)HeapHandle + 36);
    v118 = v74;
    if ( v74 )
    {
      if ( (v68 & 0x3C000102) != 0 || v70 )
      {
        v118 = 0;
      }
      else
      {
        if ( (int)sub_1800EFD34(v74, (_DWORD)HeapHandle, 0, 1, (__int64)&v105) < 0 )
          goto LABEL_178;
        v75 = (v105 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        a2 += v75 + 16;
        v105 = v75 + 16;
      }
    }
    v76 = 1LL;
    if ( a2 )
      v76 = a2;
    v69 = (v76 + 23) & 0xFFFFFFFFFFFFFFF0uLL;
    v77 = v69 >> 4;
    if ( (v68 & 0x7D810F61) != 0 )
      goto LABEL_173;
    if ( a2 <= qword_1801627A0
      && ((unsigned __int8)(1 << ((v69 >> 4) & 7)) & *((_BYTE *)HeapHandle + (v69 >> 7) + 434)) != 0 )
    {
      v78 = *((_QWORD *)HeapHandle + 53);
      v79 = *((_QWORD *)HeapHandle + 51);
      LODWORD(v97) = 2;
      v18 = sub_18003B6C0(v79, *(unsigned __int16 *)(v78 + 2 * v77), a2, v68);
      if ( v18 )
      {
LABEL_175:
        if ( !v118 )
          goto LABEL_183;
        a2 -= v105;
        v87 = sub_1800F3190((_DWORD)HeapHandle, v68, v18, v80, v105, v118);
        v96 = v18;
        v18 = v87;
        if ( (int)sub_1800EFD34(v118, (_DWORD)HeapHandle, v87, 2, v96) >= 0 )
          goto LABEL_183;
        RtlFreeHeap(HeapHandle, 0, (PVOID)v18);
        goto LABEL_178;
      }
    }
    v81 = (__int64 *)*((_QWORD *)HeapHandle + 39);
    if ( v77 < *((unsigned int *)v81 + 2) )
    {
LABEL_166:
      v83 = v69 >> 4;
    }
    else
    {
      while ( 1 )
      {
        v82 = (__int64 *)*v81;
        if ( !*v81 )
          break;
        v81 = (__int64 *)*v81;
        if ( v77 < *((unsigned int *)v82 + 2) )
          goto LABEL_166;
      }
      v83 = (unsigned int)(*((_DWORD *)v81 + 2) - 1);
    }
    if ( v83 >= *((unsigned int *)v81 + 2) || v77 != v83 )
    {
LABEL_173:
      v86 = 0LL;
    }
    else
    {
      v84 = v77 - *((unsigned int *)v81 + 6);
      v85 = 2 * v84;
      if ( !*((_DWORD *)v81 + 3) )
        v85 = v84;
      v86 = v81[6] + 8 * v85;
    }
    v18 = sub_18003C350((int)HeapHandle, v86, (__int64)&v97);
    if ( !v18 )
      goto LABEL_179;
    goto LABEL_175;
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
  v13 = *((_DWORD *)HeapHandle + 55);
  v14 = 0;
  if ( v13 )
    LOBYTE(v14) = v13 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v15 = v7 | 1;
  if ( !v14 )
    v15 = v7;
  v107 = v15;
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
  v99 = v16;
  Size = v16 + a2;
  if ( v16 + a2 < a2 )
  {
    v18 = 0LL;
LABEL_129:
    NtCurrentTeb()->LastStatusValue = -1073741801;
    v66 = NtCurrentTeb();
    v66->LastErrorValue = RtlNtStatusToDosError(-1073741801);
    if ( v107 < 0 || *((int *)HeapHandle + 5) < 0 )
      sub_1800F2E64(a2);
    return v18;
  }
  v19 = (v15 | *((_DWORD *)HeapHandle + 5)) & 0x93000F0B;
  if ( dword_18015F9B8 || (v20 = *((_QWORD *)HeapHandle + 6)) == 0 && (v20 = qword_180163568) == 0 || v17 <= v20 )
  {
    v103 = 0;
    v23 = 0LL;
    v109 = 0LL;
    if ( (v19 & 0x1000000) == 0 )
    {
      v24 = *((_DWORD *)HeapHandle + 6);
      v103 = v24;
      if ( v24 )
      {
        v19 |= 8u;
        if ( (int)sub_1800EFD34(v24, (_DWORD)HeapHandle, 0, 1, (__int64)&v109) < 0 )
        {
          v18 = 0LL;
          v22 = 0LL;
LABEL_119:
          v16 = v99;
          goto LABEL_120;
        }
        v23 = v109;
      }
    }
    v25 = v19 | 8;
    if ( !a4 )
      v25 = v19;
    v26 = v17 + v23;
    v102 = v25;
    v106 = v25 & 0x10000000;
    v27 = v26 + 16;
    if ( (v25 & 0x10000000) == 0 )
      v27 = v26;
    v104 = v25 & 0x20000F08;
    if ( (v25 & 0x20000F08) != 0 )
      v27 = ((v27 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
    v22 = 1LL;
    if ( v27 )
      v22 = v27;
    if ( v22 < v17 || v17 > 0x7FFFFFFFFFFFFFFFLL )
    {
      v18 = 0LL;
      goto LABEL_119;
    }
    v28 = v25 & 0x13000003;
    v29 = (unsigned int)HeapHandle[446] - 16;
    v100 = v25 & 0x13000003;
    if ( v22 > v29 )
      goto LABEL_74;
    v30 = v22 + 2;
    if ( (_DWORD)v17 == (_DWORD)v22 )
      v30 = v22;
    v31 = (char *)(HeapHandle + 416);
    v32 = &byte_180120E60[(unsigned __int64)(unsigned int)(v30 + 15) >> 4];
    v110 = *v32;
    if ( (*(_QWORD *)&HeapHandle[4 * v110 + 480] & 1) != 0 )
    {
      v33 = *v32;
      v34 = (volatile signed __int64 *)&HeapHandle[4 * v33 + 480];
      if ( (*v34 & 1) != 0 )
      {
        v35 = *v34;
        v108 = v35;
        v36 = v35;
        if ( (v35 & 1) != 0 )
        {
          v37 = v35 >> 16;
          LOWORD(v38) = WORD1(v35);
          do
          {
            if ( (v37 & 0x1F) > 0x10 )
              break;
            if ( (unsigned __int16)v38 > 0xFF00u )
              break;
            WORD1(v108) = WORD1(v35) + 33;
            v36 = v108;
            if ( v35 == _InterlockedCompareExchange64(v34, v108, v35) )
              break;
            v108 = *v34;
            v35 = v108;
            v38 = v108 >> 16;
            v36 = v108;
            LOBYTE(v37) = BYTE2(v108);
          }
          while ( (v108 & 1) != 0 );
        }
        v39 = v36 >> 16;
        if ( (v39 & 0x1F) > 0x10 || (unsigned __int16)v39 > 0xFF00u )
        {
          sub_18004AFB0(HeapHandle + 416, (unsigned int)v33);
          v31 = (char *)(HeapHandle + 416);
        }
      }
      if ( (*v34 & 1) != 0 )
      {
        v18 = -1LL;
        goto LABEL_66;
      }
      v28 = v100;
    }
    v41 = (unsigned __int8)v31[56];
    v111 = ((((unsigned int)dword_180163534 >> 10) & 1) + 2LL) << 6;
    v112 = v111 - (((_BYTE)v41 - 1) & 7) + v41 + 7;
    v42 = (void *)sub_18003E150((__int64)v31, v28);
    v18 = (__int64)v42;
    if ( v42 )
    {
      v43 = (v28 & 2) == 0;
      v40 = Size;
      if ( !v43 )
        memset(v42, 0, (unsigned int)Size);
      goto LABEL_67;
    }
LABEL_66:
    v40 = Size;
LABEL_67:
    if ( v18 != -1 )
      goto LABEL_85;
    v17 = Size;
    v28 = v100;
LABEL_74:
    if ( v22 > 0x20000 )
    {
      if ( v22 > *((unsigned int *)HeapHandle + 116) )
      {
        v45 = (void *)sub_1800508C8(HeapHandle);
      }
      else
      {
        v44 = 224LL;
        if ( v22 <= *((unsigned int *)HeapHandle + 68) )
          v44 = 128LL;
        v45 = sub_180036D88((__int64)&HeapHandle[v44], v17, v22, v22, v28);
      }
      v18 = (__int64)v45;
    }
    else
    {
      v101 = 0;
      v113 = 0LL;
      SRWLock = 0LL;
      v115 = 0LL;
      v18 = (__int64)sub_180038840((PRTL_SRWLOCK)HeapHandle + 80, v17, v22, v28, (__int64)&v113, &v101);
      if ( v101 && (v28 & 1) == 0 )
      {
        RtlReleaseSRWLockExclusive(SRWLock);
        SRWLock = 0LL;
      }
    }
    v40 = Size;
LABEL_85:
    if ( !v18 )
      goto LABEL_119;
    v46 = BYTE1(v102);
    if ( (v102 & 0x30000F08) == 0 )
      goto LABEL_119;
    v47 = v106;
    v48 = (_QWORD *)(v40 + v18);
    v49 = v109;
    if ( v106 )
    {
      *v48 = 0xABABABABABABABABuLL;
      v48[1] = 0xABABABABABABABABuLL;
    }
    v50 = 0LL;
    if ( !v104 )
    {
LABEL_116:
      v63 = v103;
      if ( v103 )
      {
        *(_BYTE *)(v50 + 2) &= 0xF0u;
        *(_BYTE *)(v50 + 2) |= v63 & 0xF;
        if ( (int)sub_1800EFD34(v63, (_DWORD)HeapHandle, v18, 2, v50 + 16) < 0 )
        {
          RtlFreeHeap(HeapHandle, 0, (PVOID)v18);
          v18 = 0LL;
        }
      }
      goto LABEL_119;
    }
    v51 = v48 + 2;
    if ( !v47 )
      v51 = v48;
    v50 = ((unsigned __int64)v51 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    *(_QWORD *)v50 = 0LL;
    *(_QWORD *)(v50 + 8) = 0LL;
    *(_BYTE *)(v50 + 2) &= 0xFu;
    *(_BYTE *)(v50 + 3) = v49 >> 4;
    *(_BYTE *)(v50 + 2) |= 16 * (v46 & 0xFE);
    *(_WORD *)v50 = a4;
    v104 = 1;
    if ( (_WORD)v18 )
    {
      v53 = 0;
    }
    else
    {
      v52 = sub_1800515E8(&qword_180166A60, 2 * ((unsigned __int64)(v18 - qword_180166A58) >> 20));
      if ( !v52 || (v53 = v52 - 1, v53 == 2) )
      {
        sub_180084338(HeapHandle, v18, v102);
        goto LABEL_116;
      }
    }
    v54 = 96LL * v53;
    v55 = (unsigned __int64)&HeapHandle[v54 + 128];
    if ( (dword_18016273C & 1) != 0 )
    {
      v57 = sub_18010B150(&HeapHandle[v54 + 128], v18);
    }
    else
    {
      v56 = *(_QWORD *)v55 & v18;
      if ( (qword_180163540 ^ v55 ^ v56 ^ *(_QWORD *)(v56 + 0x10)) == 0xA2E64EADA2E64EADuLL )
        v57 = v56 + 32 * ((unsigned __int64)(unsigned int)(v18 - v56) >> *(_BYTE *)(v55 + 8));
      else
        v57 = 0LL;
    }
    if ( v57 )
    {
      v58 = *(_BYTE *)(v57 + 24);
      if ( (v58 & 1) != 0 )
      {
        if ( (v58 & 2) != 0 )
        {
          if ( (v58 & 0xCu) >= 8 || (((1 << *(_BYTE *)(v55 + 8)) - 1) & (unsigned __int64)v18) == 0 )
            goto LABEL_111;
        }
        else
        {
          v57 += -32LL * *(unsigned __int8 *)(v57 + 31);
          v59 = *(_BYTE *)(v57 + 24);
          if ( (v59 & 3) == 3 && (v59 & 0xCu) >= 8 )
            goto LABEL_111;
        }
      }
    }
    v57 = 0LL;
LABEL_111:
    v60 = *(unsigned __int8 *)(v57 + 24);
    LOBYTE(v60) = v60 & 0xC;
    if ( (unsigned __int8)v60 < 8u )
    {
      *(_WORD *)(v57 + 8) |= 1u;
    }
    else
    {
      v61 = ((v57 - (*(_QWORD *)v55 & v57)) >> 5 << *(_BYTE *)(v55 + 8)) + (*(_QWORD *)v55 & v57);
      if ( (_BYTE)v60 == 8 )
      {
        v62 = (unsigned __int16)qword_180163548 ^ *(unsigned __int16 *)(v61 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)v61 >> 12);
        *(_WORD *)(v62 + v18 - 2) |= 0x4000u;
      }
      else
      {
        sub_180068E3C(*(_QWORD *)(v55 + 32), v18, v60, v61);
      }
    }
    goto LABEL_116;
  }
  v21 = *((_QWORD *)HeapHandle + 7);
  if ( v21 )
    sub_18010A694(20, (_DWORD)HeapHandle, 0, v21, v16 + a2, *((_QWORD *)HeapHandle + 6));
  v18 = 0LL;
  v22 = 0LL;
LABEL_120:
  v64 = NtCurrentPeb()->SharedData;
  if ( v64 && v64->ServiceSessionId )
    v65 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    v65 = 2147353472LL;
  if ( *(_BYTE *)v65 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    sub_1801030B4(HeapHandle, v18, v22);
  if ( !v18 )
    goto LABEL_129;
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
      v116 = xmmword_1801638B0;
      if ( HeapHandle != *(unsigned __int16 **)sub_18004CC7C(&v116) )
LABEL_207:
        sub_180101B5C(HeapHandle, v18);
    }
  }
  return v18;
}
