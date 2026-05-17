/*
 * XREFs of sub_1800D6400 @ 0x1800D6400
 * Callers:
 *     RtlCreateProcessReflection @ 0x1800D5E70 (RtlCreateProcessReflection.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x18009C760 (ZwWaitForSingleObject.c)
 *     ZwSetEvent @ 0x18009C8A0 (ZwSetEvent.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009C9E0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 *     ZwTerminateProcess @ 0x18009CC60 (ZwTerminateProcess.c)
 *     ZwWriteVirtualMemory @ 0x18009CE20 (ZwWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x18009CE60 (ZwDuplicateObject.c)
 *     ZwCreateEvent @ 0x18009CFE0 (ZwCreateEvent.c)
 *     ZwResumeProcess @ 0x18009F570 (ZwResumeProcess.c)
 *     ZwSuspendThread @ 0x18009FD90 (ZwSuspendThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     RtlCloneUserProcess @ 0x1800D6770 (RtlCloneUserProcess.c)
 */

__int64 __fastcall sub_1800D6400(__int64 a1)
{
  int VirtualMemory; // r14d
  int v3; // ecx
  int v4; // eax
  __int64 v5; // r8
  _BYTE v7[8]; // [rsp+50h] [rbp-59h] BYREF
  __int64 v8; // [rsp+58h] [rbp-51h]
  __int64 v9; // [rsp+60h] [rbp-49h]
  __int64 v10; // [rsp+68h] [rbp-41h]
  __int64 v11; // [rsp+70h] [rbp-39h]

  VirtualMemory = ZwAllocateVirtualMemory();
  if ( VirtualMemory < 0 )
  {
    memset((void *)(a1 + 56), 0, 0x20uLL);
    return (unsigned int)VirtualMemory;
  }
  MEMORY[0] = *(_OWORD *)a1;
  MEMORY[0x10] = *(_OWORD *)(a1 + 16);
  MEMORY[0x20] = *(_OWORD *)(a1 + 32);
  MEMORY[0x30] = *(_OWORD *)(a1 + 48);
  MEMORY[0x40] = *(_OWORD *)(a1 + 64);
  MEMORY[0x50] = *(_QWORD *)(a1 + 80);
  VirtualMemory = ZwCreateEvent();
  if ( VirtualMemory < 0 )
    return (unsigned int)VirtualMemory;
  v3 = *(_DWORD *)(a1 + 8) & 2 | 4;
  if ( (*(_DWORD *)(a1 + 8) & 8) == 0 )
    v3 = *(_DWORD *)(a1 + 8) & 2;
  v4 = RtlCloneUserProcess(v3 | 1u, 0, 0, 0, (__int64)v7);
  VirtualMemory = v4;
  if ( !v4 )
  {
    v5 = v8;
    *(_QWORD *)(a1 + 64) = v9;
    *(_QWORD *)(a1 + 72) = v10;
    *(_QWORD *)(a1 + 80) = v11;
    *(_QWORD *)(a1 + 56) = v5;
    VirtualMemory = ZwDuplicateObject();
    if ( VirtualMemory >= 0 )
    {
      VirtualMemory = ZwWriteVirtualMemory();
      if ( VirtualMemory >= 0 )
      {
        if ( !*(_QWORD *)(a1 + 48) )
          goto LABEL_16;
        VirtualMemory = ZwDuplicateObject();
        if ( VirtualMemory >= 0 )
        {
          if ( (*(_DWORD *)(a1 + 8) & 0x10) == 0 )
            ZwClose();
          VirtualMemory = ZwWriteVirtualMemory();
          if ( VirtualMemory >= 0 )
          {
LABEL_16:
            ZwResumeProcess();
            ZwWaitForSingleObject();
            if ( *(_QWORD *)(a1 + 32) )
            {
              VirtualMemory = ZwSetEvent();
              ZwWaitForSingleObject();
              ZwClose();
              ZwClose();
              ZwClose();
              ZwClose();
            }
            return (unsigned int)VirtualMemory;
          }
        }
      }
    }
LABEL_8:
    ZwTerminateProcess();
    return (unsigned int)VirtualMemory;
  }
  if ( v4 == 297 )
  {
    NtCurrentPeb()->Ldr->ShutdownInProgress = 1;
    ZwSetEvent();
    ZwClose();
    if ( MEMORY[0x10] )
    {
      MEMORY[0x10](MEMORY[0x18]);
    }
    else if ( (MEMORY[8] & 4) == 0 )
    {
      ZwSuspendThread();
    }
    VirtualMemory = ZwFreeVirtualMemory();
    goto LABEL_8;
  }
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  if ( *(_QWORD *)(a1 + 32) )
    ZwSetEvent();
  return (unsigned int)VirtualMemory;
}
