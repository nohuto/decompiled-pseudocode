/*
 * XREFs of RtlSetProcessDebugInformation @ 0x1800D7B10
 * Callers:
 *     sub_1800D8220 @ 0x1800D8220 (sub_1800D8220.c)
 * Callees:
 *     sub_180005760 @ 0x180005760 (sub_180005760.c)
 *     sub_1800757D8 @ 0x1800757D8 (sub_1800757D8.c)
 *     ZwWaitForSingleObject @ 0x18009C760 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwQueryInformationThread @ 0x18009CB80 (ZwQueryInformationThread.c)
 *     ZwResumeThread @ 0x18009D120 (ZwResumeThread.c)
 *     ZwTerminateThread @ 0x18009D140 (ZwTerminateThread.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     sub_1800DA550 @ 0x1800DA550 (sub_1800DA550.c)
 *     sub_1800FAA88 @ 0x1800FAA88 (sub_1800FAA88.c)
 */

NTSTATUS __cdecl RtlSetProcessDebugInformation(HANDLE UniqueProcessId, ULONG Flags, PRTL_DEBUG_INFORMATION Buffer)
{
  int InformationThread; // ebx
  char v5; // si
  NTSTATUS result; // eax
  SIZE_T OffsetFree; // r8
  HANDLE v8; // rdi
  int v9; // eax
  void *v10; // rcx
  PRTL_PROCESS_BACKTRACES BackTraces; // rax
  __int64 CommittedMemory; // rcx
  __int64 ReservedMemory; // rdx
  ULONG *p_NumberOfBackTraceLookups; // r8
  int v15; // [rsp+30h] [rbp-78h]
  int ThreadInformation[18]; // [rsp+60h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+8h] BYREF
  HANDLE ThreadHandle; // [rsp+C0h] [rbp+18h] BYREF
  LARGE_INTEGER Timeout; // [rsp+C8h] [rbp+20h] BYREF

  Timeout.QuadPart = -600000000LL;
  InformationThread = 0;
  Buffer->Flags = Flags;
  v5 = Flags;
  if ( NtCurrentTeb()->ClientId.UniqueProcess == UniqueProcessId )
  {
    if ( (Flags & 1) != 0 )
    {
      InformationThread = sub_1800DA550(Buffer);
      if ( InformationThread )
        return InformationThread;
    }
    if ( (v5 & 2) == 0 )
      return InformationThread;
    BackTraces = Buffer->BackTraces;
    if ( BackTraces )
    {
      CommittedMemory = BackTraces->CommittedMemory;
      ReservedMemory = BackTraces->ReservedMemory;
      if ( (_DWORD)CommittedMemory )
      {
        p_NumberOfBackTraceLookups = &BackTraces->NumberOfBackTraceLookups;
      }
      else
      {
        if ( (unsigned int)ReservedMemory < 0x18 )
          return -1073741811;
        p_NumberOfBackTraceLookups = &BackTraces->NumberOfBackTraceLookups;
        if ( *(_QWORD *)&BackTraces->NumberOfBackTraceLookups || BackTraces->BackTraces[0].SymbolicBackTrace )
          return -1073741811;
      }
      return sub_1800FAA88(CommittedMemory, ReservedMemory, p_NumberOfBackTraceLookups);
    }
    return -1073741801;
  }
  else
  {
    Handle = 0LL;
    result = sub_1800757D8((__int64)Buffer, UniqueProcessId, 0, &Handle);
    if ( result < 0 )
      return result;
    OffsetFree = Buffer->OffsetFree;
    if ( OffsetFree > 0xD0 )
      memmove((char *)&Buffer[1] + Buffer->ViewSize, &Buffer[1], OffsetFree - 208);
    InformationThread = sub_180005760(
                          Handle,
                          0LL,
                          7,
                          0,
                          0LL,
                          0LL,
                          v15,
                          (PUSER_THREAD_START_ROUTINE)sub_1800D8220,
                          Buffer->ViewBaseTarget,
                          &ThreadHandle,
                          0LL);
    if ( InformationThread >= 0 )
    {
      v8 = ThreadHandle;
      v9 = ZwResumeThread(ThreadHandle, 0LL);
      InformationThread = v9;
      v10 = v8;
      if ( v9 < 0 || (v9 = ZwWaitForSingleObject(v8, 1u, &Timeout), InformationThread = v9, v10 = v8, v9 < 0) )
      {
        ZwTerminateThread(v10, v9);
      }
      else
      {
        InformationThread = ZwQueryInformationThread(v8, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
        if ( InformationThread >= 0 )
          InformationThread = ThreadInformation[0];
      }
      ZwClose(v8);
    }
    ZwClose(Handle);
  }
  return InformationThread;
}
