/*
 * XREFs of ?OnSceneLost@CSceneMesh@@EEAAJPEAUISpectreRenderer@@@Z @ 0x1801F6BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$?9VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x1800EB73C (--$-9VCD3DDeviceLevel1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@VCD3DDeviceLevel1@.c)
 *     ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015EA50 (-reset@-$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CSceneMesh::OnSceneLost(CSceneMesh *this, struct ISpectreRenderer *a2)
{
  __int64 *v3; // rcx

  if ( wil::operator!=<CD3DDeviceLevel1,wil::err_returncode_policy>((_QWORD *)this + 1) )
  {
    wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset(v3);
    *((_BYTE *)this + 16) = 1;
  }
  return 0LL;
}
