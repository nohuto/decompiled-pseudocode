/*
 * XREFs of ?ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z @ 0x1800F8970
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D84 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180048E78 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180059474 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_ea6a77349a638633efc06cdc677d7ed3___ @ 0x1800F4F54 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800F4F54.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_ff03322a3f89e5994eee42624e4a348b___ @ 0x1800F5024 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800F5024.c)
 *     WPP_SF_Pi @ 0x1800F9F88 (WPP_SF_Pi.c)
 *     WPP_SF_i @ 0x1800F9FDC (WPP_SF_i.c)
 */

__int64 __fastcall CAudioResourceManager::ReleaseResource(CAudioResourceManager *this, __int64 a2, __int64 a3)
{
  int v4; // eax
  unsigned int v5; // edi
  char v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 *v15; // rbx
  __int64 *v16; // rsi
  __int64 v18; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+38h] [rbp-28h] BYREF
  __int64 v20; // [rsp+40h] [rbp-20h] BYREF
  __int128 v21; // [rsp+48h] [rbp-18h] BYREF
  __int64 v22; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+90h] [rbp+30h] BYREF
  __int64 v25; // [rsp+98h] [rbp+38h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, a3, a2);
  }
  v25 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, __int64, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 64LL))(
         g_DeviceGraphStore,
         a2,
         &v25);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 88LL))(v25);
    v18 = 0LL;
    v7 = *(_QWORD *)g_DeviceGraphStore;
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 24LL))(v25);
    v9 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, __int64, __int64 *))(v7 + 24))(
           g_DeviceGraphStore,
           v8,
           &v18);
    v5 = v9;
    if ( v9 >= 0 )
    {
      v22 = 0LL;
      v21 = 0LL;
      (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v18 + 112LL))(v18, &lpCriticalSection);
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v18 + 104LL))(v18, v25, &v21);
      v5 = v10;
      if ( v10 >= 0 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Pi(*((_QWORD *)WPP_GLOBAL_Control + 2), v11, v12, (__int64)(*((_QWORD *)&v21 + 1) - v21) >> 3, a2);
        }
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v25 + 88LL))(v25) )
        {
          ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v19, v25);
          std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_ea6a77349a638633efc06cdc677d7ed3___(
            &v20,
            (_QWORD *)v21,
            *((_QWORD **)&v21 + 1),
            &v19);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 2), 34LL, v13, a2);
          }
          v14 = v25;
          v25 = 0LL;
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_ff03322a3f89e5994eee42624e4a348b___(
          &lpCriticalSection,
          (__int64 *)v21,
          *((__int64 **)&v21 + 1),
          v6);
        v5 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x97C,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v10);
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
      }
      v15 = (__int64 *)v21;
      if ( (_QWORD)v21 )
      {
        v16 = (__int64 *)*((_QWORD *)&v21 + 1);
        if ( (_QWORD)v21 != *((_QWORD *)&v21 + 1) )
        {
          do
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v15++);
          while ( v15 != v16 );
          v15 = (__int64 *)v21;
        }
        std::_Deallocate<16,0>(v15, (const struct std::nothrow_t *)((v22 - (_QWORD)v15) & 0xFFFFFFFFFFFFFFF8uLL));
        v22 = 0LL;
        v21 = 0LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x974,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v9);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x96E,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v4);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
  return v5;
}
