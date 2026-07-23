/*
 * XREFs of RtlpHpLfhSlotAllocate @ 0x1800110C0
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18000F320 (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocateHeapInternal @ 0x18001491C (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x18000E9A4 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x1800140C4 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180019B90 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x18001D778 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpWaitCouldDeadlock @ 0x18005EDEC (RtlpWaitCouldDeadlock.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x180062088 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlBackoff @ 0x18006ADA0 (RtlBackoff.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x18006E5D8 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpOptimizeSRWLockList @ 0x180075204 (RtlpOptimizeSRWLockList.c)
 *     RtlpWakeSRWLock @ 0x180075260 (RtlpWakeSRWLock.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x180077440 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18007E924 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 *     ZwTerminateProcess @ 0x1800A0880 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A3C10 (NtWaitForAlertByThreadId.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     RtlpHpLfhSubsegmentAllocateBlock @ 0x18010CE74 (RtlpHpLfhSubsegmentAllocateBlock.c)
 */

__int64 __fastcall RtlpHpLfhSlotAllocate(
        __int64 UniqueThread,
        _RTL_SRWLOCK *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 Block; // r14
  unsigned int v7; // esi
  __int64 v8; // r12
  int v9; // r15d
  __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // r10
  unsigned __int16 v15; // r9
  unsigned int v16; // r8d
  unsigned __int16 v17; // bx
  unsigned __int16 v18; // dx
  unsigned int v19; // edx
  volatile signed __int64 *v20; // rbx
  signed __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r13
  volatile signed __int64 *v24; // r11
  struct _TEB *v25; // r15
  unsigned int v26; // r12d
  __int64 v27; // rcx
  unsigned int v28; // ebx
  __int64 v29; // r13
  unsigned __int16 HeapData_high; // ax
  unsigned __int16 v31; // si
  __int16 v32; // ax
  unsigned __int64 v33; // r13
  unsigned __int64 v34; // r8
  volatile signed __int64 *v35; // rsi
  volatile signed __int64 *v36; // r15
  signed __int64 v37; // r10
  signed __int64 v38; // r9
  __int64 v39; // rax
  unsigned __int64 v40; // r9
  unsigned __int64 v41; // rcx
  int v42; // ecx
  signed __int64 v43; // rax
  unsigned int v44; // esi
  unsigned int v45; // r12d
  char v46; // cl
  __int64 v47; // r13
  signed __int16 *v48; // r15
  int v49; // edx
  __int64 v50; // rax
  signed __int16 *v51; // rbx
  signed __int16 v52; // ax
  signed __int16 v53; // tt
  int v54; // r10d
  __int64 v55; // r11
  unsigned int v56; // ebx
  __int16 v57; // bx
  volatile signed __int64 *v59; // rax
  unsigned __int64 v60; // rdx
  unsigned int v61; // eax
  signed __int64 v62; // rax
  __int64 v63; // rdx
  signed __int64 v64; // rcx
  signed __int64 v65; // rdx
  signed __int64 v66; // rtt
  bool v67; // zf
  _RTL_SRWLOCK *v68; // rcx
  unsigned __int64 *v69; // rbx
  char v70; // cl
  int v71; // r11d
  unsigned int v72; // r10d
  int (__fastcall *v73)(__int64, __int64, _QWORD, unsigned __int64); // rax
  unsigned int v74; // r15d
  __int64 v75; // rcx
  __int16 RandomValue32; // ax
  __int64 v77; // r12
  signed __int64 v78; // rcx
  signed __int64 v79; // r8
  signed __int64 v80; // rtt
  __int64 v81; // rcx
  __int64 v82; // rdx
  signed __int64 v83; // r8
  signed __int64 v84; // rtt
  unsigned __int64 v85; // rax
  signed __int64 v86; // rax
  volatile signed __int64 *v87; // rax
  _QWORD *v89; // rcx
  __int64 j; // rdx
  signed __int64 v91; // rbx
  signed __int64 v92; // rax
  unsigned __int64 v93; // rbx
  __int64 v94; // [rsp+20h] [rbp-81h]
  unsigned int v95; // [rsp+40h] [rbp-61h]
  unsigned int v96; // [rsp+40h] [rbp-61h]
  unsigned __int16 v97; // [rsp+42h] [rbp-5Fh]
  char v98[4]; // [rsp+44h] [rbp-5Dh] BYREF
  int v99; // [rsp+48h] [rbp-59h]
  int v100; // [rsp+4Ch] [rbp-55h]
  __int64 i; // [rsp+50h] [rbp-51h]
  __int64 v102; // [rsp+58h] [rbp-49h]
  int v103; // [rsp+60h] [rbp-41h] BYREF
  unsigned int v104; // [rsp+68h] [rbp-39h]
  unsigned int v105; // [rsp+70h] [rbp-31h]
  int v106; // [rsp+74h] [rbp-2Dh] BYREF
  unsigned int v107; // [rsp+78h] [rbp-29h]
  unsigned int v108; // [rsp+7Ch] [rbp-25h]
  unsigned __int64 v109; // [rsp+80h] [rbp-21h] BYREF
  unsigned __int64 *v110; // [rsp+88h] [rbp-19h]
  __int64 v111; // [rsp+90h] [rbp-11h]
  __int64 v112; // [rsp+98h] [rbp-9h]
  int v113; // [rsp+A0h] [rbp-1h]
  signed __int32 v114[19]; // [rsp+A4h] [rbp+3h] BYREF
  __int64 v115; // [rsp+100h] [rbp+5Fh]
  unsigned int v117; // [rsp+118h] [rbp+77h]

  v117 = a4;
  v115 = UniqueThread;
  Block = 0LL;
  v7 = ((unsigned int)RtlpHpLfhPerfFlags >> 2) & 1;
  v100 = 0;
  v95 = v7;
  v8 = UniqueThread;
  v9 = 0;
  v10 = 0LL;
LABEL_2:
  for ( i = v10; ; i = RtlpHpLfhOwnerMoveSubsegment(a3, v10, 0LL) )
  {
    while ( 1 )
    {
      v11 = 17LL;
      if ( v7 )
      {
        while ( 1 )
        {
          _m_prefetchw((const void *)(a3 + 56));
          v91 = *(_QWORD *)(a3 + 56);
          if ( (v91 & 0xFFF) != 0 )
          {
            while ( 1 )
            {
              v92 = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 56), v91 - 1, v91);
              if ( v91 == v92 )
                break;
              v100 = 1;
              v91 = v92;
              if ( (v92 & 0xFFF) == 0 )
                goto LABEL_160;
            }
            v93 = v91 & 0xFFFFFFFFFFFFF000uLL;
            if ( v93 )
              break;
          }
LABEL_160:
          if ( v9 == 2 )
            goto LABEL_6;
          v9 = 2;
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a3 + 16));
        }
        if ( v9 )
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a3 + 16));
        Block = RtlpHpLfhSubsegmentAllocateBlock(v8, a3, v93, v117);
        if ( !Block )
          RtlpHpLfhSubsegmentFreeBlock(v8, v93, 0LL, a5);
        goto LABEL_52;
      }
      if ( !v9 )
      {
        v9 = 1;
        v103 = 0;
        v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 16), 17LL, 0LL);
        if ( v12 )
        {
          while ( 1 )
          {
            v77 = (v12 >> 1) & 1;
            if ( (v12 & 1) != 0 && (v77 || (v12 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
            {
              if ( (unsigned __int8)RtlpWaitCouldDeadlock(UniqueThread, v11, a3, a4, v94) )
                ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
              UniqueThread = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
              v112 = UniqueThread;
              LOBYTE(UniqueThread) = 0;
              v114[0] = 2;
              v111 = 0LL;
              if ( v77 )
              {
                v110 = 0LL;
                v113 = -1;
                UniqueThread = (unsigned __int8)v12;
                v109 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
                v11 = (unsigned __int64)&v109 | v12 & 8 | 7;
                LOBYTE(UniqueThread) = (v12 & 4) == 0;
              }
              else
              {
                v113 = -2;
                v110 = &v109;
                v11 = (unsigned __int64)&v109 + 3;
              }
              v86 = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 16), v11, v12);
              v67 = v12 == v86;
              v12 = v86;
              if ( !v67 )
                goto LABEL_131;
              if ( (_BYTE)UniqueThread )
                RtlpOptimizeSRWLockList(a3 + 16);
              if ( MEMORY[0x7FFE036A] > 1u )
              {
                UniqueThread = (unsigned int)SRWLockSpinCount;
                if ( SRWLockSpinCount )
                {
                  do
                  {
                    if ( (v114[0] & 2) == 0 )
                      break;
                    _mm_pause();
                    v67 = (_DWORD)UniqueThread == 1;
                    UniqueThread = (unsigned int)(UniqueThread - 1);
                  }
                  while ( !v67 );
                }
              }
              if ( _interlockedbittestandreset(v114, 1u) )
              {
                do
                  NtWaitForAlertByThreadId((PVOID)(a3 + 16), 0LL);
                while ( (v114[0] & 4) == 0 );
              }
            }
            else
            {
              v78 = (v12 | 1) + 16;
              if ( v77 )
                v78 = v12 | 1;
              v102 = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 16), v78, v12);
              if ( v12 == v102 )
              {
                v7 = v95;
                v8 = v115;
                break;
              }
LABEL_131:
              RtlBackoff(&v103);
              _m_prefetchw((const void *)(a3 + 16));
              v12 = *(_QWORD *)(a3 + 16);
            }
          }
        }
      }
LABEL_6:
      if ( !*(_QWORD *)(a3 + 8) )
        break;
      v13 = *(_QWORD *)(a3 + 24);
      v14 = a3 + 24;
      v15 = 1;
      if ( v7 )
        v15 = 4096;
      if ( v13 != v14 )
      {
        while ( 2 )
        {
          LOWORD(v16) = *(_WORD *)(v13 + 32);
          v100 = 0;
          while ( 1 )
          {
            v17 = v15;
            if ( v15 >= (unsigned __int16)v16 )
              v17 = v16;
            if ( (unsigned __int16)v16 <= v17 && v9 == 1 )
              break;
            v18 = v16 - v17;
            v16 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)(v13 + 32), v16 - v17, v16);
            v19 = v17 + v18;
            if ( (unsigned __int16)v16 == v19 )
            {
              if ( !*(_WORD *)(v13 + 32) )
                RtlpHpLfhOwnerMoveSubsegment(a3, v13, 1LL);
              if ( v17 > 1u )
                *(_QWORD *)(a3 + 56) = v13 ^ ((unsigned __int16)v13 ^ (unsigned __int16)(v17 - 1)) & 0xFFF;
              goto LABEL_19;
            }
            if ( v16 < v19 )
              v100 = 1;
          }
          v13 = *(_QWORD *)v13;
          if ( v13 != v14 )
            continue;
          break;
        }
      }
      v13 = 0LL;
LABEL_19:
      v20 = (volatile signed __int64 *)(a3 + 16);
      if ( v9 == 2 )
      {
        v62 = _InterlockedCompareExchange64(v20, 0LL, 1LL);
        if ( v62 == 1 )
          goto LABEL_21;
        do
        {
          v63 = 3LL;
          v64 = v62 & 6;
          if ( v64 != 2 )
            v63 = -1LL;
          v65 = v62 + v63;
          v66 = v62;
          v62 = _InterlockedCompareExchange64(v20, v65, v62);
        }
        while ( v66 != v62 );
        v7 = v95;
        v67 = v64 == 2;
        goto LABEL_81;
      }
      v21 = _InterlockedCompareExchange64(v20, 0LL, 17LL);
      if ( v21 == 17 )
        goto LABEL_21;
      if ( (v21 & 1) == 0 )
        RtlRaiseStatus(-1073741212);
      if ( (v21 & 2) != 0 )
      {
LABEL_113:
        if ( (v21 & 8) != 0 )
        {
          v89 = (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0uLL);
          for ( j = *(_QWORD *)((v21 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !j; j = v89[1] )
            v89 = (_QWORD *)*v89;
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(j + 32), 0xFFFFFFFF) > 1 )
            goto LABEL_21;
          v81 = -9LL;
        }
        else
        {
          v81 = -1LL;
        }
        do
        {
          v82 = v81 + 4;
          v83 = v21 & 6;
          if ( v83 != 2 )
            v82 = v81;
          v65 = v21 + v82;
          v84 = v21;
          v21 = _InterlockedCompareExchange64(v20, v65, v21);
        }
        while ( v84 != v21 );
        v67 = v83 == 2;
LABEL_81:
        if ( v67 )
          RtlpWakeSRWLock(a3 + 16, v65, 0LL);
        goto LABEL_21;
      }
      while ( 1 )
      {
        v79 = 0LL;
        if ( (v21 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
          v79 = v21 - 16;
        v80 = v21;
        v21 = _InterlockedCompareExchange64(v20, v79, v21);
        if ( v80 == v21 )
          break;
        if ( (v21 & 2) != 0 )
          goto LABEL_113;
      }
LABEL_21:
      if ( v13 )
      {
        v22 = *(unsigned __int8 *)(a3 + 1);
        v23 = *(unsigned __int8 *)(v13 + 39);
        v24 = (volatile signed __int64 *)(v13 + 48);
        v25 = NtCurrentTeb();
        v26 = RtlpSearchWidth[v22];
        v27 = 3LL;
        v108 = (unsigned int)v13 >> 12;
        v28 = qword_1801634A8 ^ *(_DWORD *)(v13 + 40) ^ ((unsigned int)v13 >> 12);
        v29 = *(unsigned __int16 *)(v13 + 34) + v23;
        v97 = HIWORD(v28);
        if ( v117 >= (unsigned __int16)(qword_1801634A8 ^ *(_WORD *)(v13 + 40) ^ ((unsigned int)v13 >> 12)) )
          v27 = 1LL;
        HeapData_high = HIWORD(v25->HeapData);
        v102 = v27;
        v31 = (unsigned __int8)HeapData_high;
        if ( (unsigned __int8)HeapData_high == HIBYTE(HeapData_high) )
        {
          RandomValue32 = RtlpHeapGenerateRandomValue32();
          v24 = (volatile signed __int64 *)(v13 + 48);
          v32 = (RandomValue32 << 8) | (unsigned __int8)(RandomValue32 + 1);
        }
        else
        {
          v32 = (unsigned __int8)(HeapData_high ^ (HeapData_high + 1)) ^ HeapData_high;
        }
        HIWORD(v25->HeapData) = v32;
        v33 = 2 * v29;
        LODWORD(v34) = RtlpLowFragHeapRandomData[v31];
        v35 = &v24[(2 * (unsigned __int64)*(unsigned __int16 *)(v13 + 36)) >> 6];
        v36 = &v24[(v33 - 1) >> 6];
LABEL_27:
        if ( v33 < 0x40 )
        {
          v37 = *v35;
          v61 = v33;
          if ( (unsigned int)v33 >= v26 )
            v61 = v26;
          v26 = v61;
        }
        else
        {
          while ( 1 )
          {
            v37 = *v35;
            if ( (*v35 & 0x5555555555555555LL) != 0x5555555555555555LL )
              break;
            v59 = v35++;
            if ( v59 == v36 )
              v35 = v24;
          }
          if ( v35 == v36 && (v33 & 0x3F) != 0 && (v33 & 0x3F) < v26 )
            v26 = v33 & 0x3F;
        }
        v34 = ((v26 * (unsigned int)v34) >> 7) & 0x1FFFFFE;
        while ( 1 )
        {
          v38 = ~v37;
          if ( v26 < 0x40 )
          {
            _BitScanForward64(&v60, v38 & 0x5555555555555555LL);
            v34 = (unsigned int)(v60 + v34);
            v39 = (((1LL << v26) - 1) << v60) & 0x5555555555555555LL;
          }
          else
          {
            v39 = 0x5555555555555555LL;
          }
          v40 = __ROR8__(v39 & v38, v34);
          _BitScanForward64(&v41, v40);
          v42 = ((_BYTE)v34 + (_BYTE)v41) & 0x3F;
          v114[3] = v42;
          v43 = _InterlockedCompareExchange64(v35, v37 | (v102 << v42), v37);
          v67 = v37 == v43;
          v37 = v43;
          if ( v67 )
            break;
          if ( (v43 & 0x5555555555555555LL) == 0x5555555555555555LL )
          {
            v87 = v35 + 1;
            v35 = v24;
            if ( v87 <= v36 )
              v35 = v87;
            goto LABEL_27;
          }
        }
        v28 = (unsigned __int16)v28;
        v44 = (v42 + ((unsigned int)(v35 - v24) << 6)) >> 1;
        *(_WORD *)(v13 + 36) = v44;
        v105 = (unsigned __int16)v28;
        v45 = v97 + (unsigned __int16)v28 * v44;
        if ( *(_BYTE *)(v13 + 45) > 1u )
        {
          v46 = *(_BYTE *)(v13 + 44);
          v40 = 0LL;
          v34 = v45 >> v46;
          v47 = 2 * v34;
          v48 = (signed __int16 *)(2 * v34 + v13 + *(unsigned __int16 *)(v13 + 46));
          _m_prefetchw(v48);
          v96 = 0;
          v49 = *(unsigned __int16 *)(v13 + 40) ^ (unsigned __int16)((unsigned int)v13 >> 12);
          v99 = -1;
          v102 = 0LL;
          v107 = (unsigned __int16)qword_1801634A8 ^ v49;
          v50 = ((v107 + v45 - 1) >> v46) - (unsigned int)v34 + 1;
          if ( v48 < &v48[v50] )
          {
            v51 = &v48[v50];
            do
            {
              while ( 1 )
              {
                v52 = *v48;
                while ( v52 > 0 )
                {
                  v53 = v52;
                  v52 = _InterlockedCompareExchange16(v48, v52 + 1, v52);
                  if ( v53 == v52 )
                  {
                    v34 = v96;
                    v54 = v99;
                    LODWORD(v55) = v102;
                    goto LABEL_41;
                  }
                }
                if ( (_DWORD)v40 )
                  break;
                v104 = 1;
                RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v13 + 24));
                v40 = v104;
              }
              v54 = v99;
              if ( v52 )
              {
                v34 = v96 + 1;
                v55 = v47 >> 1;
                ++v96;
                v102 = v47 >> 1;
                if ( v99 == -1 )
                {
                  v54 = v47 >> 1;
                  v99 = v54;
                }
                *v48 = v52 + 1;
              }
              else
              {
                LODWORD(v55) = v102;
                v34 = --v96;
                *v48 = 1;
              }
LABEL_41:
              ++v48;
              v47 += 2LL;
            }
            while ( v48 < v51 );
            v28 = v105;
            if ( (_DWORD)v34 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
            {
              v34 = (unsigned int)((_DWORD)v34 << *(_BYTE *)(v13 + 44));
              _InterlockedExchangeAdd64(
                (volatile signed __int64 *)(*(__int16 *)(v115 + 58) + v115 + 24),
                (int)v34 / 4096);
            }
            if ( v54 == -1 )
            {
              if ( (_DWORD)v40 )
                RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v13 + 24));
            }
            else
            {
              v70 = *(_BYTE *)(v13 + 44);
              v71 = v55 - v54;
              v72 = v54 << v70;
              v73 = (int (__fastcall *)(__int64, __int64, _QWORD, unsigned __int64))(v115 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v115 + 24));
              v106 = v71 + 1;
              v74 = (v71 + 1) << v70;
              v75 = *(_QWORD *)v115;
              v98[0] = -1;
              v99 = v72;
              if ( v73(v75, v13 + v72, v74, v40) < 0 )
              {
                RtlpHpLfhSubsegmentDecBlockCounts(v115, v13, v45, v107);
                RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v13 + 24));
                v34 = ~(3LL << ((2 * v44) & 0x3F));
                _InterlockedAnd64((volatile signed __int64 *)(v13 + 8 * ((unsigned __int64)(2 * v44) >> 6) + 48), v34);
LABEL_50:
                v8 = v115;
                if ( !Block )
                  RtlpHpLfhSubsegmentFreeBlock(v115, v13, 0LL, a5);
LABEL_52:
                v10 = i;
                goto LABEL_53;
              }
              RtlpHpLfhSubsegmentIncBlockCounts(v115, v13, v99, v74, (__int64)&v106, 1, (__int64)v98);
            }
          }
        }
        Block = v13 + v45;
        if ( v117 < v28 )
        {
          v56 = v28 - v117;
          if ( v56 == 1 )
            v57 = 0x8000;
          else
            v57 = v56 & 0x3FFF;
          *(_WORD *)(((unsigned __int16)qword_1801634A8 ^ *(unsigned __int16 *)(v13 + 40) ^ (unsigned __int64)(unsigned __int16)v108)
                   + Block
                   - 2) = v57;
        }
        goto LABEL_50;
      }
      v9 = 2;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a3 + 16));
    }
    v68 = (_RTL_SRWLOCK *)(a3 + 16);
    if ( v9 == 2 )
      RtlReleaseSRWLockExclusive(v68);
    else
      RtlReleaseSRWLockShared(v68);
    v69 = (unsigned __int64 *)&a2[3];
    if ( (unsigned __int64 *)*v69 == v69
      || ((RtlAcquireSRWLockExclusive(a2 + 2), (unsigned __int64 *)*v69 == v69)
        ? (v10 = 0LL)
        : (v10 = RtlpHpLfhOwnerMoveSubsegment(a2, *v69, 2LL)),
          RtlReleaseSRWLockExclusive(a2 + 2),
          !v10) )
    {
      v10 = RtlpHpLfhSubsegmentCreate(v8);
      if ( !v10 )
        break;
    }
    v9 = 2;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a3 + 16));
    UniqueThread = *(unsigned __int16 *)(v10 + 34);
    if ( *(_WORD *)(v10 + 32) == (_WORD)UniqueThread )
    {
      *(_QWORD *)(v10 + 16) = a3;
    }
    else
    {
      v85 = _InterlockedExchange64((volatile __int64 *)(v10 + 16), a3);
      if ( (v85 & 1) != 0 )
        _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 32), v85 >> 1);
    }
    if ( *(_QWORD *)(a3 + 8) && *(_WORD *)(v10 + 32) == *(_WORD *)(v10 + 34) )
    {
      *(_QWORD *)(v10 + 16) = 0LL;
      goto LABEL_2;
    }
  }
LABEL_53:
  if ( v100 )
    RtlpHpLfhBucketUpdateAffinityMapping(v8, a2, v34, v40);
  if ( v10 )
    RtlpHpLfhBucketAddSubsegment(v8, a2, v10, a5);
  return Block;
}
