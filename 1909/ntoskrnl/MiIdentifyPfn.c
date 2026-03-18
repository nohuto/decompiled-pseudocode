/*
 * XREFs of MiIdentifyPfn @ 0x140005560
 * Callers:
 *     MiIdentifyPfnWrapper @ 0x1400054B0 (MiIdentifyPfnWrapper.c)
 *     MiDeletePteRun @ 0x140028050 (MiDeletePteRun.c)
 *     MiCopyOnWrite @ 0x140059130 (MiCopyOnWrite.c)
 *     MiMakePageAvoidRead @ 0x14006C8C0 (MiMakePageAvoidRead.c)
 *     MiDemoteCombinedPte @ 0x1401417B0 (MiDemoteCombinedPte.c)
 *     MiConvertPrivateToProto @ 0x140141C10 (MiConvertPrivateToProto.c)
 *     MmSetPfnListInfo @ 0x14017870C (MmSetPfnListInfo.c)
 *     MmTryIdentifyPage @ 0x1402C2FB4 (MmTryIdentifyPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSubsectionDriverProtos @ 0x1400960CC (MiGetSubsectionDriverProtos.c)
 *     MiStartingOffset @ 0x1400B8AD0 (MiStartingOffset.c)
 *     MiGetTopLevelPfn @ 0x1400C2850 (MiGetTopLevelPfn.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400F3400 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiGetLeafPfnBuddy @ 0x14013D5BC (MiGetLeafPfnBuddy.c)
 *     MiGetSharedProtos @ 0x14015CC6C (MiGetSharedProtos.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033AAB4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033AC78 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall MiIdentifyPfn(ULONG_PTR BugCheckParameter2, unsigned __int64 *a2)
{
  ULONG_PTR v3; // rdi
  __int128 v4; // xmm1
  __m128i v5; // xmm2
  __int64 v6; // rdx
  unsigned __int8 v7; // r11
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  bool v11; // r9
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // r14
  struct _KPRCB *CurrentPrcb; // r13
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v22; // edx
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  unsigned __int64 v25; // rdx
  __int16 v26; // r8
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rcx
  __int64 v30; // r13
  __int64 v31; // r14
  unsigned __int64 v32; // rsi
  __int64 v33; // rdx
  unsigned int v34; // r15d
  unsigned __int64 v35; // rsi
  int v36; // r10d
  __int64 v37; // rcx
  __int64 v38; // r14
  int v39; // r13d
  __int64 v40; // rcx
  __int64 *v41; // rcx
  __int64 v42; // rax
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // r13
  unsigned __int64 v46; // rdx
  __int64 TopLevelPfn; // rax
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // r10
  _DWORD *v50; // rcx
  bool v51; // zf
  signed __int32 v52; // eax
  __int64 v53; // rdx
  unsigned __int64 v54; // r9
  unsigned __int64 v55; // r10
  __int64 v56; // r9
  unsigned __int64 v57; // rax
  __int64 LeafPfnBuddy; // rax
  __int64 v59; // rdx
  int v60; // eax
  int v61; // eax
  int v62; // eax
  __int64 SharedProtos; // rax
  __int64 v64; // r10
  _QWORD *v65; // r9
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // r10
  __int64 v69; // rax
  unsigned __int64 v70; // rdx
  int v71; // [rsp+30h] [rbp-49h] BYREF
  int v72; // [rsp+34h] [rbp-45h] BYREF
  __int128 v73; // [rsp+38h] [rbp-41h] BYREF
  __int128 v74; // [rsp+48h] [rbp-31h]
  __m128i v75; // [rsp+58h] [rbp-21h]
  __int64 v76; // [rsp+68h] [rbp-11h]
  _QWORD v77[4]; // [rsp+70h] [rbp-9h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+5Fh]

  v3 = BugCheckParameter2;
  v4 = *(_OWORD *)(BugCheckParameter2 + 16);
  v5 = *(__m128i *)(BugCheckParameter2 + 32);
  v73 = *(_OWORD *)BugCheckParameter2;
  v74 = v4;
  v75 = v5;
  v6 = (unsigned __int128)((__int64)(BugCheckParameter2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v7 = _mm_cvtsi128_si32(_mm_srli_si128(v5, 2));
  LOBYTE(BugCheckParameter2) = _mm_cvtsi128_si32(_mm_srli_si128(v5, 3));
  v8 = ((unsigned __int64)v6 >> 63) + (v6 >> 3);
  v9 = (*(_DWORD *)a2 ^ (16 * v7)) & 0x70;
  a2[1] = v8;
  v10 = *a2 ^ v9;
  v11 = (BugCheckParameter2 & 8) != 0;
  if ( (BugCheckParameter2 & 8) != 0 )
    LODWORD(BugCheckParameter2) = 5;
  else
    LODWORD(BugCheckParameter2) = (unsigned __int8)BugCheckParameter2;
  v12 = v10 ^ (v10 ^ ((unsigned __int64)(unsigned int)BugCheckParameter2 << 57)) & 0xE00000000000000LL;
  *a2 = v12;
  v13 = (v12 >> 4) & 7;
  if ( (_DWORD)v13 == 1 )
    return;
  v14 = v12;
  v15 = v74;
  switch ( (int)v13 )
  {
    case 0:
    case 5:
      return;
    case 2:
    case 3:
    case 4:
      if ( v75.m128i_i16[0] )
      {
        v14 = v12 | 0x100;
        *a2 = v12 | 0x100;
      }
      if ( (*((_QWORD *)&v74 + 1) & 0x4000000000000000LL) == 0 )
      {
        if ( (v15 & 0x400) != 0 )
          v16 = (unsigned __int64)v15 >> 11;
        else
          v16 = (unsigned __int64)v15 >> 3;
        if ( (v16 & 1) != 0 )
        {
          v14 |= 0x80uLL;
          goto LABEL_9;
        }
        goto LABEL_16;
      }
      if ( (v75.m128i_i64[1] & 0x200000000000000LL) == 0 )
        a2[2] = ((__int64)(*((_QWORD *)&v73 + 1) << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL;
      *a2 = v14 & 0xFFFFFFFFFFFFFFF0uLL;
      return;
    case 6:
      if ( (v73 & 1) == 0 || v11 || v75.m128i_i16[0] > 1u )
      {
        v14 = v12 | 0x100;
LABEL_9:
        *a2 = v14;
      }
      goto LABEL_16;
    case 7:
      v53 = v12 | 0x100;
      v54 = v75.m128i_u64[1];
      v55 = *((_QWORD *)&v73 + 1) | 0x8000000000000000uLL;
      *a2 = v53;
      if ( (v54 & 0x200000000000000LL) == 0 )
        a2[2] = ((__int64)(v55 << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL;
      if ( ((v54 >> 54) & 7) == 1 )
      {
        LeafPfnBuddy = MiGetLeafPfnBuddy(&v73, v53, 0xFFFFF68000000000uLL);
        v57 = (v59 ^ (v59 ^ (LeafPfnBuddy << 9)) & 0x1FFFFFFFFFFFE00LL) & 0xFFFFFFFFFFFFFFF0uLL | 9;
      }
      else
      {
        v56 = v54 & 0xFFFFFFFFFLL;
        if ( v56 == 0xFFFFFFFFDLL )
        {
          v57 = v53 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
        }
        else if ( v56 == 0xFFFFFFFFFLL && v55 == 0xFFFFF68000000000uLL )
        {
          v57 = v53 & 0xFFFFFFFFFFFFFFF0uLL | 5;
        }
        else
        {
          v57 = v53 & 0xFFFFFFFFFFFFFFF0uLL;
        }
      }
      *a2 = v57;
      return;
    default:
LABEL_16:
      v17 = v75.m128i_i64[1];
      if ( (v75.m128i_i64[1] & 0x200000000000000LL) != 0 )
      {
        if ( (v15 & 0x400) != 0 )
        {
          if ( qword_140465800 && (v15 & 0x10) == 0 )
            v15 &= ~qword_140465800;
          v18 = v15 >> 16;
          v19 = *(_QWORD *)v18;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            LOBYTE(v12) = -1;
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v19 + 72, v12);
          }
          else
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v71 = 0;
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v60 = SchedulerAssist[5];
                SchedulerAssist[5] = v60 + 1;
                if ( v60 == -1 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb, v12);
              }
            }
            if ( _interlockedbittestandset((volatile signed __int32 *)(v19 + 72), 0x1Fu) )
            {
              v50 = CurrentPrcb->SchedulerAssist;
              if ( v50 )
              {
                if ( CurrentPrcb->NestingLevel <= 1u )
                {
                  v61 = v50[5] - 1;
                  v50[5] = v61;
                  if ( !v61 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb, v12);
                }
              }
              LOBYTE(v12) = -1;
              v71 = ExpWaitForSpinLockExclusiveAndAcquire(v19 + 72, v12);
            }
            v22 = *(_DWORD *)(v19 + 72);
            while ( (v22 & 0xBFFFFFFF) != 0x80000000 )
            {
              if ( (v22 & 0x40000000) == 0 )
              {
                v52 = _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 72), v22 | 0x40000000, v22);
                v51 = v22 == v52;
                v22 = v52;
                if ( !v51 )
                  continue;
              }
              KeYieldProcessorEx(&v71);
              v22 = *(_DWORD *)(v19 + 72);
            }
          }
          if ( (*(_QWORD *)(v19 + 64) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
          {
            a2[2] = *(_QWORD *)((*(_QWORD *)(v19 + 64) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v19 + 72, retaddr);
            else
              *(_DWORD *)(v19 + 72) = 0;
            v23 = KeGetCurrentPrcb();
            v24 = v23->SchedulerAssist;
            if ( v24 )
            {
              if ( v23->NestingLevel <= 1u )
              {
                v62 = v24[5] - 1;
                v24[5] = v62;
                if ( !v62 )
                  KiRemoveSystemWorkPriorityKick(v23, v24);
              }
            }
            a2[2] ^= (*((_DWORD *)a2 + 4) ^ (*(_DWORD *)(v19 + 56) >> 5)) & 1;
            v25 = *(_QWORD *)(v18 + 8);
            if ( v25 )
            {
              v26 = *(_WORD *)(v18 + 34);
              if ( (v26 & 2) != 0 && (*(_DWORD *)(v19 + 56) & 0x4000000) != 0 )
              {
                *a2 ^= (*a2 ^ MiStartingOffset(v18, v25, 0xFFFFFFFFLL)) & 0x1FFFFFFFFFFFE00LL;
              }
              else
              {
                v27 = *((_QWORD *)&v73 + 1) | 0x8000000000000000uLL;
                if ( (*(_DWORD *)(*(_QWORD *)v18 + 56LL) & 0x20) != 0 )
                {
                  if ( v27 < v25 || v27 >= v25 + 8LL * *(unsigned int *)(v18 + 44) )
                  {
                    if ( (v26 & 2) != 0 )
                      SharedProtos = MiGetSharedProtos(*(_QWORD *)v18, 0xFFFFFFFFLL, v18);
                    else
                      SharedProtos = MiGetSubsectionDriverProtos(v18);
                    v43 = (v27 << 9) - (*(_QWORD *)(SharedProtos + 72) << 9);
                  }
                  else
                  {
                    v43 = (v27 << 9) - (v25 << 9);
                  }
                  v28 = ((unsigned __int64)*(unsigned int *)(v18 + 36) << 9) + (v43 & 0xFFFFFFFFFFFFF000uLL);
                }
                else
                {
                  v28 = ((__int64)(v27 - v25) >> 3 << 12)
                      + ((*(unsigned int *)(v18 + 36) | ((unsigned __int64)(*(_WORD *)(v18 + 32) & 0xFFC0) << 26)) << 12);
                }
                *a2 ^= (*a2 ^ v28) & 0x1FFFFFFFFFFFE00LL;
              }
            }
            v29 = *a2;
            if ( (*(_DWORD *)(v19 + 56) & 9) == 8 )
              *a2 = v29 & 0xFFFFFFFFFFFFFFF0uLL | 8;
            else
              *a2 = v29 & 0xFFFFFFFFFFFFFFF0uLL | 1;
          }
          else
          {
            *a2 = *a2 & 0xFFFFFFFFFFFFFE8FuLL | 0x10;
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v19 + 72));
          }
        }
        else
        {
          v46 = *((_QWORD *)&v73 + 1) | 0x8000000000000000uLL;
          a2[2] = *((_QWORD *)&v73 + 1) | 0x8000000000000000uLL;
          if ( v73 >= 0 )
          {
            a2[2] = v46 | 1;
            v49 = *(_QWORD *)(v46 - 16);
            if ( v49 >= 0x1000000000000LL )
              v49 = 0xFFFFFFFFFFFFLL;
            v14 = *a2 ^ (*a2 ^ (v49 << 9)) & 0x1FFFFFFFFFFFE00LL;
          }
          *a2 = v14 & 0xFFFFFFFFFFFFFFF0uLL | 2;
        }
        return;
      }
      v30 = *((_QWORD *)&v73 + 1);
      v31 = v14;
      v32 = *((_QWORD *)&v73 + 1);
      if ( *((_QWORD *)&v73 + 1) && (((unsigned __int64)v75.m128i_i64[1] >> 54) & 7) != 1 )
        v32 = *((_QWORD *)&v73 + 1) | 0x8000000000000000uLL;
      if ( v32 >= 0xFFFF800000000000uLL && byte_140467140[((v32 >> 39) & 0x1FF) - 256] == 5 )
      {
        *a2 = (v14 ^ (v14 ^ ((v32 - 1088) << 9)) & 0x1FFFFFFFFFFFE00LL) & 0xFFFFFFFFFFFFFFF0uLL | 3;
        a2[2] = 0xFFFFF6FB7DBED000uLL;
        return;
      }
      if ( v32 == -8LL )
      {
        *a2 = v14 & 0xFFFFFFFFFFFFFFF0uLL | 5;
        a2[2] = (unsigned __int64)MmBadPointer;
        return;
      }
      v33 = ((unsigned __int64)v75.m128i_i64[1] >> 54) & 7;
      if ( v33 == 1 )
      {
        v64 = v14 ^ (v14 ^ (MiGetLeafPfnBuddy(&v73, 1LL, v8) << 9)) & 0x1FFFFFFFFFFFE00LL;
        *a2 = v64;
        if ( v32 < 0xFFFFF68000000000uLL || v32 > 0xFFFFF6FFFFFFFFFFuLL )
        {
LABEL_169:
          v68 = v64 & 0xFFFFFFFFFFFFFFF0uLL | 9;
        }
        else
        {
          v65 = (_QWORD *)qword_1404658C8;
          if ( qword_1404658C8 )
          {
            v66 = (__int64)&STACK[0x58000000038] / 48;
            do
            {
              v67 = v65[3];
              if ( v66 < v67 )
              {
                v65 = (_QWORD *)*v65;
              }
              else
              {
                if ( v66 - v67 < v65[4] )
                  goto LABEL_169;
                v65 = (_QWORD *)v65[1];
              }
            }
            while ( v65 );
          }
          a2[2] = ((__int64)(v32 << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL;
          v68 = v64 & 0xFFFFFFFFFFFFFFF0uLL | 0xD;
        }
        *a2 = v68;
        return;
      }
      v34 = 0;
      if ( !v32 )
      {
        v35 = 0LL;
        goto LABEL_46;
      }
      v35 = (__int64)(v32 << 25) >> 16;
      if ( v35 < 0xFFFF800000000000uLL )
      {
LABEL_46:
        v36 = 0;
        goto LABEL_47;
      }
      v36 = byte_140467140[((v35 >> 39) & 0x1FF) - 256];
      if ( v36 == 5 )
      {
        a2[2] = v35;
        *a2 = v31 & 0xFFFFFFFFFFFFFFF0uLL | 5;
        return;
      }
LABEL_47:
      a2[2] = v35 & 0xFFFFFFFFFFFFF000uLL;
      if ( (v17 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
      {
        if ( v36 == 9 )
          *a2 = v31 & 0xFFFFFFFFFFFFFFF0uLL | 6;
        else
          *a2 = v31 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
        return;
      }
      if ( v35 > 0x7FFFFFFEFFFFLL )
      {
        if ( v33 == 2 )
        {
          *a2 = v31 & 0xFFFFFFFFFFFFFFF0uLL | 0xB;
          return;
        }
        switch ( v36 )
        {
          case 1:
            TopLevelPfn = MiGetTopLevelPfn(v3);
            if ( (*(_QWORD *)(TopLevelPfn + 24) & 0x4000000000000000LL) != 0 )
            {
              *a2 &= 0xFE000000000001FFuLL;
              v48 = *a2;
            }
            else
            {
              v48 = *a2 & 0xFF000000000001FFuLL | ((*(_QWORD *)TopLevelPfn & 0xFFFFFFFFFFE0000LL | 0x1000000000000000uLL) >> 4);
              *a2 = v48;
            }
            if ( TopLevelPfn != v3 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v48 = *a2;
            }
            *a2 = v48 & 0xFFFFFFFFFFFFFFF0uLL | 7;
            return;
          case 6:
            *a2 = v31 & 0xFFFFFFFFFFFFFFF0uLL | 4;
            return;
          case 12:
          case 9:
          case 14:
            *a2 = v31 & 0xFFFFFFFFFFFFFFF0uLL | 6;
            return;
        }
      }
      if ( (v7 & 7) != 6 || (v73 & 1) != 0 && !v11 )
      {
        v37 = *(_QWORD *)(v3 + 40);
        memset(v77, 0, sizeof(v77));
        v38 = v3;
        v39 = 0;
        if ( (v37 & 0xFFFFFFFFFLL) != v8 )
        {
          do
          {
            v40 = v37 & 0xFFFFFFFFFLL;
            if ( v40 == 0xFFFFFFFFFLL )
              break;
            v76 = v40;
            v38 = 48 * v40 - 0x58000000000LL;
            if ( (unsigned int)++v39 > 4 )
              KeBugCheckEx(0x1Au, 0x9696uLL, v3, 0LL, 0LL);
            v72 = 0;
            v77[v39 - 1] = v38;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v72);
              while ( *(__int64 *)(v38 + 24) < 0 );
            }
            v37 = *(_QWORD *)(v38 + 40);
          }
          while ( (v37 & 0xFFFFFFFFFLL) != v76 );
        }
        v41 = v77;
        do
        {
          v42 = *v41;
          if ( !*v41 )
            break;
          if ( v42 != v38 )
            _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          ++v34;
          ++v41;
        }
        while ( v34 < 4 );
        *a2 = *a2 & 0xFF000000000001FFuLL | ((*(_QWORD *)v38 & 0xFFFFFFFFFFE0000LL | 0x1000000000000000uLL) >> 4);
        if ( v38 != v3 )
          _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v35 < 0xFFFFF68000000000uLL || v35 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          if ( v35 < qword_1404672B0 || v35 > qword_140465BE0 )
            *a2 &= 0xFFFFFFFFFFFFFFF0uLL;
          else
            *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 0xC;
          return;
        }
LABEL_88:
        *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 3;
        return;
      }
      if ( v35 <= 0x7FFFFFFEFFFFLL
        || (v44 = (((unsigned __int64)qword_1404672B0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
            v45 = v30 | 0x8000000000000000uLL,
            v45 < 0xFFFFF68000000000uLL) )
      {
LABEL_86:
        if ( v35 < 0xFFFFF68000000000uLL || v35 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 5;
          return;
        }
        goto LABEL_88;
      }
      while ( 1 )
      {
        if ( v45 > 0xFFFFF6FFFFFFFFFFuLL )
          goto LABEL_86;
        if ( v45 <= (((unsigned __int64)qword_140465BE0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL && v45 >= v44 )
          break;
        ++v34;
        v44 &= 0xFFFFFFFFFFFFF000uLL;
        v45 = (__int64)(v45 << 25) >> 16;
        if ( v45 < 0xFFFFF68000000000uLL )
          goto LABEL_86;
      }
      v69 = MiGetTopLevelPfn(v3);
      v70 = *a2 & 0xFF000000000001FFuLL | ((*(_QWORD *)v69 & 0xFFFFFFFFFFE0000LL | 0x1000000000000000uLL) >> 4);
      *a2 = v70;
      if ( v69 != v3 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v69 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v70 = *a2;
      }
      *a2 = v70 & 0xFFFFFFFFFFFFFFF0uLL | 0xC;
      return;
  }
}
