/*
 * XREFs of MmEnumerateSystemImages @ 0x140708430
 * Callers:
 *     EtwpSysModuleRunDown @ 0x140708308 (EtwpSysModuleRunDown.c)
 *     PopDiagIdleWakeSourceAccountingToDiagnostic @ 0x1408AC9D4 (PopDiagIdleWakeSourceAccountingToDiagnostic.c)
 *     EtwpCoverageSamplerStart @ 0x140906018 (EtwpCoverageSamplerStart.c)
 *     ExpCovQueryInformation @ 0x140914BCC (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x140915434 (ExpCovResetInformation.c)
 * Callees:
 *     MiSessionLookupImage @ 0x1400172D0 (MiSessionLookupImage.c)
 *     MmGetNextSession @ 0x14008B870 (MmGetNextSession.c)
 *     MmDetachSession @ 0x14008BB30 (MmDetachSession.c)
 *     MmAttachSession @ 0x14008BBD0 (MmAttachSession.c)
 *     MmIsSessionAddress @ 0x14009EE80 (MmIsSessionAddress.c)
 *     MiReleaseResourceLite @ 0x140147860 (MiReleaseResourceLite.c)
 *     MiAcquireResourceSharedLite @ 0x14014788C (MiAcquireResourceSharedLite.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MmReleaseLoadLock @ 0x1406A6280 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A62E0 (MmAcquireLoadLock.c)
 *     MmQuitNextSession @ 0x1406EE950 (MmQuitNextSession.c)
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
  int v11; // eax
  void *i; // rcx
  ULONG_PTR NextSession; // rax
  _BYTE v15[48]; // [rsp+20h] [rbp-78h] BYREF

  memset(v15, 0, sizeof(v15));
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
    LOBYTE(v11) = MmIsSessionAddress(v9);
    if ( v11 == 1 && (!v6 || !MiSessionLookupImage(v9)) )
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
          MmDetachSession((__int64)v10, (__int64)v15);
        }
      }
      goto LABEL_8;
    }
LABEL_5:
    v4 = a1(v8, a2);
    if ( v10 )
    {
      MmDetachSession((__int64)v10, (__int64)v15);
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
