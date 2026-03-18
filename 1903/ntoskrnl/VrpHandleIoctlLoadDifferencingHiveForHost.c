/*
 * XREFs of VrpHandleIoctlLoadDifferencingHiveForHost @ 0x140842C58
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140841570 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400BEF80 (ExAllocatePoolWithQuotaTag.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     VrpLoadDifferencingHive @ 0x1408471BC (VrpLoadDifferencingHive.c)
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
  UNICODE_STRING String1; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+40h] [rbp-20h]
  __int64 v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp-10h]
  __int64 v21; // [rsp+58h] [rbp-8h]

  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  PoolWithQuotaTag = 0LL;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
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
    WORD1(v20) = v15;
    LOWORD(v20) = v15;
    v21 = a1 + 14 + 2 * (v14 >> 1);
    v19 = v21 + 2 * (v15 >> 1);
    WORD1(v18) = *(_WORD *)(a1 + 12);
    LOWORD(v18) = WORD1(v18);
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v14 + 10, 0x67655256u);
    if ( !PoolWithQuotaTag )
      return (unsigned int)-1073741670;
    PoolWithQuotaTag[4] = String1.Length;
    memmove(PoolWithQuotaTag + 5, String1.Buffer, String1.Length);
    v7 = VrpLoadDifferencingHive(&String1, *(_DWORD *)(a1 + 4) & 1, (*(_DWORD *)(a1 + 4) >> 1) & 1);
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
