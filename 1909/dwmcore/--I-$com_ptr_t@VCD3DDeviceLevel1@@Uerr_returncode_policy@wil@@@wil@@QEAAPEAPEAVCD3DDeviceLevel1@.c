/*
 * XREFs of ??I?$com_ptr_t@VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVCD3DDeviceLevel1@@XZ @ 0x18016A9F4
 * Callers:
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x18017A510 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7F30 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

__int64 *__fastcall wil::com_ptr_t<CD3DDeviceLevel1,wil::err_returncode_policy>::operator&(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  if ( v2 )
    CMILPoolResource::Release((CMILPoolResource *)(v2 + 496));
  return a1;
}
