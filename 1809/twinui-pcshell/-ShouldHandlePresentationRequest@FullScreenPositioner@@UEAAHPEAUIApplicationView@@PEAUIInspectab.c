/*
 * XREFs of ?ShouldHandlePresentationRequest@FullScreenPositioner@@UEAAHPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x180142C70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall FullScreenPositioner::ShouldHandlePresentationRequest(
        FullScreenPositioner *this,
        struct IApplicationView *a2,
        struct IInspectable *a3)
{
  unsigned int v5; // edi
  __int64 v7[2]; // [rsp+20h] [rbp-10h] BYREF
  int v8; // [rsp+60h] [rbp+30h] BYREF
  __int64 v9; // [rsp+68h] [rbp+38h] BYREF

  v7[1] = -2LL;
  v5 = 0;
  v7[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v7);
  if ( ((__int64 (__fastcall *)(struct IInspectable *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_c7eb508d_5e36_46e2_8af4_b6f813539dbf,
         v7) >= 0 )
  {
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v7[0] + 24LL))(v7[0], &v8) < 0 )
    {
      v9 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
      if ( (*(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 264LL))(a2, &v9) >= 0 )
        LOBYTE(v5) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9) == 3;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    }
    else
    {
      LOBYTE(v5) = v8 == 1;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v7);
  return v5;
}
