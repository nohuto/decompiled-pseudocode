/*
 * XREFs of PspFreeUserFiberShadowStack @ 0x1408C8D64
 * Callers:
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 * Callees:
 *     KiDispatchException @ 0x140015DB0 (KiDispatchException.c)
 *     PspGetBaseTrapFrame @ 0x14001B3F0 (PspGetBaseTrapFrame.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1401C0530 (ZwQueryVirtualMemory.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MmFreeVirtualMemory @ 0x140606BC0 (MmFreeVirtualMemory.c)
 */

__int64 __fastcall PspFreeUserFiberShadowStack(PVOID BaseAddress)
{
  int VirtualMemory; // ebx
  __int64 v3; // rcx
  __int64 BaseTrapFrame; // rax
  __int64 v5; // r8
  unsigned __int8 v6; // r9
  unsigned __int64 v8; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 MemoryInformation[5]; // [rsp+38h] [rbp-C8h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+60h] [rbp-A0h] BYREF

  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  memset(MemoryInformation, 0, sizeof(MemoryInformation));
  VirtualMemory = ZwQueryVirtualMemory(
                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                    BaseAddress,
                    MemoryRegionInformation,
                    MemoryInformation,
                    0x28uLL,
                    0LL);
  if ( VirtualMemory < 0
    || (v8 = 0LL,
        VirtualMemory = MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, MemoryInformation, &v8, 0x8000u, 0, 0x40000000),
        VirtualMemory < 0) )
  {
    ExceptionRecord.ExceptionAddress = 0LL;
    ExceptionRecord.ExceptionRecord = 0LL;
    ExceptionRecord.ExceptionFlags = 1;
    ExceptionRecord.NumberParameters = 1;
    ExceptionRecord.ExceptionInformation[0] = VirtualMemory;
    ExceptionRecord.ExceptionCode = -1073740791;
    PspGetBaseTrapFrame((__int64)KeGetCurrentThread());
    BaseTrapFrame = PspGetBaseTrapFrame(v3);
    KiDispatchException(&ExceptionRecord, BaseTrapFrame - 320, v5, v6, 0);
  }
  return (unsigned int)VirtualMemory;
}
