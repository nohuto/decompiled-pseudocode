/*
 * XREFs of MiIdentifyPfn @ 0x1400A7E20
 * Callers:
 *     MiMakePageAvoidRead @ 0x1400348E0 (MiMakePageAvoidRead.c)
 *     MiDeletePteRun @ 0x140037620 (MiDeletePteRun.c)
 *     MiDemoteCombinedPte @ 0x14006C1F0 (MiDemoteCombinedPte.c)
 *     MiConvertPrivateToProto @ 0x140082EA0 (MiConvertPrivateToProto.c)
 *     MiIdentifyPfnWrapper @ 0x1400A7D70 (MiIdentifyPfnWrapper.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     MmSetPfnListInfo @ 0x14013FD90 (MmSetPfnListInfo.c)
 *     MmTryIdentifyPage @ 0x1402AA834 (MmTryIdentifyPage.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x14001B7BC (MiGetSubsectionDriverProtos.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiStartingOffset @ 0x140031170 (MiStartingOffset.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiGetTopLevelPfn @ 0x140083810 (MiGetTopLevelPfn.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetLeafPfnBuddy @ 0x14015E9D4 (MiGetLeafPfnBuddy.c)
 *     MiGetSharedProtos @ 0x140177274 (MiGetSharedProtos.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MmQuerySpecialPoolBlockType @ 0x1402AD9C4 (MmQuerySpecialPoolBlockType.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall MiIdentifyPfn(__int128 *BugCheckParameter2, unsigned __int64 *a2)
{
  __int128 v4; // xmm1
  __m128i v5; // xmm2
  unsigned __int8 v6; // r10
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // r14
  struct _KPRCB *CurrentPrcb; // r13
  _DWORD *SchedulerAssist; // rcx
  __int64 v19; // rdx
  struct _KPRCB *v20; // rcx
  _DWORD *v21; // rdx
  unsigned __int64 v22; // rdx
  __int16 v23; // r8
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rcx
  __int64 v27; // r14
  unsigned __int64 v28; // rsi
  char v29; // dl
  __int64 v30; // rdx
  unsigned int v31; // r15d
  unsigned __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // r14
  int v35; // r13d
  __int64 v36; // rcx
  __int64 *v37; // rcx
  __int64 v38; // rax
  unsigned __int64 v39; // rdi
  unsigned __int64 v40; // rax
  int v41; // ecx
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // r14
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rax
  __int64 TopLevelPfn; // rax
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rax
  bool v49; // zf
  unsigned __int32 v50; // eax
  __int64 v51; // rdx
  unsigned __int64 v52; // r9
  unsigned __int64 v53; // r10
  __int64 v54; // r9
  unsigned __int64 v55; // rax
  _DWORD *v56; // rcx
  __int64 LeafPfnBuddy; // rax
  __int64 v58; // rdx
  int v59; // eax
  int v60; // eax
  int v61; // eax
  __int64 SharedProtos; // rax
  unsigned __int64 v63; // r9
  _QWORD *v64; // r10
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rcx
  unsigned __int64 v67; // r9
  __int64 v68; // r9
  __int64 v69; // rax
  unsigned __int64 v70; // rdx
  unsigned int v71; // [rsp+30h] [rbp-49h] BYREF
  int v72; // [rsp+34h] [rbp-45h] BYREF
  __int128 v73; // [rsp+38h] [rbp-41h] BYREF
  __int128 v74; // [rsp+48h] [rbp-31h]
  __m128i v75; // [rsp+58h] [rbp-21h]
  __int64 v76; // [rsp+68h] [rbp-11h]
  _QWORD v77[4]; // [rsp+70h] [rbp-9h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+5Fh]

  v4 = BugCheckParameter2[1];
  v5 = (__m128i)BugCheckParameter2[2];
  v73 = *BugCheckParameter2;
  v74 = v4;
  v75 = v5;
  v6 = _mm_cvtsi128_si32(_mm_srli_si128(v5, 2));
  v7 = (__int64)(BugCheckParameter2 + 0x5800000000LL) / 48;
  v8 = (*(_DWORD *)a2 ^ (16 * v6)) & 0x70;
  a2[1] = v7;
  *a2 ^= v8;
  LOBYTE(v8) = _mm_cvtsi128_si32(_mm_srli_si128(v5, 3));
  v9 = (unsigned __int8)v8;
  LOBYTE(v9) = (v8 & 8) != 0;
  if ( (v8 & 8) != 0 )
    LODWORD(v8) = 5;
  else
    LODWORD(v8) = (unsigned __int8)v8;
  v10 = *a2 ^ (*a2 ^ ((unsigned __int64)(unsigned int)v8 << 57)) & 0xE00000000000000LL;
  *a2 = v10;
  v11 = (v10 >> 4) & 7;
  if ( (_DWORD)v11 == 1 )
    return;
  v12 = v74;
  switch ( (int)v11 )
  {
    case 0:
    case 5:
      return;
    case 2:
    case 3:
    case 4:
      if ( v75.m128i_i16[0] )
      {
        v10 |= 0x100uLL;
        *a2 = v10;
      }
      if ( (*((_QWORD *)&v74 + 1) & 0x4000000000000000LL) == 0 )
      {
        if ( (v12 & 0x400) != 0 )
          v13 = (unsigned __int64)v12 >> 11;
        else
          v13 = (unsigned __int64)v12 >> 3;
        if ( (v13 & 1) != 0 )
        {
          v10 |= 0x80uLL;
          goto LABEL_9;
        }
        goto LABEL_16;
      }
      if ( (v75.m128i_i64[1] & 0x200000000000000LL) == 0 )
        a2[2] = ((__int64)(*((_QWORD *)&v73 + 1) << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL;
      *a2 = v10 & 0xFFFFFFFFFFFFFFF0uLL;
      return;
    case 6:
      if ( (v73 & 1) == 0 || (_BYTE)v9 || v75.m128i_i16[0] > 1u )
      {
        v10 |= 0x100uLL;
LABEL_9:
        *a2 = v10;
      }
      goto LABEL_16;
    case 7:
      v51 = v10 | 0x100;
      v52 = v75.m128i_u64[1];
      v53 = *((_QWORD *)&v73 + 1) | 0x8000000000000000uLL;
      *a2 = v51;
      if ( (v52 & 0x200000000000000LL) == 0 )
        a2[2] = ((__int64)(v53 << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL;
      if ( ((v52 >> 54) & 7) == 1 )
      {
        LeafPfnBuddy = MiGetLeafPfnBuddy(&v73, v51, 0xFFFFF68000000000uLL, v52);
        v55 = (v58 ^ (v58 ^ (LeafPfnBuddy << 9)) & 0x1FFFFFFFFFFFE00LL) & 0xFFFFFFFFFFFFFFF0uLL | 9;
      }
      else
      {
        v54 = v52 & 0xFFFFFFFFFLL;
        if ( v54 == 0xFFFFFFFFDLL )
        {
          v55 = v51 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
        }
        else if ( v54 == 0xFFFFFFFFFLL && v53 == 0xFFFFF68000000000uLL )
        {
          v55 = v51 & 0xFFFFFFFFFFFFFFF0uLL | 5;
        }
        else
        {
          v55 = v51 & 0xFFFFFFFFFFFFFFF0uLL;
        }
      }
      *a2 = v55;
      return;
    default:
LABEL_16:
      v14 = v75.m128i_i64[1];
      if ( (v75.m128i_i64[1] & 0x200000000000000LL) != 0 )
      {
        if ( (v12 & 0x400) != 0 )
        {
          if ( qword_14043B180 && (v12 & 0x10) == 0 )
            v12 &= ~qword_14043B180;
          v15 = v12 >> 16;
          v16 = *(_QWORD *)v15;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            LOBYTE(v10) = -1;
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v16 + 72, v10);
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
                v59 = SchedulerAssist[5];
                SchedulerAssist[5] = v59 + 1;
                if ( v59 == -1 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            if ( _interlockedbittestandset((volatile signed __int32 *)(v16 + 72), 0x1Fu) )
            {
              v56 = CurrentPrcb->SchedulerAssist;
              if ( v56 )
              {
                if ( CurrentPrcb->NestingLevel <= 1u )
                {
                  v60 = v56[5] - 1;
                  v56[5] = v60;
                  if ( !v60 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
              v71 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v16 + 72), 0xFFu);
            }
            v19 = *(unsigned int *)(v16 + 72);
            if ( (*(_DWORD *)(v16 + 72) & 0xBFFFFFFF) != 0x80000000 )
            {
              do
              {
                if ( (v19 & 0x40000000) == 0 )
                {
                  v50 = _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 72), v19 | 0x40000000, v19);
                  v49 = (_DWORD)v19 == v50;
                  v19 = v50;
                  if ( !v49 )
                    continue;
                }
                KeYieldProcessorEx(&v71, v19, v7);
                v19 = *(unsigned int *)(v16 + 72);
              }
              while ( (v19 & 0xBFFFFFFF) != 0x80000000 );
            }
          }
          if ( (*(_QWORD *)(v16 + 64) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
          {
            a2[2] = *(_QWORD *)((*(_QWORD *)(v16 + 64) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v16 + 72, retaddr);
            else
              *(_DWORD *)(v16 + 72) = 0;
            v20 = KeGetCurrentPrcb();
            v21 = v20->SchedulerAssist;
            if ( v21 )
            {
              if ( v20->NestingLevel <= 1u )
              {
                v61 = v21[5] - 1;
                v21[5] = v61;
                if ( !v61 )
                  KiRemoveSystemWorkPriorityKick(v20);
              }
            }
            a2[2] ^= (*((_DWORD *)a2 + 4) ^ (*(_DWORD *)(v16 + 56) >> 5)) & 1;
            v22 = *(_QWORD *)(v15 + 8);
            if ( v22 )
            {
              v23 = *(_WORD *)(v15 + 34);
              if ( (v23 & 2) != 0 && (*(_DWORD *)(v16 + 56) & 0x4000000) != 0 )
              {
                *a2 ^= (*a2 ^ MiStartingOffset((__int64 *)v15, v22, 0xFFFFFFFF)) & 0x1FFFFFFFFFFFE00LL;
              }
              else
              {
                v24 = *((_QWORD *)&v73 + 1) | 0x8000000000000000uLL;
                if ( (*(_DWORD *)(*(_QWORD *)v15 + 56LL) & 0x20) != 0 )
                {
                  if ( v24 < v22 || v24 >= v22 + 8LL * *(unsigned int *)(v15 + 44) )
                  {
                    if ( (v23 & 2) != 0 )
                      SharedProtos = MiGetSharedProtos(*(_QWORD *)v15, 0xFFFFFFFFLL, v15);
                    else
                      SharedProtos = MiGetSubsectionDriverProtos((_QWORD *)v15);
                    v39 = (v24 << 9) - (*(_QWORD *)(SharedProtos + 72) << 9);
                  }
                  else
                  {
                    v39 = (v24 << 9) - (v22 << 9);
                  }
                  v25 = ((unsigned __int64)*(unsigned int *)(v15 + 36) << 9) + (v39 & 0xFFFFFFFFFFFFF000uLL);
                }
                else
                {
                  v25 = ((__int64)(v24 - v22) >> 3 << 12)
                      + ((*(unsigned int *)(v15 + 36) | ((unsigned __int64)(*(_WORD *)(v15 + 32) & 0xFFC0) << 26)) << 12);
                }
                *a2 ^= (*a2 ^ v25) & 0x1FFFFFFFFFFFE00LL;
              }
            }
            v26 = *a2;
            if ( (*(_DWORD *)(v16 + 56) & 9) == 8 )
              *a2 = v26 & 0xFFFFFFFFFFFFFFF0uLL | 8;
            else
              *a2 = v26 & 0xFFFFFFFFFFFFFFF0uLL | 1;
          }
          else
          {
            *a2 = *a2 & 0xFFFFFFFFFFFFFE8FuLL | 0x10;
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v16 + 72));
          }
        }
        else
        {
          v44 = *((_QWORD *)&v73 + 1) | 0x8000000000000000uLL;
          a2[2] = *((_QWORD *)&v73 + 1) | 0x8000000000000000uLL;
          if ( v73 >= 0 )
          {
            a2[2] = v44 | 1;
            v48 = *(_QWORD *)(v44 - 16);
            if ( v48 >= 0x1000000000000LL )
              v48 = 0xFFFFFFFFFFFFLL;
            *a2 ^= (*a2 ^ (v48 << 9)) & 0x1FFFFFFFFFFFE00LL;
          }
          *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 2;
        }
        return;
      }
      v27 = *((_QWORD *)&v73 + 1);
      v28 = *((_QWORD *)&v73 + 1);
      if ( *((_QWORD *)&v73 + 1) && (((unsigned __int64)v75.m128i_i64[1] >> 54) & 7) != 1 )
        v28 = *((_QWORD *)&v73 + 1) | 0x8000000000000000uLL;
      if ( v28 >= 0xFFFF800000000000uLL )
      {
        v29 = byte_14043CA10[((v28 >> 39) & 0x1FF) - 256];
        if ( v29 == 5 || v29 == 13 )
        {
          *a2 = (*a2 ^ (*a2 ^ ((v28 - 1088) << 9)) & 0x1FFFFFFFFFFFE00LL) & 0xFFFFFFFFFFFFFFF0uLL | 3;
          a2[2] = 0xFFFFF6FB7DBED000uLL;
          return;
        }
      }
      if ( v28 == -8LL )
      {
        *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 5;
        a2[2] = (unsigned __int64)MmBadPointer;
        return;
      }
      v30 = ((unsigned __int64)v75.m128i_i64[1] >> 54) & 7;
      if ( v30 == 1 )
      {
        *a2 ^= (*a2 ^ (MiGetLeafPfnBuddy(&v73, 1LL, v7, v9) << 9)) & 0x1FFFFFFFFFFFE00LL;
        v63 = *a2;
        if ( v28 < 0xFFFFF68000000000uLL || v28 > 0xFFFFF6FFFFFFFFFFuLL )
        {
LABEL_170:
          v67 = v63 & 0xFFFFFFFFFFFFFFF0uLL | 9;
        }
        else
        {
          v64 = (_QWORD *)qword_14043B248;
          if ( qword_14043B248 )
          {
            v65 = (__int64)&STACK[0x58000000038] / 48;
            do
            {
              v66 = v64[3];
              if ( v65 < v66 )
              {
                v64 = (_QWORD *)*v64;
              }
              else
              {
                if ( v65 - v66 < v64[4] )
                  goto LABEL_170;
                v64 = (_QWORD *)v64[1];
              }
            }
            while ( v64 );
          }
          a2[2] = ((__int64)(v28 << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL;
          v67 = v63 & 0xFFFFFFFFFFFFFFF0uLL | 0xD;
        }
        *a2 = v67;
        return;
      }
      v31 = 0;
      if ( !v28 )
      {
        v32 = 0LL;
        goto LABEL_47;
      }
      v32 = (__int64)(v28 << 25) >> 16;
      if ( v32 < 0xFFFF800000000000uLL )
      {
LABEL_47:
        v71 = 0;
        goto LABEL_48;
      }
      v71 = (unsigned __int8)byte_14043CA10[((v32 >> 39) & 0x1FF) - 256];
      if ( v71 == 5 )
      {
        v40 = *a2 & 0xFFFFFFFFFFFFFFF5uLL;
        a2[2] = v32;
        *a2 = v40 | 5;
        return;
      }
LABEL_48:
      a2[2] = v32 & 0xFFFFFFFFFFFFF000uLL;
      if ( (v14 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
      {
        v45 = *a2;
        if ( v71 != 9 )
        {
          *a2 = v45 & 0xFFFFFFFFFFFFFFF0uLL | 0xA;
          return;
        }
LABEL_99:
        *a2 = v45 & 0xFFFFFFFFFFFFFFF0uLL | 6;
        return;
      }
      if ( v32 <= 0x7FFFFFFEFFFFLL )
        goto LABEL_50;
      if ( v30 == 2 )
      {
        *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 0xB;
        return;
      }
      if ( v71 == 1 )
      {
        TopLevelPfn = MiGetTopLevelPfn((__int64)BugCheckParameter2);
        if ( (*(_QWORD *)(TopLevelPfn + 24) & 0x4000000000000000LL) != 0 )
        {
          *a2 &= 0xFE000000000001FFuLL;
          v47 = *a2;
        }
        else
        {
          v47 = *a2 & 0xFF000000000001FFuLL | ((*(_QWORD *)TopLevelPfn & 0xFFFFFFFFFFE0000LL | 0x1000000000000000uLL) >> 4);
          *a2 = v47;
        }
        if ( (__int128 *)TopLevelPfn != BugCheckParameter2 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v47 = *a2;
        }
        *a2 = v47 & 0xFFFFFFFFFFFFFFF0uLL | 7;
        return;
      }
      if ( v71 == 6 )
      {
        *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 4;
        return;
      }
      if ( v71 <= 0xF )
      {
        v41 = 37376;
        if ( _bittest(&v41, v71) )
        {
          v45 = *a2;
          goto LABEL_99;
        }
      }
      if ( v71 != 7 && v71 != 13 )
      {
LABEL_50:
        if ( (v6 & 7) == 6 && ((v73 & 1) == 0 || (_BYTE)v9) )
        {
          if ( v32 > 0x7FFFFFFEFFFFLL )
          {
            v42 = (((unsigned __int64)qword_14043CB80 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v43 = v27 | 0x8000000000000000uLL;
            if ( v43 >= 0xFFFFF68000000000uLL )
            {
              while ( v43 <= 0xFFFFF6FFFFFFFFFFuLL )
              {
                if ( v43 <= (((unsigned __int64)qword_14043B5F0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL && v43 >= v42 )
                {
                  v69 = MiGetTopLevelPfn((__int64)BugCheckParameter2);
                  v70 = *a2 & 0xFF000000000001FFuLL | ((*(_QWORD *)v69 & 0xFFFFFFFFFFE0000LL | 0x1000000000000000uLL) >> 4);
                  *a2 = v70;
                  if ( (__int128 *)v69 != BugCheckParameter2 )
                  {
                    _InterlockedAnd64((volatile signed __int64 *)(v69 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    v70 = *a2;
                  }
                  *a2 = v70 & 0xFFFFFFFFFFFFFFF0uLL | 0xC;
                  return;
                }
                ++v31;
                v42 &= 0xFFFFFFFFFFFFF000uLL;
                v43 = (__int64)(v43 << 25) >> 16;
                if ( v43 < 0xFFFFF68000000000uLL )
                  break;
              }
            }
          }
          if ( v32 < 0xFFFFF68000000000uLL || v32 > 0xFFFFF6FFFFFFFFFFuLL )
          {
            *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 5;
            return;
          }
        }
        else
        {
          v33 = *((_QWORD *)BugCheckParameter2 + 5);
          memset(v77, 0, sizeof(v77));
          v34 = (__int64)BugCheckParameter2;
          v35 = 0;
          if ( (v33 & 0xFFFFFFFFFLL) != v7 )
          {
            do
            {
              v36 = v33 & 0xFFFFFFFFFLL;
              if ( v36 == 0xFFFFFFFFFLL )
                break;
              v76 = v36;
              v34 = 48 * v36 - 0x58000000000LL;
              if ( (unsigned int)++v35 > 4 )
                KeBugCheckEx(0x1Au, 0x9696uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
              v72 = 0;
              v77[v35 - 1] = v34;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v72, v30, v7);
                while ( *(__int64 *)(v34 + 24) < 0 );
              }
              v33 = *(_QWORD *)(v34 + 40);
            }
            while ( (v33 & 0xFFFFFFFFFLL) != v76 );
          }
          v37 = v77;
          do
          {
            v38 = *v37;
            if ( !*v37 )
              break;
            if ( v38 != v34 )
              _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            ++v31;
            ++v37;
          }
          while ( v31 < 4 );
          *a2 = *a2 & 0xFF000000000001FFuLL | ((*(_QWORD *)v34 & 0xFFFFFFFFFFE0000LL | 0x1000000000000000uLL) >> 4);
          if ( (__int128 *)v34 != BugCheckParameter2 )
            _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v32 < 0xFFFFF68000000000uLL || v32 > 0xFFFFF6FFFFFFFFFFuLL )
          {
            if ( v32 < qword_14043CB80 || v32 > qword_14043B5F0 )
              *a2 &= 0xFFFFFFFFFFFFFFF0uLL;
            else
              *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 0xC;
            return;
          }
        }
        *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 3;
        return;
      }
      *a2 = *a2 & 0xFFFFFFFFFFFFFFF0uLL | 4;
      if ( (MmQuerySpecialPoolBlockType(v32) & 1) == 0 )
        *a2 = v68 | 5;
      return;
  }
}
