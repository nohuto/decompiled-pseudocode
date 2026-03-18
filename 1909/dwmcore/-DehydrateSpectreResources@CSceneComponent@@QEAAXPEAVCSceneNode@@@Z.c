/*
 * XREFs of ?DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z @ 0x18020C7C8
 * Callers:
 *     ?DehydrateSpectreResources@CSceneNode@@QEAAXXZ @ 0x1801F804C (-DehydrateSpectreResources@CSceneNode@@QEAAXXZ.c)
 *     ?SetComponents@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@@Z @ 0x1801F8578 (-SetComponents@CSceneNode@@QEAAJAEBV-$span@PEAVCSceneComponent@@$0-0@gsl@@@Z.c)
 *     ?HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z @ 0x18020C85C (-HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVIDeviceResource@@PEAUISpectreRenderTarget@@U?$less@PEAVIDeviceResource@@@std@@V?$allocator@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@std@@@std@@@2@@Z @ 0x18017B138 (-erase@-$_Tree@V-$_Tmap_traits@PEAVIDeviceResource@@PEAUISpectreRenderTarget@@U-$less@PEAVIDevic.c)
 *     ??$_Lbound@PEAVCSceneNode@@@?$_Tree@V?$_Tmap_traits@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@1@AEBQEAVCSceneNode@@@Z @ 0x1801F5928 (--$_Lbound@PEAVCSceneNode@@@-$_Tree@V-$_Tmap_traits@PEAVCSceneNode@@PEAXU-$less@PEAVCSceneNode@@.c)
 */

void __fastcall CSceneComponent::DehydrateSpectreResources(CSceneComponent *this, struct CSceneNode *a2)
{
  __int64 *v2; // r14
  __int64 *v4; // rax
  __int64 v5; // r9
  __int64 v6; // rsi
  __int64 v7; // rdi
  void (__fastcall *v8)(__int64, __int64); // rbx
  __int64 v9; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  struct CSceneNode *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v2 = (__int64 *)((char *)this + 56);
  v4 = std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Lbound<CSceneNode *>(
         (__int64 *)this + 7,
         &v11);
  v6 = (__int64)v4;
  if ( v4 == (__int64 *)*v2 || (unsigned __int64)a2 < v4[4] )
    v6 = *v2;
  if ( v6 != *v2 )
  {
    v7 = *((_QWORD *)a2 + 16);
    v8 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 56LL);
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 192LL))(v5);
    v8(v7, v9);
    std::_Tree<std::_Tmap_traits<IDeviceResource *,ISpectreRenderTarget *,std::less<IDeviceResource *>,std::allocator<std::pair<IDeviceResource * const,ISpectreRenderTarget *>>,0>>::erase(
      (__int64)v2,
      &v10,
      v6);
  }
}
