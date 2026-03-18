/*
 * XREFs of ExpGetSystemPlatformBinary @ 0x140789190
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     MmUnmapIoSpace @ 0x1400F5130 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x1400F6BD0 (MmMapIoSpaceEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406DADE4 (ExpGetSystemFirmwareTableInformation.c)
 */

__int64 __fastcall ExpGetSystemPlatformBinary(__int64 a1, unsigned int a2, char a3)
{
  void *v4; // r14
  char v5; // r15
  struct _KTHREAD *CurrentThread; // rax
  int SystemFirmwareTableInformation; // ecx
  int v8; // edi
  unsigned int v10; // edi
  _DWORD *PoolWithTag; // rax
  struct _KTHREAD *v12; // rax
  SIZE_T v13; // r15
  signed __int64 v14; // rbx
  _QWORD *v15; // rbx
  unsigned __int16 v16; // r8
  __int64 v17; // rcx
  SIZE_T v18; // rdx
  void *v19; // rdi
  unsigned __int16 v20; // ax
  unsigned int Length; // [rsp+28h] [rbp-C0h]
  unsigned int Length_4; // [rsp+2Ch] [rbp-BCh] BYREF
  unsigned int v24; // [rsp+30h] [rbp-B8h]
  _DWORD *v25; // [rsp+38h] [rbp-B0h]
  volatile void *Address; // [rsp+40h] [rbp-A8h]
  volatile void *v27; // [rsp+48h] [rbp-A0h]
  PVOID BaseAddress; // [rsp+50h] [rbp-98h]
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp-90h]
  __int64 v30; // [rsp+60h] [rbp-88h]
  __int64 v31; // [rsp+80h] [rbp-68h]
  signed __int64 v32; // [rsp+88h] [rbp-60h]
  signed __int64 v33; // [rsp+90h] [rbp-58h]
  __int64 Src; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-40h]
  int v36; // [rsp+B0h] [rbp-38h]

  v30 = 0LL;
  Src = 0LL;
  v35 = 0LL;
  v36 = 0;
  v4 = 0LL;
  v25 = 0LL;
  v5 = 0;
  BaseAddress = 0LL;
  NumberOfBytes = 0LL;
  if ( a2 < 0x20 )
  {
    v8 = -1073741811;
    goto LABEL_11;
  }
  v24 = *(_DWORD *)(a1 + 28);
  Length = *(_DWORD *)(a1 + 24);
  Address = *(volatile void **)(a1 + 8);
  v27 = *(volatile void **)(a1 + 16);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&ExpPlatformBinaryLock, 0LL);
  v5 = 1;
  if ( ExpPlatformBinaryTableInformation == (PVOID)-1LL )
  {
    v8 = -1073741637;
    goto LABEL_11;
  }
  if ( !ExpPlatformBinaryTableInformation )
  {
    v31 = 17LL;
    v32 = _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0LL, 17LL);
    if ( v32 != 17 )
      ExfReleasePushLockShared((signed __int64 *)&ExpPlatformBinaryLock);
    KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v5 = 0;
    if ( Length || v24 )
    {
      v8 = -1073741811;
      goto LABEL_11;
    }
    Src = 0x141435049LL;
    v35 = 1413632087LL;
    SystemFirmwareTableInformation = ExpGetSystemFirmwareTableInformation((char *)&Src, 0, 0x14u, &Length_4);
    if ( SystemFirmwareTableInformation != -1073741789 )
    {
      v8 = -1073741637;
      if ( SystemFirmwareTableInformation >= 0 )
        v8 = -1073741701;
      goto LABEL_11;
    }
    v10 = Length_4;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Length_4, 0x54425057u);
    v4 = PoolWithTag;
    v25 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v8 = -1073741670;
      goto LABEL_11;
    }
    *PoolWithTag = 1094930505;
    PoolWithTag[1] = 1;
    PoolWithTag[2] = 1413632087;
    PoolWithTag[3] = v10 - 16;
    v8 = ExpGetSystemFirmwareTableInformation((char *)PoolWithTag, 0, v10, &Length_4);
    if ( v8 < 0 )
      goto LABEL_11;
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpPlatformBinaryLock, 0LL);
    if ( ExpPlatformBinaryTableInformation )
    {
      if ( ExpPlatformBinaryTableInformation == (PVOID)-1LL )
      {
        v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0xFFFFFFFFFFFFFFFFuLL);
        v33 = v14;
        if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
          ExfTryToWakePushLock((volatile signed __int64 *)&ExpPlatformBinaryLock);
        KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v8 = -1073741637;
        goto LABEL_11;
      }
    }
    else
    {
      ExpPlatformBinaryTableInformation = v4;
      v4 = 0LL;
      v25 = 0LL;
    }
    _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 17LL, 1LL);
  }
  v13 = v24;
  if ( (v24 & 1) == 0 )
  {
    v15 = ExpPlatformBinaryTableInformation;
    if ( *((_BYTE *)ExpPlatformBinaryTableInformation + 64) != 1
      || *((_BYTE *)ExpPlatformBinaryTableInformation + 65) != 1
      || (v16 = *((_WORD *)ExpPlatformBinaryTableInformation + 33), (v16 & 1) != 0)
      || (v17 = *((_QWORD *)ExpPlatformBinaryTableInformation + 7)) == 0
      || *((_DWORD *)ExpPlatformBinaryTableInformation + 10) != 1 )
    {
      v8 = -1073741701;
      goto LABEL_51;
    }
    v18 = *((unsigned int *)ExpPlatformBinaryTableInformation + 13);
    if ( (unsigned int)v18 > Length || v16 > v24 )
    {
      v8 = -1073741789;
      *(_DWORD *)(a1 + 24) = v18;
      *(_DWORD *)(a1 + 28) = *((unsigned __int16 *)v15 + 33);
      goto LABEL_51;
    }
    v30 = *((_QWORD *)ExpPlatformBinaryTableInformation + 7);
    NumberOfBytes = v18;
    v19 = (void *)MmMapIoSpaceEx(v17, v18, 2u);
    BaseAddress = v19;
    if ( !v19 )
    {
      v8 = -1073741670;
      goto LABEL_51;
    }
    *(_QWORD *)a1 = v15[7];
    if ( a3 )
      ProbeForWrite(Address, Length, 4u);
    memmove((void *)Address, v19, *((unsigned int *)v15 + 13));
    v20 = *((_WORD *)v15 + 33);
    if ( v20 )
    {
      if ( a3 )
      {
        ProbeForWrite(v27, v13, 2u);
        v20 = *((_WORD *)v15 + 33);
      }
      memmove((void *)v27, (char *)v15 + 68, v20);
    }
    v8 = 0;
    v5 = 1;
LABEL_11:
    if ( !v5 )
      goto LABEL_12;
    goto LABEL_51;
  }
  v8 = -1073741811;
LABEL_51:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpPlatformBinaryLock);
  KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_12:
  if ( BaseAddress )
    MmUnmapIoSpace(BaseAddress, NumberOfBytes);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x54425057u);
  return (unsigned int)v8;
}
