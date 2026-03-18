/*
 * XREFs of VrpHandleIoctlLoadDifferencingHive @ 0x140841F84
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140840BD0 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     PsIsThreadInSilo @ 0x140006544 (PsIsThreadInSilo.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     PsGetPermanentSiloContext @ 0x140101B40 (PsGetPermanentSiloContext.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     PsGetJobSilo @ 0x1403076C0 (PsGetJobSilo.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FB4F0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     VrpLoadDifferencingHive @ 0x140846830 (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x140846C2C (VrpUnloadDifferencingHive.c)
 */

__int64 __fastcall VrpHandleIoctlLoadDifferencingHive(
        __int64 a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        __int64 a4,
        PVOID Object,
        unsigned __int64 a6)
{
  int JobSilo; // edi
  unsigned __int16 v10; // dx
  unsigned __int16 v11; // r8
  unsigned __int16 v12; // r9
  unsigned int v13; // ecx
  unsigned int v14; // r10d
  unsigned int v15; // ecx
  ULONG_PTR v16; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v18; // r15
  volatile signed __int64 *v19; // rsi
  _WORD *PoolWithTag; // rdi
  UNICODE_STRING String1; // [rsp+40h] [rbp-30h] BYREF
  __int64 v23; // [rsp+50h] [rbp-20h]
  unsigned __int64 v24; // [rsp+58h] [rbp-18h]
  __int64 v25; // [rsp+60h] [rbp-10h]
  unsigned __int64 v26; // [rsp+68h] [rbp-8h]

  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  Object = 0LL;
  a6 = 0LL;
  if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, a3) || !SeSinglePrivilegeCheck(SeRestorePrivilege, a3) )
    return (unsigned int)-1073741727;
  if ( a2 < 0x20 )
    return (unsigned int)-1073741811;
  v10 = *(_WORD *)(a1 + 20);
  if ( (v10 & 1) != 0 )
    return (unsigned int)-1073741811;
  v11 = *(_WORD *)(a1 + 22);
  if ( (v11 & 1) != 0 )
    return (unsigned int)-1073741811;
  v12 = *(_WORD *)(a1 + 24);
  if ( (v12 & 1) != 0 )
    return (unsigned int)-1073741811;
  if ( !v10 )
    return (unsigned int)-1073741811;
  if ( !v11 )
    return (unsigned int)-1073741811;
  v13 = v10 + 26;
  v14 = v13 + v11;
  if ( v13 > v14 )
    return (unsigned int)-1073741811;
  v15 = v14 + v12;
  if ( v14 > v15 || a2 < v15 || (*(_DWORD *)(a1 + 12) & 1) != 0 && !v12 )
    return (unsigned int)-1073741811;
  String1.MaximumLength = *(_WORD *)(a1 + 20);
  String1.Length = v10;
  String1.Buffer = (wchar_t *)(a1 + 26);
  v16 = *(_QWORD *)a1;
  v26 = a1 + 26 + 2 * ((unsigned __int64)v10 >> 1);
  WORD1(v25) = v11;
  LOWORD(v25) = v11;
  v24 = v26 + 2 * ((unsigned __int64)v11 >> 1);
  WORD1(v23) = v12;
  LOWORD(v23) = v12;
  JobSilo = ObpReferenceObjectByHandleWithTag(v16, 6, (__int64)PsJobType, a3, 0x52566D43u, &Object, 0LL, 0LL);
  if ( JobSilo >= 0 )
  {
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo >= 0 )
    {
      if ( PsIsThreadInSilo((__int64)KeGetCurrentThread(), 0LL) )
      {
        JobSilo = -1073741811;
      }
      else
      {
        JobSilo = PsGetPermanentSiloContext(0LL, VrpSiloContextSlot, &a6);
        if ( JobSilo >= 0 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v18 = a6;
          v19 = (volatile signed __int64 *)(a6 + 16);
          ExAcquirePushLockExclusiveEx(a6 + 16, 0LL);
          if ( *(_DWORD *)(v18 + 84) )
          {
            JobSilo = -1073741738;
          }
          else
          {
            JobSilo = VrpLoadDifferencingHive(
                        &String1,
                        *(_DWORD *)(a1 + 12) & 1,
                        (*(_DWORD *)(a1 + 12) >> 1) & 1,
                        (*(_DWORD *)(a1 + 12) >> 2) & 1);
            if ( JobSilo >= 0 )
            {
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)String1.Length + 10, 0x67655256u);
              if ( PoolWithTag )
              {
                PoolWithTag[4] = String1.Length;
                memmove(PoolWithTag + 5, String1.Buffer, String1.Length);
                *(_QWORD *)PoolWithTag = *(_QWORD *)(v18 + 24);
                *(_QWORD *)(v18 + 24) = PoolWithTag;
                if ( (_InterlockedExchangeAdd64(v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v19);
                KeAbPostRelease((ULONG_PTR)v19);
                KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                JobSilo = 0;
                goto LABEL_25;
              }
              JobSilo = -1073741670;
              VrpUnloadDifferencingHive(&String1);
            }
          }
          if ( (_InterlockedExchangeAdd64(v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v19);
          KeAbPostRelease((ULONG_PTR)v19);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        }
      }
    }
  }
LABEL_25:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
