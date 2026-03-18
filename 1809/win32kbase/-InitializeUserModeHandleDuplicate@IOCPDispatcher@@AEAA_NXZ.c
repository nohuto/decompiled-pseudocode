/*
 * XREFs of ?InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ @ 0x1C0091F18
 * Callers:
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1C0091E18 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ProtectHandle @ 0x1C0017508 (ProtectHandle.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0031678 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall IOCPDispatcher::InitializeUserModeHandleDuplicate(IOCPDispatcher *this)
{
  CInputThread *v1; // rdi
  bool v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // edx
  NTSTATUS v8; // edi
  __int64 v10; // [rsp+28h] [rbp-20h]

  v1 = *(CInputThread **)&WPP_MAIN_CB.AlignmentRequirement;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  v3 = CInputThread::_CalledOnInputThread(v1);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  if ( !v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  if ( !*((_QWORD *)this + 343) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  if ( *((_QWORD *)this + 344) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  v8 = ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         *((HANDLE *)this + 343),
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (PHANDLE)this + 344,
         0,
         0,
         2u);
  if ( v8 < 0 )
  {
    LODWORD(v10) = v8;
    WPP_RECORDER_SF_d(gBaseLog, 2u, 2u, 0x17u, (__int64)&WPP_0652932e8e25336fb557d9c15dc128bf_Traceguids, v10);
  }
  else
  {
    ProtectHandle(*((void **)this + 344), v7, 0LL, 1);
  }
  return v8 >= 0;
}
