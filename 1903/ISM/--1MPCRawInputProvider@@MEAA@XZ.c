/*
 * XREFs of ??1MPCRawInputProvider@@MEAA@XZ @ 0x180093D9C
 * Callers:
 *     ??_GMPCRawInputProvider@@MEAAPEAXI@Z @ 0x1800940E0 (--_GMPCRawInputProvider@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18001F94C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x180020148 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18002B42C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180056650 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnregisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXI@Z @ 0x18007C6C4 (-UnregisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ @ 0x1800945EC (-InternalRelease@-$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x1800961D8 (-Unregister@SpectrumListener@@QEAAXXZ.c)
 *     ??1MPCHeadMovementDetector@@QEAA@XZ @ 0x180096818 (--1MPCHeadMovementDetector@@QEAA@XZ.c)
 */

void __fastcall MPCRawInputProvider::~MPCRawInputProvider(MPCRawInputProvider *this)
{
  RTL_SRWLOCK *Instance; // rax
  SpectrumListener *v3; // rcx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  _QWORD *v7; // rdi
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  void *v10; // rcx
  _QWORD *v11; // rdi
  _QWORD *v12; // rsi
  std::_Ref_count_base *v13; // rcx
  void *v14; // rdx
  wil::details *v15; // rcx
  void *v16; // rdi
  _QWORD *v17; // rdi
  _QWORD *v18; // rsi
  std::_Ref_count_base *v19; // rcx
  __int64 v20; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *(_QWORD *)this = &MPCRawInputProvider::`vftable';
  Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
  MPC3DStateHelper::UnregisterFor3DCompositorRunningChanged(Instance, *((_DWORD *)this + 21));
  v3 = (SpectrumListener *)*((_QWORD *)this + 6);
  if ( v3 )
    SpectrumListener::Unregister(v3);
  Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease((char *)this + 48);
  if ( *((_QWORD *)this + 9) )
  {
    v4 = *((_QWORD *)this + 8);
    if ( v4 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 256LL))(v4);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          72LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
          (const char *)(unsigned int)v5);
    }
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 216LL))(*((_QWORD *)this + 8));
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      75LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      (const char *)(unsigned int)v6);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 8);
  if ( *((_QWORD *)this + 2) )
  {
    v7 = (_QWORD *)*((_QWORD *)this + 3);
    v8 = (_QWORD *)*((_QWORD *)this + 4);
    while ( v7 != v8 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 56LL))(*((_QWORD *)this + 2), *v7);
      v7 += 2;
    }
  }
  v9 = *((_QWORD *)this + 2);
  if ( v9 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = (void *)*((_QWORD *)this + 23);
  if ( v10 )
  {
    std::_Deallocate<16,0>(
      v10,
      (const struct std::nothrow_t *)(2032 * ((*((_QWORD *)this + 25) - (_QWORD)v10) / 2032LL)));
    *((_QWORD *)this + 23) = 0LL;
    *((_QWORD *)this + 24) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
  }
  std::vector<Windows::UI::Color>::_Tidy((__int64)this + 160);
  v11 = (_QWORD *)*((_QWORD *)this + 17);
  if ( v11 )
  {
    v12 = (_QWORD *)*((_QWORD *)this + 18);
    if ( v11 != v12 )
    {
      do
      {
        v13 = (std::_Ref_count_base *)v11[1];
        if ( v13 )
          std::_Ref_count_base::_Decref(v13);
        v11 += 2;
      }
      while ( v11 != v12 );
      v11 = (_QWORD *)*((_QWORD *)this + 17);
    }
    std::_Deallocate<16,0>(
      v11,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 19) - (_QWORD)v11) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v15 = (wil::details *)*((_QWORD *)this + 9);
  if ( v15 )
    wil::details::CloseHandle(v15, v14);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 8);
  v16 = (void *)*((_QWORD *)this + 7);
  if ( v16 )
  {
    MPCHeadMovementDetector::~MPCHeadMovementDetector(*((MPCHeadMovementDetector **)this + 7));
    operator delete(v16, (const struct std::nothrow_t *)0xA8);
  }
  Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease((char *)this + 48);
  v17 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v17 )
  {
    v18 = (_QWORD *)*((_QWORD *)this + 4);
    if ( v17 != v18 )
    {
      do
      {
        v19 = (std::_Ref_count_base *)v17[1];
        if ( v19 )
          std::_Ref_count_base::_Decref(v19);
        v17 += 2;
      }
      while ( v17 != v18 );
      v17 = (_QWORD *)*((_QWORD *)this + 3);
    }
    std::_Deallocate<16,0>(
      v17,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 5) - (_QWORD)v17) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  v20 = *((_QWORD *)this + 2);
  if ( v20 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  *((_DWORD *)this + 3) = -1073741823;
}
