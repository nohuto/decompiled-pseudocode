/*
 * XREFs of ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ @ 0x1C00EDF40
 * Callers:
 *     UmfdQueryFontData @ 0x1C0081A80 (UmfdQueryFontData.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0083010 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C00EDA1C (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 * Callees:
 *     ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C007F030 (--0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00815C8 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

HANDLE UmfdHostLifeTimeManager::TerminateUmfdHostRetainHandle(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  NTSTATUS v2; // eax
  HANDLE v3; // rbx
  HANDLE ProcessHandle; // [rsp+50h] [rbp+8h] BYREF
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF

  AutoSharedPushLock::AutoSharedPushLock(
    (AutoSharedPushLock *)&v6,
    (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock(v1, v0)
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
    v3 = 0LL;
  }
  else
  {
    v2 = ZwTerminateProcess(ProcessHandle, 258);
    if ( (int)(v2 + 0x80000000) < 0 || v2 == -1073741558 )
    {
      v3 = ProcessHandle;
    }
    else
    {
      ZwClose(ProcessHandle);
      v3 = 0LL;
      ProcessHandle = 0LL;
    }
  }
  if ( v6 )
  {
    GreReleasePushLockShared(v6);
    KeLeaveCriticalRegion();
  }
  return v3;
}
