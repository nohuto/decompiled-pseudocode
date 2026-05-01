/*
 * XREFs of ?GetRunningApplicationsFromPackageId@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationArray@@@Z @ 0x180131DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x18005BEE4 (-s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_d353c244007572bd2dd605324d11ed33___ @ 0x18012A22C (CActivationBasedCollection_Microsoft--WRL--ComPtr_IImmersiveApplicationInternal___-_ea_18012A22C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::GetRunningApplicationsFromPackageId(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        struct IImmersiveApplicationArray **a3)
{
  RTL_SRWLOCK *v6; // rbx
  const struct _GUID *v7; // rcx
  int v8; // edi
  _QWORD v10[2]; // [rsp+30h] [rbp-20h] BYREF
  void *v11; // [rsp+40h] [rbp-10h] BYREF
  int v12; // [rsp+90h] [rbp+40h] BYREF
  void *v13; // [rsp+98h] [rbp+48h] BYREF

  *a3 = 0LL;
  v6 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  v8 = CImmersiveAppArray::s_CreateInstance(v7, &v13);
  v12 = v8;
  if ( v8 >= 0 )
  {
    v10[0] = &v12;
    v10[1] = a2;
    v11 = v13;
    if ( v13 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 8LL))(v13);
    CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_d353c244007572bd2dd605324d11ed33___(
      (__int64)this + 456,
      (__int64)v10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    v8 = v12;
    if ( v12 >= 0 )
    {
      v8 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IImmersiveApplicationArray **))v13)(
             v13,
             &GUID_c6ed6dac_8fac_4598_a74c_69020137149c,
             a3);
      v12 = v8;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return (unsigned int)v8;
}
