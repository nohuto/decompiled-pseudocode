/*
 * XREFs of WbAllocateMemoryBlock @ 0x140690F20
 * Callers:
 *     WbAllocateUserMemory @ 0x140691D38 (WbAllocateUserMemory.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     WbAlloc @ 0x140625D34 (WbAlloc.c)
 *     MmAllocateVirtualMemory @ 0x140676D60 (MmAllocateVirtualMemory.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x140691064 (WbMakeUserExecutablePagesKernelWritable.c)
 *     WbFreeMemoryBlock @ 0x1406921E4 (WbFreeMemoryBlock.c)
 */

__int64 __fastcall WbAllocateMemoryBlock(__int64 a1, PVOID **a2)
{
  int VirtualMemory; // edi
  PVOID *v4; // rax
  __int64 *v5; // r15
  PVOID *v6; // rbp
  PVOID *v7; // r12
  _QWORD *v8; // r14
  PVOID *v9; // rbx
  PVOID *BaseAddress; // [rsp+90h] [rbp+8h] BYREF

  BaseAddress = 0LL;
  VirtualMemory = WbAlloc(0x440uLL, &BaseAddress);
  if ( VirtualMemory < 0 )
  {
    v9 = BaseAddress;
  }
  else
  {
    v4 = BaseAddress;
    *BaseAddress = 0LL;
    v5 = (__int64 *)(v4 + 1);
    v4[1] = (PVOID)0x10000;
    v6 = v4 + 3;
    v4[3] = 0LL;
    v7 = v4 + 4;
    v4[4] = 0LL;
    v8 = v4 + 135;
    v4[135] = 0LL;
    v9 = BaseAddress;
    BaseAddress[2] = KeGetCurrentThread()->ApcState.Process;
    v9[134] = 0LL;
    memset((char *)v9 + 44, 0, 0x400uLL);
    VirtualMemory = MmAllocateVirtualMemory(
                      -1,
                      (unsigned __int64)v9,
                      v5,
                      4096,
                      32,
                      0LL,
                      0,
                      0,
                      0x20000000,
                      2,
                      (__int64)v8);
    if ( VirtualMemory >= 0 )
    {
      if ( *v8 )
      {
        VirtualMemory = WbMakeUserExecutablePagesKernelWritable(*v9, *(unsigned int *)v5, v6, v7);
        if ( VirtualMemory >= 0 && a2 )
        {
          *a2 = v9;
          v9 = 0LL;
        }
      }
      else
      {
        VirtualMemory = -1073741595;
      }
    }
  }
  WbFreeMemoryBlock(v9);
  return (unsigned int)VirtualMemory;
}
