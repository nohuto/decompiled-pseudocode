/*
 * XREFs of _lambda_1b96823c3fb120ef3259913bb7230e0a_::operator() @ 0x1800AF5E0
 * Callers:
 *     wil::details::lambda_call__lambda_1b96823c3fb120ef3259913bb7230e0a___::_lambda_call__lambda_1b96823c3fb120ef3259913bb7230e0a___ @ 0x1800B3C6C (wil--details--lambda_call__lambda_1b96823c3fb120ef3259913bb7230e0a___--_lambda_call__lambda_1b96.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?SpatialInputController_Removed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKQEB_W@Z @ 0x1800ABE5C (-SpatialInputController_Removed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKQEB_W@.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@U?$less@_J@2@V?$allocator@U?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800B6A40 (-erase@-$_Tree@V-$_Tmap_traits@_JV-$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractio.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_1b96823c3fb120ef3259913bb7230e0a_::operator()(int **a1)
{
  __int64 v2; // rax
  int *v3; // rsi
  const WCHAR *v4; // rbx
  _DWORD *v5; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v6; // rcx
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  int *v8; // rax
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdx
  PRTL_CRITICAL_SECTION_DEBUG v10; // r8
  struct _RTL_CRITICAL_SECTION *CriticalSection; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  signed __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = (***(__int64 (__fastcall ****)(_QWORD))a1[1])(*(_QWORD *)a1[1]);
  v3 = *a1;
  v4 = (const WCHAR *)v2;
  v5 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( v5 && *v5 )
  {
    SpatialInteractionDevices::SpatialInteractionTrace::Instance();
    SpatialInteractionDevices::SpatialInteractionTrace::SpatialInputController_Removed_(v6, *v3, v4);
  }
  v7 = (struct _RTL_CRITICAL_SECTION *)a1[2];
  v8 = a1[3];
  HIDWORD(v13) = **a1;
  LODWORD(v13) = *v8;
  EnterCriticalSection(v7 + 11);
  DebugInfo = v7[12].DebugInfo;
  v10 = DebugInfo;
  CriticalSection = DebugInfo->CriticalSection;
  if ( BYTE1(CriticalSection->LockSemaphore) )
    goto LABEL_11;
  do
  {
    if ( (signed __int64)CriticalSection->SpinCount >= v13 )
    {
      v10 = (PRTL_CRITICAL_SECTION_DEBUG)CriticalSection;
      CriticalSection = (struct _RTL_CRITICAL_SECTION *)CriticalSection->DebugInfo;
    }
    else
    {
      CriticalSection = (struct _RTL_CRITICAL_SECTION *)CriticalSection->OwningThread;
    }
  }
  while ( !BYTE1(CriticalSection->LockSemaphore) );
  if ( v10 == DebugInfo || v13 < *(_QWORD *)&v10->EntryCount )
LABEL_11:
    v10 = v7[12].DebugInfo;
  if ( v10 == DebugInfo )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C0,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)0x80070490LL);
    if ( v7 != (struct _RTL_CRITICAL_SECTION *)-440LL )
      LeaveCriticalSection(v7 + 11);
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x11A,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)0x80070490LL);
  }
  else
  {
    std::_Tree<std::_Tmap_traits<__int64,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>,std::less<__int64>,std::allocator<std::pair<__int64 const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>>,0>>::erase(
      &v7[12],
      &v13);
    if ( v7 != (struct _RTL_CRITICAL_SECTION *)-440LL )
      LeaveCriticalSection(v7 + 11);
  }
}
