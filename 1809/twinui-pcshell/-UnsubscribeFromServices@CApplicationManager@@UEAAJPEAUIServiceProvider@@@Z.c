/*
 * XREFs of ?UnsubscribeFromServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F5EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800E75AC (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::UnsubscribeFromServices(CApplicationManager *this, struct IServiceProvider *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+20h] BYREF
  __int64 v11; // [rsp+70h] [rbp+30h] BYREF
  __int64 v12; // [rsp+78h] [rbp+38h] BYREF

  v9[1] = -2LL;
  v9[0] = 0LL;
  if ( *((_DWORD *)this + 176) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9);
    if ( ((int (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &SID_ImmersiveShellHookService,
           &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
           v9) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9[0] + 32LL))(v9[0], *((unsigned int *)this + 176));
  }
  v4 = *((_QWORD *)this + 62);
  if ( v4 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 88LL))(v4, *((unsigned int *)this + 181));
  if ( *((_DWORD *)this + 183) )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    if ( ((int (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &SID_IImmersiveMonitorService,
           &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
           &v10) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 32LL))(v10, *((unsigned int *)this + 183));
      *((_DWORD *)this + 183) = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  }
  if ( *((_QWORD *)this + 92) )
  {
    v11 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    if ( ((int (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &SID_ViewEventDispatcher,
           &GUID_f5ef6433_2dc3_4aeb_b387_7c6cba1c012e,
           &v11) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 56LL))(v11, *((_QWORD *)this + 92));
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  v12 = 0LL;
  if ( *((_DWORD *)this + 182) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    if ( ((int (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &IID_IImmersiveSessionIdleDetector,
           &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
           &v12) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 40LL))(v12, *((unsigned int *)this + 182));
      *((_DWORD *)this + 182) = 0;
    }
  }
  v5 = *((_QWORD *)this + 58);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
  if ( *((_QWORD *)this + 59) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 60) + 32LL))(*((_QWORD *)this + 60));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 55) + 32LL))(
      *((_QWORD *)this + 55),
      *((_QWORD *)this + 59));
  }
  v6 = *((_QWORD *)this + 57);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 48LL))(v6);
  v7 = *((_QWORD *)this + 64);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 104LL))(v7);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v10 = *((_QWORD *)this + 87);
  *((_QWORD *)this + 87) = 0LL;
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  SmartCookie::Unregister((CApplicationManager *)((char *)this + 744));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9);
  return 0LL;
}
