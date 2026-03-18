/*
 * XREFs of ?IVWorkerThread@@YAXPEAX@Z @ 0x1C01883D0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     SetThreadBasePriority @ 0x1C0093A60 (SetThreadBasePriority.c)
 */

void __fastcall IVWorkerThread(PVOID StartContext)
{
  gpIVThread = (__int64)KeGetCurrentThread();
  SetThreadBasePriority((PETHREAD)gpIVThread, 16);
  W32pThreadCallout(gpIVThread, 0LL);
  KeSetEvent(gpkeIVThreadStarted, 1, 0);
  while ( KeWaitForSingleObject(gpkeIVThreadShutdown, Executive, 0, 0, 0LL) )
    ;
  Win32FreePool((__int64)gpkeIVThreadStarted);
  gpkeIVThreadStarted = 0LL;
  Win32FreePool((__int64)gpkeIVThreadShutdown);
  gpkeIVThreadShutdown = 0LL;
  W32pThreadCallout(gpIVThread, 1LL);
  gpIVThread = 0LL;
}
