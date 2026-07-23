/*
 * XREFs of EtwpCoverageSamplerSetBloomFilter @ 0x1408C9C70
 * Callers:
 *     EtwpSetCoverageSamplerInformation @ 0x1408CA57C (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     MmMapViewInSystemSpace @ 0x1405A33A0 (MmMapViewInSystemSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x1405E0390 (MmUnmapViewInSystemSpace.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall EtwpCoverageSamplerSetBloomFilter(ULONG_PTR BugCheckParameter2, __int64 a2, KPROCESSOR_MODE a3)
{
  PVOID v3; // rbp
  NTSTATUS v6; // ebx
  unsigned int v7; // ecx
  NTSTATUS v8; // eax
  __int64 v9; // rax
  int v10; // r14d
  struct _KTHREAD *CurrentThread; // rax
  void *v12; // rcx
  int v13; // eax
  PVOID MappedBase; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp+10h] BYREF
  PVOID Section; // [rsp+78h] [rbp+20h] BYREF

  MappedBase = 0LL;
  v3 = 0LL;
  if ( *(_DWORD *)(a2 + 12) != *(_DWORD *)(BugCheckParameter2 + 28) )
    return (unsigned int)-1073741811;
  v7 = *(_DWORD *)(a2 + 8);
  if ( !*(_QWORD *)a2 )
  {
    if ( !v7 && !*(_DWORD *)(a2 + 16) )
    {
      v10 = 0;
      goto LABEL_15;
    }
    goto LABEL_18;
  }
  if ( !v7 || ((v7 - 1) & v7) != 0 || v7 > 0x8000000 || (unsigned int)(*(_DWORD *)(a2 + 16) - 1) > 9 )
    return (unsigned int)-1073741811;
  v8 = ObReferenceObjectByHandle(*(HANDLE *)a2, 4u, MmSectionObjectType, a3, &Section, 0LL);
  v3 = Section;
  v6 = v8;
  if ( v8 >= 0 )
  {
    ViewSize = *(unsigned int *)(a2 + 8);
    v6 = MmMapViewInSystemSpace(Section, &MappedBase, &ViewSize);
    if ( v6 < 0 )
      goto LABEL_19;
    v9 = *(unsigned int *)(a2 + 8);
    if ( ViewSize == v9 )
    {
      v10 = 8 * v9 - 1;
LABEL_15:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
      v12 = *(void **)(BugCheckParameter2 + 1176);
      *(_QWORD *)(BugCheckParameter2 + 8) = KeGetCurrentThread();
      *(_QWORD *)(BugCheckParameter2 + 1176) = MappedBase;
      *(_DWORD *)(BugCheckParameter2 + 1184) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(BugCheckParameter2 + 1188) = v10;
      v13 = *(_DWORD *)(a2 + 16);
      *(_QWORD *)(BugCheckParameter2 + 8) = 0LL;
      *(_DWORD *)(BugCheckParameter2 + 1192) = v13;
      MappedBase = v12;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v6 = 0;
      goto LABEL_19;
    }
LABEL_18:
    v6 = -1073741811;
LABEL_19:
    if ( MappedBase )
      MmUnmapViewInSystemSpace(MappedBase);
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v6;
}
