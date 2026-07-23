/*
 * XREFs of RtlUnlockHeap @ 0x180019BF0
 * Callers:
 *     sub_18006773C @ 0x18006773C (sub_18006773C.c)
 *     RtlExitUserProcess @ 0x18006AF00 (RtlExitUserProcess.c)
 *     sub_18006B390 @ 0x18006B390 (sub_18006B390.c)
 *     RtlValidateHeap @ 0x180070350 (RtlValidateHeap.c)
 *     sub_18007F060 @ 0x18007F060 (sub_18007F060.c)
 *     sub_180102590 @ 0x180102590 (sub_180102590.c)
 * Callees:
 *     sub_180016FFC @ 0x180016FFC (sub_180016FFC.c)
 *     sub_180019C74 @ 0x180019C74 (sub_180019C74.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_180103AE4 @ 0x180103AE4 (sub_180103AE4.c)
 */

BOOLEAN __cdecl RtlUnlockHeap(PVOID HeapHandle)
{
  _RTL_CRITICAL_SECTION *v2; // rcx
  __int64 UserModeGlobalLogger; // rcx

  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    sub_180016FFC((__int64)HeapHandle, 0);
  }
  else
  {
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_18015FA18)();
    if ( !(unsigned __int8)sub_180019C74(HeapHandle, "RtlUnlockHeap") )
      return 0;
    if ( (*((_BYTE *)HeapHandle + 112) & 1) == 0 )
    {
      v2 = (_RTL_CRITICAL_SECTION *)*((_QWORD *)HeapHandle + 44);
      --*((_WORD *)HeapHandle + 208);
      RtlLeaveCriticalSection(v2);
    }
  }
  if ( RtlGetCurrentServiceSessionId() )
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    UserModeGlobalLogger = 2147353472LL;
  if ( *(_BYTE *)UserModeGlobalLogger )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_180103AE4(HeapHandle);
  }
  return 1;
}
