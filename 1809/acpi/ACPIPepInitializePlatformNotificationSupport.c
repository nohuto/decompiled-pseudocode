/*
 * XREFs of ACPIPepInitializePlatformNotificationSupport @ 0x1C00AD168
 * Callers:
 *     ACPIBusIrpStartDeviceWorker @ 0x1C009FA60 (ACPIBusIrpStartDeviceWorker.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C0017BC4 (ACPIInitReferenceDeviceExtension.c)
 *     AMLIFreeDataBuffs @ 0x1C001D1E4 (AMLIFreeDataBuffs.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0096C9C (ACPIAmliEvaluateDsm.c)
 */

char __fastcall ACPIPepInitializePlatformNotificationSupport(char *Context)
{
  __int64 *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int8 *v6; // rax
  NTSTATUS v7; // eax
  char v8; // dl
  signed __int32 *v9; // rax
  _BYTE OutputBuffer[4]; // [rsp+38h] [rbp-9h] BYREF
  signed __int32 v12; // [rsp+3Ch] [rbp-5h] BYREF
  __int64 v13; // [rsp+40h] [rbp-1h] BYREF
  __int128 v14; // [rsp+48h] [rbp+7h] BYREF
  _BYTE v15[48]; // [rsp+58h] [rbp+17h] BYREF

  *((_QWORD *)Context + 31) = 1LL;
  *((_DWORD *)Context + 46) = 1;
  *((_QWORD *)Context + 24) = 0LL;
  *((_DWORD *)Context + 50) = 0;
  KeInitializeEvent((PRKEVENT)(Context + 208), SynchronizationEvent, 0);
  v12 = 0;
  memset(v15, 0, sizeof(v15));
  v2 = (__int64 *)*((_QWORD *)Context + 89);
  v13 = 0LL;
  v14 = PEP_NOTIFICATIONS_DSM_UUID;
  if ( (int)ACPIAmliEvaluateDsm(v2, (__int64)&v14, 0, 0, (__int64)v15, &v13) >= 0 )
  {
    if ( *(_WORD *)(v13 + 2) == 3 && *(_DWORD *)(v13 + 24) )
    {
      v6 = *(unsigned __int8 **)(v13 + 32);
      v3 = *v6;
      v12 = *v6;
    }
    AMLIFreeDataBuffs(v13, v3, v4, v5);
  }
  v7 = ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, OutputBuffer, 1u);
  v8 = 0;
  if ( v7 >= 0 )
    v8 = OutputBuffer[0];
  if ( _bittest(&v12, 3u) && _bittest(&v12, 4u) )
    Context[242] = 1;
  v9 = &v12;
  if ( _bittest(&v12, 5u) )
  {
    v9 = &v12;
    if ( _bittest(&v12, 6u) )
      Context[241] = 1;
  }
  if ( !v8 )
  {
    Context[241] = 0;
    goto LABEL_17;
  }
  if ( !Context[241] )
  {
LABEL_17:
    if ( !Context[242] )
      return (char)v9;
  }
  LOBYTE(v9) = ACPIInitReferenceDeviceExtension((__int64)Context);
  if ( (_BYTE)v9 )
  {
    Context[240] = 1;
    if ( Context[241] )
      LOBYTE(v9) = PoRegisterPowerSettingCallback(
                     0LL,
                     &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
                     ACPIPepPowerSettingChangeCallback,
                     Context,
                     (PVOID *)Context + 32);
    if ( Context[242] )
    {
      PoRegisterPowerSettingCallback(
        0LL,
        &GUID_CONSOLE_DISPLAY_STATE,
        ACPIPepPowerSettingChangeCallback,
        Context,
        (PVOID *)Context + 33);
      LOBYTE(v9) = PoRegisterPowerSettingCallback(
                     0LL,
                     &GUID_GLOBAL_USER_PRESENCE,
                     ACPIPepPowerSettingChangeCallback,
                     Context,
                     (PVOID *)Context + 34);
    }
  }
  return (char)v9;
}
