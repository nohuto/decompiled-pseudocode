/*
 * XREFs of ?RecordTransform@CFlipExSwapchainStatistics@@UEAA_NPEAUHMONITOR__@@AEBVCMILMatrix@@@Z @ 0x180015410
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRotation@CMILMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x18001543C (-GetRotation@CMILMatrix@@QEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 */

char __fastcall CFlipExSwapchainStatistics::RecordTransform(
        CFlipExSwapchainStatistics *this,
        HMONITOR a2,
        const struct CMILMatrix *a3)
{
  enum DXGI_MODE_ROTATION Rotation; // eax

  Rotation = CMILMatrix::GetRotation(a3);
  if ( *((_DWORD *)this + 3) == Rotation )
    return 0;
  *((_DWORD *)this + 3) = Rotation;
  return 1;
}
