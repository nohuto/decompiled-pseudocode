/*
 * XREFs of RtlValidateHeap @ 0x180070350
 * Callers:
 *     RtlValidateProcessHeaps @ 0x1800EFA30 (RtlValidateProcessHeaps.c)
 * Callees:
 *     RtlUnlockHeap @ 0x180019BF0 (RtlUnlockHeap.c)
 *     sub_180019C74 @ 0x180019C74 (sub_180019C74.c)
 *     RtlLockHeap @ 0x180019CB0 (RtlLockHeap.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     sub_180040320 @ 0x180040320 (sub_180040320.c)
 *     sub_180040614 @ 0x180040614 (sub_180040614.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     sub_1800704A4 @ 0x1800704A4 (sub_1800704A4.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_180103B60 @ 0x180103B60 (sub_180103B60.c)
 *     sub_1801061B8 @ 0x1801061B8 (sub_1801061B8.c)
 *     sub_18010A580 @ 0x18010A580 (sub_18010A580.c)
 */

BOOLEAN __cdecl RtlValidateHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  char v6; // r15
  char *v7; // rdx
  BOOLEAN v8; // al
  __int64 UserModeGlobalLogger; // rcx
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
    v12 = sub_180040614(Flags);
    v13 = *((_DWORD *)HeapHandle + 55);
    v14 = 0;
    if ( v13 )
      LOBYTE(v14) = v13 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v15 = v12 | 1;
    if ( !v14 )
      v15 = v12;
    if ( BaseAddress )
    {
      if ( (dword_18016273C & 2) != 0 )
        BaseAddress = (char *)BaseAddress - *((_QWORD *)BaseAddress - 2);
      v11 = sub_180040320((__int64)HeapHandle, (unsigned __int64)BaseAddress, v15) != -1;
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
    else if ( sub_180019C74(HeapHandle, "RtlValidateHeap") )
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
        v8 = sub_1800704A4(HeapHandle, v7, "RtlValidateHeap");
      }
      else
      {
        v8 = sub_1801061B8((_DWORD)HeapHandle);
      }
      v16 = v8;
    }
    if ( v6 )
      RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    if ( RtlGetCurrentServiceSessionId() )
      UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      UserModeGlobalLogger = 2147353472LL;
    if ( *(_BYTE *)UserModeGlobalLogger )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        sub_180103B60(HeapHandle);
    }
    return v16;
  }
}
