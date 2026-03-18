/*
 * XREFs of RIMRemoveFromActiveDevices @ 0x1C00ED7BC
 * Callers:
 *     RIMFreePointerDevice @ 0x1C00EBFB4 (RIMFreePointerDevice.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C0100100 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 *     EtwTracePointerDeviceOutOfRangeMessageStart @ 0x1C00AC420 (EtwTracePointerDeviceOutOfRangeMessageStart.c)
 *     EtwTracePointerDeviceOutOfRangeMessageStop @ 0x1C00AC450 (EtwTracePointerDeviceOutOfRangeMessageStop.c)
 *     RIMUpdatePrimaryDevice @ 0x1C00EDF20 (RIMUpdatePrimaryDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRemoveFromActiveDevices(__int64 a1, __int64 a2, int a3, int *a4)
{
  int v4; // r12d
  _QWORD *v5; // r15
  _QWORD *v7; // rsi
  __int64 v10; // rdi
  _QWORD *v11; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax

  v4 = 0;
  v5 = (_QWORD *)(a1 + 432);
  v7 = *(_QWORD **)(a1 + 432);
  if ( *(_QWORD *)(a1 + 464) == a2 )
    RIMUpdatePrimaryDevice(a1, 0LL);
  while ( v7 != v5 )
  {
    v10 = (__int64)(v7 - 1);
    v11 = v7;
    v7 = (_QWORD *)*v7;
    if ( *(_QWORD *)v10 == a2 )
    {
      v13 = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(v13 + 188) &= ~1u;
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x15u,
        0x25u,
        (__int64)&WPP_d24afaddbe1632fa9c89c4aae49a04f3_Traceguids,
        v13);
      if ( (*(_DWORD *)(v10 + 24) & 1) == 0 && *(_DWORD *)(a2 + 24) != 7 )
      {
        EtwTracePointerDeviceOutOfRangeMessageStart(v14);
        if ( (int)IsPostPointerDeviceOutOfRangeMessageSupported() >= 0 )
          PostPointerDeviceOutOfRangeMessage(a2, 0LL, 0LL);
        EtwTracePointerDeviceOutOfRangeMessageStop(v15);
      }
      if ( (*(_DWORD *)(a1 + 460) & 1) != 0 )
      {
        *(_DWORD *)(v10 + 24) |= 1u;
        *(_DWORD *)(a1 + 460) |= 2u;
        if ( a3 )
        {
          *(_DWORD *)(v10 + 24) |= 2u;
          *(_DWORD *)(a1 + 460) |= 4u;
        }
        v4 = 1;
      }
      else
      {
        v16 = *v11;
        if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v17 = (_QWORD *)v11[1], (_QWORD *)*v17 != v11) )
          __fastfail(3u);
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
        Win32FreePool(v10);
        v20 = *(_DWORD *)(a1 + 448);
        if ( !v20 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
          v20 = *(_DWORD *)(a1 + 448);
        }
        *(_DWORD *)(a1 + 448) = v20 - 1;
      }
      break;
    }
  }
  if ( a4 )
    *a4 = v4;
  return 1LL;
}
