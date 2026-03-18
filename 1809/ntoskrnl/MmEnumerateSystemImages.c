/*
 * XREFs of MmEnumerateSystemImages @ 0x140726B8C
 * Callers:
 *     EtwpSysModuleRunDown @ 0x140726A58 (EtwpSysModuleRunDown.c)
 *     PopDiagIdleWakeSourceAccountingToDiagnostic @ 0x14086FDDC (PopDiagIdleWakeSourceAccountingToDiagnostic.c)
 *     EtwpCoverageSamplerStart @ 0x1408C8B70 (EtwpCoverageSamplerStart.c)
 *     ExpCovQueryInformation @ 0x1408D796C (ExpCovQueryInformation.c)
 *     ExpCovResetInformation @ 0x1408D8204 (ExpCovResetInformation.c)
 * Callees:
 *     MmGetNextSession @ 0x140012740 (MmGetNextSession.c)
 *     MmIsSessionAddress @ 0x1400245B0 (MmIsSessionAddress.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     MiSessionLookupImage @ 0x14009DBC8 (MiSessionLookupImage.c)
 *     MmDetachSession @ 0x14011A5A0 (MmDetachSession.c)
 *     MmAttachSession @ 0x14011A630 (MmAttachSession.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     MmReleaseLoadLock @ 0x140651A40 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140651A80 (MmAcquireLoadLock.c)
 */

__int64 __fastcall MmEnumerateSystemImages(__int64 (__fastcall *a1)(PVOID *, __int64), __int64 a2)
{
  int v2; // ebp
  _KPROCESS *Process; // r8
  unsigned __int64 v6; // r14
  struct _KTHREAD *Lock; // rsi
  PVOID *v8; // rdi
  unsigned __int64 v9; // r15
  _KPROCESS *v10; // rbx
  int v11; // eax
  _KPROCESS *i; // rcx
  _KPROCESS *NextSession; // rax
  _BYTE v15[48]; // [rsp+20h] [rbp-78h] BYREF

  v2 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    v6 = 0LL;
  else
    v6 = Process[1].ActiveProcessors.Bitmap[2];
  Lock = MmAcquireLoadLock();
  --Lock->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
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
        NextSession = (_KPROCESS *)MmGetNextSession(i);
        v10 = NextSession;
        if ( !NextSession )
          break;
        if ( (int)MmAttachSession(NextSession, (__int64)v15) >= 0 )
        {
          if ( MiSessionLookupImage(v9) )
            goto LABEL_5;
          MmDetachSession((__int64)v10, (__int64)v15);
        }
      }
      goto LABEL_8;
    }
LABEL_5:
    v2 = a1(v8, a2);
    if ( v10 )
    {
      MmDetachSession((__int64)v10, (__int64)v15);
      ObfDereferenceObject(v10);
    }
    if ( v2 < 0 )
      break;
LABEL_8:
    v8 = (PVOID *)*v8;
  }
  while ( v8 != &PsLoadedModuleList );
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)Lock);
  MmReleaseLoadLock((__int64)Lock);
  return (unsigned int)v2;
}
