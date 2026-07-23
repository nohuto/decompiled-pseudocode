/*
 * XREFs of RtlDestroyHeap @ 0x18004A960
 * Callers:
 *     RtlDetectHeapLeaks @ 0x18006B5E0 (RtlDetectHeapLeaks.c)
 *     sub_18007C0A8 @ 0x18007C0A8 (sub_18007C0A8.c)
 *     RtlHeapTrkInitialize @ 0x1800F76D0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlDeleteCriticalSection @ 0x180032B30 (RtlDeleteCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_180048120 @ 0x180048120 (sub_180048120.c)
 *     sub_180048408 @ 0x180048408 (sub_180048408.c)
 *     sub_18004AB8C @ 0x18004AB8C (sub_18004AB8C.c)
 *     sub_18004AC28 @ 0x18004AC28 (sub_18004AC28.c)
 *     sub_18004FB14 @ 0x18004FB14 (sub_18004FB14.c)
 *     sub_180050ED4 @ 0x180050ED4 (sub_180050ED4.c)
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_1800EFD34 @ 0x1800EFD34 (sub_1800EFD34.c)
 *     sub_180101400 @ 0x180101400 (sub_180101400.c)
 *     sub_1801014C4 @ 0x1801014C4 (sub_1801014C4.c)
 *     sub_180101554 @ 0x180101554 (sub_180101554.c)
 *     sub_180104EF8 @ 0x180104EF8 (sub_180104EF8.c)
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
  __int64 UserModeGlobalLogger; // rcx
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
    if ( dword_180166578 >= 2 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("(HeapHandle != NULL)");
      sub_180101400(2LL);
    }
    return 0LL;
  }
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    if ( HeapHandle != NtCurrentPeb()->ProcessHeap )
    {
      v13 = *((_DWORD *)HeapHandle + 6);
      if ( v13 )
        sub_1800EFD34(v13, (_DWORD)HeapHandle, 0, 8, 0LL);
      sub_18004AC28(HeapHandle);
      sub_180050ED4(HeapHandle);
      sub_180048408((__int64)HeapHandle, 1, 0, 0);
      sub_18004FB14(HeapHandle);
      return 0LL;
    }
    return HeapHandle;
  }
  if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0 )
  {
    v2 = *((_DWORD *)HeapHandle + 36);
    if ( v2 )
      sub_1800EFD34(v2, (_DWORD)HeapHandle, 0, 8, 0LL);
    sub_18004AC28(HeapHandle);
    if ( ((*((_DWORD *)HeapHandle + 28) & 0x61000000) == 0
       || (*((_DWORD *)HeapHandle + 28) & 0x10000000) != 0
       || (unsigned __int8)sub_180104EF8(HeapHandle))
      && HeapHandle != NtCurrentPeb()->ProcessHeap )
    {
      sub_180048408((__int64)HeapHandle, 1, 0, 0);
      v4 = 2147353480LL;
      v5 = (_QWORD *)*((_QWORD *)HeapHandle + 34);
      while ( (char *)HeapHandle + 272 != (char *)v5 )
      {
        v14 = (unsigned __int64)v5;
        v5 = (_QWORD *)*v5;
        v17 = 0LL;
        v18 = v14 & 0xFFFFFFFFFFFF0000uLL;
        sub_180048120(v3, (PVOID *)&v18, &v17, 0x8000u);
        if ( RtlGetCurrentServiceSessionId() )
          v3 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
        else
          v3 = 2147353480LL;
        if ( *(_BYTE *)v3 )
          sub_180101554(HeapHandle, v18, v17);
      }
      if ( *((_BYTE *)HeapHandle + 418) == 2 )
        v6 = (void *)*((_QWORD *)HeapHandle + 51);
      else
        v6 = 0LL;
      if ( v6 )
      {
        v20 = v6;
        v19 = 0LL;
        sub_180048120(v3, &v20, &v19, 0x8000u);
      }
      if ( *((_QWORD *)HeapHandle + 29) )
      {
        v21 = 0LL;
        sub_180048120(v3, (PVOID *)HeapHandle + 29, &v21, 0x8000u);
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
        sub_18004AB8C(v7);
      }
      while ( v7 != HeapHandle );
      v8 = 2147353472LL;
      if ( RtlGetCurrentServiceSessionId() )
        UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      else
        UserModeGlobalLogger = 2147353472LL;
      if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v8 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
        v15 = (void *)*(unsigned __int8 *)v8;
        v24 = HeapHandle;
        v23 = 4131;
        ZwTraceEvent(v15, 0x402u, 8u, Fields);
      }
      v10 = 2147353482LL;
      if ( RtlGetCurrentServiceSessionId() )
        v11 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
      else
        v11 = 2147353482LL;
      if ( *(_BYTE *)v11 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v10 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
        v16 = (void *)*(unsigned __int8 *)v10;
        v27 = HeapHandle;
        v26 = 4131;
        ZwTraceEvent(v16, 0x402u, 8u, v25);
      }
      if ( RtlGetCurrentServiceSessionId() )
        v4 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
      if ( *(_BYTE *)v4 )
        sub_1801014C4(HeapHandle);
      return 0LL;
    }
    return HeapHandle;
  }
  return (PVOID)((__int64 (*)(void))qword_18015F9F0)();
}
