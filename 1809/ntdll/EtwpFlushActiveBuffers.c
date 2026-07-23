/*
 * XREFs of EtwpFlushActiveBuffers @ 0x18005A0C0
 * Callers:
 *     EtwpLogger @ 0x180059EE0 (EtwpLogger.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     EtwpSendSessionNotification @ 0x180050354 (EtwpSendSessionNotification.c)
 *     RtlWakeAllConditionVariable @ 0x18005A2A0 (RtlWakeAllConditionVariable.c)
 *     EtwpFlushBuffer @ 0x18005A324 (EtwpFlushBuffer.c)
 *     EtwpWaitForBufferReferenceCount @ 0x18005A534 (EtwpWaitForBufferReferenceCount.c)
 */

__int64 __fastcall EtwpFlushActiveBuffers(__int64 a1, int a2)
{
  unsigned int v2; // r14d
  _RTL_CRITICAL_SECTION *v3; // rbp
  __int64 v4; // rdi
  unsigned int v7; // esi
  unsigned __int16 v8; // r13
  _QWORD **v9; // rax
  _QWORD *v10; // rdi
  unsigned __int16 v11; // r14
  unsigned __int16 v12; // ax
  _QWORD *v13; // r15
  _QWORD *v14; // r13
  _QWORD *v15; // r13
  __int64 *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  unsigned __int32 v20; // eax
  __int64 v21; // rcx
  unsigned __int16 v22; // [rsp+58h] [rbp+10h]

  v2 = *(_DWORD *)(a1 + 208);
  v3 = (_RTL_CRITICAL_SECTION *)(a1 + 88);
  v4 = *(unsigned int *)(a1 + 204);
  v7 = 0;
  v8 = 0;
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 88));
  if ( a2 == 1 && (_DWORD)v4 )
  {
    v17 = (__int64 *)(a1 + 560);
    v18 = v4;
    do
    {
      v19 = *v17;
      if ( *v17 && *(_DWORD *)(v19 + 8) != 72 )
      {
        *v17 = 0LL;
        v20 = _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 8), v2);
        if ( v20 <= v2 )
          *(_DWORD *)(v19 + 4) = v20;
        *(_DWORD *)(v19 + 44) = 3;
        v21 = v19 + 32;
        **(_QWORD **)(a1 + 280) = v21;
        *(_QWORD *)(a1 + 280) = v21;
      }
      ++v17;
      --v18;
    }
    while ( v18 );
  }
  v9 = *(_QWORD ***)(a1 + 272);
  if ( v9 == *(_QWORD ***)(a1 + 280) )
  {
    v10 = 0LL;
  }
  else
  {
    v10 = *v9;
    *v9 = 0LL;
    *(_QWORD *)(a1 + 280) = *(_QWORD *)(a1 + 272);
  }
  RtlLeaveCriticalSection(v3);
  if ( v10 )
  {
    v11 = a2 != 0;
    do
    {
      v12 = v11;
      v13 = v10;
      if ( *v10 )
        v12 = v8;
      v14 = v10;
      v10 = (_QWORD *)*v10;
      v22 = v12;
      v15 = v14 - 4;
      EtwpWaitForBufferReferenceCount(v15);
      v7 = EtwpFlushBuffer(a1, v15, v22);
      if ( (int)(v7 + 0x80000000) >= 0 && v7 != -2147483614 )
        EtwpSendSessionNotification(a1, 3, v7);
      RtlEnterCriticalSection(v3);
      *((_DWORD *)v15 + 11) = 0;
      *v13 = 0LL;
      v15[3] = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 416));
      **(_QWORD **)(a1 + 256) = v13;
      *(_QWORD *)(a1 + 256) = v13;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 228));
      RtlLeaveCriticalSection(v3);
      RtlWakeAllConditionVariable((PRTL_CONDITION_VARIABLE)(a1 + 80));
      v8 = v22;
      *(_DWORD *)(a1 + 40) = v7;
    }
    while ( v10 );
  }
  return v7;
}
