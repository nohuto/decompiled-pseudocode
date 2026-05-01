/*
 * XREFs of ?UpdateViewEngagementFlags@CImmersiveApp@@UEAAJW4VIEW_ENGAGEMENT_FLAGS@@0@Z @ 0x180075A60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::UpdateViewEngagementFlags(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rdi
  int (__fastcall *v6)(__int64, __int64, GUID *, __int64 *); // rbx
  __int64 v7; // rbx
  int (__fastcall *v8)(__int64, GUID *, __int64 *); // rdi
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  *(_DWORD *)(a1 + 816) |= a2;
  *(_DWORD *)(a1 + 820) = a3 | ~a3 & *(_DWORD *)(a1 + 820);
  if ( a2 )
  {
    v11 = 0LL;
    v5 = a1 + 16;
    v6 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)(a1 + 16) + 352LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
    if ( v6(v5, 1LL, &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee, &v11) >= 0 )
    {
      v10 = 0LL;
      v7 = v11;
      v8 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v11 + 40LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
      if ( v8(v7, &GUID_f4a53d68_890b_4931_bdbf_71158377eece, &v10) >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 656LL))(v10, a2, a3);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
  }
  return 0LL;
}
