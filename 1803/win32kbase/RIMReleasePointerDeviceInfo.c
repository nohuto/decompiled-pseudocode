/*
 * XREFs of RIMReleasePointerDeviceInfo @ 0x1C00ED6B4
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C00F7A6C (RIMFreeSpecificDevWorker.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     rimDestroyDeadzone @ 0x1C00E9F80 (rimDestroyDeadzone.c)
 *     RIMFreePointerDevice @ 0x1C00EBFB4 (RIMFreePointerDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMReleasePointerDeviceInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rdi
  unsigned int v6; // eax
  void *v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 480);
  if ( !v2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v5 = *(_QWORD *)(a2 + 464);
  if ( *(_QWORD *)(v2 + 840) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( !*(_QWORD *)(v5 + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v6 = *(_DWORD *)(v5 + 104);
  if ( !v6 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    v6 = *(_DWORD *)(v5 + 104);
  }
  v7 = Win32AllocPoolZInit(v6, 0x63707352u);
  *(_QWORD *)(v2 + 840) = v7;
  if ( v7 )
    memmove(v7, *(const void **)(v5 + 16), *(unsigned int *)(v5 + 104));
  else
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x26u,
      (__int64)&WPP_d24afaddbe1632fa9c89c4aae49a04f3_Traceguids,
      -1073741801);
  if ( *(_DWORD *)(v2 + 24) == 5 )
  {
    v8 = *(_QWORD *)(a1 + 840);
    if ( v8 )
    {
      Win32FreePool(v8);
      *(_QWORD *)(a1 + 840) = 0LL;
    }
    rimDestroyDeadzone();
  }
  result = RIMFreePointerDevice(a1, v2);
  *(_QWORD *)(a2 + 480) = 0LL;
  return result;
}
