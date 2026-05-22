/*
 * XREFs of ?AddDeviceToCache@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJKKAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800AFB28
 * Callers:
 *     ?OnDeviceAttach@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKKPEAUIHidDevice@234@PEAUMPCControllerDeviceInfo@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800AEDE0 (-OnDeviceAttach@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@U.c)
 *     _lambda_34c6fe1e55b6e4140dcfd37dea589bfc_::operator() @ 0x1800B31F0 (_lambda_34c6fe1e55b6e4140dcfd37dea589bfc_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Buynode@AEA_JAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@?$_Tree_comp_alloc@V?$_Tmap_traits@_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@U?$less@_J@2@V?$allocator@U?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@1@AEA_JAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@1@@Z @ 0x1800B6D10 (--$_Buynode@AEA_JAEAV-$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@W.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@U?$less@_J@2@V?$allocator@U?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@1@@Z @ 0x1800B6D7C (--$_Insert_nohint@AEAU-$pair@$$CB_JV-$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteract.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AddDeviceToCache(
        struct _RTL_CRITICAL_SECTION *a1,
        unsigned int a2,
        unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // r8
  struct _RTL_CRITICAL_SECTION *CriticalSection; // rcx
  PRTL_CRITICAL_SECTION_DEBUG v7; // rdx
  __int64 result; // rax
  void *v9; // rax
  int v10; // r8d
  const char *v11; // r9
  int v12; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  signed __int64 v14; // [rsp+60h] [rbp+8h]

  v14 = __PAIR64__(a2, a3);
  v4 = a1 + 11;
  EnterCriticalSection(a1 + 11);
  DebugInfo = a1[12].DebugInfo;
  CriticalSection = DebugInfo->CriticalSection;
  v7 = DebugInfo;
  if ( BYTE1(CriticalSection->LockSemaphore) )
    goto LABEL_8;
  do
  {
    if ( (signed __int64)CriticalSection->SpinCount >= v14 )
    {
      v7 = (PRTL_CRITICAL_SECTION_DEBUG)CriticalSection;
      CriticalSection = (struct _RTL_CRITICAL_SECTION *)CriticalSection->DebugInfo;
    }
    else
    {
      CriticalSection = (struct _RTL_CRITICAL_SECTION *)CriticalSection->OwningThread;
    }
  }
  while ( !BYTE1(CriticalSection->LockSemaphore) );
  if ( v7 == DebugInfo || v14 < *(_QWORD *)&v7->EntryCount )
LABEL_8:
    v7 = a1[12].DebugInfo;
  if ( v7 == DebugInfo )
  {
    try
    {
      v9 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<__int64,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>,std::less<__int64>,std::allocator<std::pair<__int64 const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>>,0>>::_Buynode<__int64 &,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice> &>();
      std::_Tree<std::_Tmap_traits<__int64,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>,std::less<__int64>,std::allocator<std::pair<__int64 const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>>,0>>::_Insert_nohint<std::pair<__int64 const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>> &,std::_Tree_node<std::pair<__int64 const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>,void *> *>(
        (_DWORD)a1 + 480,
        (int)&v12,
        v10,
        (_DWORD)v9 + 32,
        v9);
      if ( v4 )
        LeaveCriticalSection(v4);
      result = 0LL;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x192,
                             (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractio"
                                      "nsourcedevicecollection.cpp",
                             v11);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18D,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)0x800700B7LL);
    if ( v4 )
      LeaveCriticalSection(v4);
    return 2147942583LL;
  }
  return result;
}
