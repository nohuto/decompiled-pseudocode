/*
 * XREFs of ?RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ @ 0x18011A1B8
 * Callers:
 *     ??$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusiveModeListener@@@Z @ 0x180112854 (--$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusive.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800F7988 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Graphics::Holographic::HolographicDisplay_____ptr64_Windows::Graphics::Holographic::IHolographicDisplay_____ptr64___::_)(Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::IHolographicDisplay_____ptr64)___ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::HolographicDisplay_____ptr64__Microsoft::WRL::FtmBase___lambda_fd84fb861bda8361cc33008a6db9ede3___1_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::IHolographicDisplay_____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::HolographicDisplay_____ptr64__Microsoft::WRL::FtmBase___lambda_fd84fb861bda8361cc33008a6db9ede3___1_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::IHolographicDisplay_____ptr64_ @ 0x180118F28 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180118F28.c)
 *     ?LogExclusiveModeListenerRunning@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z @ 0x180119334 (-LogExclusiveModeListenerRunning@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z.c)
 *     ?OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x1801198E0 (-OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Gra.c)
 *     ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x18011AA70 (-UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CExclusiveModeListener::RuntimeClassInitialize(LPVOID *this)
{
  _QWORD *v2; // rsi
  HRESULT Instance; // ebx
  __int64 v4; // rdx
  __int64 *v5; // r14
  LPVOID v6; // rcx
  __int64 v7; // rbx
  struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher **v8; // rsi
  LPVOID v9; // rcx
  __int64 v10; // rbx
  LPVOID v11; // rax
  __int64 v12; // r12
  __int64 v13; // rbx
  LPVOID v14; // rax
  __int64 v15; // r15
  __int64 v16; // rcx
  int v17; // eax
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  CSpatialAudioResourceManagerTraceLogger *v27; // rcx
  unsigned int v29; // [rsp+48h] [rbp-29h] BYREF
  struct Windows::Graphics::Holographic::IHolographicDisplay *v30; // [rsp+50h] [rbp-21h] BYREF
  __int128 v31; // [rsp+58h] [rbp-19h]
  __int64 v32; // [rsp+68h] [rbp-9h]
  __int64 v33; // [rsp+70h] [rbp-1h]
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp+7h] BYREF
  __int64 v35; // [rsp+90h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v32 = -2LL;
  v2 = this + 7;
  Instance = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               0x17u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               this + 7);
  if ( Instance < 0 )
  {
    v4 = 37LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v4,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  Instance = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(*(_QWORD *)*v2 + 48LL))(*v2, this);
  if ( Instance < 0 )
  {
    v4 = 38LL;
    goto LABEL_3;
  }
  v35 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Graphics.Holographic.HolographicDisplay",
    0x30u,
    0x2Fu);
  v5 = (__int64 *)(this + 8);
  v6 = this[8];
  this[8] = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v6 + 16LL))(v6);
  Instance = RoGetActivationFactory(v35, &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, this + 8);
  if ( Instance < 0 )
  {
    v4 = 40LL;
    goto LABEL_3;
  }
  v7 = *v5;
  v8 = (struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher **)(this + 9);
  v9 = this[9];
  this[9] = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v9 + 16LL))(v9);
  Instance = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 48LL))(v7, (char *)this + 72);
  if ( Instance < 0 )
  {
    v4 = 41LL;
    goto LABEL_3;
  }
  *(_QWORD *)&v31 = CExclusiveModeListener::OnHmdAdded;
  DWORD2(v31) = 0;
  hstringHeader.Reserved.Reserved1 = this;
  *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = v31;
  v10 = 0LL;
  v11 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = 0LL;
  if ( v11 )
  {
    v10 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Graphics::Holographic::HolographicDisplay_____ptr64_Windows::Graphics::Holographic::IHolographicDisplay_____ptr64___::___Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::IHolographicDisplay_____ptr64____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::HolographicDisplay_____ptr64__Microsoft::WRL::FtmBase___lambda_fd84fb861bda8361cc33008a6db9ede3___1_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::IHolographicDisplay_____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::HolographicDisplay_____ptr64__Microsoft::WRL::FtmBase___lambda_fd84fb861bda8361cc33008a6db9ede3___1_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::IHolographicDisplay_____ptr64_(
            (__int64)v11,
            (__int64)&hstringHeader);
    v12 = v10;
  }
  v33 = v10;
  if ( v12 )
  {
    *(_QWORD *)&v31 = CExclusiveModeListener::OnHmdRemoved;
    DWORD2(v31) = 0;
    hstringHeader.Reserved.Reserved1 = this;
    *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = v31;
    v13 = 0LL;
    v14 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
    v15 = 0LL;
    if ( v14 )
    {
      v13 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher_____ptr64__Windows::Foundation::Internal::AggregateType_Windows::Graphics::Holographic::HolographicDisplay_____ptr64_Windows::Graphics::Holographic::IHolographicDisplay_____ptr64___::___Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::IHolographicDisplay_____ptr64____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::HolographicDisplay_____ptr64__Microsoft::WRL::FtmBase___lambda_fd84fb861bda8361cc33008a6db9ede3___1_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::IHolographicDisplay_____ptr64_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::HolographicDisplay_____ptr64__Microsoft::WRL::FtmBase___lambda_fd84fb861bda8361cc33008a6db9ede3___1_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher_____ptr64_Windows::Graphics::Holographic::IHolographicDisplay_____ptr64_(
              (__int64)v14,
              (__int64)&hstringHeader);
      v15 = v13;
    }
    *(_QWORD *)&v31 = v13;
    if ( !v15 )
    {
      Instance = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        47LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_44;
    }
    v16 = *v5;
    v30 = 0LL;
    if ( (*(int (__fastcall **)(__int64, struct Windows::Graphics::Holographic::IHolographicDisplay **))(*(_QWORD *)v16 + 64LL))(
           v16,
           &v30) >= 0
      && v30
      && (v17 = CExclusiveModeListener::OnHmdAdded((CExclusiveModeListener *)this, *v8, v30), Instance = v17, v17 < 0) )
    {
      v18 = (unsigned int)v17;
      v19 = 53LL;
    }
    else
    {
      v20 = (*(__int64 (__fastcall **)(struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *, __int64, char *))(*(_QWORD *)*v8 + 56LL))(
              *v8,
              v12,
              (char *)this + 120);
      Instance = v20;
      if ( v20 >= 0 )
      {
        v21 = (*(__int64 (__fastcall **)(struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *, __int64, char *))(*(_QWORD *)*v8 + 72LL))(
                *v8,
                v15,
                (char *)this + 128);
        Instance = v21;
        if ( v21 >= 0 )
        {
          v22 = (*(__int64 (__fastcall **)(struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *))(*(_QWORD *)*v8 + 120LL))(*v8);
          Instance = v22;
          if ( v22 >= 0 )
          {
            v29 = 0;
            v23 = RtlQueryWnfStateData(
                    &v29,
                    WNF_SHEL_APPLICATION_SPATIAL_INFO_UPDATE,
                    CExclusiveModeListener::SpatialApplicationInfoUpdateCallback,
                    this,
                    0LL);
            Instance = v23 | 0x10000000;
            if ( v23 >= 0 )
            {
              v24 = RtlSubscribeWnfStateChangeNotification(
                      this + 44,
                      WNF_SHEL_APPLICATION_SPATIAL_INFO_UPDATE,
                      v29,
                      CExclusiveModeListener::SpatialApplicationInfoUpdateCallback,
                      this,
                      0LL,
                      0,
                      0);
              Instance = v24 | 0x10000000;
              if ( v24 >= 0 )
              {
                v29 = 0;
                v25 = RtlQueryWnfStateData(
                        &v29,
                        WNF_HOLO_SHELL_STATE_INTERACTIVE_USER,
                        CExclusiveModeListener::HoloshellStateChangeCallback,
                        this,
                        0LL);
                Instance = v25 | 0x10000000;
                if ( v25 >= 0 )
                {
                  v26 = RtlSubscribeWnfStateChangeNotification(
                          this + 45,
                          WNF_HOLO_SHELL_STATE_INTERACTIVE_USER,
                          v29,
                          CExclusiveModeListener::HoloshellStateChangeCallback,
                          this,
                          0LL,
                          0,
                          0);
                  Instance = v26 | 0x10000000;
                  if ( v26 >= 0 )
                  {
                    CSpatialAudioResourceManagerTraceLogger::LogExclusiveModeListenerRunning(v27, 1);
                    *((_BYTE *)this + 377) = 1;
                    Instance = CExclusiveModeListener::UpdateExclusiveViewingMode((CExclusiveModeListener *)this);
                    goto LABEL_43;
                  }
                  v19 = 96LL;
                }
                else
                {
                  v19 = 87LL;
                }
              }
              else
              {
                v19 = 77LL;
              }
            }
            else
            {
              v19 = 68LL;
            }
            v18 = (unsigned int)Instance;
          }
          else
          {
            v18 = (unsigned int)v22;
            v19 = 58LL;
          }
        }
        else
        {
          v18 = (unsigned int)v21;
          v19 = 57LL;
        }
      }
      else
      {
        v18 = (unsigned int)v20;
        v19 = 56LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v19,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)v18);
LABEL_43:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v30);
LABEL_44:
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    goto LABEL_46;
  }
  Instance = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    44LL,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
    (const char *)0x8007000ELL);
LABEL_46:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)Instance;
}
