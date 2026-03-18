/*
 * XREFs of ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ @ 0x1C00E8ECC
 * Callers:
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C00E8960 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 * Callees:
 *     ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C008CCC4 (--0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C008CD28 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

HANDLE UmfdHostLifeTimeManager::TerminateUmfdHostRetainHandle(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  NTSTATUS v4; // eax
  HANDLE v5; // rbx
  HANDLE ProcessHandle; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  AutoSharedPushLock::AutoSharedPushLock(
    (AutoSharedPushLock *)&v8,
    (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock(v1, v0, v2, v3)
    || !UmfdHostLifeTimeManager::s_UmfdHostProcess
    || ObOpenObjectByPointer(
         UmfdHostLifeTimeManager::s_UmfdHostProcess,
         0x200u,
         0LL,
         1u,
         (POBJECT_TYPE)PsProcessType,
         0,
         &ProcessHandle) < 0 )
  {
    v5 = 0LL;
  }
  else
  {
    v4 = ZwTerminateProcess(ProcessHandle, 258);
    if ( (int)(v4 + 0x80000000) < 0 || v4 == -1073741558 )
    {
      v5 = ProcessHandle;
    }
    else
    {
      ZwClose(ProcessHandle);
      v5 = 0LL;
      ProcessHandle = 0LL;
    }
  }
  if ( v8 )
  {
    GreReleasePushLockShared(v8);
    KeLeaveCriticalRegion();
  }
  return v5;
}
