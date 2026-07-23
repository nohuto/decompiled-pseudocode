/*
 * XREFs of VmCreateMemoryProcess @ 0x1408B1200
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x1401B85F0 (ZwAllocateVirtualMemory.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     PsCreateMinimalProcess @ 0x14075871C (PsCreateMinimalProcess.c)
 */

__int64 __fastcall VmCreateMemoryProcess(__int64 a1, __int64 a2, PVOID Object, unsigned int a4, PVOID a5, _QWORD *a6)
{
  char v7; // r9
  NTSTATUS v10; // edi
  int v11; // edx
  int v12; // ecx
  int v13; // r14d
  int v14; // eax
  HANDLE v15; // rbx
  PVOID Objecta; // [rsp+50h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-18h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-10h] BYREF
  HANDLE ProcessHandle; // [rsp+90h] [rbp+20h] BYREF

  ProcessHandle = 0LL;
  v7 = *(_BYTE *)(a1 + 1738);
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
    v14 = PsCreateMinimalProcess(
            (struct _KPROCESS *)a1,
            a2,
            0LL,
            v7,
            Object,
            v13,
            (a4 >> 3) & 4,
            0LL,
            a5,
            &ProcessHandle);
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
          ObReferenceObjectByHandle(v15, 0, (POBJECT_TYPE)PsProcessType, 0, &Objecta, 0LL);
          _InterlockedOr((volatile signed __int32 *)Objecta + 435, 0x2000u);
          ObfDereferenceObject(Objecta);
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
