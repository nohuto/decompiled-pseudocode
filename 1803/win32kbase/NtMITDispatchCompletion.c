/*
 * XREFs of NtMITDispatchCompletion @ 0x1C003A170
 * Callers:
 *     <none>
 * Callees:
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0039F28 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     UserDispatchMITCompletion @ 0x1C003A1F0 (UserDispatchMITCompletion.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 */

__int64 __fastcall NtMITDispatchCompletion(__int64 a1, __int64 a2)
{
  CInputThread *v2; // rdi
  bool v5; // bl

  v2 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  v5 = CInputThread::_CalledOnInputThread(v2);
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 )
    UserDispatchMITCompletion(a1, a2);
  else
    UserSetLastError(5LL);
  return 0LL;
}
