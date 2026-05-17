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
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     RtlpLogHeapValidateEvent @ 0x180106568 (RtlpLogHeapValidateEvent.c)
 *     RtlpValidateHeap @ 0x180108E00 (RtlpValidateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010C5C8 (RtlpHeapExceptionFilter.c)
 */

bool __fastcall RtlValidateHeap(__int64 a1, int a2, unsigned __int64 a3)
{
  char v6; // r15
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  char v9; // al
  __int64 v10; // rcx
  bool v12; // di
  int v13; // r10d
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  char v17; // [rsp+20h] [rbp-28h]

  v6 = 0;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v12 = 1;
    if ( (a2 & 1) == 0 )
      RtlLockHeap(a1);
    v13 = RtlpHpConvertFlagsToSegmentFlags(a2);
    v14 = *(_DWORD *)(a1 + 220);
    v15 = 0;
    if ( v14 )
      LOBYTE(v15) = v14 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v16 = v13 | 1;
    if ( !v15 )
      v16 = v13;
    if ( a3 )
    {
      if ( (RtlpHpAppCompatFlags & 2) != 0 )
        a3 -= *(_QWORD *)(a3 - 16);
      v12 = RtlpHpSizeHeap(a1, a3, v16) != -1;
    }
    if ( (a2 & 1) == 0 )
      RtlUnlockHeap(a1);
    return v12;
  }
  else
  {
    v17 = 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    {
      v17 = _guard_dispatch_icall_fptr();
    }
    else if ( (unsigned __int8)RtlpCheckHeapSignature(a1, "RtlValidateHeap") )
    {
      if ( ((*(_BYTE *)(a1 + 116) | (unsigned __int8)a2) & 1) == 0 )
      {
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        v6 = 1;
      }
      if ( a3 )
      {
        v8 = a3 - 16;
        _m_prefetchw((const void *)(a3 - 16));
        if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
          v8 -= 16LL * *(unsigned __int8 *)(v8 + 14);
        v9 = RtlpValidateHeapEntry(a1, v8, "RtlValidateHeap");
      }
      else
      {
        LOBYTE(v7) = 1;
        v9 = RtlpValidateHeap(a1, v7);
      }
      v17 = v9;
    }
    if ( v6 )
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v10 = 2147353472LL;
    if ( *(_BYTE *)v10 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapValidateEvent(a1);
    }
    return v17;
  }
}
