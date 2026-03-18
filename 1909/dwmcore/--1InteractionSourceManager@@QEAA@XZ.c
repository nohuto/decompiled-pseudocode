/*
 * XREFs of ??1InteractionSourceManager@@QEAA@XZ @ 0x18021CE7C
 * Callers:
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x1801D6F1C (--1CInteractionTracker@@UEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180027B70 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@IEAAXXZ @ 0x1801DCC68 (-_Tidy@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$co.c)
 *     ?clear@?$list@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x1801DCCDC (-clear@-$list@U-$pair@$$CBV-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$uniq.c)
 *     ?ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x18021D258 (-ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@V?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18021E580 (-clear@-$_Hash@V-$_Umap_traits@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 *     ?ClearAllConfigurations@CChainingHelper@@QEAAXXZ @ 0x18021F49C (-ClearAllConfigurations@CChainingHelper@@QEAAXXZ.c)
 */

void __fastcall InteractionSourceManager::~InteractionSourceManager(InteractionSourceManager *this)
{
  __int64 ***v2; // r14
  __int64 **i; // rbx
  void *v4; // rcx

  InteractionSourceManager::ClearActiveManipulations(this);
  v2 = (__int64 ***)*((_QWORD *)this + 3);
  for ( i = *v2; i != (__int64 **)v2; i = (__int64 **)*i )
  {
    CChainingHelper::ClearAllConfigurations((CChainingHelper *)i[3]);
    CResource::UnRegisterNotifierInternal(*(CResource **)(*((_QWORD *)this + 1) + 16LL), (struct CResource *)i[2]);
  }
  std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::clear((char *)this + 16);
  ReleaseInterface<CD3DSurface>((__int64 *)this + 1);
  std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Tidy((_QWORD *)this + 10);
  std::_Deallocate<16,0>(*((void **)this + 10), 0x10uLL);
  *((_QWORD *)this + 10) = 0LL;
  v4 = (void *)*((_QWORD *)this + 5);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (*((_QWORD *)this + 7) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
  }
  std::list<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>::clear((__int64)this + 24);
  std::_Deallocate<16,0>(*((void **)this + 3), 0x20uLL);
}
