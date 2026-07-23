/*
 * XREFs of VrpHandleIoctlLoadDifferencingHiveForHost @ 0x14080A59C
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140808EC0 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     VrpLoadDifferencingHive @ 0x14080EAF8 (VrpLoadDifferencingHive.c)
 */

__int64 __fastcall VrpHandleIoctlLoadDifferencingHiveForHost(__int64 a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  _WORD *PoolWithQuotaTag; // rdi
  int v7; // ebx
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // r8
  unsigned int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // edx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  UNICODE_STRING String1; // [rsp+40h] [rbp-30h] BYREF
  __int16 v18; // [rsp+50h] [rbp-20h]
  __int16 v19; // [rsp+52h] [rbp-1Eh]
  __int64 v20; // [rsp+58h] [rbp-18h]
  __int16 v21; // [rsp+60h] [rbp-10h]
  __int16 v22; // [rsp+62h] [rbp-Eh]
  __int64 v23; // [rsp+68h] [rbp-8h]

  PoolWithQuotaTag = 0LL;
  if ( a2 < 0x10 )
    return (unsigned int)-1073741811;
  v8 = *(_WORD *)(a1 + 8);
  if ( (v8 & 1) != 0 || (v9 = *(_WORD *)(a1 + 10), (v9 & 1) != 0) || (v10 = *(_WORD *)(a1 + 12), (v10 & 1) != 0) )
  {
    v7 = -1073741811;
  }
  else
  {
    if ( !v8 )
      return (unsigned int)-1073741811;
    if ( !v9 )
      return (unsigned int)-1073741811;
    v11 = v8 + 14;
    v12 = v11 + v9;
    if ( v11 > v12 )
      return (unsigned int)-1073741811;
    v13 = v12 + v10;
    if ( v12 > v13 || a2 < v13 )
      return (unsigned int)-1073741811;
    if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, a3) || !SeSinglePrivilegeCheck(SeRestorePrivilege, a3) )
      return (unsigned int)-1073741727;
    v14 = *(unsigned __int16 *)(a1 + 8);
    String1.Buffer = (wchar_t *)(a1 + 14);
    String1.MaximumLength = v14;
    String1.Length = v14;
    v15 = *(unsigned __int16 *)(a1 + 10);
    v22 = v15;
    v21 = v15;
    v23 = a1 + 14 + 2 * (v14 >> 1);
    v20 = v23 + 2 * (v15 >> 1);
    v19 = *(_WORD *)(a1 + 12);
    v18 = v19;
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v14 + 10, 0x67655256u);
    if ( !PoolWithQuotaTag )
      return (unsigned int)-1073741670;
    PoolWithQuotaTag[4] = String1.Length;
    memmove(PoolWithQuotaTag + 5, String1.Buffer, String1.Length);
    v7 = VrpLoadDifferencingHive(&String1, *(_DWORD *)(a1 + 4) & 1, (*(_DWORD *)(a1 + 4) >> 1) & 1, 0);
    if ( v7 >= 0 )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&VrpHostLoadedHivesLock, 0LL);
      *(_QWORD *)PoolWithQuotaTag = VrpHostLoadedHives;
      VrpHostLoadedHives = (__int64)PoolWithQuotaTag;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VrpHostLoadedHivesLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&VrpHostLoadedHivesLock);
      KeAbPostRelease((ULONG_PTR)&VrpHostLoadedHivesLock);
      return 0;
    }
  }
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  return (unsigned int)v7;
}
