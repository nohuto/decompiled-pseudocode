/*
 * XREFs of ?UnpinSkipped@CUnpinResource@CD3DDeviceLevel1@@QEAAXXZ @ 0x1800EA3FC
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180058B80 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180043B90 (-GetCurrentFrameId@@YA_KXZ.c)
 */

void __fastcall CD3DDeviceLevel1::CUnpinResource::UnpinSkipped(CD3DDeviceLevel1::CUnpinResource *this)
{
  unsigned __int64 CurrentFrameId; // rax
  __int64 v2; // rdx

  CurrentFrameId = GetCurrentFrameId();
  *(_QWORD *)(v2 + 8) = CurrentFrameId + 1;
}
