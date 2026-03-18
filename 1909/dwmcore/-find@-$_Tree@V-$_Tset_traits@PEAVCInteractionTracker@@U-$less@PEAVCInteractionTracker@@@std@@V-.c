/*
 * XREFs of ?find@?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@@2@AEBQEAVCInteractionTracker@@@Z @ 0x1800ED87C
 * Callers:
 *     ?GetSpectreRenderTargetNoRef@CSceneResourceManager@@QEAAJPEAVCD3DSurface@@PEAPEAUISpectreRenderTarget@@@Z @ 0x18017A9E0 (-GetSpectreRenderTargetNoRef@CSceneResourceManager@@QEAAJPEAVCD3DSurface@@PEAPEAUISpectreRenderT.c)
 *     ?NotifyInvalidResource@CSceneResourceManager@@UEAAXPEBVIDeviceResource@@@Z @ 0x18017AB70 (-NotifyInvalidResource@CSceneResourceManager@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801DD8CC (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::find(
        __int64 **a1,
        __int64 **a2,
        _QWORD *a3)
{
  __int64 *v3; // r9
  __int64 *v4; // rcx
  __int64 *v5; // r10
  __int64 *v6; // rax

  v3 = *a1;
  v4 = v3;
  v5 = v3;
  v6 = (__int64 *)v3[1];
  if ( !*((_BYTE *)v6 + 25) )
  {
    do
    {
      if ( (unsigned __int64)v6[4] >= *a3 )
      {
        v4 = v6;
        v6 = (__int64 *)*v6;
      }
      else
      {
        v6 = (__int64 *)v6[2];
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
    v5 = v3;
  }
  if ( v4 == v5 || *a3 < (unsigned __int64)v4[4] )
    v4 = v3;
  *a2 = v4;
  return a2;
}
