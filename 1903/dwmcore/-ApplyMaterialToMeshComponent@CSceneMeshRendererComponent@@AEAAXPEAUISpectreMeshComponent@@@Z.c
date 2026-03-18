/*
 * XREFs of ?ApplyMaterialToMeshComponent@CSceneMeshRendererComponent@@AEAAXPEAUISpectreMeshComponent@@@Z @ 0x1801F72A8
 * Callers:
 *     ?ApplyMaterialToSpectreResources@CSceneMeshRendererComponent@@AEAAXXZ @ 0x1801F7308 (-ApplyMaterialToSpectreResources@CSceneMeshRendererComponent@@AEAAXXZ.c)
 *     ?InitializeSpectreComponent@CSceneMeshRendererComponent@@MEAAJPEAX@Z @ 0x1801F73F0 (-InitializeSpectreComponent@CSceneMeshRendererComponent@@MEAAJPEAX@Z.c)
 * Callees:
 *     ??$_Lbound@PEAVCSceneNode@@@?$_Tree@V?$_Tmap_traits@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@1@AEBQEAVCSceneNode@@@Z @ 0x1801F7018 (--$_Lbound@PEAVCSceneNode@@@-$_Tree@V-$_Tmap_traits@PEAVCSceneNode@@PEAXU-$less@PEAVCSceneNode@@.c)
 */

void __fastcall CSceneMeshRendererComponent::ApplyMaterialToMeshComponent(
        CSceneMeshRendererComponent *this,
        struct ISpectreMeshComponent *a2)
{
  struct ISpectreMeshComponent *v2; // r11
  __int64 v3; // r9
  void (__fastcall *v4)(struct ISpectreMeshComponent *, __int64); // rbx
  __int64 *v5; // rax
  __int64 v6; // r9
  unsigned __int64 v7; // r10
  __int64 v8; // rdx
  CSceneMeshRendererComponent *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  v3 = *((_QWORD *)this + 9);
  v4 = *(void (__fastcall **)(struct ISpectreMeshComponent *, __int64))(*(_QWORD *)a2 + 8LL);
  if ( v3 )
  {
    v9 = this;
    v5 = std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Lbound<CSceneNode *>(
           (__int64 *)(v3 + 64),
           &v9);
    if ( v5 == *(__int64 **)(v6 + 64) || v7 < v5[4] )
      v5 = *(__int64 **)(v6 + 64);
    v8 = v5[5];
  }
  else
  {
    v8 = 0LL;
  }
  v4(v2, v8);
}
