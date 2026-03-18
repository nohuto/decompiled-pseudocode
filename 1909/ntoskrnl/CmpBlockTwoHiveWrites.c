/*
 * XREFs of CmpBlockTwoHiveWrites @ 0x1406F6B14
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x1406F63B4 (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x14082CD8C (CmpVirtualPathPresent.c)
 *     CmSaveMergedKeys @ 0x14083AE6C (CmSaveMergedKeys.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     CmpGetNextActiveHive @ 0x140638590 (CmpGetNextActiveHive.c)
 *     CmpReferenceHive @ 0x1406619EC (CmpReferenceHive.c)
 *     CmpDeleteHive @ 0x1406B97A0 (CmpDeleteHive.c)
 */

__int64 __fastcall CmpBlockTwoHiveWrites(__int64 a1, __int64 a2, char a3)
{
  char v3; // r14
  char v4; // bp
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v10; // rbx
  _QWORD *v12; // rcx

  v3 = 0;
  v4 = 0;
  for ( i = 0LL; ; i = v10 )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    v10 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
    if ( !NextActiveHive )
      break;
    if ( (__int64 *)a1 == NextActiveHive || (__int64 *)a2 == NextActiveHive )
    {
      if ( a3 )
        CmpReferenceHive((__int64)NextActiveHive);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&v10[9], 0LL);
      if ( (struct _EX_RUNDOWN_REF *)a1 == v10 )
        v3 = 1;
      else
        v4 = 1;
      if ( (!a1 || v3 == 1) && (!a2 || v4 == 1) )
      {
        ExReleaseRundownProtection_0(v10 + 204);
        break;
      }
    }
  }
  if ( (!a1 || v3) && (!a2 || v4) )
    return 0LL;
  if ( v3 == 1 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 72));
    KeAbPostRelease(a1 + 72);
    if ( !a3 || _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4272), 0xFFFFFFFF) != 1 )
      return 3221225524LL;
    v12 = (_QWORD *)a1;
  }
  else
  {
    if ( v4 != 1 )
      return 3221225524LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 72));
    KeAbPostRelease(a2 + 72);
    if ( !a3 || _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 4272), 0xFFFFFFFF) != 1 )
      return 3221225524LL;
    v12 = (_QWORD *)a2;
  }
  CmpDeleteHive(v12);
  return 3221225524LL;
}
