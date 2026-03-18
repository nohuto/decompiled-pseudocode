/*
 * XREFs of ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C0161BBC
 * Callers:
 *     UmfdDispatchWinLogonEscape @ 0x1C01195CC (UmfdDispatchWinLogonEscape.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0030F0C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0030F40 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0122B04 (--0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0123C38 (-IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C01420AC (-ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ?UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C01422D8 (-UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C0166510 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 */

void __fastcall UmfdHostLifeTimeManager::TerminateUmfdHost(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  NTSTATUS v6; // eax
  HANDLE v7; // rbx
  HANDLE ProcessHandle; // [rsp+58h] [rbp+18h] BYREF
  __int64 v9; // [rsp+60h] [rbp+20h] BYREF

  KeWaitForSingleObject(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, Executive, 0, 0, 0LL);
  AutoSharedPushLock::AutoSharedPushLock(
    (AutoSharedPushLock *)&v9,
    (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
  if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHostNoLock(v3, v2, v4, v5)
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
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v9);
  }
  else
  {
    v6 = ZwTerminateProcess(ProcessHandle, 258);
    if ( (int)(v6 + 0x80000000) < 0 || v6 == -1073741558 )
    {
      v7 = ProcessHandle;
    }
    else
    {
      ZwClose(ProcessHandle);
      v7 = 0LL;
      ProcessHandle = 0LL;
    }
    if ( v9 )
    {
      GreReleasePushLockShared(v9);
      KeLeaveCriticalRegion();
    }
    if ( v7 )
    {
      ZwWaitForSingleObject(v7, 0, 0LL);
      ZwClose(v7);
    }
  }
  if ( a1 )
  {
    UmfdHostLifeTimeManager::s_SessionRasterizerInitialized = 0;
    KeClearEvent(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent);
  }
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v9, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&ProcessHandle, (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
  UmfdHostLifeTimeManager::UnreferenceUmfdHostWithNoLock();
  UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock();
  KeSetEvent(UmfdHostLifeTimeManager::s_WinlogonCallbackEvent, 0, 0);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&ProcessHandle);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v9);
}
