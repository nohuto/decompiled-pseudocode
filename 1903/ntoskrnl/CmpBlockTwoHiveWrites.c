/*
 * XREFs of CmpBlockTwoHiveWrites @ 0x1406F4DA4
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x1406F4644 (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x14082D68C (CmpVirtualPathPresent.c)
 *     CmSaveMergedKeys @ 0x14083B80C (CmSaveMergedKeys.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     CmpReferenceHive @ 0x14064E82C (CmpReferenceHive.c)
 *     CmpGetNextActiveHive @ 0x140661E60 (CmpGetNextActiveHive.c)
 *     CmpDeleteHive @ 0x1406629D0 (CmpDeleteHive.c)
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
