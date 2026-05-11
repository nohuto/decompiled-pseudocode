/*
 * XREFs of USBCaptureStateChangePin @ 0x1C0005EA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0001404 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C0001524 (WPP_RECORDER_SF_qdd.c)
 *     USBCaptureWaitForWorkerComplete @ 0x1C000560C (USBCaptureWaitForWorkerComplete.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C002AF60 (USBHwSelectStreamingAudioInterface.c)
 *     USBHwDataPipeReset @ 0x1C002B9B0 (USBHwDataPipeReset.c)
 *     USBType1SetSampleRate @ 0x1C002F700 (USBType1SetSampleRate.c)
 *     USBCaptureStartTransfers @ 0x1C002FFE0 (USBCaptureStartTransfers.c)
 */

__int64 __fastcall USBCaptureStateChangePin(PKSPIN Pin, __int64 a2, int a3)
{
  _QWORD *Context; // rbp
  int v5; // r15d
  int v7; // edi
  __int64 v8; // r14
  __int64 v9; // r13
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int started; // eax
  KIRQL v14; // al
  KIRQL v15; // r15
  PKSGATE i; // rax
  KIRQL v17; // al
  KIRQL v18; // al
  int v19; // ebx
  __int64 v21; // [rsp+30h] [rbp-38h]

  Context = Pin->Context;
  v5 = a2;
  v7 = 0;
  v8 = Context[19];
  v9 = Context[18];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
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
      v10 = a3 - 2;
      if ( v10 )
      {
        if ( v10 == 1 )
        {
          v11 = USBHwSelectStreamingAudioInterface(Pin, *(_QWORD *)(v9 + 136));
          v7 = v11;
          if ( v11 >= 0 )
          {
            v12 = USBType1SetSampleRate(Pin, *((unsigned int *)Context + 26));
            v7 = v12;
            if ( v12 < 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v21) = v12;
                WPP_RECORDER_SF_qd(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  a2,
                  8u,
                  0x18u,
                  (__int64)&WPP_4029ef4524b336006ce277c7fdb8c744_Traceguids,
                  Pin,
                  v21);
              }
              USBHwSelectStreamingAudioInterface(Pin, *(_QWORD *)(v9 + 144));
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v21) = v11;
            WPP_RECORDER_SF_qd(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              a2,
              8u,
              0x17u,
              (__int64)&WPP_4029ef4524b336006ce277c7fdb8c744_Traceguids,
              Pin,
              v21);
          }
          if ( !*((_BYTE *)Context + 47) && v7 >= 0 )
          {
            started = USBCaptureStartTransfers(Pin, 0LL);
            v7 = started;
            if ( started < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v21) = started;
              WPP_RECORDER_SF_qd(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                a2,
                8u,
                0x19u,
                (__int64)&WPP_4029ef4524b336006ce277c7fdb8c744_Traceguids,
                Pin,
                v21);
            }
          }
        }
      }
      else if ( v5 == 3 )
      {
        if ( !*((_BYTE *)Context + 47) )
        {
          KeWaitForSingleObject((PVOID)(v8 + 152), Executive, 0, 0, 0LL);
          v14 = KeAcquireSpinLockRaiseToDpc(Context + 14);
          *(_BYTE *)v8 = 0;
          v15 = v14;
          *(_BYTE *)(v8 + 96) = 0;
          *((_BYTE *)Context + 45) = 0;
          if ( *(_BYTE *)(v8 + 97) )
          {
            for ( i = KsPinGetAndGate(Pin); i && _InterlockedExchangeAdd(&i->Count, 0xFFFFFFFF) == 1; i = i->NextGate )
              ;
            *(_BYTE *)(v8 + 97) = 0;
          }
          KeReleaseSpinLock(Context + 14, v15);
          USBCaptureWaitForWorkerComplete((__int64)Context, (_BYTE *)(v8 + 248), (struct _KEVENT *)(v8 + 256));
          USBHwDataPipeReset(Pin);
          v17 = KeAcquireSpinLockRaiseToDpc(Context + 14);
          *(_QWORD *)(v8 + 128) = v8 + 120;
          *(_QWORD *)(v8 + 120) = v8 + 120;
          *(_QWORD *)(v8 + 144) = v8 + 136;
          *(_QWORD *)(v8 + 136) = v8 + 136;
          KeReleaseSpinLock(Context + 14, v17);
          KeReleaseMutex((PRKMUTEX)(v8 + 152), 0);
        }
        v7 = USBHwSelectStreamingAudioInterface(Pin, *(_QWORD *)(v9 + 144));
      }
    }
    else
    {
      v18 = KeAcquireSpinLockRaiseToDpc(Context + 14);
      *(_BYTE *)(v8 + 99) = 0;
      Context[10] = 0LL;
      Context[11] = 0LL;
      Context[12] = 0LL;
      KeReleaseSpinLock(Context + 14, v18);
    }
  }
  v19 = 0;
  if ( v7 != -1073741632 )
    v19 = v7;
  if ( v19 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v21) = v19;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      8u,
      0x1Au,
      (__int64)&WPP_4029ef4524b336006ce277c7fdb8c744_Traceguids,
      Pin,
      v21);
  }
  return (unsigned int)v19;
}
