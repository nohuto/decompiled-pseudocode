/*
 * XREFs of ?Valid@CVidSchSubmitData@@QEBAEXZ @ 0x1C0036A24
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C024A648 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVidSchSubmitData::Valid(CVidSchSubmitData *this)
{
  return *(_QWORD *)this != 0LL;
}
