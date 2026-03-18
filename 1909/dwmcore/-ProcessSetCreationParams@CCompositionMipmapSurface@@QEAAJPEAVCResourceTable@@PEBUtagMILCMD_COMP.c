/*
 * XREFs of ?ProcessSetCreationParams@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMIPMAPSURFACE_SETCREATIONPARAMS@@@Z @ 0x1801D0220
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18017AC08 (-RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 *     std::vector_CCompositionMipmapSurface::MipLevelSurface_std::allocator_CCompositionMipmapSurface::MipLevelSurface___::_Resize__lambda_a2eaa8aad34492302e036d5b613ed997___ @ 0x1801CFB5C (std--vector_CCompositionMipmapSurface--MipLevelSurface_std--allocator_CCompositionMipmapSurface-.c)
 */

__int64 __fastcall CCompositionMipmapSurface::ProcessSetCreationParams(
        CCompositionMipmapSurface *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONMIPMAPSURFACE_SETCREATIONPARAMS *a3)
{
  unsigned int v4; // ecx
  unsigned int v5; // ecx

  v4 = *((_DWORD *)a3 + 2);
  if ( *((_QWORD *)this + 15) != __PAIR64__(v4, *((_DWORD *)a3 + 3)) || *((_DWORD *)this + 32) != *((_DWORD *)a3 + 4) )
  {
    *((_DWORD *)this + 31) = v4;
    *((_DWORD *)this + 30) = *((_DWORD *)a3 + 3);
    v5 = *((_DWORD *)a3 + 4);
    *((_DWORD *)this + 32) = v5;
    *((_DWORD *)this + 33) = *((_DWORD *)a3 + 6);
    *((_DWORD *)this + 34) = *((_DWORD *)a3 + 5);
    std::vector_CCompositionMipmapSurface::MipLevelSurface_std::allocator_CCompositionMipmapSurface::MipLevelSurface___::_Resize__lambda_a2eaa8aad34492302e036d5b613ed997___(
      (__int64)this + 88,
      v5);
    CSceneResourceManager::RegisterSceneListener(
      *(CSceneResourceManager **)(*((_QWORD *)this + 2) + 128LL),
      (CCompositionMipmapSurface *)((char *)this + 80));
  }
  return 0LL;
}
