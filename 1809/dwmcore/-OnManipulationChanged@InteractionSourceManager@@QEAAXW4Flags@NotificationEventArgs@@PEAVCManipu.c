/*
 * XREFs of ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z @ 0x1801E5924
 * Callers:
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801A0220 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z @ 0x1800EF06C (--0-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18019E4BC (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x1801A2AE8 (-ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x1801A2BA8 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 *     ?AddActiveManipulation@InteractionSourceManager@@AEAAXPEAVCManipulation@@@Z @ 0x1801E4CEC (-AddActiveManipulation@InteractionSourceManager@@AEAAXPEAVCManipulation@@@Z.c)
 *     ?IsManipulationActive@InteractionSourceManager@@AEAA_NPEBVCManipulation@@@Z @ 0x1801E5568 (-IsManipulationActive@InteractionSourceManager@@AEAA_NPEBVCManipulation@@@Z.c)
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x1801E5D80 (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@V?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@std@@@std@@@2@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801E6868 (-lower_bound@-$_Hash@V-$_Umap_traits@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@w.c)
 */

void __fastcall InteractionSourceManager::OnManipulationChanged(__int64 a1, int a2, const struct CManipulation *a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  const struct CManipulation *v8; // r8
  __int64 v9; // rcx
  _BYTE *v10; // rsi
  int v11; // r11d
  _BYTE *v12; // rbx
  int v13; // r11d
  bool v14; // dl
  struct CManipulation *v15; // rdx
  _QWORD v16[3]; // [rsp+20h] [rbp-18h] BYREF
  const void *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v18; // [rsp+58h] [rbp+20h] BYREF

  v5 = a2 - 7;
  if ( v5 )
  {
    v6 = v5 - 3;
    if ( v6 )
    {
      v7 = v6 - 2;
      if ( v7 )
      {
        if ( v7 == 1
          && CInteractionTracker::AreInteractionAnimationsAlive(*(CInteractionTracker **)(*(_QWORD *)(a1 + 8) + 16LL)) )
        {
          if ( InteractionSourceManager::IsManipulationActive((InteractionSourceManager *)a1, v8) )
            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 224LL) + 416LL) |= 4u;
        }
      }
      else
      {
        wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
          &v18,
          (__int64)a3);
        std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::lower_bound(
          a1 + 16,
          v16,
          &v18);
        if ( v16[0] == *(_QWORD *)(a1 + 24) )
          ModuleFailFastForHRESULT(-2147483637, retaddr);
        v10 = *(_BYTE **)(v16[0] + 24LL);
        v11 = 0;
        v12 = v10;
        do
        {
          v14 = CInteractionTracker::ShouldChainForAxis(v9, v11, (__int64)a3, 1u)
             && CInteractionTracker::ShouldChainAllForAxis(v9, v13, (__int64)a3);
          LOBYTE(v9) = *v12;
          if ( (*v12 & 1) != v14 )
          {
            LOBYTE(v9) = v14 | v9 & 0xFE;
            *v12 = v9;
            v10[36] |= 1u;
          }
          v11 = v13 + 1;
          v12 += 12;
        }
        while ( v11 < 3 );
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v18);
      }
    }
    else if ( !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 168LL) )
    {
      InteractionSourceManager::ReconfigureAllManipulations((InteractionSourceManager *)a1);
    }
  }
  else
  {
    if ( !InteractionSourceManager::IsManipulationActive((InteractionSourceManager *)a1, a3) )
      InteractionSourceManager::AddActiveManipulation((InteractionSourceManager *)a1, v15);
    *(_BYTE *)(a1 + 120) = 1;
  }
}
