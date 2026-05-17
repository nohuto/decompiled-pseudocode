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

__int64 __fastcall RtlDestroyHeap(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rcx
  __int64 v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v13; // ecx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-31h] BYREF
  __int64 v19; // [rsp+48h] [rbp-29h] BYREF
  __int64 v20; // [rsp+50h] [rbp-21h] BYREF
  __int64 v21; // [rsp+58h] [rbp-19h] BYREF
  char v22[6]; // [rsp+60h] [rbp-11h] BYREF
  __int16 v23; // [rsp+66h] [rbp-Bh]
  __int64 v24; // [rsp+80h] [rbp+Fh]
  char v25[6]; // [rsp+88h] [rbp+17h] BYREF
  __int16 v26; // [rsp+8Eh] [rbp+1Dh]
  __int64 v27; // [rsp+A8h] [rbp+37h]

  if ( !a1 )
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
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( (void *)a1 != NtCurrentPeb()->ProcessHeap )
    {
      v13 = *(_DWORD *)(a1 + 24);
      if ( v13 )
        sub_1800EFD34(v13, a1, 0, 8, 0LL);
      sub_18004AC28(a1);
      sub_180050ED4(a1);
      sub_180048408(a1, 1, 0, 0);
      sub_18004FB14(a1);
      return 0LL;
    }
    return a1;
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 144);
    if ( v2 )
      sub_1800EFD34(v2, a1, 0, 8, 0LL);
    sub_18004AC28(a1);
    if ( ((*(_DWORD *)(a1 + 112) & 0x61000000) == 0
       || (*(_DWORD *)(a1 + 112) & 0x10000000) != 0
       || (unsigned __int8)sub_180104EF8(a1))
      && (void *)a1 != NtCurrentPeb()->ProcessHeap )
    {
      sub_180048408(a1, 1, 0, 0);
      v4 = 2147353480LL;
      v5 = *(_QWORD **)(a1 + 272);
      while ( (_QWORD *)(a1 + 272) != v5 )
      {
        v14 = (unsigned __int64)v5;
        v5 = (_QWORD *)*v5;
        v17 = 0LL;
        v18 = v14 & 0xFFFFFFFFFFFF0000uLL;
        sub_180048120(v3, &v18, &v17, 0x8000LL);
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v3 = (__int64)NtCurrentPeb()->HotpatchInformation + 558;
        else
          v3 = 2147353480LL;
        if ( *(_BYTE *)v3 )
          sub_180101554(a1, v18, v17);
      }
      if ( *(_BYTE *)(a1 + 418) == 2 )
        v6 = *(_QWORD *)(a1 + 408);
      else
        v6 = 0LL;
      if ( v6 )
      {
        v20 = v6;
        v19 = 0LL;
        sub_180048120(v3, &v20, &v19, 0x8000LL);
      }
      if ( *(_QWORD *)(a1 + 232) )
      {
        v21 = 0LL;
        sub_180048120(v3, (_QWORD *)(a1 + 232), &v21, 0x8000LL);
        *(_QWORD *)(a1 + 232) = 0LL;
      }
      if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
      {
        if ( *(int *)(a1 + 112) >= 0 )
          RtlDeleteCriticalSection(*(__int64 **)(a1 + 352));
        *(_QWORD *)(a1 + 352) = 0LL;
      }
      do
      {
        v7 = *(_QWORD *)(a1 + 296) - 24LL;
        sub_18004AB8C(v7);
      }
      while ( v7 != a1 );
      v8 = 2147353472LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
      else
        v9 = 2147353472LL;
      if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v8 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
        v15 = *(unsigned __int8 *)v8;
        v24 = a1;
        v23 = 4131;
        ZwTraceEvent(v15, 1026LL, 8LL, v22);
      }
      v10 = 2147353482LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v11 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
      else
        v11 = 2147353482LL;
      if ( *(_BYTE *)v11 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v10 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
        v16 = *(unsigned __int8 *)v10;
        v27 = a1;
        v26 = 4131;
        ZwTraceEvent(v16, 1026LL, 8LL, v25);
      }
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v4 = (__int64)NtCurrentPeb()->HotpatchInformation + 558;
      if ( *(_BYTE *)v4 )
        sub_1801014C4(a1);
      return 0LL;
    }
    return a1;
  }
  return ((__int64 (*)(void))qword_18015F9F0)();
}
