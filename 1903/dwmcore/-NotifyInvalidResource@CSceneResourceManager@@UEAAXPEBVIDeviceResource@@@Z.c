/*
 * XREFs of ?NotifyInvalidResource@CSceneResourceManager@@UEAAXPEBVIDeviceResource@@@Z @ 0x18017C270
 * Callers:
 *     <none>
 * Callees:
 *     ?find@?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@@2@AEBQEAVCInteractionTracker@@@Z @ 0x1800EB684 (-find@-$_Tree@V-$_Tset_traits@PEAVCInteractionTracker@@U-$less@PEAVCInteractionTracker@@@std@@V-.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x18017C370 (-ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVIDeviceResource@@PEAUISpectreRenderTarget@@U?$less@PEAVIDeviceResource@@@std@@V?$allocator@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVIDeviceResource@@PEAUISpectreRenderTarget@@@std@@@std@@@std@@@2@@Z @ 0x18017C838 (-erase@-$_Tree@V-$_Tmap_traits@PEAVIDeviceResource@@PEAUISpectreRenderTarget@@U-$less@PEAVIDevic.c)
 */

void __fastcall CSceneResourceManager::NotifyInvalidResource(__int64 **this, const struct IDeviceResource *a2)
{
  __int64 **v2; // rdi
  __int64 v3; // r11
  __int64 *v4; // rbx
  const struct IDeviceResource *v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v6; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 == (const struct IDeviceResource *)((unsigned __int64)(this[3] + 3) & -(__int64)(this[3] != 0LL)) )
  {
    CSceneResourceManager::ReleaseSceneCompositor((CSceneResourceManager *)this);
  }
  else
  {
    v2 = this + 7;
    v5 = a2;
    std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::find(
      this + 7,
      &v6,
      &v5);
    v4 = v6;
    if ( v6 != *v2 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6[4] + 32LL))(v6[4], v3);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4[5] + 16LL))(v4[5]);
      std::_Tree<std::_Tmap_traits<IDeviceResource *,ISpectreRenderTarget *,std::less<IDeviceResource *>,std::allocator<std::pair<IDeviceResource * const,ISpectreRenderTarget *>>,0>>::erase(
        v2,
        &v5,
        v4);
    }
  }
}
