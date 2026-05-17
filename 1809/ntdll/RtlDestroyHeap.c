/*
 * XREFs of RtlDestroyHeap @ 0x18005F2F0
 * Callers:
 *     LdrEnsureMrdataHeapExists @ 0x18005C818 (LdrEnsureMrdataHeapExists.c)
 *     RtlDetectHeapLeaks @ 0x180084DE0 (RtlDetectHeapLeaks.c)
 *     RtlHeapTrkInitialize @ 0x1800F9AC0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     RtlpHpTagDestroyHeap @ 0x18005B6A4 (RtlpHpTagDestroyHeap.c)
 *     RtlDeleteCriticalSection @ 0x18005C6B0 (RtlDeleteCriticalSection.c)
 *     RtlpDestroyHeapSegment @ 0x18005F55C (RtlpDestroyHeapSegment.c)
 *     RtlpMoveHeapBetweenLists @ 0x180060868 (RtlpMoveHeapBetweenLists.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x1800611AC (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpHpStackTraceHeapDestroy @ 0x180061D5C (RtlpHpStackTraceHeapDestroy.c)
 *     RtlpHpHeapDestroy @ 0x1800652CC (RtlpHpHeapDestroy.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     RtlpCallInterceptRoutine @ 0x1800F2E74 (RtlpCallInterceptRoutine.c)
 *     RtlpHeapHandleError @ 0x180103D1C (RtlpHeapHandleError.c)
 *     RtlpHeapLogRangeDestroy @ 0x180103DE0 (RtlpHeapLogRangeDestroy.c)
 *     RtlpHeapLogRangeRelease @ 0x180103E70 (RtlpHeapLogRangeRelease.c)
 *     RtlDebugDestroyHeap @ 0x180107AF4 (RtlDebugDestroyHeap.c)
 */

__int64 __fastcall RtlDestroyHeap(__int64 a1)
{
  int v2; // ecx
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 *v5; // r8
  __int64 v6; // r9
  __int64 v7; // rsi
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v16; // ecx
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-31h] BYREF
  __int64 v22; // [rsp+48h] [rbp-29h] BYREF
  __int64 v23; // [rsp+50h] [rbp-21h] BYREF
  __int64 v24; // [rsp+58h] [rbp-19h] BYREF
  char v25[6]; // [rsp+60h] [rbp-11h] BYREF
  __int16 v26; // [rsp+66h] [rbp-Bh]
  __int64 v27; // [rsp+80h] [rbp+Fh]
  char v28[6]; // [rsp+88h] [rbp+17h] BYREF
  __int16 v29; // [rsp+8Eh] [rbp+1Dh]
  __int64 v30; // [rsp+A8h] [rbp+37h]

  if ( !a1 )
  {
    if ( RtlpHeapErrorHandlerThreshold >= 2 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("(HeapHandle != NULL)");
      RtlpHeapHandleError(2LL);
    }
    return 0LL;
  }
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( (void *)a1 != NtCurrentPeb()->ProcessHeap )
    {
      v16 = *(_DWORD *)(a1 + 24);
      if ( v16 )
        RtlpCallInterceptRoutine(v16, a1, 0, 8, 0LL);
      RtlpHpStackTraceHeapDestroy(a1);
      RtlpHpTagDestroyHeap(a1);
      RtlpMoveHeapBetweenLists(a1, 1LL, 0LL);
      RtlpHpHeapDestroy(a1);
      return 0LL;
    }
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_18015F420)();
    v2 = *(_DWORD *)(a1 + 144);
    if ( v2 )
      RtlpCallInterceptRoutine(v2, a1, 0, 8, 0LL);
    RtlpHpStackTraceHeapDestroy(a1);
    if ( ((*(_DWORD *)(a1 + 112) & 0x61000000) == 0
       || (*(_DWORD *)(a1 + 112) & 0x10000000) != 0
       || (unsigned __int8)RtlDebugDestroyHeap(a1))
      && (void *)a1 != NtCurrentPeb()->ProcessHeap )
    {
      RtlpMoveHeapBetweenLists(a1, 1LL, 0LL);
      v7 = 2147353480LL;
      v8 = *(_QWORD **)(a1 + 272);
      while ( (_QWORD *)(a1 + 272) != v8 )
      {
        v17 = (unsigned __int64)v8;
        v8 = (_QWORD *)*v8;
        v20 = 0LL;
        v21 = v17 & 0xFFFFFFFFFFFF0000uLL;
        RtlpSecMemFreeVirtualMemory(v4, &v21, &v20, 0x8000LL);
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v4 = (__int64)NtCurrentPeb()->SharedData + 558;
        else
          v4 = 2147353480LL;
        if ( *(_BYTE *)v4 )
          RtlpHeapLogRangeRelease(a1, v21, v20);
      }
      if ( *(_BYTE *)(a1 + 418) == 2 )
        v9 = *(_QWORD *)(a1 + 408);
      else
        v9 = 0LL;
      if ( v9 )
      {
        v23 = v9;
        v22 = 0LL;
        RtlpSecMemFreeVirtualMemory(v4, &v23, &v22, 0x8000LL);
      }
      if ( *(_QWORD *)(a1 + 232) )
      {
        v24 = 0LL;
        RtlpSecMemFreeVirtualMemory(v4, a1 + 232, &v24, 0x8000LL);
        *(_QWORD *)(a1 + 232) = 0LL;
      }
      if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
      {
        if ( *(int *)(a1 + 112) >= 0 )
          RtlDeleteCriticalSection(*(__int64 **)(a1 + 352), v3, v5, v6);
        *(_QWORD *)(a1 + 352) = 0LL;
      }
      do
      {
        v10 = *(_QWORD *)(a1 + 296) - 24LL;
        RtlpDestroyHeapSegment(v10);
      }
      while ( v10 != a1 );
      v11 = 2147353472LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v12 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v12 = 2147353472LL;
      if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v11 = (__int64)NtCurrentPeb()->SharedData + 550;
        v18 = *(unsigned __int8 *)v11;
        v27 = a1;
        v26 = 4131;
        NtTraceEvent(v18, 1026LL, 8LL, v25);
      }
      v13 = 2147353482LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v14 = (__int64)NtCurrentPeb()->SharedData + 560;
      else
        v14 = 2147353482LL;
      if ( *(_BYTE *)v14 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v13 = (__int64)NtCurrentPeb()->SharedData + 560;
        v19 = *(unsigned __int8 *)v13;
        v30 = a1;
        v29 = 4131;
        NtTraceEvent(v19, 1026LL, 8LL, v28);
      }
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v7 = (__int64)NtCurrentPeb()->SharedData + 558;
      if ( *(_BYTE *)v7 )
        RtlpHeapLogRangeDestroy(a1);
      return 0LL;
    }
  }
  return a1;
}
