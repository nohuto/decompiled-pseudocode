/*
 * XREFs of RIMReleasePointerDeviceInfo @ 0x1C0118A5C
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C0121FA0 (RIMFreeSpecificDevWorker.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     rimDestroyDeadzone @ 0x1C0114B6C (rimDestroyDeadzone.c)
 *     RIMFreePointerDevice @ 0x1C0116B48 (RIMFreePointerDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMReleasePointerDeviceInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdi
  unsigned int v7; // eax
  void *v8; // rax
  __int64 v9; // rcx

  v3 = *(_QWORD *)(a2 + 480);
  if ( !v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v6 = *(_QWORD *)(a2 + 464);
  if ( *(_QWORD *)(v3 + 872) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !*(_QWORD *)(v6 + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v7 = *(_DWORD *)(v6 + 104);
  if ( !v7 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v7 = *(_DWORD *)(v6 + 104);
  }
  v8 = Win32AllocPoolZInit(v7, 0x63707352u);
  *(_QWORD *)(v3 + 872) = v8;
  if ( v8 )
    memmove(v8, *(const void **)(v6 + 16), *(unsigned int *)(v6 + 104));
  else
    WPP_RECORDER_SF_d(gRimLog, 3u, 0x14u, 0x28u, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids, -1073741801);
  if ( *(_DWORD *)(v3 + 24) == 5 )
  {
    v9 = *(_QWORD *)(a1 + 856);
    if ( v9 )
    {
      Win32FreePool(v9);
      *(_QWORD *)(a1 + 856) = 0LL;
    }
    rimDestroyDeadzone();
  }
  RIMFreePointerDevice(a1, v3);
  *(_QWORD *)(a2 + 480) = 0LL;
}
