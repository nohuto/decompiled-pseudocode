/*
 * XREFs of USBCaptureStateChangePin @ 0x1C0005E90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0001404 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C0001524 (WPP_RECORDER_SF_qdd.c)
 *     USBCaptureWaitForWorkerComplete @ 0x1C000565C (USBCaptureWaitForWorkerComplete.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C0029C54 (USBHwSelectStreamingAudioInterface.c)
 *     USBHwDataPipeReset @ 0x1C002A664 (USBHwDataPipeReset.c)
 *     USBType1SetSampleRate @ 0x1C002E400 (USBType1SetSampleRate.c)
 *     USBCaptureStartTransfers @ 0x1C002ECA0 (USBCaptureStartTransfers.c)
 */

__int64 __fastcall USBCaptureStateChangePin(PKSPIN Pin, __int64 a2, int a3)
{
  _QWORD *Context; // rbp
  int v5; // r15d
  int v7; // edi
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // rdx
  int v11; // ebx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  int started; // eax
  KIRQL v16; // al
  KIRQL v17; // r15
  PKSGATE i; // rax
  KIRQL v19; // al
  KIRQL v20; // al
  int v21; // ebx
  __int64 v23; // [rsp+30h] [rbp-38h]

  Context = Pin->Context;
  v5 = a2;
  v7 = 0;
  v8 = Context[19];
  v9 = Context[18];
  WPP_RECORDER_SF_qdd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    a2,
    8u,
    0x16u,
    (__int64)&WPP_4029ef4524b336006ce277c7fdb8c744_Traceguids,
    Pin,
    a2,
    a3);
  if ( v5 != a3 )
  {
    if ( a3 )
    {
      v11 = a3 - 2;
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          v12 = USBHwSelectStreamingAudioInterface(Pin, *(_QWORD *)(v9 + 136));
          v7 = v12;
          if ( v12 >= 0 )
          {
            v14 = USBType1SetSampleRate(Pin, *((unsigned int *)Context + 26));
            v7 = v14;
            if ( v14 < 0 )
            {
              LODWORD(v23) = v14;
              WPP_RECORDER_SF_qd(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                v10,
                8u,
                0x18u,
                (__int64)&WPP_4029ef4524b336006ce277c7fdb8c744_Traceguids,
                Pin,
                v23);
              USBHwSelectStreamingAudioInterface(Pin, *(_QWORD *)(v9 + 144));
            }
          }
          else
          {
            LODWORD(v23) = v12;
            WPP_RECORDER_SF_qd(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v13,
              8u,
              0x17u,
              (__int64)&WPP_4029ef4524b336006ce277c7fdb8c744_Traceguids,
              Pin,
              v23);
          }
          if ( !*((_BYTE *)Context + 47) && v7 >= 0 )
          {
            started = USBCaptureStartTransfers(Pin, 0LL);
            v7 = started;
            if ( started < 0 )
            {
              LODWORD(v23) = started;
              WPP_RECORDER_SF_qd(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                v10,
                8u,
                0x19u,
                (__int64)&WPP_4029ef4524b336006ce277c7fdb8c744_Traceguids,
                Pin,
                v23);
            }
          }
        }
      }
      else if ( v5 == 3 )
      {
        if ( !*((_BYTE *)Context + 47) )
        {
          KeWaitForSingleObject((PVOID)(v8 + 152), Executive, 0, 0, 0LL);
          v16 = KeAcquireSpinLockRaiseToDpc(Context + 14);
          *(_BYTE *)v8 = 0;
          v17 = v16;
          *(_BYTE *)(v8 + 96) = 0;
          *((_BYTE *)Context + 45) = 0;
          if ( *(_BYTE *)(v8 + 97) )
          {
            for ( i = KsPinGetAndGate(Pin); i && _InterlockedExchangeAdd(&i->Count, 0xFFFFFFFF) == 1; i = i->NextGate )
              ;
            *(_BYTE *)(v8 + 97) = 0;
          }
          KeReleaseSpinLock(Context + 14, v17);
          USBCaptureWaitForWorkerComplete((__int64)Context, (_BYTE *)(v8 + 248), (struct _KEVENT *)(v8 + 256));
          USBHwDataPipeReset(Pin);
          v19 = KeAcquireSpinLockRaiseToDpc(Context + 14);
          *(_QWORD *)(v8 + 128) = v8 + 120;
          *(_QWORD *)(v8 + 120) = v8 + 120;
          *(_QWORD *)(v8 + 144) = v8 + 136;
          *(_QWORD *)(v8 + 136) = v8 + 136;
          KeReleaseSpinLock(Context + 14, v19);
          KeReleaseMutex((PRKMUTEX)(v8 + 152), 0);
        }
        v7 = USBHwSelectStreamingAudioInterface(Pin, *(_QWORD *)(v9 + 144));
      }
    }
    else
    {
      v20 = KeAcquireSpinLockRaiseToDpc(Context + 14);
      *(_BYTE *)(v8 + 99) = 0;
      Context[10] = 0LL;
      Context[11] = 0LL;
      Context[12] = 0LL;
      KeReleaseSpinLock(Context + 14, v20);
    }
  }
  v21 = 0;
  if ( v7 != -1073741632 )
    v21 = v7;
  if ( v21 < 0 )
  {
    LODWORD(v23) = v21;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v10,
      8u,
      0x1Au,
      (__int64)&WPP_4029ef4524b336006ce277c7fdb8c744_Traceguids,
      Pin,
      v23);
  }
  return (unsigned int)v21;
}
