/*
 * XREFs of MmEnumerateSystemImages @ 0x14070A210
 * Callers:
 *     EtwpSysModuleRunDown @ 0x14070A0E8 (EtwpSysModuleRunDown.c)
 *     PopDiagIdleWakeSourceAccountingToDiagnostic @ 0x1408AC234 (PopDiagIdleWakeSourceAccountingToDiagnostic.c)
 *     EtwpCoverageSamplerStart @ 0x140905978 (EtwpCoverageSamplerStart.c)
 *     ExpCovQueryInformation @ 0x14091462C (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140914E94 (ExpCovResetInformation.c)
 * Callees:
 *     MiSessionLookupImage @ 0x1400176C0 (MiSessionLookupImage.c)
 *     MmGetNextSession @ 0x14008CB70 (MmGetNextSession.c)
 *     MmDetachSession @ 0x14008CE30 (MmDetachSession.c)
 *     MmAttachSession @ 0x14008CED0 (MmAttachSession.c)
 *     MmIsSessionAddress @ 0x1400C6CC0 (MmIsSessionAddress.c)
 *     MiReleaseResourceLite @ 0x140147F00 (MiReleaseResourceLite.c)
 *     MiAcquireResourceSharedLite @ 0x140147F2C (MiAcquireResourceSharedLite.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MmReleaseLoadLock @ 0x1406A5B10 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A5B70 (MmAcquireLoadLock.c)
 *     MmQuitNextSession @ 0x1406F04A0 (MmQuitNextSession.c)
 */

__int64 __fastcall MmEnumerateSystemImages(__int64 (__fastcall *a1)(PVOID *, __int64), __int64 a2)
{
  int v4; // r15d
  _KPROCESS *Process; // r8
  unsigned __int64 v6; // r14
  struct _KTHREAD *Lock; // rsi
  PVOID *v8; // rdi
  unsigned __int64 v9; // rbp
  void *v10; // rbx
  void *i; // rcx
  ULONG_PTR NextSession; // rax
  _BYTE v14[48]; // [rsp+20h] [rbp-78h] BYREF

  memset(v14, 0, sizeof(v14));
  v4 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    v6 = 0LL;
  else
    v6 = Process[1].ActiveProcessors.Bitmap[1];
  Lock = MmAcquireLoadLock();
  MiAcquireResourceSharedLite((__int64)Lock);
  v8 = (PVOID *)PsLoadedModuleList;
  do
  {
    v9 = (unsigned __int64)v8[6];
    v10 = 0LL;
    if ( MmIsSessionAddress(v9) && (!v6 || !MiSessionLookupImage(v9)) )
    {
      for ( i = 0LL; ; i = v10 )
      {
        NextSession = MmGetNextSession(i);
        v10 = (void *)NextSession;
        if ( !NextSession )
          break;
        if ( (int)MmAttachSession(NextSession) >= 0 )
        {
          if ( MiSessionLookupImage(v9) )
            goto LABEL_5;
          MmDetachSession((__int64)v10, (__int64)v14);
        }
      }
      goto LABEL_8;
    }
LABEL_5:
    v4 = a1(v8, a2);
    if ( v10 )
    {
      MmDetachSession((__int64)v10, (__int64)v14);
      MmQuitNextSession(v10);
    }
    if ( v4 < 0 )
      break;
LABEL_8:
    v8 = (PVOID *)*v8;
  }
  while ( v8 != &PsLoadedModuleList );
  MiReleaseResourceLite((__int64)Lock);
  MmReleaseLoadLock((__int64)Lock);
  return (unsigned int)v4;
}
