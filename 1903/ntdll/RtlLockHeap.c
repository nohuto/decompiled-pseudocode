/*
 * XREFs of RtlLockHeap @ 0x180019CB0
 * Callers:
 *     sub_18006773C @ 0x18006773C (sub_18006773C.c)
 *     RtlExitUserProcess @ 0x18006AF00 (RtlExitUserProcess.c)
 *     RtlValidateHeap @ 0x180070350 (RtlValidateHeap.c)
 *     sub_18007F060 @ 0x18007F060 (sub_18007F060.c)
 *     sub_180102590 @ 0x180102590 (sub_180102590.c)
 * Callees:
 *     sub_1800170E8 @ 0x1800170E8 (sub_1800170E8.c)
 *     sub_180019C74 @ 0x180019C74 (sub_180019C74.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_1801034F4 @ 0x1801034F4 (sub_1801034F4.c)
 */

BOOLEAN __cdecl RtlLockHeap(PVOID HeapHandle)
{
  bool v1; // zf
  __int64 UserModeGlobalLogger; // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_DWORD *)HeapHandle + 4) == -571548178;
  v5 = -1;
  if ( v1 )
  {
    sub_1800170E8((__int64)HeapHandle, &v5);
  }
  else
  {
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_18015FA10)();
    if ( !sub_180019C74(HeapHandle, "RtlLockHeap") )
      return 0;
    if ( (*((_BYTE *)HeapHandle + 112) & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      ++*((_WORD *)HeapHandle + 208);
    }
  }
  if ( RtlGetCurrentServiceSessionId() )
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    UserModeGlobalLogger = 2147353472LL;
  if ( *(_BYTE *)UserModeGlobalLogger )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_1801034F4(HeapHandle);
  }
  return 1;
}
