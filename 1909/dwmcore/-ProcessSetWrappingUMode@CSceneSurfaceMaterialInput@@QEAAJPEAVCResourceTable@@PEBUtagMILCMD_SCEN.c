/*
 * XREFs of ?ProcessSetWrappingUMode@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENESURFACEMATERIALINPUT_SETWRAPPINGUMODE@@@Z @ 0x1801F8A7C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015D370 (-reset@-$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CSceneSurfaceMaterialInput::ProcessSetWrappingUMode(
        CSceneSurfaceMaterialInput *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SCENESURFACEMATERIALINPUT_SETWRAPPINGUMODE *a3)
{
  int v3; // eax

  v3 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)this + 25) != v3 )
  {
    *((_DWORD *)this + 25) = v3;
    wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset((__int64 *)this + 8);
  }
  return 0LL;
}
