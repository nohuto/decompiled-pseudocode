/*
 * XREFs of RtlSleepConditionVariableCS @ 0x180058C40
 * Callers:
 *     EtwpSwitchBuffer @ 0x18004E718 (EtwpSwitchBuffer.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlpWakeSingle @ 0x180058B6C (RtlpWakeSingle.c)
 *     RtlpOptimizeConditionVariableWaitList @ 0x180058D74 (RtlpOptimizeConditionVariableWaitList.c)
 *     NtWaitForAlertByThreadId @ 0x1800A3BF0 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlSleepConditionVariableCS(signed __int64 *a1, __int64 a2, __int64 a3)
{
  signed __int64 v6; // rbx
  unsigned int v7; // edi
  unsigned __int64 v8; // r15
  _QWORD *v9; // rax
  signed __int64 v10; // rax
  int i; // ecx
  unsigned int v12; // ebx
  _QWORD v15[4]; // [rsp+20h] [rbp-30h] BYREF
  signed __int32 v16; // [rsp+44h] [rbp-Ch] BYREF
  __int64 v17; // [rsp+48h] [rbp-8h]

  _m_prefetchw(a1);
  v6 = *a1;
  v7 = 0;
  v15[2] = 0LL;
  v17 = 0LL;
  v16 = 2;
  v15[3] = NtCurrentTeb()->ClientId.UniqueThread;
  while ( 1 )
  {
    v8 = (unsigned __int64)v15 | v6 & 0xF;
    v9 = v15;
    v15[0] = v6 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (v6 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      v9 = 0LL;
    v15[1] = v9;
    if ( (v6 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      v8 |= 8uLL;
    v10 = _InterlockedCompareExchange64(a1, v8, v6);
    if ( v6 == v10 )
      break;
    v6 = v10;
  }
  RtlLeaveCriticalSection(a2);
  if ( (((unsigned __int8)v6 ^ (unsigned __int8)v8) & 8) != 0 )
    RtlpOptimizeConditionVariableWaitList(a1, v8);
  for ( i = ConditionVariableSpinCount; i; --i )
  {
    if ( (v16 & 2) == 0 )
      break;
    _mm_pause();
  }
  v12 = 0;
  if ( _interlockedbittestandreset(&v16, 1u) )
    v12 = NtWaitForAlertByThreadId(a2, a3);
  else
    _InterlockedOr(&v16, 4u);
  if ( v12 == 258 || (v16 & 4) == 0 )
  {
    if ( RtlpWakeSingle(a1, (__int64)v15) )
    {
      if ( v12 != 258 )
        v12 = 0;
      v7 = v12;
    }
    else
    {
      do
        NtWaitForAlertByThreadId(a2, 0LL);
      while ( (v16 & 4) == 0 );
    }
  }
  RtlEnterCriticalSection(a2);
  return v7;
}
