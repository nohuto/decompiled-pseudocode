/*
 * XREFs of CmpVolumeContextDecrementRefCount @ 0x1405B0C04
 * Callers:
 *     CmpCompleteUnloadKey @ 0x1405B061C (CmpCompleteUnloadKey.c)
 *     CmShutdownSystem @ 0x1407EDAB4 (CmShutdownSystem.c)
 *     CmpDestroyHive @ 0x1407F7978 (CmpDestroyHive.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     CmpVolumeContextCleanup @ 0x1407F7714 (CmpVolumeContextCleanup.c)
 */

void __fastcall CmpVolumeContextDecrementRefCount(PPRIVILEGE_SET Privileges)
{
  volatile signed __int64 *v2; // rdi
  signed __int64 v3; // rax
  signed __int64 i; // rcx
  signed __int64 v5; // rtt
  __int64 v6; // rdx
  __int64 v7; // rcx
  PPRIVILEGE_SET *Luid; // rdx

  v2 = *(volatile signed __int64 **)&Privileges->Privilege[0].Attributes;
  _m_prefetchw(&Privileges[1].Control);
  v3 = *(_QWORD *)&Privileges[1].Control;
  for ( i = v3 - 1; i > 0; i = v3 - 1 )
  {
    v5 = v3;
    v3 = _InterlockedCompareExchange64((volatile signed __int64 *)&Privileges[1].Control, i, v3);
    if ( v5 == v3 )
      return;
  }
  if ( i )
    __fastfail(0xEu);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v2, 0LL);
  v6 = _InterlockedDecrement64((volatile signed __int64 *)&Privileges[1].Control);
  if ( v6 > 0 )
  {
    if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease((ULONG_PTR)v2);
  }
  else
  {
    if ( v6 )
      __fastfail(0xEu);
    v7 = *(_QWORD *)&Privileges->PrivilegeCount;
    if ( *(PPRIVILEGE_SET *)(*(_QWORD *)&Privileges->PrivilegeCount + 8LL) != Privileges
      || (Luid = (PPRIVILEGE_SET *)Privileges->Privilege[0].Luid, *Luid != Privileges) )
    {
      __fastfail(3u);
    }
    *Luid = (PPRIVILEGE_SET)v7;
    *(_QWORD *)(v7 + 8) = Luid;
    if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    CmpVolumeContextCleanup(Privileges);
    CmSiFreeMemory(Privileges);
  }
}
