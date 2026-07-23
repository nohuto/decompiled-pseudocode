/*
 * XREFs of VrpHandleIoctlLoadDifferencingHive @ 0x14080A270
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140808EC0 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     PsIsThreadInSilo @ 0x1400CC350 (PsIsThreadInSilo.c)
 *     PsGetPermanentSiloContext @ 0x14010A120 (PsGetPermanentSiloContext.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     PsGetJobSilo @ 0x1402EA310 (PsGetJobSilo.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     VrpLoadDifferencingHive @ 0x14080EAF8 (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x14080EEBC (VrpUnloadDifferencingHive.c)
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
  unsigned __int16 v23; // [rsp+50h] [rbp-20h]
  unsigned __int16 v24; // [rsp+52h] [rbp-1Eh]
  unsigned __int64 v25; // [rsp+58h] [rbp-18h]
  unsigned __int16 v26; // [rsp+60h] [rbp-10h]
  unsigned __int16 v27; // [rsp+62h] [rbp-Eh]
  unsigned __int64 v28; // [rsp+68h] [rbp-8h]

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
  v28 = a1 + 26 + 2 * ((unsigned __int64)v10 >> 1);
  v27 = v11;
  v26 = v11;
  v25 = v28 + 2 * ((unsigned __int64)v11 >> 1);
  v24 = v12;
  v23 = v12;
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
                KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
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
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        }
      }
    }
  }
LABEL_25:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
