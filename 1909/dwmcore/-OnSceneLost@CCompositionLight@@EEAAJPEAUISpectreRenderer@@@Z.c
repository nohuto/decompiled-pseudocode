/*
 * XREFs of ?OnSceneLost@CCompositionLight@@EEAAJPEAUISpectreRenderer@@@Z @ 0x1801C61C0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015D370 (-reset@-$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CCompositionLight::OnSceneLost(CCompositionLight *this, struct ISpectreRenderer *a2)
{
  wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset((__int64 *)this + 12);
  return 0LL;
}
