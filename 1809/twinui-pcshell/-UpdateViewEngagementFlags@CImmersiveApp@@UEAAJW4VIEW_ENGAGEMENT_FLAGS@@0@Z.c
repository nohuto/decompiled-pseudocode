/*
 * XREFs of ?UpdateViewEngagementFlags@CImmersiveApp@@UEAAJW4VIEW_ENGAGEMENT_FLAGS@@0@Z @ 0x180072650
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::UpdateViewEngagementFlags(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  *(_DWORD *)(a1 + 784) |= a2;
  *(_DWORD *)(a1 + 788) &= ~a3;
  *(_DWORD *)(a1 + 788) |= a3;
  if ( a2 )
  {
    v9 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
    if ( (*(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)(a1 + 16) + 352LL))(
           a1 + 16,
           1LL,
           &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee,
           &v9) >= 0 )
    {
      v8 = 0LL;
      v6 = v9;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
      if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v6 + 40LL))(
             v6,
             &GUID_d6ecd9bf_13b0_4264_955c_6e96d28a37ae,
             &v8) >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 656LL))(v8, a2, a3);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
  }
  return 0LL;
}
