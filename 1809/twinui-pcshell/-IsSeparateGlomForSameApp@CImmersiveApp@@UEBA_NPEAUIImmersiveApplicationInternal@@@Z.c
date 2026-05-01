/*
 * XREFs of ?IsSeparateGlomForSameApp@CImmersiveApp@@UEBA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x18011D870
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CImmersiveApp::IsSeparateGlomForSameApp(CImmersiveApp *this, struct IImmersiveApplicationInternal *a2)
{
  bool v4; // di
  int v5; // eax
  char v6; // bl
  bool v7; // al
  int v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  v4 = (*(unsigned int (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 160LL))(a2) != *((_DWORD *)this + 114);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  v5 = (**(__int64 (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))a2)(
         a2,
         &GUID_2faff0c1_f38f_43dc_b5f8_8d00829024a1,
         &v10);
  v6 = 1;
  v7 = v5 >= 0
    && (*(int (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v10 + 32LL))(v10, *((_QWORD *)this + 95), &v9) >= 0
    && v9;
  if ( !v4 || !v7 )
    v6 = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v6;
}
