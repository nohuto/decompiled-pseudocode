/*
 * XREFs of RtlDestroyHeap @ 0x18004AA00
 * Callers:
 *     RtlDetectHeapLeaks @ 0x18006B830 (RtlDetectHeapLeaks.c)
 *     LdrEnsureMrdataHeapExists @ 0x18007C748 (LdrEnsureMrdataHeapExists.c)
 *     RtlHeapTrkInitialize @ 0x1800F77B0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlDeleteCriticalSection @ 0x180032B30 (RtlDeleteCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180048120 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpMoveHeapBetweenLists @ 0x180048408 (RtlpMoveHeapBetweenLists.c)
 *     RtlpDestroyHeapSegment @ 0x18004AC2C (RtlpDestroyHeapSegment.c)
 *     RtlpHpStackTraceHeapDestroy @ 0x18004ACC8 (RtlpHpStackTraceHeapDestroy.c)
 *     RtlpHpHeapDestroy @ 0x18004FBB4 (RtlpHpHeapDestroy.c)
 *     RtlpHpTagDestroyHeap @ 0x180050F74 (RtlpHpTagDestroyHeap.c)
 *     DbgPrint @ 0x180053E40 (DbgPrint.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     RtlpCallInterceptRoutine @ 0x1800EFE14 (RtlpCallInterceptRoutine.c)
 *     RtlpHeapHandleError @ 0x1801014E0 (RtlpHeapHandleError.c)
 *     RtlpHeapLogRangeDestroy @ 0x1801015A4 (RtlpHeapLogRangeDestroy.c)
 *     RtlpHeapLogRangeRelease @ 0x180101634 (RtlpHeapLogRangeRelease.c)
 *     RtlDebugDestroyHeap @ 0x180105030 (RtlDebugDestroyHeap.c)
 */

PVOID __cdecl RtlDestroyHeap(PVOID HeapHandle)
{
  int v2; // ecx
  __int64 v3; // rcx
  __int64 v4; // rsi
  _QWORD *v5; // rbx
  void *v6; // rax
  PVOID v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v13; // ecx
  unsigned __int64 v14; // rax
  void *v15; // rcx
  void *v16; // rcx
  ULONG_PTR v17; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-31h] BYREF
  ULONG_PTR v19; // [rsp+48h] [rbp-29h] BYREF
  PVOID v20; // [rsp+50h] [rbp-21h] BYREF
  ULONG_PTR v21; // [rsp+58h] [rbp-19h] BYREF
  char Fields[6]; // [rsp+60h] [rbp-11h] BYREF
  __int16 v23; // [rsp+66h] [rbp-Bh]
  PVOID v24; // [rsp+80h] [rbp+Fh]
  char v25[6]; // [rsp+88h] [rbp+17h] BYREF
  __int16 v26; // [rsp+8Eh] [rbp+1Dh]
  PVOID v27; // [rsp+A8h] [rbp+37h]

  if ( !HeapHandle )
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
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    if ( HeapHandle != NtCurrentPeb()->ProcessHeap )
    {
      v13 = *((_DWORD *)HeapHandle + 6);
      if ( v13 )
        RtlpCallInterceptRoutine(v13, (_DWORD)HeapHandle, 0, 8, 0LL);
      RtlpHpStackTraceHeapDestroy(HeapHandle);
      RtlpHpTagDestroyHeap(HeapHandle);
      RtlpMoveHeapBetweenLists((__int64)HeapHandle, 1, 0, 0);
      RtlpHpHeapDestroy(HeapHandle);
      return 0LL;
    }
    return HeapHandle;
  }
  if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0 )
  {
    v2 = *((_DWORD *)HeapHandle + 36);
    if ( v2 )
      RtlpCallInterceptRoutine(v2, (_DWORD)HeapHandle, 0, 8, 0LL);
    RtlpHpStackTraceHeapDestroy(HeapHandle);
    if ( ((*((_DWORD *)HeapHandle + 28) & 0x61000000) == 0
       || (*((_DWORD *)HeapHandle + 28) & 0x10000000) != 0
       || (unsigned __int8)RtlDebugDestroyHeap(HeapHandle))
      && HeapHandle != NtCurrentPeb()->ProcessHeap )
    {
      RtlpMoveHeapBetweenLists((__int64)HeapHandle, 1, 0, 0);
      v4 = 2147353480LL;
      v5 = (_QWORD *)*((_QWORD *)HeapHandle + 34);
      while ( (char *)HeapHandle + 272 != (char *)v5 )
      {
        v14 = (unsigned __int64)v5;
        v5 = (_QWORD *)*v5;
        v17 = 0LL;
        v18 = v14 & 0xFFFFFFFFFFFF0000uLL;
        RtlpSecMemFreeVirtualMemory(v3, (PVOID *)&v18, &v17, 0x8000u);
        if ( RtlGetCurrentServiceSessionId() )
          v3 = (__int64)NtCurrentPeb()->SharedData + 558;
        else
          v3 = 2147353480LL;
        if ( *(_BYTE *)v3 )
          RtlpHeapLogRangeRelease(HeapHandle, v18, v17);
      }
      if ( *((_BYTE *)HeapHandle + 418) == 2 )
        v6 = (void *)*((_QWORD *)HeapHandle + 51);
      else
        v6 = 0LL;
      if ( v6 )
      {
        v20 = v6;
        v19 = 0LL;
        RtlpSecMemFreeVirtualMemory(v3, &v20, &v19, 0x8000u);
      }
      if ( *((_QWORD *)HeapHandle + 29) )
      {
        v21 = 0LL;
        RtlpSecMemFreeVirtualMemory(v3, (PVOID *)HeapHandle + 29, &v21, 0x8000u);
        *((_QWORD *)HeapHandle + 29) = 0LL;
      }
      if ( (*((_BYTE *)HeapHandle + 112) & 1) == 0 )
      {
        if ( *((int *)HeapHandle + 28) >= 0 )
          RtlDeleteCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        *((_QWORD *)HeapHandle + 44) = 0LL;
      }
      do
      {
        v7 = (PVOID)(*((_QWORD *)HeapHandle + 37) - 24LL);
        RtlpDestroyHeapSegment(v7);
      }
      while ( v7 != HeapHandle );
      v8 = 2147353472LL;
      if ( RtlGetCurrentServiceSessionId() )
        v9 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v9 = 2147353472LL;
      if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v8 = (__int64)NtCurrentPeb()->SharedData + 550;
        v15 = (void *)*(unsigned __int8 *)v8;
        v24 = HeapHandle;
        v23 = 4131;
        NtTraceEvent(v15, 0x402u, 8u, Fields);
      }
      v10 = 2147353482LL;
      if ( RtlGetCurrentServiceSessionId() )
        v11 = (__int64)NtCurrentPeb()->SharedData + 560;
      else
        v11 = 2147353482LL;
      if ( *(_BYTE *)v11 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v10 = (__int64)NtCurrentPeb()->SharedData + 560;
        v16 = (void *)*(unsigned __int8 *)v10;
        v27 = HeapHandle;
        v26 = 4131;
        NtTraceEvent(v16, 0x402u, 8u, v25);
      }
      if ( RtlGetCurrentServiceSessionId() )
        v4 = (__int64)NtCurrentPeb()->SharedData + 558;
      if ( *(_BYTE *)v4 )
        RtlpHeapLogRangeDestroy(HeapHandle);
      return 0LL;
    }
    return HeapHandle;
  }
  return (PVOID)((__int64 (*)(void))qword_18015F9F0)();
}
