/*
 * XREFs of TdrTimedOperationWaitForSingleObject @ 0x1C023EB90
 * Callers:
 *     <none>
 * Callees:
 *     ?_TdrTimedOperationGetRelativeTimeLeft@@YAXAEAU_DXGK_TIMED_OPERATION@@AEAT_LARGE_INTEGER@@@Z @ 0x1C0040D7C (-_TdrTimedOperationGetRelativeTimeLeft@@YAXAEAU_DXGK_TIMED_OPERATION@@AEAT_LARGE_INTEGER@@@Z.c)
 *     TdrTimedOperationAllowToDebugTimeout @ 0x1C0040DE4 (TdrTimedOperationAllowToDebugTimeout.c)
 *     TdrTimedOperationBugcheckOnTimeout @ 0x1C0040F70 (TdrTimedOperationBugcheckOnTimeout.c)
 */

__int64 __fastcall TdrTimedOperationWaitForSingleObject(
        struct _DXGK_TIMED_OPERATION *a1,
        PVOID Object,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        __int64 *a6)
{
  unsigned int v10; // edi
  union _LARGE_INTEGER v12; // [rsp+30h] [rbp-18h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+38h] [rbp-10h] BYREF

  v12.QuadPart = 0LL;
  _TdrTimedOperationGetRelativeTimeLeft(a1, &v12);
  if ( v12.QuadPart )
  {
    if ( !a6 || !*a6 || (Timeout.QuadPart = -(__int64)abs64(*a6), Timeout.QuadPart < v12.QuadPart) )
      Timeout = v12;
    v10 = KeWaitForSingleObject(Object, WaitReason, WaitMode, Alertable, &Timeout);
    _TdrTimedOperationGetRelativeTimeLeft(a1, &v12);
    if ( v12.QuadPart )
      return v10;
  }
  a1->TimeoutTriggered = 1;
  if ( (unsigned int)TdrTimedOperationAllowToDebugTimeout(a1) )
  {
    a1->StartTick.QuadPart = MEMORY[0xFFFFF78000000320];
    return 0LL;
  }
  else
  {
    if ( a1->OsHandled )
      TdrTimedOperationBugcheckOnTimeout();
    return 258LL;
  }
}
