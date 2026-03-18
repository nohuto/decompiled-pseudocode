/*
 * XREFs of ?RemoveResourceDebugInfo@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z @ 0x1800BC804
 * Callers:
 *     ?ProcessSetComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@PEBXI@Z @ 0x180045874 (-ProcessSetComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOG.c)
 *     ??1CResource@@MEAA@XZ @ 0x18008AB10 (--1CResource@@MEAA@XZ.c)
 *     ?DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1800BC770 (-DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1800C7BA0 (-DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?ProcessSetDiagnosticItemId@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETDIAGNOSTICITEMID@@@Z @ 0x1801C0D5C (-ProcessSetDiagnosticItemId@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANI.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@AEBQEAVCResource@@@Z @ 0x1800B8638 (-lower_bound@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@@Z @ 0x1800C92F8 (-erase@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V-$_U.c)
 */

void __fastcall CAnimationLoggingManager::RemoveResourceDebugInfo(CAnimationLoggingManager *this, struct CResource *a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  struct CResource *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::lower_bound(
    (_QWORD *)this + 11,
    &v4,
    (unsigned __int8 *)&v5);
  if ( v4 != *((_QWORD *)this + 12) )
    std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::erase(
      (char *)this + 88,
      &v5);
  *((_DWORD *)a2 + 8) &= ~0x10u;
}
