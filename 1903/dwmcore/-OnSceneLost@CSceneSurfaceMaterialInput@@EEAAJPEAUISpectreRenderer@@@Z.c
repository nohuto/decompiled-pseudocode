/*
 * XREFs of ?OnSceneLost@CSceneSurfaceMaterialInput@@EEAAJPEAUISpectreRenderer@@@Z @ 0x1801FA000
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015EA50 (-reset@-$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CSceneSurfaceMaterialInput::OnSceneLost(
        CSceneSurfaceMaterialInput *this,
        struct ISpectreRenderer *a2)
{
  wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset((__int64 *)this + 1);
  return 0LL;
}
