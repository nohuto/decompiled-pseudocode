/*
 * XREFs of RtlCompactHeap @ 0x180089B20
 * Callers:
 *     RtlDebugCompactHeap @ 0x180104AA4 (RtlDebugCompactHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlpHpHeapCompact @ 0x18004F1D0 (RtlpHpHeapCompact.c)
 *     RtlNtStatusToDosError @ 0x180053CB0 (RtlNtStatusToDosError.c)
 *     RtlpCoalesceHeap @ 0x1800EFE6C (RtlpCoalesceHeap.c)
 *     RtlDebugCompactHeap @ 0x180104AA4 (RtlDebugCompactHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010A6B0 (RtlpHeapExceptionFilter.c)
 */

SIZE_T __cdecl RtlCompactHeap(PVOID HeapHandle, ULONG Flags)
{
  __int64 v2; // r8
  __int64 v3; // r9
  ULONG v6; // edx
  SIZE_T v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  struct _TEB *v10; // rbx
  char v11; // [rsp+20h] [rbp-18h]
  SIZE_T v12; // [rsp+28h] [rbp-10h]

  v11 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    RtlpHpHeapCompact((__int64)HeapHandle, Flags & 1, v2, v3);
    return 16LL;
  }
  else
  {
    v6 = *((_DWORD *)HeapHandle + 29) | Flags;
    if ( (v6 & 0x61000000) != 0 && (v6 & 0x10000000) == 0 )
    {
      return RtlDebugCompactHeap(HeapHandle);
    }
    else
    {
      v7 = 0LL;
      v12 = 0LL;
      if ( (v6 & 1) == 0 )
      {
        RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        v11 = 1;
      }
      v8 = RtlpCoalesceHeap((int)HeapHandle);
      if ( v8 )
      {
        v7 = 16LL * *(unsigned __int16 *)(v8 + 8);
        v12 = v7;
        if ( *((_DWORD *)HeapHandle + 31) )
        {
          *(_BYTE *)(v8 + 11) = *(_BYTE *)(v8 + 8) ^ *(_BYTE *)(v8 + 9) ^ *(_BYTE *)(v8 + 10);
          *(_DWORD *)(v8 + 8) ^= *((_DWORD *)HeapHandle + 34);
        }
      }
      if ( *((PVOID *)HeapHandle + 30) != (char *)HeapHandle + 240 )
      {
        v9 = *((_QWORD *)HeapHandle + 31);
        if ( *(_QWORD *)(v9 + 40) > v7 )
          v7 = *(_QWORD *)(v9 + 40);
        v12 = v7;
      }
      if ( !v7 )
      {
        NtCurrentTeb()->LastStatusValue = 0;
        v10 = NtCurrentTeb();
        v10->LastErrorValue = RtlNtStatusToDosError(0);
        v7 = v12;
      }
      if ( v11 )
        RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      return v7;
    }
  }
}
