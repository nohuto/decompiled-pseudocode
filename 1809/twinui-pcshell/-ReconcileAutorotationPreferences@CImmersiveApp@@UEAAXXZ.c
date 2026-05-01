/*
 * XREFs of ?ReconcileAutorotationPreferences@CImmersiveApp@@UEAAXXZ @ 0x180047F30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CImmersiveApp::ReconcileAutorotationPreferences(CImmersiveApp *this)
{
  char *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // [rsp+60h] [rbp+20h] BYREF
  __int64 v7; // [rsp+68h] [rbp+28h] BYREF
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp+30h] BYREF

  v2 = (char *)this - 64;
  v7 = 0LL;
  LODWORD(v6) = 2;
  (*(void (__fastcall **)(char *, GUID *, __int64 *))(*((_QWORD *)this - 8) + 32LL))(
    (char *)this - 64,
    &GUID_00000000_0000_0000_c000_000000000046,
    &v7);
  v3 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    if ( (*((_BYTE *)this + 440) & 2) != 0 )
    {
      v7 = 0LL;
      v8 = 0LL;
      LODWORD(v6) = 9;
      (*(void (__fastcall **)(char *, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v2 + 32LL))(
        v2,
        &GUID_00000000_0000_0000_c000_000000000046,
        &v8);
      v4 = v7;
      if ( v7 )
      {
        v7 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      v7 = 0LL;
      v6 = 0LL;
      v5 = (**v8)(v8, &GUID_a6087428_3be3_4d73_b308_7c04a540bf1a, &v6);
      if ( v5 >= 0 )
        v5 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL))(
               v6,
               &GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee,
               &GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee,
               &v7);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
      if ( v5 >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
    }
  }
}
