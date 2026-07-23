/*
 * XREFs of sub_180043550 @ 0x180043550
 * Callers:
 *     sub_180043280 @ 0x180043280 (sub_180043280.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_1800445F8 @ 0x1800445F8 (sub_1800445F8.c)
 *     sub_180046728 @ 0x180046728 (sub_180046728.c)
 *     RtlTryEnterCriticalSection @ 0x180046C20 (RtlTryEnterCriticalSection.c)
 *     sub_180048120 @ 0x180048120 (sub_180048120.c)
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     sub_18006E8DC @ 0x18006E8DC (sub_18006E8DC.c)
 *     sub_18007A0D4 @ 0x18007A0D4 (sub_18007A0D4.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800F12BC @ 0x1800F12BC (sub_1800F12BC.c)
 *     sub_180101024 @ 0x180101024 (sub_180101024.c)
 *     sub_180103570 @ 0x180103570 (sub_180103570.c)
 *     sub_1801055A0 @ 0x1801055A0 (sub_1801055A0.c)
 *     sub_180106190 @ 0x180106190 (sub_180106190.c)
 *     sub_18010A580 @ 0x18010A580 (sub_18010A580.c)
 *     sub_18010A694 @ 0x18010A694 (sub_18010A694.c)
 */

char *__fastcall sub_180043550(unsigned __int16 *HeapHandle, int a2, char *a3, SIZE_T a4)
{
  __int64 v7; // rdi
  struct _TEB *v8; // rdi
  NTSTATUS v9; // ecx
  char *v11; // rbx
  unsigned __int16 *v12; // r8
  char *v13; // r10
  int *v14; // rdx
  unsigned __int64 v15; // r9
  unsigned int v16; // ecx
  __int64 v17; // rax
  unsigned __int16 v18; // r8
  char v19; // cl
  unsigned __int64 v20; // rdx
  unsigned __int16 v21; // ax
  int v22; // eax
  size_t v23; // rdi
  PVOID Heap; // rax
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 UserModeGlobalLogger; // rcx
  PVOID v27; // rdi
  int v28; // esi
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  struct _TEB *v31; // rdi
  int v32; // edx
  unsigned __int16 *v33; // r8
  unsigned __int64 v34; // r12
  __int64 **v35; // rcx
  _BYTE *v36; // rdx
  char v37; // cl
  struct _TEB *v38; // rdi
  int v39; // ecx
  unsigned __int64 v40; // rcx
  int v41; // ecx
  _WORD *v42; // rcx
  __int64 v43; // r15
  SIZE_T v44; // r9
  SIZE_T v45; // rsi
  SIZE_T v46; // rax
  __int64 v47; // r8
  unsigned __int64 v48; // rdx
  char *v49; // rbx
  __int64 v50; // rcx
  int v51; // edi
  unsigned __int8 v52; // al
  unsigned __int16 *v53; // rdx
  unsigned __int64 v54; // rax
  ULONG v55; // esi
  char v56; // al
  __int16 v57; // cx
  unsigned __int8 v58; // al
  _DWORD *v59; // rdi
  char *v60; // r12
  char *v61; // r15
  int v62; // edx
  _QWORD *v63; // rdx
  int v64; // edi
  __int64 v65; // rax
  __int64 v66; // rdx
  size_t v67; // rcx
  PSILO_USER_SHARED_DATA v68; // rcx
  __int64 v69; // rcx
  char *v70; // rdi
  char v71; // [rsp+40h] [rbp-138h]
  char *v72; // [rsp+48h] [rbp-130h]
  char *v73; // [rsp+48h] [rbp-130h]
  unsigned __int64 v74; // [rsp+50h] [rbp-128h]
  unsigned __int64 v75; // [rsp+58h] [rbp-120h]
  int v76; // [rsp+60h] [rbp-118h]
  SIZE_T v77; // [rsp+60h] [rbp-118h]
  __int16 v78[4]; // [rsp+70h] [rbp-108h]
  PVOID v79; // [rsp+80h] [rbp-F8h]
  char *v80; // [rsp+88h] [rbp-F0h]
  _BYTE *v81; // [rsp+98h] [rbp-E0h]
  __int64 v82; // [rsp+A0h] [rbp-D8h]
  _QWORD *v83; // [rsp+A0h] [rbp-D8h]
  int v84; // [rsp+A8h] [rbp-D0h]
  unsigned __int64 v85; // [rsp+B0h] [rbp-C8h] BYREF
  unsigned __int64 v86; // [rsp+B8h] [rbp-C0h]
  const void *v87[2]; // [rsp+C0h] [rbp-B8h] BYREF
  char *v88; // [rsp+D0h] [rbp-A8h]
  _WORD *v89; // [rsp+D8h] [rbp-A0h]
  ULONG NtGlobalFlag; // [rsp+E0h] [rbp-98h]
  ULONG v91; // [rsp+E4h] [rbp-94h]
  ULONG v92; // [rsp+E8h] [rbp-90h]
  SIZE_T v93; // [rsp+F0h] [rbp-88h]
  __int64 v94; // [rsp+F8h] [rbp-80h]
  unsigned __int16 *v95; // [rsp+100h] [rbp-78h]
  __int64 v96; // [rsp+108h] [rbp-70h]
  int v97; // [rsp+110h] [rbp-68h]
  char *v98; // [rsp+118h] [rbp-60h]
  int v99; // [rsp+128h] [rbp-50h]
  int v100; // [rsp+138h] [rbp-40h]
  int v102; // [rsp+188h] [rbp+10h]
  char *Src; // [rsp+190h] [rbp+18h]

  Src = a3;
  v7 = 0LL;
  v80 = 0LL;
  v71 = 0;
  v88 = 0LL;
  if ( !a3 )
  {
    NtCurrentTeb()->LastStatusValue = 0;
    v8 = NtCurrentTeb();
    v9 = 0;
LABEL_3:
    v8->LastErrorValue = RtlNtStatusToDosError(v9);
    return 0LL;
  }
  v11 = a3 - 16;
  _m_prefetchw(a3 - 16);
  v12 = (unsigned __int16 *)v11;
  if ( v11[15] == 5 )
  {
    v12 = (unsigned __int16 *)&v11[-16 * (unsigned __int8)v11[14]];
    v72 = (char *)v12;
  }
  else
  {
    v72 = Src - 16;
  }
  if ( *((_BYTE *)HeapHandle + 418) == 2 )
  {
    if ( *((_QWORD *)HeapHandle + 51) )
    {
      v13 = (char *)v12 + 15;
      if ( *((char *)v12 + 15) < 0 )
      {
        if ( (a2 & 0x10) != 0 )
          return 0LL;
        v14 = (int *)(v12 + 4);
        v15 = (unsigned __int64)v12 >> 4;
        v16 = qword_180166580 ^ ((unsigned __int64)v12 >> 4) ^ *((_DWORD *)v12 + 2) ^ (unsigned int)HeapHandle;
        if ( (_WORD)v16 )
          v17 = 0LL;
        else
          v17 = *(_QWORD *)((char *)v12 - (v16 >> 12));
        v18 = *(_WORD *)(v17 + 36);
        v19 = *v13;
        if ( *v13 == 5 )
        {
          v20 = *((unsigned __int16 *)v72 + 6) ^ (unsigned __int64)HeapHandle[70];
        }
        else if ( (v19 & 0x40) != 0 )
        {
          v20 = *(unsigned __int16 *)&v72[16 * (v19 & 0x3F) + 12];
        }
        else if ( (v19 & 0x3F) == 0x3F )
        {
          if ( v19 >= 0 )
          {
            if ( *((_DWORD *)HeapHandle + 31) )
            {
              v22 = *v14;
              v97 = v22;
              if ( (v22 & *((_DWORD *)HeapHandle + 31)) != 0 )
                v97 = *((_DWORD *)HeapHandle + 34) ^ v22;
              v21 = v97;
            }
            else
            {
              v21 = *(_WORD *)v14;
            }
          }
          else
          {
            if ( !((unsigned __int16)qword_180166580 ^ (unsigned __int16)(v15 ^ *(_WORD *)v14 ^ (unsigned __int16)HeapHandle)) )
              v7 = *(_QWORD *)&v72[-(((unsigned int)qword_180166580 ^ (unsigned int)v15 ^ *v14 ^ (unsigned int)HeapHandle) >> 12)];
            v21 = *(_WORD *)(v7 + 36);
          }
          v20 = *(_QWORD *)&v72[16 * v21];
        }
        else
        {
          v20 = v19 & 0x3F;
        }
        v23 = 16LL * v18 - v20;
        v76 = 16 * v18 - v20;
        Heap = RtlAllocateHeap(HeapHandle, a2 & 0xC003FFFF, a4);
        v79 = Heap;
        if ( Heap )
        {
          if ( a4 < v23 )
            v23 = a4;
          memmove(Heap, Src, v23);
          RtlFreeHeap(HeapHandle, a2 & 0xC003FFFF, Src);
        }
        SharedData = NtCurrentPeb()->SharedData;
        if ( SharedData && SharedData->ServiceSessionId )
          UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
        else
          UserModeGlobalLogger = 2147353472LL;
        if ( !*(_BYTE *)UserModeGlobalLogger || (NtCurrentPeb()->TracingFlags & 1) == 0 )
          return (char *)v79;
        v27 = v79;
        if ( v79 )
        {
          sub_180103570((_DWORD)HeapHandle, (_DWORD)v79, (_DWORD)Src, v76, a4, 2);
          return (char *)v79;
        }
        return (char *)v27;
      }
    }
  }
  if ( v12 == HeapHandle )
  {
    sub_18010A694(9, (_DWORD)HeapHandle, (_DWORD)v12, 0, 0LL, 0LL);
    return 0LL;
  }
  v28 = *((_DWORD *)HeapHandle + 29) | a2;
  v102 = v28;
  if ( (v28 & 0x61000000) != 0 && (v28 & 0x10000000) == 0 )
    return (char *)sub_1801055A0(HeapHandle);
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
  {
    NtCurrentTeb()->LastStatusValue = -1073741801;
    v8 = NtCurrentTeb();
    v9 = -1073741801;
    goto LABEL_3;
  }
  v29 = a4;
  if ( !a4 )
    v29 = 1LL;
  v30 = *((_QWORD *)HeapHandle + 33) & (*((_QWORD *)HeapHandle + 32) + v29);
  if ( v30 < 0x20 )
    v30 = 32LL;
  v74 = v30;
  LODWORD(v77) = 0;
  if ( (v28 & 1) == 0 )
  {
    if ( RtlTryEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44)) )
    {
      ++*((_DWORD *)HeapHandle + 154);
    }
    else
    {
      if ( byte_180165408 )
      {
        NtCurrentTeb()->LastStatusValue = -1073741420;
        v31 = NtCurrentTeb();
        v31->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        goto LABEL_193;
      }
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      sub_18007A0D4(HeapHandle, 1LL);
    }
    v71 = 1;
    v28 ^= 1u;
    v102 = v28;
  }
  _m_prefetchw(v11);
  if ( v11[15] == 5 )
    v11 -= 16 * (unsigned __int8)v11[14];
  v73 = v11;
  if ( *((_DWORD *)HeapHandle + 31) )
  {
    v32 = *((_DWORD *)v11 + 2) ^ *((_DWORD *)HeapHandle + 34);
    *((_DWORD *)v11 + 2) = v32;
    if ( HIBYTE(v32) != ((unsigned __int8)v32 ^ (unsigned __int8)(BYTE1(v32) ^ BYTE2(v32))) )
      sub_180101024(HeapHandle, v11);
  }
  v80 = v11;
  v33 = (unsigned __int16 *)(v11 + 8);
  v89 = v11 + 8;
  v34 = *((unsigned __int16 *)v11 + 4);
  v35 = (__int64 **)*((_QWORD *)HeapHandle + 39);
  do
  {
    if ( v34 < *((unsigned int *)v35 + 2) )
      break;
    v35 = (__int64 **)*v35;
  }
  while ( v35 );
  if ( (v28 & 0x3C000100) != 0 || *((_QWORD *)HeapHandle + 41) || (v11[10] & 2) != 0 )
    v74 += 16LL;
  v36 = v11 + 15;
  v81 = v11 + 15;
  v37 = v11[15];
  if ( (v37 & 0x3F) != 0 )
  {
    if ( v37 == 4 )
    {
      if ( *((_DWORD *)HeapHandle + 31) )
      {
        v39 = *(_DWORD *)v33;
        v99 = v39;
        if ( (v39 & *((_DWORD *)HeapHandle + 31)) != 0 )
        {
          v99 = v39 ^ *((_DWORD *)HeapHandle + 34);
          LOWORD(v39) = v99;
        }
        LOWORD(v34) = *((_WORD *)v11 + 4);
        v28 = v102;
      }
      else
      {
        LOWORD(v39) = *((_WORD *)v11 + 4);
      }
      v77 = *((_QWORD *)v11 - 2) - (unsigned __int16)v39;
      v34 = (v77 + (unsigned __int16)v34) >> 4;
      v75 = v34;
      v74 = (v74 + 4151) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_107;
    }
    v75 = *((unsigned __int16 *)v11 + 4);
    if ( v37 == 5 )
    {
      v40 = *((unsigned __int16 *)v11 + 6) ^ (unsigned __int64)HeapHandle[70];
    }
    else if ( (v37 & 0x40) != 0 )
    {
      v40 = *(unsigned __int16 *)&v11[16 * (v37 & 0x3F) + 12];
    }
    else if ( (v37 & 0x3F) == 0x3F )
    {
      if ( v37 >= 0 )
      {
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          v41 = *(_DWORD *)v33;
          v100 = v41;
          if ( (v41 & *((_DWORD *)HeapHandle + 31)) != 0 )
          {
            v100 = v41 ^ *((_DWORD *)HeapHandle + 34);
            LOWORD(v41) = v100;
          }
          v28 = v102;
        }
        else
        {
          LOWORD(v41) = *v33;
        }
      }
      else
      {
        if ( (unsigned __int16)qword_180166580 ^ (unsigned __int16)((unsigned __int16)HeapHandle ^ *v33 ^ ((unsigned __int64)v11 >> 4)) )
          LOWORD(v41) = MEMORY[0x24];
        else
          LOWORD(v41) = *(_WORD *)(*(_QWORD *)&v11[-(((unsigned int)qword_180166580 ^ (unsigned int)HeapHandle ^ *(_DWORD *)v33 ^ (unsigned int)((unsigned __int64)v11 >> 4)) >> 12)]
                                 + 36LL);
        v28 = v102;
      }
      v40 = *(_QWORD *)&v11[16 * (unsigned __int16)v41];
    }
    else
    {
      v40 = v11[15] & 0x3F;
    }
    v77 = 16 * v34 - v40;
    if ( v34 < HeapHandle[216] )
    {
      if ( ((unsigned __int8)(1 << (v34 & 7)) & *((_BYTE *)HeapHandle + (v34 >> 3) + 434)) != 0 )
      {
        v28 = v102;
LABEL_107:
        v36 = v11 + 15;
        goto LABEL_108;
      }
      v42 = (_WORD *)(*((_QWORD *)HeapHandle + 53) + 2 * v34);
      v36 = v11 + 15;
      if ( *v42 > 1u )
        --*v42;
      v28 = v102;
    }
LABEL_108:
    v43 = v74 >> 4;
    *(_QWORD *)v78 = v74 >> 4;
    if ( v74 >> 4 > v34 )
    {
      if ( *v36 == 4 || !(unsigned __int8)sub_1800445F8((int)HeapHandle, v74 >> 4) )
      {
        if ( (v28 & 0x10) != 0 )
        {
          Src = 0LL;
        }
        else
        {
          v55 = v28 & 0xC003FFFF;
          v102 = v55;
          v56 = v11[10];
          if ( (v56 & 2) != 0 )
          {
            v55 = (16 * (v56 & 0xE0 | 0x10)) | v55 & 0xFFFFF1FF;
            v102 = v55;
            v57 = *(_WORD *)(sub_18006E8DC(v11) + 2);
            if ( v57 > 0 )
            {
              v55 |= (unsigned __int16)v57 << 18;
              v102 = v55;
            }
          }
          else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
          {
            v58 = v11[11];
            if ( v58 )
            {
              v55 |= v58 << 18;
              v102 |= v58 << 18;
            }
          }
          v59 = HeapHandle + 62;
          if ( *((_DWORD *)HeapHandle + 31) )
          {
            v11[11] = v11[8] ^ v11[9] ^ v11[10];
            *((_DWORD *)v11 + 2) ^= *((_DWORD *)HeapHandle + 34);
          }
          v80 = 0LL;
          v60 = (char *)RtlAllocateHeap(HeapHandle, v55, a4);
          if ( v60 )
          {
            v61 = v60 - 16;
            _m_prefetchw(v60 - 16);
            if ( *(v60 - 1) == 5 )
              v61 -= 16 * (unsigned __int8)v61[14];
            v87[1] = v61;
            if ( *v59 )
            {
              v62 = *((_DWORD *)v61 + 2) ^ *((_DWORD *)HeapHandle + 34);
              *((_DWORD *)v61 + 2) = v62;
              if ( HIBYTE(v62) != ((unsigned __int8)v62 ^ (unsigned __int8)(BYTE1(v62) ^ BYTE2(v62))) )
                sub_180101024(HeapHandle, v61);
            }
            if ( (v61[10] & 2) != 0 )
            {
              v63 = (_QWORD *)sub_18006E8DC(v61);
              v83 = v63;
              if ( *v59 )
              {
                v64 = *((_DWORD *)v11 + 2) ^ *((_DWORD *)HeapHandle + 34);
                *((_DWORD *)v11 + 2) = v64;
                if ( HIBYTE(v64) != ((unsigned __int8)v64 ^ (unsigned __int8)(BYTE1(v64) ^ BYTE2(v64))) )
                  sub_180101024(HeapHandle, v11);
                v63 = v83;
              }
              if ( (v11[10] & 2) != 0 )
              {
                v65 = sub_18006E8DC(v11);
                *(_QWORD *)(v66 + 8) = *(_QWORD *)(v65 + 8);
              }
              else
              {
                *v63 = 0LL;
                v63[1] = 0LL;
              }
              if ( *((_DWORD *)HeapHandle + 31) )
              {
                v11[11] = v11[8] ^ v11[9] ^ v11[10];
                *((_DWORD *)v11 + 2) ^= *((_DWORD *)HeapHandle + 34);
              }
              v59 = HeapHandle + 62;
            }
            if ( *v59 )
            {
              v61[11] = v61[8] ^ v61[9] ^ v61[10];
              *((_DWORD *)v61 + 2) ^= *((_DWORD *)HeapHandle + 34);
            }
            v80 = 0LL;
            if ( v71 )
            {
              RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
              v71 = 0;
              v55 &= ~1u;
              v102 = v55;
            }
            v67 = v77;
            if ( a4 < v77 )
              v67 = a4;
            memmove(v60, Src, v67);
            RtlFreeHeap(HeapHandle, v55, Src);
          }
          v88 = Src;
          Src = v60;
        }
      }
      goto LABEL_193;
    }
    if ( (v74 >> 4) + 1 == v34 )
    {
      v43 = (v74 >> 4) + 1;
      *(_QWORD *)v78 = v43;
      v74 += 16LL;
    }
    if ( *v36 == 4 )
    {
      v44 = a4;
      *v33 = v74 - a4;
      goto LABEL_120;
    }
    if ( (v11[10] & 2) != 0 )
    {
      v98 = &v11[16 * *v33 - 16];
      v82 = (__int64)&v11[16 * v43 - 16];
      *(_OWORD *)v82 = *(_OWORD *)v98;
      NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
      if ( (NtGlobalFlag & 0x800) != 0 )
      {
        v43 = *(_QWORD *)v78;
        v34 = v75;
        *(_WORD *)(v82 + 2) = sub_1800F12BC((_DWORD)HeapHandle, *(unsigned __int16 *)(v82 + 2), v75, *(_DWORD *)v78, 4);
LABEL_119:
        v44 = a4;
        LOBYTE(v28) = v102;
LABEL_120:
        if ( v44 > v77 )
        {
          if ( (v28 & 8) != 0 )
          {
            v45 = a4;
            memset(&Src[v77], 0, a4 - v77);
LABEL_135:
            if ( (HeapHandle[56] & 0x20) != 0 )
            {
              *(_QWORD *)&v11[v45 + 16] = 0xABABABABABABABABuLL;
              *(_QWORD *)&v11[v45 + 24] = 0xABABABABABABABABuLL;
            }
            if ( v43 != v34 )
            {
              if ( *v81 == 4 )
              {
                v49 = v11 - 48;
                v92 = NtCurrentPeb()->NtGlobalFlag;
                v43 = *(_QWORD *)v78;
                if ( (v92 & 0x800) != 0 )
                  *((_WORD *)v49 + 9) = sub_1800F12BC(
                                          (_DWORD)HeapHandle,
                                          *((unsigned __int16 *)v49 + 9),
                                          v75,
                                          *(_DWORD *)v78,
                                          5);
                v87[0] = &v49[v74];
                v85 = 16 * v75 - v74;
                v84 = sub_180048120(v74, v87, &v85, 0x4000LL);
                if ( v84 >= 0 )
                {
                  *((_QWORD *)v49 + 4) -= v85;
                  v11 = v73;
                }
                else
                {
                  if ( NtCurrentPeb()->Ldr )
                    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                  else
                    DbgPrint("HEAP: ");
                  DbgPrint("Unable to release memory at %p for %Ix bytes - Status == %x\n", v87[0], v85, v84);
                  sub_180106190();
                  v11 = v73;
                  v43 = *(_QWORD *)v78;
                }
              }
              else
              {
                v50 = (unsigned __int16)*v89 - (unsigned __int64)(unsigned __int16)v43;
                v96 = v50;
                *v89 = v43;
                v51 = *((_DWORD *)HeapHandle + 28) & 0x40;
                v52 = v11[14];
                if ( v52 )
                  v53 = (unsigned __int16 *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFF0000uLL)
                                           - ((unsigned __int64)v52 << 16)
                                           + 0x10000);
                else
                  v53 = HeapHandle;
                v95 = v53;
                sub_180046728((int)HeapHandle, v51 != 0, v43, v50);
              }
            }
            if ( *v81 != 4 )
            {
              v54 = v74 - v45;
              v89 = (_WORD *)(v74 - v45);
              if ( v74 - v45 >= 0x3F )
              {
                *(_QWORD *)&v11[16 * v43] = v54;
                *v81 = 63;
              }
              else
              {
                *v81 = v54;
              }
            }
            goto LABEL_193;
          }
          if ( (HeapHandle[56] & 0x40) != 0 )
          {
            v46 = v77 & 3;
            v93 = v46;
            if ( (v77 & 3) != 0 )
            {
              v46 = 4 - v46;
              v93 = v46;
            }
            v45 = a4;
            if ( a4 <= v46 + v77 )
              goto LABEL_135;
            if ( ((a4 - v46 - v77) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
              goto LABEL_135;
            v47 = (__int64)&v11[v46 + 16 + v77];
            v94 = v47;
            v48 = ((a4 - v46 - v77) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
            v86 = v48;
            if ( !v48 )
              goto LABEL_135;
            if ( (v47 & 4) != 0 )
            {
              *(_DWORD *)v47 = -1163005939;
              v86 = --v48;
              if ( !v48 )
                goto LABEL_135;
              v47 += 4LL;
              v94 = v47;
            }
            memset64((void *)v47, 0xBAADF00DBAADF00DuLL, v48 >> 1);
            if ( (v48 & 1) != 0 )
              *(_DWORD *)(v47 + 4 * v48 - 4) = -1163005939;
            goto LABEL_135;
          }
        }
        v45 = a4;
        goto LABEL_135;
      }
    }
    else
    {
      v91 = NtCurrentPeb()->NtGlobalFlag;
      if ( (v91 & 0x800) != 0 )
      {
        v43 = *(_QWORD *)v78;
        v11[11] = sub_1800F12BC((_DWORD)HeapHandle, (unsigned __int8)v11[11], *v33, *(_DWORD *)v78, 4);
        LOBYTE(v28) = v102;
        v34 = v75;
        v44 = a4;
        goto LABEL_120;
      }
    }
    v34 = v75;
    v43 = *(_QWORD *)v78;
    goto LABEL_119;
  }
  NtCurrentTeb()->LastStatusValue = -1073741811;
  v38 = NtCurrentTeb();
  v38->LastErrorValue = RtlNtStatusToDosError(-1073741811);
LABEL_193:
  if ( v80 && *((_DWORD *)HeapHandle + 31) )
  {
    v80[11] = v80[8] ^ v80[9] ^ v80[10];
    *((_DWORD *)v80 + 2) ^= *((_DWORD *)HeapHandle + 34);
  }
  if ( v71 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  v68 = NtCurrentPeb()->SharedData;
  if ( v68 && v68->ServiceSessionId )
    v69 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    v69 = 2147353472LL;
  if ( !*(_BYTE *)v69 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
    return Src;
  v70 = Src;
  if ( Src && (v102 & 0x800000) == 0 )
  {
    sub_180103570((_DWORD)HeapHandle, (_DWORD)Src, (_DWORD)v88, v77, a4, 3);
    return Src;
  }
  return v70;
}
