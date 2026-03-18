/*
 * XREFs of ??$_Lbound@PEAVCSceneNode@@@?$_Tree@V?$_Tmap_traits@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@1@AEBQEAVCSceneNode@@@Z @ 0x1801F7018
 * Callers:
 *     ?ApplyMaterialToMeshComponent@CSceneMeshRendererComponent@@AEAAXPEAUISpectreMeshComponent@@@Z @ 0x1801F72A8 (-ApplyMaterialToMeshComponent@CSceneMeshRendererComponent@@AEAAXPEAUISpectreMeshComponent@@@Z.c)
 *     ?SetMaterial@CSceneMeshRendererComponent@@QEAAJPEAVCSceneMaterial@@@Z @ 0x1801F767C (-SetMaterial@CSceneMeshRendererComponent@@QEAAJPEAVCSceneMaterial@@@Z.c)
 *     ?ApplyTexCoordsToSpectreResource@CSceneMaterial@@QEAAJPEAVCSceneMeshRendererComponent@@@Z @ 0x1801F8258 (-ApplyTexCoordsToSpectreResource@CSceneMaterial@@QEAAJPEAVCSceneMeshRendererComponent@@@Z.c)
 *     ?DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z @ 0x18020DEB8 (-DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z.c)
 *     ?HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z @ 0x18020DF4C (-HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Lbound<CSceneNode *>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 *v2; // r8
  __int64 *v3; // rax

  v2 = (__int64 *)*a1;
  v3 = *(__int64 **)(*a1 + 8);
  while ( !*((_BYTE *)v3 + 25) )
  {
    if ( (unsigned __int64)v3[4] >= *a2 )
    {
      v2 = v3;
      v3 = (__int64 *)*v3;
    }
    else
    {
      v3 = (__int64 *)v3[2];
    }
  }
  return v2;
}
