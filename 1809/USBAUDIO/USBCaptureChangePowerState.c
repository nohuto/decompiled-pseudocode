/*
 * XREFs of USBCaptureChangePowerState @ 0x1C00063D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0001404 (WPP_RECORDER_SF_qd.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C0029C54 (USBHwSelectStreamingAudioInterface.c)
 *     USBHwDataPipeReset @ 0x1C002A664 (USBHwDataPipeReset.c)
 *     USBType1SetSampleRate @ 0x1C002E400 (USBType1SetSampleRate.c)
 *     USBCaptureStartTransfers @ 0x1C002ECA0 (USBCaptureStartTransfers.c)
 */

__int64 __fastcall USBCaptureChangePowerState(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v3; // ebp
  unsigned int v5; // ebx
  __int64 v6; // r14
  KIRQL v7; // al
  int started; // eax
  __int64 v9; // rdx
  unsigned __int16 v10; // r9
  _QWORD *v11; // rcx
  __int64 v13; // [rsp+30h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a2;
  v5 = -1073741584;
  v6 = *(_QWORD *)(v2 + 144);
  WPP_RECORDER_SF_qd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    a2,
    8u,
    0x1Cu,
    (__int64)&WPP_4029ef4524b336006ce277c7fdb8c744_Traceguids,
    a1,
    a2 - 1);
  if ( v3 == 1 )
  {
    if ( *(_DWORD *)(a1 + 120) != 3 )
      return 0;
    started = USBHwSelectStreamingAudioInterface(a1, *(_QWORD *)(v6 + 136));
    v5 = started;
    if ( started >= 0 )
    {
      started = USBType1SetSampleRate(a1, *(unsigned int *)(v2 + 104));
      v5 = started;
      if ( started >= 0 )
      {
        v11 = *(_QWORD **)(v2 + 152);
        v11[18] = v11 + 17;
        v11[17] = v11 + 17;
        v11[16] = v11 + 15;
        v11[15] = v11 + 15;
        *(_BYTE *)(v2 + 45) = 1;
        started = USBCaptureStartTransfers(a1, 0LL);
        v5 = started;
        if ( started >= 0 )
          return v5;
        v10 = 31;
      }
      else
      {
        v10 = 30;
      }
    }
    else
    {
      v10 = 29;
    }
    LODWORD(v13) = started;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v9,
      8u,
      v10,
      (__int64)&WPP_4029ef4524b336006ce277c7fdb8c744_Traceguids,
      a1,
      v13);
    return v5;
  }
  if ( (unsigned int)(v3 - 2) <= 2 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 112));
    *(_BYTE *)(v2 + 45) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 112), v7);
    v5 = USBHwDataPipeReset(a1);
    if ( (v5 & 0x80000000) == 0 )
      return (unsigned int)USBHwSelectStreamingAudioInterface(a1, *(_QWORD *)(v6 + 144));
  }
  return v5;
}
