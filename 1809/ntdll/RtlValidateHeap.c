/*
 * XREFs of RtlValidateHeap @ 0x18006D290
 * Callers:
 *     RtlValidateProcessHeaps @ 0x1800F2B70 (RtlValidateProcessHeaps.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlpHpSizeHeap @ 0x180017AC0 (RtlpHpSizeHeap.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x180017DC4 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlNtStatusToDosError @ 0x18004EDE0 (RtlNtStatusToDosError.c)
 *     RtlpValidateHeapEntry @ 0x18006D464 (RtlpValidateHeapEntry.c)
 *     RtlLockHeap @ 0x18006D5A0 (RtlLockHeap.c)
 *     RtlUnlockHeap @ 0x18006D640 (RtlUnlockHeap.c)
 *     RtlpCheckHeapSignature @ 0x18006D6D0 (RtlpCheckHeapSignature.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     RtlpLogHeapValidateEvent @ 0x180106568 (RtlpLogHeapValidateEvent.c)
 *     RtlpValidateHeap @ 0x180108E00 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010C5C8 (RtlpHeapExceptionFilter.c)
 */

BOOLEAN __cdecl RtlValidateHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  char v6; // r15
  char *v7; // rdx
  BOOLEAN v8; // al
  __int64 v9; // rcx
  BOOLEAN v11; // di
  int v12; // r10d
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  BOOLEAN v16; // [rsp+20h] [rbp-28h]

  v6 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    v11 = 1;
    if ( (Flags & 1) == 0 )
      RtlLockHeap(HeapHandle);
    v12 = RtlpHpConvertFlagsToSegmentFlags(Flags);
    v13 = *((_DWORD *)HeapHandle + 55);
    v14 = 0;
    if ( v13 )
      LOBYTE(v14) = v13 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v15 = v12 | 1;
    if ( !v14 )
      v15 = v12;
    if ( BaseAddress )
    {
      if ( (RtlpHpAppCompatFlags & 2) != 0 )
        BaseAddress = (char *)BaseAddress - *((_QWORD *)BaseAddress - 2);
      v11 = RtlpHpSizeHeap((__int64)HeapHandle, (unsigned __int64)BaseAddress, v15) != -1;
    }
    if ( (Flags & 1) == 0 )
      RtlUnlockHeap(HeapHandle);
    return v11;
  }
  else
  {
    v16 = 0;
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
    {
      v16 = _guard_dispatch_icall_fptr();
    }
    else if ( (unsigned __int8)RtlpCheckHeapSignature(HeapHandle, "RtlValidateHeap") )
    {
      if ( ((*((_BYTE *)HeapHandle + 116) | (unsigned __int8)Flags) & 1) == 0 )
      {
        RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        v6 = 1;
      }
      if ( BaseAddress )
      {
        v7 = (char *)BaseAddress - 16;
        _m_prefetchw((char *)BaseAddress - 16);
        if ( *((char *)BaseAddress - 1) == 5 )
          v7 -= 16 * (unsigned __int8)v7[14];
        v8 = RtlpValidateHeapEntry(HeapHandle, v7, "RtlValidateHeap");
      }
      else
      {
        v8 = RtlpValidateHeap(HeapHandle);
      }
      v16 = v8;
    }
    if ( v6 )
      RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    if ( RtlGetCurrentServiceSessionId() )
      v9 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v9 = 2147353472LL;
    if ( *(_BYTE *)v9 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapValidateEvent(HeapHandle);
    }
    return v16;
  }
}
