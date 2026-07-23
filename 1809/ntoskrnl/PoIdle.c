/*
 * XREFs of PoIdle @ 0x14005D6B0
 * Callers:
 *     KiIdleLoop @ 0x1401C0680 (KiIdleLoop.c)
 * Callees:
 *     PpmIdleExecuteTransition @ 0x14005DC80 (PpmIdleExecuteTransition.c)
 *     PpmIdlePrepare @ 0x14005F3A0 (PpmIdlePrepare.c)
 *     KeAddProcessorAffinityEx @ 0x140063A30 (KeAddProcessorAffinityEx.c)
 *     PpmEventIdleStateChange @ 0x14011FD08 (PpmEventIdleStateChange.c)
 *     KeIdleSpecCtrl @ 0x14013E1F0 (KeIdleSpecCtrl.c)
 *     PpmIdleSelectStates @ 0x1401801D0 (PpmIdleSelectStates.c)
 *     PpmResetProcessorIdleAccounting @ 0x14018BA24 (PpmResetProcessorIdleAccounting.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeExecuteVerw @ 0x1401D1600 (KeExecuteVerw.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PpmSetPlatformIdleDurationHint @ 0x1402D5C40 (PpmSetPlatformIdleDurationHint.c)
 */

__int64 __fastcall PoIdle(ULONG_PTR BugCheckParameter4)
{
  __int64 result; // rax
  unsigned __int16 v3; // bx
  __int64 v4; // rsi
  _DWORD *v5; // r12
  __int64 v6; // r13
  unsigned __int16 v7; // ax
  __int64 v8; // rdx
  unsigned __int16 v9; // bx
  unsigned __int16 v10; // di
  __int64 v11; // rcx
  __int64 v12; // r10
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned __int64 *v16; // rax
  unsigned int v17; // ecx
  unsigned int v18; // edi
  unsigned __int16 v19; // ax
  __int64 v20; // rdx
  unsigned __int16 v21; // bx
  unsigned __int16 v22; // di
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // ecx
  int v26; // edx
  unsigned __int16 v28; // dx
  char v29; // r12
  unsigned __int16 v30; // cx
  __int64 v31; // rsi
  struct _KPRCB *CurrentPrcb; // r8
  int v33; // r10d
  _KNODE *ParentNode; // r9
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  char v37; // [rsp+48h] [rbp-C0h] BYREF
  char v38[3]; // [rsp+49h] [rbp-BFh] BYREF
  unsigned int v39; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v40; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v41; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v42; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+70h] [rbp-98h] BYREF
  __int64 v46; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v47[44]; // [rsp+88h] [rbp-80h] BYREF

  result = dword_14041918C;
  if ( BYTE1(PpmCurrentProfile[341 * dword_14041918C + 23]) )
    return result;
  v3 = 0;
  v4 = *(_QWORD *)(BugCheckParameter4 + 23808);
  v5 = *(_DWORD **)(BugCheckParameter4 + 23816);
  v6 = 0LL;
  v44 = 0LL;
  if ( !v4 )
  {
    v7 = KeIdleSpecCtrl(BugCheckParameter4, 1LL, &v40, 0LL);
    v9 = v40;
    v10 = v7;
    if ( (_WORD)v40 )
    {
      v8 = 0LL;
      __writemsr(0x48u, 0LL);
    }
    v11 = HIWORD(v40);
    if ( HIWORD(v40) )
      KeExecuteVerw(v11, v8);
    HalProcessorIdle(v11, v8);
    if ( v9 )
      __writemsr(0x48u, v9);
    else
      _mm_lfence();
    return KeIdleSpecCtrl(BugCheckParameter4, 0LL, &v40, v10);
  }
  *(_DWORD *)(v4 + 796) = 0;
  v12 = *(_QWORD *)(BugCheckParameter4 + 23808);
  if ( *(_BYTE *)(v12 + 5) )
  {
    v13 = *(_QWORD *)(BugCheckParameter4 + 23824);
    *(_QWORD *)(BugCheckParameter4 + 23824) = 0LL;
    v14 = *(unsigned int *)(v12 + 20);
    *(_QWORD *)(BugCheckParameter4 + 23832) += v13;
    v15 = *(_QWORD *)(BugCheckParameter4 + 23816) + 1000 * v14;
    *(_QWORD *)(v15 + 40) += v13;
    if ( *(_DWORD *)(v12 + 68) == 3 )
    {
      if ( *(int *)(v12 + 64) >= 0 )
      {
        ++*(_DWORD *)(v15 + 56);
        v16 = (unsigned __int64 *)&PpmIdleIntervalLimits;
        v17 = 0;
        while ( v13 >= *v16 )
        {
          if ( v13 < v16[3] )
          {
            ++v17;
            break;
          }
          v16 += 6;
          v17 += 2;
          if ( v17 >= 0x1A )
            goto LABEL_20;
        }
        if ( v17 >= 0x1A )
        {
LABEL_20:
          ++*(_DWORD *)(v15 + 60);
          goto LABEL_21;
        }
        v24 = 32LL * v17;
        *(_QWORD *)(v24 + v15 + 208) += v13;
        ++*(_DWORD *)(v24 + v15 + 232);
        if ( v13 < *(_QWORD *)(v24 + v15 + 216) )
          *(_QWORD *)(v24 + v15 + 216) = v13;
        if ( v13 > *(_QWORD *)(v24 + v15 + 224) )
          *(_QWORD *)(v24 + v15 + 224) = v13;
LABEL_21:
        if ( v13 < *(_QWORD *)(v15 + 64) )
          *(_QWORD *)(v15 + 64) = v13;
        if ( v13 > *(_QWORD *)(v15 + 72) )
          *(_QWORD *)(v15 + 72) = v13;
      }
      else
      {
        ++*(_DWORD *)(v15 + 52);
      }
    }
    else
    {
      ++*(_DWORD *)(v15 + 48);
    }
  }
  *(_DWORD *)(v12 + 64) = 0;
  *(_DWORD *)(v12 + 68) = 3;
  *(_BYTE *)(v12 + 5) = 0;
  *(_BYTE *)(v4 + 5) = 1;
  v47[0] = 1310721;
  memset(&v47[1], 0, 0xA4uLL);
  *(_WORD *)(v4 + 48) = 0;
  if ( *(_BYTE *)v4 )
  {
    if ( PpmIdleVetoBias && *(_BYTE *)(v4 + 8) )
      return ((__int64 (*)(void))HalProcessorIdle)();
    PpmIdleSelectStates(
      BugCheckParameter4,
      (unsigned int)&v43,
      (unsigned int)&v45,
      (unsigned int)v38,
      (__int64)&v39,
      (__int64)&v42,
      (__int64)&v46,
      (__int64)&v37);
    v18 = v39;
  }
  else
  {
    result = PpmIdlePrepare(
               BugCheckParameter4,
               (unsigned int)v38,
               (unsigned int)&v43,
               (unsigned int)&v45,
               (__int64)&v44,
               (__int64)v47);
    v18 = result;
    v39 = result;
    if ( (_DWORD)result == -2 )
    {
      v19 = KeIdleSpecCtrl(BugCheckParameter4, 1LL, &v41, 0LL);
      v21 = v41;
      v22 = v19;
      if ( (_WORD)v41 )
      {
        v20 = 0LL;
        __writemsr(0x48u, 0LL);
      }
      v23 = HIWORD(v41);
      if ( HIWORD(v41) )
        KeExecuteVerw(v23, v20);
      HalProcessorIdle(v23, v20);
      if ( v21 )
        __writemsr(0x48u, v21);
      else
        _mm_lfence();
      return KeIdleSpecCtrl(BugCheckParameter4, 0LL, &v41, v22);
    }
    if ( (_DWORD)result == -1 )
    {
      ++v5[3];
      return result;
    }
    v25 = *(_DWORD *)(v4 + 560);
    LODWORD(v42) = v25;
    if ( v25 != -1 )
    {
      **(_DWORD **)(v4 + 808) = v25;
      *(_DWORD *)(v4 + 796) = 1;
    }
    v6 = v44;
    v46 = 0LL;
    v37 = *(_BYTE *)(248LL * (unsigned int)result + v4 + 1058) == 0;
  }
  v26 = *(_DWORD *)(v4 + 16);
  if ( v18 != v26 )
  {
    *(_DWORD *)(v4 + 24) = v26;
    *(_DWORD *)(v4 + 16) = v18;
    PpmEventIdleStateChange(v18);
  }
  if ( v5[1]++ == -1 )
    PpmResetProcessorIdleAccounting(v5);
  v28 = v47[0];
  v29 = *(_BYTE *)(248LL * v18 + v4 + 1057);
  v30 = 0;
  v31 = *(_QWORD *)(BugCheckParameter4 + 23808);
  if ( LOWORD(v47[0]) )
  {
    while ( !*(_QWORD *)&v47[2 * v30 + 2] )
    {
      if ( ++v30 >= LOWORD(v47[0]) )
        goto LABEL_62;
    }
    *(_WORD *)(v31 + 48) |= 0x400u;
    if ( KiSerializeTimerExpiration && v6 )
      PpmSetPlatformIdleDurationHint(v6);
    v28 = v47[0];
  }
LABEL_62:
  if ( !(_BYTE)KiDynamicTickDisableReason
    && !PpmIpiLastClockOwnerDisable
    && !*(_BYTE *)(BugCheckParameter4 + 33)
    && *(_BYTE *)(KiProcessorBlock[KiClockTimerOwner] + 33)
    && !v29 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v33 = 0;
    ParentNode = CurrentPrcb->ParentNode;
    if ( (ParentNode->DeepIdleSet & ~(1LL << CurrentPrcb->GroupIndex)) == (ParentNode->Affinity.Mask & ~(1LL << (KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number] & 0x3F))) )
    {
      while ( ++v33 != (unsigned __int16)KeNumberNodes )
      {
        v35 = KeNodeBlock[*((unsigned __int16 *)qword_14043B110
                          + v33
                          + ParentNode->Affinity.Reserved[0] * (unsigned int)(unsigned __int16)KeNumberNodes)];
        if ( *(_QWORD *)(v35 + 64) != *(_QWORD *)(v35 + 136) )
          goto LABEL_73;
      }
      v36 = (unsigned int)KiProcessorIndexToNumberMappingTable[KiClockTimerOwner];
      if ( ((*(_QWORD *)&v47[2 * (v36 >> 6) + 2] >> (v36 & 0x3F)) & 1) == 0 )
      {
        KeAddProcessorAffinityEx(v47, (unsigned int)KiClockTimerOwner);
        *(_WORD *)(v31 + 48) |= 0x800u;
      }
    }
LABEL_73:
    v28 = v47[0];
  }
  if ( v28 )
  {
    while ( !*(_QWORD *)&v47[2 * v3 + 2] )
    {
      if ( ++v3 >= v28 )
        return PpmIdleExecuteTransition(BugCheckParameter4, v38[0], v43, v45, v37);
    }
    HalRequestIpi(0LL, v47);
  }
  return PpmIdleExecuteTransition(BugCheckParameter4, v38[0], v43, v45, v37);
}
