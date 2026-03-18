/*
 * XREFs of ??1?$com_ptr_t@VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18016C028
 * Callers:
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x18017BC10 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ??1CCaptureRenderTarget@@MEAA@XZ @ 0x18024EEA8 (--1CCaptureRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<CD3DDeviceLevel1,wil::err_returncode_policy>::~com_ptr_t<CD3DDeviceLevel1,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return CMILPoolResource::Release((CMILPoolResource *)(v1 + 496));
  return result;
}
