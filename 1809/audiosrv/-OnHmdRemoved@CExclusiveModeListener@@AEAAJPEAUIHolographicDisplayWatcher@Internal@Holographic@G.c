/*
 * XREFs of ?OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x180119B40
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180019A54 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??$_Try_emplace@AEBU_GUID@@$$V@?$map@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@std@@_N@1@AEBU_GUID@@@Z @ 0x180118E2C (--$_Try_emplace@AEBU_GUID@@$$V@-$map@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocator@U-$pai.c)
 *     ?LogOnHmdRemoved@CSpatialAudioResourceManagerTraceLogger@@QEAAXAEBU_GUID@@0@Z @ 0x1801194D0 (-LogOnHmdRemoved@CSpatialAudioResourceManagerTraceLogger@@QEAAXAEBU_GUID@@0@Z.c)
 *     ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x18011AA70 (-UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBU_GUID@@@Z @ 0x18011AD04 (-erase@-$_Tree@V-$_Tmap_traits@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocator_ea_18011AD04.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall CExclusiveModeListener::OnHmdRemoved(
        CExclusiveModeListener *this,
        struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *a2,
        struct Windows::Graphics::Holographic::IHolographicDisplay *a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  int v6; // ebx
  __int64 v7; // rdx
  CSpatialAudioResourceManagerTraceLogger *v9; // rcx
  const GUID *v10; // r9
  GUID *v11; // rsi
  __int64 v12; // rbx
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rax
  int updated; // eax
  __int64 v17; // [rsp+20h] [rbp-68h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-60h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-58h]
  __int64 v20; // [rsp+38h] [rbp-50h] BYREF
  __int64 v21; // [rsp+40h] [rbp-48h]
  char v22; // [rsp+48h] [rbp-40h]
  __int64 v23; // [rsp+50h] [rbp-38h]
  struct _GUID v24; // [rsp+58h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v23 = -2LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 80);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 2);
  lpCriticalSection = v5;
  ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v18, (__int64)a3);
  v17 = 0LL;
  v6 = (**v18)(v18, &GUID_2396ae05_f3f5_49e9_954b_d178b5677fd7, &v17);
  if ( v6 < 0 )
  {
    v7 = 231LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)(unsigned int)v6);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
    if ( v5 )
      LeaveCriticalSection(v5);
    return (unsigned int)v6;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, struct _GUID *))(*(_QWORD *)v17 + 48LL))(v17, &v24);
  if ( v6 < 0 )
  {
    v7 = 234LL;
    goto LABEL_3;
  }
  v11 = (GUID *)((char *)this + 136);
  CSpatialAudioResourceManagerTraceLogger::LogOnHmdRemoved(v9, &v24, (const struct _GUID *)((char *)this + 136), v10);
  std::map<_GUID,HmdInfo>::_Try_emplace<_GUID const &,>((__int64 *)this + 20, (__int64)&v20, &v24);
  v12 = v20;
  ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
    &v20,
    *(_QWORD *)(v20 + 48));
  v21 = *(_QWORD *)(v12 + 56);
  v22 = *(_BYTE *)(v12 + 64);
  if ( v21 && (v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 104LL))(v17), v14 = v13, v13 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      244LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)(unsigned int)v13);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
    if ( v5 )
    {
      LeaveCriticalSection(v5);
      lpCriticalSection = 0LL;
    }
    return v14;
  }
  else
  {
    std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::erase(
      (char *)this + 160,
      &v24);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
    v15 = *(_QWORD *)&v24.Data1 - *(_QWORD *)&v11->Data1;
    if ( *(_QWORD *)&v24.Data1 == *(_QWORD *)&v11->Data1 )
      v15 = *(_QWORD *)v24.Data4 - *((_QWORD *)this + 18);
    if ( !v15 )
    {
      *v11 = GUID_00000000_0000_0000_0000_000000000000;
      *((_DWORD *)this + 44) = 0;
      updated = CExclusiveModeListener::UpdateExclusiveViewingMode(this);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x103,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
          (const char *)(unsigned int)updated);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
    if ( v5 )
      LeaveCriticalSection(v5);
    return 0LL;
  }
}
