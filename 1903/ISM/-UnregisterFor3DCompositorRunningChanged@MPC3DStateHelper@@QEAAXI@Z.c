/*
 * XREFs of ?UnregisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXI@Z @ 0x18007C6C4
 * Callers:
 *     ??1MPCRawInputProvider@@MEAA@XZ @ 0x180093D9C (--1MPCRawInputProvider@@MEAA@XZ.c)
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x18009E490 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x18007CC40 (-erase@-$_Tree@V-$_Tmap_traits@IV-$function@$$A6AX_N@Z@std@@U-$less@I@2@V-$allocato_ea_18007CC40.c)
 */

void __fastcall MPC3DStateHelper::UnregisterFor3DCompositorRunningChanged(PSRWLOCK SRWLock, int a2)
{
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  AcquireSRWLockExclusive(SRWLock);
  if ( std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::erase(
         &SRWLock[4],
         &v5) != 1 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      321LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      v3);
    __debugbreak();
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
