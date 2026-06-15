/*
 * XREFs of ?Shutdown@CExclusiveModeListener@@AEAAXXZ @ 0x18011A7FC
 * Callers:
 *     ??1CExclusiveModeListener@@UEAA@XZ @ 0x180118FC8 (--1CExclusiveModeListener@@UEAA@XZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180019A54 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C36C0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800EF9D4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@UHmdI.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1801163D0 (-clear@-$_Tree@V-$_Tmap_traits@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocator@U-$pair@$$CB.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CExclusiveModeListener::Shutdown(CExclusiveModeListener *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  int v9; // eax
  CSpatialAudioResourceManagerTraceLogger *v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v16; // [rsp+60h] [rbp+18h] BYREF

  *((_BYTE *)this + 377) = 0;
  v2 = *((_QWORD *)this + 44);
  if ( v2 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
    *((_QWORD *)this + 44) = 0LL;
  }
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    if ( *((_QWORD *)this + 15) )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, *((_QWORD *)this + 15));
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x84,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
          (const char *)(unsigned int)v4);
      *((_QWORD *)this + 15) = 0LL;
    }
    if ( *((_QWORD *)this + 16) )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 9) + 80LL))(
             *((_QWORD *)this + 9),
             *((_QWORD *)this + 16));
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8A,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
          (const char *)(unsigned int)v5);
      *((_QWORD *)this + 16) = 0LL;
    }
    v6 = (_QWORD *)*((_QWORD *)this + 20);
    v7 = (_QWORD *)*v6;
    v16 = (_QWORD *)*v6;
    while ( v7 != v6 )
    {
      v8 = v7[6];
      if ( v8 && v7[7] )
      {
        ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v15, v8);
        v14 = 0LL;
        v9 = (**v15)(v15, &GUID_2396ae05_f3f5_49e9_954b_d178b5677fd7, &v14);
        if ( v9 >= 0 )
        {
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 104LL))(v14, v7[7]);
          v7[7] = 0LL;
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x93,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
            (const char *)(unsigned int)v9);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>,std::_Iterator_base0>::operator++(&v16);
      v7 = v16;
    }
    std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::clear((_QWORD *)this + 20);
  }
  v10 = (CSpatialAudioResourceManagerTraceLogger *)*((_QWORD *)this + 7);
  if ( v10 )
  {
    v11 = (*(__int64 (__fastcall **)(CSpatialAudioResourceManagerTraceLogger *, CExclusiveModeListener *))(*(_QWORD *)v10 + 56LL))(
            v10,
            this);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9F,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
        (const char *)(unsigned int)v11);
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)this + 7);
  }
  v12 = *((unsigned int *)this + 92);
  if ( (_DWORD)v12 )
  {
    (*(void (__fastcall **)(struct IAudioPolicyManager *, __int64, char *))(*(_QWORD *)g_PolicyManager + 352LL))(
      g_PolicyManager,
      v12,
      (char *)this + 8);
    *((_DWORD *)this + 92) = 0;
  }
  CSpatialAudioResourceManagerTraceLogger::LogExclusiveModeListenerRunning(v10, 0);
}
