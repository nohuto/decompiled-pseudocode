/*
 * XREFs of RtlpWakeByAddress @ 0x18005E81C
 * Callers:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlpFreeHeap @ 0x180019FC0 (RtlpFreeHeap.c)
 *     RtlWakeAddressSingle @ 0x18005C640 (RtlWakeAddressSingle.c)
 *     RtlpDecRefWnfUserSubscription @ 0x18005E64C (RtlpDecRefWnfUserSubscription.c)
 *     RtlWakeAddressAll @ 0x18005E800 (RtlWakeAddressAll.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x180065F00 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpUnWaitCriticalSection @ 0x1800E9B90 (RtlpUnWaitCriticalSection.c)
 *     RtlPosixBarrier @ 0x1800ED504 (RtlPosixBarrier.c)
 *     RtlWakeAddressAllNoFence @ 0x1800FF180 (RtlWakeAddressAllNoFence.c)
 *     RtlWakeAddressSingleNoFence @ 0x1800FF190 (RtlWakeAddressSingleNoFence.c)
 * Callees:
 *     RtlpWaitOnAddressWakeEntireList @ 0x18005CA5C (RtlpWaitOnAddressWakeEntireList.c)
 *     ZwAlertThreadByThreadId @ 0x1800A10B0 (ZwAlertThreadByThreadId.c)
 */

signed __int64 __fastcall RtlpWakeByAddress(unsigned __int64 a1, char a2)
{
  bool v2; // bp
  __int64 v3; // rdi
  __int64 v6; // r10
  _PEB *ProcessEnvironmentBlock; // rsi
  signed __int64 result; // rax
  signed __int64 v9; // rdx
  signed __int64 v10; // rtt
  unsigned __int64 v11; // r9
  _QWORD *v12; // r8
  __int64 v13; // r8
  __int64 v14; // rbx
  signed __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbx
  unsigned __int64 v19; // rdx
  char v20; // r8
  signed __int64 v21; // rtt
  __int64 v22; // r11
  signed __int64 v23; // rtt

  v2 = 0;
  v3 = (a1 >> 5) & 0x7F;
  v6 = 0LL;
  ProcessEnvironmentBlock = NtCurrentTeb()->ProcessEnvironmentBlock;
  result = (signed __int64)ProcessEnvironmentBlock->WaitOnAddressHashTable[v3];
  while ( result && (result & 1) == 0 )
  {
    if ( (result & 2) != 0 )
    {
      v23 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&ProcessEnvironmentBlock->WaitOnAddressHashTable[v3],
                 result | 1,
                 result);
      if ( v23 == result )
        return result;
    }
    else
    {
      v9 = result | 2;
      v10 = result;
      result = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&ProcessEnvironmentBlock->WaitOnAddressHashTable[v3],
                 result | 2,
                 result);
      if ( v10 == result )
      {
LABEL_6:
        v11 = v9 & 0xFFFFFFFFFFFFFFFCuLL;
        v12 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !*(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFFCuLL) + 32) )
        {
          do
          {
            result = (signed __int64)v12;
            v12 = (_QWORD *)v12[2];
            v12[3] = result;
          }
          while ( !v12[4] );
        }
        v13 = v12[4];
        *(_QWORD *)(v11 + 32) = v13;
        while ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 24);
          if ( *(_QWORD *)v13 == a1 )
          {
            v15 = *(_QWORD *)(v13 + 16);
            if ( v13 == v11 )
            {
              if ( v15 )
                v15 = ((unsigned __int8)v9 ^ (unsigned __int8)v15) & 3 ^ (unsigned __int64)v15;
              result = _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&ProcessEnvironmentBlock->WaitOnAddressHashTable[v3],
                         v15,
                         v9);
              if ( v9 != result )
              {
                v9 = result;
                goto LABEL_6;
              }
              v22 = *(_QWORD *)(v13 + 16);
              v2 = v15 == 0;
              if ( v22 )
              {
                *(_QWORD *)(v22 + 24) = 0LL;
                *(_QWORD *)(v22 + 32) = *(_QWORD *)(v13 + 32);
              }
            }
            else
            {
              *(_QWORD *)(v14 + 16) = v15;
              v16 = *(_QWORD *)(v13 + 16);
              v17 = *(_QWORD *)(v13 + 24);
              if ( v16 )
              {
                *(_QWORD *)(v16 + 24) = v17;
              }
              else
              {
                *(_QWORD *)(v11 + 32) = v17;
                *(_QWORD *)(*(_QWORD *)(v13 + 24) + 32LL) = *(_QWORD *)(v13 + 24);
              }
            }
            result = (unsigned int)_InterlockedExchange((volatile __int32 *)(v13 + 40), 2);
            if ( (_DWORD)result != 2 )
            {
              if ( !(_DWORD)result )
              {
                *(_QWORD *)(v13 + 16) = v6;
                v6 = v13;
              }
              if ( !a2 )
                break;
            }
          }
          v13 = v14;
        }
        if ( v6 )
        {
          do
          {
            v18 = *(_QWORD *)(v6 + 16);
            result = ZwAlertThreadByThreadId(*(_QWORD *)(v6 + 8));
            v6 = v18;
          }
          while ( v18 );
        }
        if ( !v2 )
        {
          result = (signed __int64)ProcessEnvironmentBlock->WaitOnAddressHashTable[v3];
          do
          {
            v19 = 0LL;
            v20 = result & 1;
            if ( (result & 1) == 0 )
              v19 = result & 0xFFFFFFFFFFFFFFFCuLL;
            v21 = result;
            result = _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&ProcessEnvironmentBlock->WaitOnAddressHashTable[v3],
                       v19,
                       result);
          }
          while ( v21 != result );
          if ( v20 )
            return RtlpWaitOnAddressWakeEntireList(result);
        }
        return result;
      }
    }
  }
  return result;
}
