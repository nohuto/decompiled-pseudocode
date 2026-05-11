/*
 * XREFs of USBType1StateChangePin @ 0x1C0005120
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0001404 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C0001524 (WPP_RECORDER_SF_qdd.c)
 *     PinWaitForStarvationTimeout @ 0x1C00024A4 (PinWaitForStarvationTimeout.c)
 *     USBType1AsyncEndpointAbortFeedback @ 0x1C0003FB8 (USBType1AsyncEndpointAbortFeedback.c)
 *     USBType1ClearLeftovers @ 0x1C0004E40 (USBType1ClearLeftovers.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C0029C54 (USBHwSelectStreamingAudioInterface.c)
 *     USBHwDataPipeReset @ 0x1C002A664 (USBHwDataPipeReset.c)
 *     USBType1SetSampleRate @ 0x1C002E400 (USBType1SetSampleRate.c)
 *     USBType1NeedLockDelay @ 0x1C002E658 (USBType1NeedLockDelay.c)
 */

__int64 __fastcall USBType1StateChangePin(PKSPIN Pin, __int64 a2, int a3)
{
  _QWORD *Context; // r15
  int v5; // edi
  unsigned int v7; // esi
  _QWORD *v8; // r13
  __int64 v9; // r14
  __int64 v10; // rdx
  int v11; // ebx
  int v12; // ebx
  KIRQL v13; // al
  int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rdx
  KIRQL v21; // al
  KIRQL v22; // bl
  __int64 v24; // [rsp+30h] [rbp-38h]
  union _LARGE_INTEGER v25; // [rsp+70h] [rbp+8h] BYREF

  Context = Pin->Context;
  v5 = a2;
  v7 = 0;
  v8 = (_QWORD *)Context[18];
  v9 = Context[19];
  WPP_RECORDER_SF_qdd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    a2,
    8u,
    0x13u,
    (__int64)&WPP_3fddc3560b1a3736408b317f911f507a_Traceguids,
    Pin,
    a2,
    a3);
  if ( !a3 )
  {
    v21 = KeAcquireSpinLockRaiseToDpc(Context + 14);
    *((_BYTE *)Context + 45) = 0;
    v22 = v21;
    USBType1ClearLeftovers(Context);
    Context[10] = 0LL;
    Context[11] = 0LL;
    Context[12] = 0LL;
    *(_BYTE *)(v9 + 97) = 0;
    KeReleaseSpinLock(Context + 14, v22);
LABEL_33:
    if ( (v7 & 0x80000000) == 0 )
      return v7;
LABEL_34:
    LODWORD(v24) = v7;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v10,
      8u,
      0x17u,
      (__int64)&WPP_3fddc3560b1a3736408b317f911f507a_Traceguids,
      Pin,
      v24);
    return v7;
  }
  v11 = a3 - 1;
  if ( !v11 )
  {
    if ( v5 )
    {
      if ( v5 != 2 )
        return v7;
      if ( !*((_BYTE *)Context + 46) )
        v7 = USBHwSelectStreamingAudioInterface(Pin, v8[18]);
      goto LABEL_33;
    }
    v14 = USBHwSelectStreamingAudioInterface(Pin, v8[17]);
    v7 = v14;
    if ( v14 < 0 )
    {
      LODWORD(v24) = v14;
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v15,
        8u,
        0x14u,
        (__int64)&WPP_3fddc3560b1a3736408b317f911f507a_Traceguids,
        Pin,
        v24);
      goto LABEL_34;
    }
    if ( *(_BYTE *)(v9 + 96) )
    {
      v16 = *(_DWORD *)(v9 + 56);
      v17 = 0LL;
      if ( v16 )
      {
        v18 = *(_QWORD *)(v9 + 72);
        while ( *(_BYTE *)(v18 + 24 * v17 + 2) != *(_BYTE *)(v8[22] + 2LL) )
        {
          v17 = (unsigned int)(v17 + 1);
          if ( (unsigned int)v17 >= v16 )
            goto LABEL_22;
        }
        *(_QWORD *)(v9 + 888) = *(_QWORD *)(v18 + 24 * v17 + 8);
      }
LABEL_22:
      if ( !*(_QWORD *)(v9 + 888) )
      {
        v7 = -1073741668;
        LODWORD(v24) = -1073741668;
        WPP_RECORDER_SF_qd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v15,
          8u,
          0x15u,
          (__int64)&WPP_3fddc3560b1a3736408b317f911f507a_Traceguids,
          Pin,
          v24);
      }
      if ( (v7 & 0x80000000) != 0 )
      {
LABEL_28:
        USBHwSelectStreamingAudioInterface(Pin, v8[18]);
        goto LABEL_33;
      }
      *((_DWORD *)Context + 26) = *(_DWORD *)(v9 + 856);
    }
    v19 = USBType1SetSampleRate(Pin, *((unsigned int *)Context + 26));
    v7 = v19;
    if ( v19 >= 0 )
      return v7;
    LODWORD(v24) = v19;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v20,
      8u,
      0x16u,
      (__int64)&WPP_3fddc3560b1a3736408b317f911f507a_Traceguids,
      Pin,
      v24);
    goto LABEL_28;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( v5 != 3 )
      return v7;
    KsPinAcquireProcessingMutex(Pin);
    v13 = KeAcquireSpinLockRaiseToDpc(Context + 14);
    *(_BYTE *)(v9 + 100) = 0;
    KeReleaseSpinLock(Context + 14, v13);
    v25.QuadPart = -50000000LL;
    v7 = PinWaitForStarvationTimeout((__int64)Pin, &v25);
    if ( v7 == 258 )
    {
      USBHwDataPipeReset(Pin);
      PinWaitForStarvationTimeout((__int64)Pin, 0LL);
    }
    if ( *(_BYTE *)(v9 + 96) )
      USBType1AsyncEndpointAbortFeedback((__int64)Pin);
    KsPinReleaseProcessingMutex(Pin);
    *(_BYTE *)(v9 + 99) = USBType1NeedLockDelay(Context);
    goto LABEL_33;
  }
  if ( v12 == 1 )
  {
    *(_BYTE *)(v9 + 100) = 1;
    *(_BYTE *)(v9 + 98) = 1;
  }
  return v7;
}
