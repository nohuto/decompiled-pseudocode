/*
 * XREFs of VfDeadlockInitializeResource @ 0x14097B508
 * Callers:
 *     VerifierKeInitializeMutant @ 0x140978080 (VerifierKeInitializeMutant.c)
 *     VerifierKeInitializeMutex @ 0x140978100 (VerifierKeInitializeMutex.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140017560 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ViLowerIrql @ 0x140328C14 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x140328C70 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockAddResource @ 0x14097BB90 (ViDeadlockAddResource.c)
 *     ViDeadlockAllocate @ 0x14097BE90 (ViDeadlockAllocate.c)
 *     ViDeadlockCanProceed @ 0x14097C15C (ViDeadlockCanProceed.c)
 *     ViDeadlockDetectionLock @ 0x14097C5F8 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x14097C630 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x14097C8F4 (ViDeadlockFree.c)
 */

__int64 __fastcall VfDeadlockInitializeResource(__int64 a1, __int64 a2, void *a3)
{
  int v4; // esi
  void *v5; // rdi
  USHORT v6; // ax
  PVOID v7; // rcx
  unsigned int v8; // edx
  __int64 v9; // rax
  unsigned __int8 v10; // bl
  unsigned int v11; // esi
  _QWORD *v12; // rcx
  _QWORD *v13; // rbx
  PVOID Entry; // [rsp+30h] [rbp-68h] BYREF
  PVOID v16; // [rsp+38h] [rbp-60h] BYREF
  PVOID BackTrace[8]; // [rsp+40h] [rbp-58h] BYREF

  Entry = 0LL;
  v16 = 0LL;
  v4 = a1;
  if ( !(unsigned int)ViDeadlockCanProceed(a1) )
    return 0LL;
  if ( *((_DWORD *)ViDeadlockGlobals + 8196) )
    return 0LL;
  if ( *((int *)ViDeadlockGlobals + 8282) > 1024 )
    return 0LL;
  v5 = (void *)ViDeadlockAllocate(1LL);
  if ( !v5 )
    return 0LL;
  v6 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
  v7 = BackTrace[0];
  v8 = v6;
  v9 = 1LL;
  if ( v8 )
    v9 = v8;
  else
    v7 = a3;
  BackTrace[0] = v7;
  if ( (unsigned int)v9 < 8 )
    BackTrace[v9] = 0LL;
  v10 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(1LL);
  v11 = ViDeadlockAddResource(v4, (__int64)&Entry, (__int64)&v16);
  ViDeadlockDetectionUnlock(1LL);
  ViLowerIrql(v10);
  if ( !v11 )
    ViDeadlockFree(v5);
  if ( Entry )
    ViDeadlockFree(Entry);
  v12 = v16;
  if ( v16 )
  {
    do
    {
      v13 = (_QWORD *)*v12;
      ViDeadlockFree(v12);
      v12 = v13;
    }
    while ( v13 );
  }
  return v11;
}
