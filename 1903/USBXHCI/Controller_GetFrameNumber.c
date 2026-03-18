/*
 * XREFs of Controller_GetFrameNumber @ 0x1C000E6C0
 * Callers:
 *     Controller_CheckForFrameOverlowEventFromIsr @ 0x1C000D7DC (Controller_CheckForFrameOverlowEventFromIsr.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1C000DF94 (Controller_DetectFrameMicroframeBoundary.c)
 *     Controller_TranslateFrameNumberToQpcValue @ 0x1C00112D8 (Controller_TranslateFrameNumberToQpcValue.c)
 *     Controller_UcxEvtGetCurrentFrameNumber @ 0x1C0011570 (Controller_UcxEvtGetCurrentFrameNumber.c)
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1C002FC78 (Isoch_ProcessTransferRingEmptyEvent.c)
 *     Isoch_Stage_MapIntoRing @ 0x1C00311FC (Isoch_Stage_MapIntoRing.c)
 *     Isoch_TransferUrb_Initialize @ 0x1C0031E98 (Isoch_TransferUrb_Initialize.c)
 *     Isoch_TransferUrb_MarkLatePackets @ 0x1C0032070 (Isoch_TransferUrb_MarkLatePackets.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Controller_GetFrameNumber(__int64 a1, int a2, unsigned int *a3, int *a4)
{
  __int64 v7; // rdx
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  unsigned __int64 v10; // rax
  unsigned int v11; // ebx
  unsigned int v12; // eax
  unsigned int v13; // r8d
  unsigned int v14; // eax

  v7 = MEMORY[0xFFFFF78000000320] * *(unsigned int *)(a1 + 444) / 10000LL;
  v8 = a2 + **(_DWORD **)(*(_QWORD *)(a1 + 88) + 40LL);
  if ( a4 )
    *a4 = v8 & 7;
  v9 = (v8 >> 3) & 0x7FF;
  if ( a3 )
    *a3 = v9;
  _m_prefetchw((const void *)(a1 + 432));
  v10 = _InterlockedOr64((volatile signed __int64 *)(a1 + 432), 0LL);
  LODWORD(v10) = v7 + ((_DWORD)v10 << 11) - (v10 >> 21);
  v11 = v9 | v10 & 0xFFFFF800;
  v12 = v10 & 0x7FF;
  if ( v12 >= v9 )
  {
    if ( v12 - v9 > 0x400 )
      v11 += 2048;
  }
  else
  {
    v13 = v9 - v12;
    v14 = v11 - 2048;
    if ( v13 <= 0x400 )
      v14 = v11;
    v11 = v14;
  }
  _InterlockedExchange64((volatile __int64 *)(a1 + 432), ((unsigned __int64)v11 >> 11) | ((v7 - (v11 & 0x7FF)) << 21));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), 5u, 4u, 0xACu, (__int64)&Context.Logger + 4, v11);
  return v11;
}
