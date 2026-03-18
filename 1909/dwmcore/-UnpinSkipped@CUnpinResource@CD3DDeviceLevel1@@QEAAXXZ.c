/*
 * XREFs of ?UnpinSkipped@CUnpinResource@CD3DDeviceLevel1@@QEAAXXZ @ 0x1800EB21C
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x1800632A0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800CA470 (-GetCurrentFrameId@@YA_KXZ.c)
 */

void __fastcall CD3DDeviceLevel1::CUnpinResource::UnpinSkipped(CD3DDeviceLevel1::CUnpinResource *this)
{
  unsigned __int64 CurrentFrameId; // rax
  __int64 v2; // rdx

  CurrentFrameId = GetCurrentFrameId();
  *(_QWORD *)(v2 + 8) = CurrentFrameId + 1;
}
