/*
 * XREFs of ?InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ @ 0x1C00A4B84
 * Callers:
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1C00A4A88 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ProtectHandle @ 0x1C00348F8 (ProtectHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall IOCPDispatcher::InitializeUserModeHandleDuplicate(IOCPDispatcher *this)
{
  CInputThread *v1; // rsi
  unsigned int CurrentThreadId; // eax
  int v4; // ebx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // edx
  NTSTATUS v10; // edi

  v1 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v4 = *((_DWORD *)v1 + 10);
  v5 = CurrentThreadId;
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 != v4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  if ( !*((_QWORD *)this + 343) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  if ( *((_QWORD *)this + 344) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  v10 = ZwDuplicateObject(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          *((HANDLE *)this + 343),
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          (PHANDLE)this + 344,
          0,
          0,
          2u);
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_D((_DWORD)gBaseLog, v9, 3, 23, (__int64)&WPP_44b8ec6d33df3f9b1bf122fa07e6f557_Traceguids, v10);
    }
  }
  else
  {
    ProtectHandle(*((void **)this + 344), v9, 0LL, 1);
  }
  return v10 >= 0;
}
