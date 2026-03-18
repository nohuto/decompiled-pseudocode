/*
 * XREFs of xxxUserPowerCalloutWorker @ 0x1C00969E0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1C0096B58 (-UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ.c)
 *     EtwTraceCompletePowerRequest @ 0x1C0096BD8 (EtwTraceCompletePowerRequest.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0096BF4 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00A3044 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 */

__int64 __fastcall xxxUserPowerCalloutWorker(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  __int64 v4; // rdi
  struct tagPOWERREQUEST *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  struct _WIN32_POWEREVENT_PARAMETERS *v10; // rcx
  int v11; // eax
  _BYTE v13[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v14[32]; // [rsp+38h] [rbp-20h] BYREF

  v3 = 0;
  memset(v13, 0, sizeof(v13));
  v4 = 1LL;
  if ( grpdeskRitInput )
  {
    if ( (int)IsxxxSetInformationThreadSupported(a1, a2, a3) < 0
      || (int)((__int64 (__fastcall *)(__int64, __int64, _BYTE *, __int64))xxxSetInformationThread)(
                -2LL,
                7LL,
                v13,
                24LL) < 0 )
    {
      v4 = 0LL;
    }
    else
    {
      v3 = 1;
    }
  }
  gpPowerThread = KeGetCurrentThread();
  while ( 1 )
  {
    v5 = UnqueuePowerRequest();
    v9 = (__int64)v5;
    if ( !v5 )
      break;
    if ( v4 )
    {
      PushW32ThreadLock(v5, v14, CancelPowerRequest);
      gpPowerRequestCurrent = (struct tagPOWERREQUEST *)v9;
      v10 = *(struct _WIN32_POWEREVENT_PARAMETERS **)(v9 + 64);
      if ( v10 )
        v11 = xxxUserPowerEventCalloutWorker(v10);
      else
        v11 = xxxUserPowerStateCalloutWorker();
      *(_DWORD *)(v9 + 56) = v11;
      gpPowerRequestCurrent = 0LL;
      PopW32ThreadLock(v14);
    }
    if ( *(_BYTE *)(v9 + 72) )
    {
      KeSetEvent((PRKEVENT)(v9 + 16), 1, 0);
    }
    else
    {
      EtwTraceCompletePowerRequest(v9, *(unsigned int *)(v9 + 56));
      Win32FreePool(v9);
    }
  }
  if ( v3 && (int)IsxxxSetInformationThreadSupported(v7, v6, v8) >= 0 )
    ((void (__fastcall *)(__int64, __int64, _BYTE *, __int64))xxxSetInformationThread)(-2LL, 9LL, v13, 24LL);
  return 1LL;
}
