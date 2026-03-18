/*
 * XREFs of ?OnSceneLost@CSceneWorld@@EEAAJPEAUISpectreRenderer@@@Z @ 0x180205BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015EA50 (-reset@-$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?DehydrateSpectreResources@CSceneNode@@QEAAXXZ @ 0x1801F973C (-DehydrateSpectreResources@CSceneNode@@QEAAXXZ.c)
 */

__int64 __fastcall CSceneWorld::OnSceneLost(CSceneWorld *this, struct ISpectreRenderer *a2)
{
  CSceneNode::DehydrateSpectreResources(*((CSceneNode **)this + 2));
  wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset((__int64 *)this + 1);
  return 0LL;
}
