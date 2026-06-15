/*
 * XREFs of ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z @ 0x18012B95C
 * Callers:
 *     wil::details::lambda_call__lambda_69c6a245683e8b3826955f0b0e934ed8___::_lambda_call__lambda_69c6a245683e8b3826955f0b0e934ed8___ @ 0x18012737C (wil--details--lambda_call__lambda_69c6a245683e8b3826955f0b0e934ed8___--_lambda_call__lambda_69c6.c)
 *     wil::details::lambda_call__lambda_8d7cd23a568e035680717b1d411d83b8___::_lambda_call__lambda_8d7cd23a568e035680717b1d411d83b8___ @ 0x180127420 (wil--details--lambda_call__lambda_8d7cd23a568e035680717b1d411d83b8___--_lambda_call__lambda_8d7c.c)
 *     ?CleanupRouting@PhoneCallAudio@@AEAAJXZ @ 0x1801275F8 (-CleanupRouting@PhoneCallAudio@@AEAAJXZ.c)
 *     ?DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x1801278A8 (-DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ @ 0x180128390 (-OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAX_J@Z @ 0x18012BAC8 (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAX_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ??$_Try_emplace@AEB_J$$V@?$map@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEB_J@Z @ 0x180129960 (--$_Try_emplace@AEB_J$$V@-$map@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@std@@V-$allocat.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z @ 0x18012B6AC (-RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA_KAEB_J@Z @ 0x18012C5BC (-erase@-$_Tree@V-$_Tmap_traits@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@st_ea_18012C5BC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DynamicAudioEndpointManager::RemoveRule(__int64 **this, struct IAudioProcess *a2, __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  struct IUnknown *v6; // rbx
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v10; // [rsp+30h] [rbp-50h] BYREF
  __int64 v11[3]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v12; // [rsp+50h] [rbp-30h] BYREF
  __int128 v13; // [rsp+60h] [rbp-20h] BYREF
  __int16 v14; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v11[1] = -2LL;
  v10 = a3;
  v11[0] = 0LL;
  v13 = 0uLL;
  v14 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)(this + 2);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 2));
  v11[2] = (__int64)v5;
  std::map<__int64,Microsoft::WRL::ComPtr<IUnknown>>::_Try_emplace<__int64 const &,>(this + 121, (__int64)&v12, &v10);
  v6 = *(struct IUnknown **)(v12 + 40);
  v11[0] = (__int64)v6;
  if ( v6 )
  {
    ((void (__fastcall *)(struct IUnknown *))v6->lpVtbl->AddRef)(v6);
    if ( v5 )
      LeaveCriticalSection(v5);
    v8 = DynamicAudioEndpointManager::RemoveRule((DynamicAudioEndpointManager *)this, a2, v6, 1, (bool (*const)[9])&v13);
    v7 = v8;
    if ( v8 >= 0 )
    {
      std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::erase(
        this + 121,
        &v10);
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x235,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
        (const char *)(unsigned int)v8);
    }
  }
  else
  {
    v7 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22E,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)0x80070057LL);
    if ( v5 )
      LeaveCriticalSection(v5);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v11);
  return v7;
}
