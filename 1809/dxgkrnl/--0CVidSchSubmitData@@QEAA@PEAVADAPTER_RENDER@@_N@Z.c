/*
 * XREFs of ??0CVidSchSubmitData@@QEAA@PEAVADAPTER_RENDER@@_N@Z @ 0x1C0036724
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C024A648 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C001137C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 */

CVidSchSubmitData *__fastcall CVidSchSubmitData::CVidSchSubmitData(
        CVidSchSubmitData *this,
        struct ADAPTER_RENDER *a2,
        char a3)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = a2;
  if ( a3 )
    CVidSchSubmitData::InitializeSubmitData(this);
  return this;
}
