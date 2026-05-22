/*
 * XREFs of ?OnFinalRelease@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800AEB00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@2@@Z @ 0x180092F7C (-_Erase@-$_Tree@V-$_Tmap_traits@EV-$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices.c)
 *     ?_Tidy@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@2@@std@@IEAAXXZ @ 0x1800B50FC (-_Tidy@-$deque@V-$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@Spat.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnFinalRelease(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this)
{
  __int64 v2; // rbx
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  char *v19; // rbx
  struct _TP_WORK *v20; // rsi
  DWORD LastError; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *((_QWORD *)this + 38);
  if ( v2 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v2 + 48));
    *(_QWORD *)(v2 + 32) = 0LL;
    v3 = *(__int64 **)(v2 + 24);
    v4 = *v3;
    v5 = *(_QWORD *)(v2 + 40);
    if ( *(_BYTE *)(v2 + 16) )
      (*(void (__fastcall **)(__int64 *, __int64))(v4 + 64))(v3, v5);
    else
      (*(void (__fastcall **)(__int64 *, __int64))(v4 + 80))(v3, v5);
    if ( v2 != -48 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v2 + 48));
  }
  v6 = *((_QWORD *)this + 39);
  if ( v6 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 48));
    *(_QWORD *)(v6 + 32) = 0LL;
    v7 = *(__int64 **)(v6 + 24);
    v8 = *v7;
    v9 = *(_QWORD *)(v6 + 40);
    if ( *(_BYTE *)(v6 + 16) )
      (*(void (__fastcall **)(__int64 *, __int64))(v8 + 64))(v7, v9);
    else
      (*(void (__fastcall **)(__int64 *, __int64))(v8 + 80))(v7, v9);
    if ( v6 != -48 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 48));
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  v10 = *((_QWORD *)this + 40);
  if ( v10 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 128LL))(v10);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC3,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
        (const char *)(unsigned int)v11);
  }
  v12 = *((_QWORD *)this + 40);
  if ( v12 )
  {
    *((_QWORD *)this + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 352));
  v13 = *((_QWORD *)this + 53);
  if ( v13 )
  {
    *((_QWORD *)this + 53) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = *((_QWORD *)this + 49);
  if ( v14 )
  {
    *((_QWORD *)this + 49) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *((_QWORD *)this + 50);
  if ( v15 )
  {
    *((_QWORD *)this + 50) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = *((_QWORD *)this + 51);
  if ( v16 )
  {
    *((_QWORD *)this + 51) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = *((_QWORD *)this + 52);
  if ( v17 )
  {
    *((_QWORD *)this + 52) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( this != (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)-352LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 352));
  if ( this != (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)-88LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  v18 = *((_QWORD *)this + 74);
  if ( v18 )
  {
    *((_QWORD *)this + 74) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 432));
  v19 = (char *)this + 472;
  std::_Tree<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::_Erase(
    (__int64)this + 472,
    *(_QWORD **)(*((_QWORD *)this + 59) + 8LL));
  *(_QWORD *)(*(_QWORD *)v19 + 8LL) = *(_QWORD *)v19;
  **(_QWORD **)v19 = *(_QWORD *)v19;
  *(_QWORD *)(*(_QWORD *)v19 + 16LL) = *(_QWORD *)v19;
  *((_QWORD *)this + 60) = 0LL;
  if ( this != (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)-432LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 432));
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 488));
  *((_BYTE *)this + 528) = 1;
  std::deque<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>::_Tidy((char *)this + 536);
  if ( this != (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)-488LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 488));
  v20 = (struct _TP_WORK *)*((_QWORD *)this + 72);
  if ( v20 )
  {
    LastError = GetLastError();
    WaitForThreadpoolWorkCallbacks(v20, 0);
    CloseThreadpoolWork(v20);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 72) = 0LL;
  return 0LL;
}
