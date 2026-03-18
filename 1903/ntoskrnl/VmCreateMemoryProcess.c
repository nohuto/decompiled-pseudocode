/*
 * XREFs of VmCreateMemoryProcess @ 0x1408ED160
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x1401C03D0 (ZwAllocateVirtualMemory.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     PsCreateMinimalProcess @ 0x140769434 (PsCreateMinimalProcess.c)
 */

__int64 __fastcall VmCreateMemoryProcess(
        PEPROCESS Process,
        __int64 a2,
        void *a3,
        unsigned int a4,
        PVOID a5,
        _QWORD *a6)
{
  char v7; // r9
  NTSTATUS v10; // edi
  int v11; // edx
  int v12; // ecx
  int v13; // r14d
  int v14; // eax
  HANDLE v15; // rbx
  PVOID Object; // [rsp+50h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-18h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-10h] BYREF
  HANDLE ProcessHandle; // [rsp+90h] [rbp+20h] BYREF

  ProcessHandle = 0LL;
  v7 = BYTE2(Process[2].ActiveProcessors.Bitmap[4]);
  if ( (a4 & 0xFFFFFFC0) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v11 = ((a4 & 1) << 13) | 0x4000;
    if ( (a4 & 2) == 0 )
      v11 = (a4 & 1) << 13;
    v12 = v11 | 0x20000;
    if ( (a4 & 4) == 0 )
      v12 = v11;
    v13 = v12 | 0x400;
    if ( (a4 & 0x10) == 0 )
      v13 = v12;
    v14 = PsCreateMinimalProcess(Process, a2, 0LL, v7, a3, v13, (a4 >> 3) & 4, 0LL, a5, &ProcessHandle);
    v15 = ProcessHandle;
    v10 = v14;
    if ( v14 >= 0 )
    {
      BaseAddress = (PVOID)0x10000;
      RegionSize = 4294901760LL;
      if ( (v13 & 0x6000) != 0
        || (v10 = ZwAllocateVirtualMemory(ProcessHandle, &BaseAddress, 0LL, &RegionSize, 0x2000u, 1u), v10 >= 0) )
      {
        if ( (a4 & 8) == 0 )
        {
          ObReferenceObjectByHandle(v15, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
          _InterlockedOr((volatile signed __int32 *)Object + 447, 0x2000u);
          ObfDereferenceObject(Object);
          v15 = ProcessHandle;
        }
        *a6 = v15;
        v15 = 0LL;
        v10 = 0;
      }
    }
    if ( v15 )
      ZwClose(v15);
  }
  return (unsigned int)v10;
}
