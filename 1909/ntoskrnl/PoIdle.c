/*
 * XREFs of PoIdle @ 0x140031410
 * Callers:
 *     KiIdleLoop @ 0x1401C8150 (KiIdleLoop.c)
 * Callees:
 *     PpmIdleExecuteTransition @ 0x140031920 (PpmIdleExecuteTransition.c)
 *     PpmIdlePrepare @ 0x1400330E0 (PpmIdlePrepare.c)
 *     KeAddProcessorAffinityEx @ 0x14009E060 (KeAddProcessorAffinityEx.c)
 *     PpmEventIdleStateChange @ 0x14011E88C (PpmEventIdleStateChange.c)
 *     PpmIdleSelectStates @ 0x14018A5C0 (PpmIdleSelectStates.c)
 *     PpmResetProcessorIdleAccounting @ 0x1401958A4 (PpmResetProcessorIdleAccounting.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PpmSetPlatformIdleDurationHint @ 0x1402EFE70 (PpmSetPlatformIdleDurationHint.c)
 */

__int64 __fastcall PoIdle(ULONG_PTR BugCheckParameter4)
{
  __int64 result; // rax
  unsigned __int16 v3; // bx
  __int64 v4; // r12
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // r10
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r9
  unsigned __int64 *v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // rax
  unsigned int v14; // edi
  int v15; // ecx
  int v16; // edx
  __int64 v18; // r12
  unsigned __int16 v19; // dx
  char v20; // r14
  unsigned __int16 v21; // cx
  struct _KPRCB *CurrentPrcb; // r8
  int v23; // edi
  _KNODE *ParentNode; // r9
  __int64 v25; // r8
  unsigned __int64 v26; // rax
  char v27; // [rsp+40h] [rbp-C0h] BYREF
  char v28[3]; // [rsp+41h] [rbp-BFh] BYREF
  unsigned int v29; // [rsp+44h] [rbp-BCh] BYREF
  int v30; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v35[22]; // [rsp+70h] [rbp-90h] BYREF

  memset(v35, 0, 0xA8uLL);
  result = dword_140443A2C;
  if ( BYTE1(PpmCurrentProfile[341 * dword_140443A2C + 23]) )
    return result;
  v3 = 0;
  v4 = *(_QWORD *)(BugCheckParameter4 + 23816);
  v5 = *(_QWORD *)(BugCheckParameter4 + 23808);
  v6 = 0LL;
  v32 = 0LL;
  if ( !v5 )
    return HalProcessorIdle();
  *(_DWORD *)(v5 + 796) = 0;
  v7 = *(_QWORD *)(BugCheckParameter4 + 23808);
  if ( *(_BYTE *)(v7 + 5) )
  {
    v8 = *(_QWORD *)(BugCheckParameter4 + 23824);
    *(_QWORD *)(BugCheckParameter4 + 23824) = 0LL;
    v9 = *(unsigned int *)(v7 + 20);
    *(_QWORD *)(BugCheckParameter4 + 23832) += v8;
    v10 = *(_QWORD *)(BugCheckParameter4 + 23816) + 1000 * v9;
    *(_QWORD *)(v10 + 40) += v8;
    if ( *(_DWORD *)(v7 + 68) == 3 )
    {
      if ( *(int *)(v7 + 64) < 0 )
      {
        ++*(_DWORD *)(v10 + 52);
      }
      else
      {
        ++*(_DWORD *)(v10 + 56);
        v11 = (unsigned __int64 *)&PpmIdleIntervalLimits;
        v12 = 0;
        while ( v8 >= *v11 )
        {
          if ( v8 < v11[3] )
          {
            ++v12;
            break;
          }
          v11 += 6;
          v12 += 2;
          if ( v12 >= 0x1A )
            goto LABEL_59;
        }
        if ( v12 >= 0x1A )
        {
LABEL_59:
          ++*(_DWORD *)(v10 + 60);
          goto LABEL_17;
        }
        v13 = 32LL * v12;
        *(_QWORD *)(v13 + v10 + 208) += v8;
        ++*(_DWORD *)(v13 + v10 + 232);
        if ( v8 < *(_QWORD *)(v13 + v10 + 216) )
          *(_QWORD *)(v13 + v10 + 216) = v8;
        if ( v8 > *(_QWORD *)(v13 + v10 + 224) )
          *(_QWORD *)(v13 + v10 + 224) = v8;
LABEL_17:
        if ( v8 < *(_QWORD *)(v10 + 64) )
          *(_QWORD *)(v10 + 64) = v8;
        if ( v8 > *(_QWORD *)(v10 + 72) )
          *(_QWORD *)(v10 + 72) = v8;
      }
    }
    else
    {
      ++*(_DWORD *)(v10 + 48);
    }
  }
  *(_DWORD *)(v7 + 64) = 0;
  *(_DWORD *)(v7 + 68) = 3;
  *(_BYTE *)(v7 + 5) = 0;
  *(_BYTE *)(v5 + 5) = 1;
  LODWORD(v35[0]) = 1310721;
  memset((char *)v35 + 4, 0, 0xA4uLL);
  *(_WORD *)(v5 + 48) = 0;
  if ( !*(_BYTE *)v5 )
  {
    result = PpmIdlePrepare(
               BugCheckParameter4,
               (unsigned int)v28,
               (unsigned int)&v31,
               (unsigned int)&v33,
               (__int64)&v32,
               (__int64)v35);
    v14 = result;
    v29 = result;
    if ( (_DWORD)result != -2 )
    {
      if ( (_DWORD)result == -1 )
      {
        ++*(_DWORD *)(v4 + 12);
        return result;
      }
      v15 = *(_DWORD *)(v5 + 560);
      v30 = v15;
      if ( v15 != -1 )
      {
        **(_DWORD **)(v5 + 808) = v15;
        *(_DWORD *)(v5 + 796) = 1;
      }
      v6 = v32;
      v27 = *(_BYTE *)(248LL * (unsigned int)result + v5 + 1058) == 0;
      v34 = 0LL;
      goto LABEL_27;
    }
    return HalProcessorIdle();
  }
  if ( PpmIdleVetoBias && *(_BYTE *)(v5 + 8) )
    return HalProcessorIdle();
  PpmIdleSelectStates(
    BugCheckParameter4,
    (unsigned int)&v31,
    (unsigned int)&v33,
    (unsigned int)v28,
    (__int64)&v29,
    (__int64)&v30,
    (__int64)&v34,
    (__int64)&v27);
  v14 = v29;
LABEL_27:
  v16 = *(_DWORD *)(v5 + 16);
  if ( v14 != v16 )
  {
    *(_DWORD *)(v5 + 24) = v16;
    *(_DWORD *)(v5 + 16) = v14;
    PpmEventIdleStateChange(v14);
  }
  if ( (*(_DWORD *)(v4 + 4))++ == -1 )
    PpmResetProcessorIdleAccounting(v4, v31);
  v18 = *(_QWORD *)(BugCheckParameter4 + 23808);
  v19 = 0;
  v20 = *(_BYTE *)(248LL * v14 + v5 + 1057);
  v21 = v35[0];
  if ( LOWORD(v35[0]) )
  {
    while ( !v35[v19 + 1] )
    {
      if ( ++v19 >= LOWORD(v35[0]) )
        goto LABEL_34;
    }
    *(_WORD *)(v18 + 48) |= 0x400u;
    if ( KiSerializeTimerExpiration && v6 )
      PpmSetPlatformIdleDurationHint(v6);
    v21 = v35[0];
  }
LABEL_34:
  if ( !(_BYTE)KiDynamicTickDisableReason
    && !PpmIpiLastClockOwnerDisable
    && !*(_BYTE *)(BugCheckParameter4 + 33)
    && *(_BYTE *)(KiProcessorBlock[KiClockTimerOwner] + 33)
    && !v20 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v23 = 0;
    ParentNode = CurrentPrcb->ParentNode;
    if ( (ParentNode->DeepIdleSet & ~(1LL << CurrentPrcb->GroupIndex)) == (ParentNode->Affinity.Mask & ~(1LL << (KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number] & 0x3F))) )
    {
      while ( ++v23 != (unsigned __int16)KeNumberNodes )
      {
        v25 = *(unsigned int *)(qword_140465750
                              + 4LL
                              * (v23 + ParentNode->Affinity.Reserved[0] * (unsigned int)(unsigned __int16)KeNumberNodes));
        if ( (_DWORD)v25 == -1 )
          break;
        if ( *(_QWORD *)(KeNodeBlock[v25] + 64) != *(_QWORD *)(KeNodeBlock[v25] + 136) )
          goto LABEL_40;
      }
      v26 = (unsigned int)KiProcessorIndexToNumberMappingTable[KiClockTimerOwner];
      if ( ((v35[(v26 >> 6) + 1] >> (v26 & 0x3F)) & 1) == 0 )
      {
        KeAddProcessorAffinityEx(v35, (unsigned int)KiClockTimerOwner);
        *(_WORD *)(v18 + 48) |= 0x800u;
      }
    }
LABEL_40:
    v21 = v35[0];
  }
  if ( v21 )
  {
    while ( !v35[v3 + 1] )
    {
      if ( ++v3 >= v21 )
        return PpmIdleExecuteTransition(BugCheckParameter4, v28[0], v31, v33, v27);
    }
    HalRequestIpi(0LL, v35);
  }
  return PpmIdleExecuteTransition(BugCheckParameter4, v28[0], v31, v33, v27);
}
