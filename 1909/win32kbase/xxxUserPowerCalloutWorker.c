/*
 * XREFs of xxxUserPowerCalloutWorker @ 0x1C00655D0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1C0065760 (-UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ.c)
 *     EtwTraceCompletePowerRequest @ 0x1C00657E0 (EtwTraceCompletePowerRequest.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00657FC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C0065F24 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 */

__int64 xxxUserPowerCalloutWorker()
{
  int v0; // esi
  __int64 v1; // rdi
  struct tagPOWERREQUEST *v2; // rbx
  struct _WIN32_POWEREVENT_PARAMETERS *v3; // rcx
  int v4; // eax
  _QWORD v6[3]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v7[32]; // [rsp+38h] [rbp-20h] BYREF

  v0 = 0;
  memset(v7, 0, 24);
  v1 = 1LL;
  if ( grpdeskRitInput )
  {
    if ( (int)IsxxxSetInformationThreadSupported() < 0 || (int)xxxSetInformationThread(-2LL, 7LL, v7, 24LL) < 0 )
      v1 = 0LL;
    else
      v0 = 1;
  }
  gpPowerThread = KeGetCurrentThread();
  while ( 1 )
  {
    v2 = UnqueuePowerRequest();
    if ( !v2 )
      break;
    if ( v1 )
    {
      memset(v6, 0, sizeof(v6));
      PushW32ThreadLock(v2, v6, CancelPowerRequest);
      gpPowerRequestCurrent = v2;
      v3 = (struct _WIN32_POWEREVENT_PARAMETERS *)*((_QWORD *)v2 + 8);
      if ( v3 )
        v4 = xxxUserPowerEventCalloutWorker(v3);
      else
        v4 = xxxUserPowerStateCalloutWorker();
      *((_DWORD *)v2 + 14) = v4;
      gpPowerRequestCurrent = 0LL;
      PopW32ThreadLock(v6);
    }
    if ( *((_BYTE *)v2 + 72) )
    {
      KeSetEvent((PRKEVENT)((char *)v2 + 16), 1, 0);
    }
    else
    {
      EtwTraceCompletePowerRequest(v2, *((unsigned int *)v2 + 14));
      Win32FreePool((__int64)v2);
    }
  }
  if ( v0 && (int)IsxxxSetInformationThreadSupported() >= 0 )
    xxxSetInformationThread(-2LL, 9LL, v7, 24LL);
  return 1LL;
}
