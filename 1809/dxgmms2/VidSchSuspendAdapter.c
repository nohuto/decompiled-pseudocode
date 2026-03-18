/*
 * XREFs of VidSchSuspendAdapter @ 0x1C007E2A0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchWaitForEvents @ 0x1C0002AC0 (VidSchWaitForEvents.c)
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C0010EA8 (VidSchiSuspendResumeDevicesForPowerTransition.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     VidSchFlushDevice @ 0x1C007AD00 (VidSchFlushDevice.c)
 *     VidSchSubmitGlobalCommand @ 0x1C007E47C (VidSchSubmitGlobalCommand.c)
 */

__int64 __fastcall VidSchSuspendAdapter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  int v6; // ecx
  __int64 v8; // rcx
  _QWORD v9[2]; // [rsp+30h] [rbp-59h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v11[16]; // [rsp+60h] [rbp-29h] BYREF
  struct _KEVENT *p_Event; // [rsp+F0h] [rbp+67h] BYREF

  v4 = *(_DWORD *)(a1 + 708);
  v6 = *(_DWORD *)(a1 + 720);
  if ( v4 || v6 )
  {
    if ( !(_BYTE)a3 )
      VidSchiSuspendResumeDevicesForPowerTransition(a1, 1);
    v8 = *(_QWORD *)(a1 + 240);
    v9[0] = 1LL;
    v9[1] = 0LL;
    VidSchFlushDevice(v8, (int *)v9, a3, a4);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    memset(v11, 0, sizeof(v11));
    LODWORD(v11[0]) = 0;
    v11[3] = VidSchiDrainFlipQueue;
    LODWORD(v11[5]) = 8;
    v11[4] = &Event;
    v11[6] = a1;
    VidSchSubmitGlobalCommand(a1, v11);
    p_Event = &Event;
    VidSchWaitForEvents(a1, 1u, (PVOID *)&p_Event, 0LL, 0);
  }
  return 0LL;
}
