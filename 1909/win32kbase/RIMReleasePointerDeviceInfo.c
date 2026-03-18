/*
 * XREFs of RIMReleasePointerDeviceInfo @ 0x1C013EB88
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C005B1DC (RIMFreeSpecificDevWorker.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 *     rimDestroyDeadzone @ 0x1C013AC70 (rimDestroyDeadzone.c)
 *     RIMFreePointerDevice @ 0x1C013CD28 (RIMFreePointerDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMReleasePointerDeviceInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdi
  unsigned int v7; // eax
  void *v8; // rax
  int v9; // edx
  __int64 v10; // rcx

  v3 = *(_QWORD *)(a2 + 480);
  if ( !v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v6 = *(_QWORD *)(a2 + 464);
  if ( *(_QWORD *)(v3 + 880) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !*(_QWORD *)(v6 + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v7 = *(_DWORD *)(v6 + 104);
  if ( !v7 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v7 = *(_DWORD *)(v6 + 104);
  }
  v8 = Win32AllocPoolZInit(v7, 1668313938LL);
  *(_QWORD *)(v3 + 880) = v8;
  if ( v8 )
  {
    memmove(v8, *(const void **)(v6 + 16), *(unsigned int *)(v6 + 104));
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 3;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v9, 1, 39, (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids, 23);
  }
  if ( *(_DWORD *)(v3 + 24) == 5 )
  {
    v10 = *(_QWORD *)(a1 + 856);
    if ( v10 )
    {
      Win32FreePool(v10);
      *(_QWORD *)(a1 + 856) = 0LL;
    }
    rimDestroyDeadzone();
  }
  RIMFreePointerDevice(a1, v3);
  *(_QWORD *)(a2 + 480) = 0LL;
}
