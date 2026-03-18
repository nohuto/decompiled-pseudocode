/*
 * XREFs of ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C00EDA1C
 * Callers:
 *     UmfdDispatchWinLogonEscape @ 0x1C00ED6D4 (UmfdDispatchWinLogonEscape.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0004B8C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0004BC0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C00EDD18 (-ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ?UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C00EDF14 (-UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ @ 0x1C00EDF40 (-TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ.c)
 */

void __fastcall UmfdHostLifeTimeManager::TerminateUmfdHost(char a1)
{
  void *v2; // rax
  void *v3; // rbx
  char v4; // [rsp+48h] [rbp+10h] BYREF
  char v5; // [rsp+50h] [rbp+18h] BYREF

  KeWaitForSingleObject(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, Executive, 0, 0, 0LL);
  v2 = UmfdHostLifeTimeManager::TerminateUmfdHostRetainHandle();
  v3 = v2;
  if ( v2 )
  {
    ZwWaitForSingleObject(v2, 0, 0LL);
    ZwClose(v3);
  }
  if ( a1 )
  {
    UmfdHostLifeTimeManager::s_SessionRasterizerInitialized = 0;
    KeClearEvent(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent);
  }
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v5, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
  CAutoPushLockEx::CAutoPushLockEx(
    (CAutoPushLockEx *)&v4,
    (struct _EX_PUSH_LOCK *)&UmfdHostLifeTimeManager::s_ReadyLock);
  UmfdHostLifeTimeManager::UnreferenceUmfdHostWithNoLock();
  UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock();
  KeSetEvent(UmfdHostLifeTimeManager::s_WinlogonCallbackEvent, 0, 0);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v4);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v5);
}
