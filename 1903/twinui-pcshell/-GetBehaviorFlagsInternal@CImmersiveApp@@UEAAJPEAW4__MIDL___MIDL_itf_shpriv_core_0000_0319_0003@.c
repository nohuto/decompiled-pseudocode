/*
 * XREFs of ?GetBehaviorFlagsInternal@CImmersiveApp@@UEAAJPEAW4__MIDL___MIDL_itf_shpriv_core_0000_0319_0003@@@Z @ 0x18007BD70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x18007BE94 (-IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CImmersiveApp::GetBehaviorFlagsInternal(
        unsigned __int64 this,
        enum __MIDL___MIDL_itf_shpriv_core_0000_0319_0003 *a2)
{
  int v4; // r14d
  void *v5; // rbx
  __int64 (__fastcall *v6)(void *, _QWORD, __int64 *); // rdi
  void *v8; // rbx
  int (__fastcall *v9)(void *, unsigned __int64, struct IUnknown **); // rdi
  __int64 v10; // [rsp+60h] [rbp+30h] BYREF
  void *v11; // [rsp+68h] [rbp+38h] BYREF
  struct IUnknown *v12; // [rsp+70h] [rbp+40h] BYREF

  LODWORD(v10) = 0;
  *(_DWORD *)a2 = 0;
  v11 = 0LL;
  if ( *(_BYTE *)(this + 624) )
  {
    v4 = -2147019873;
  }
  else
  {
    v12 = 0LL;
    LODWORD(v10) = 2;
    (*(void (__fastcall **)(unsigned __int64, GUID *, struct IUnknown **))(*(_QWORD *)(this - 64) + 32LL))(
      this - 64,
      &GUID_00000000_0000_0000_c000_000000000046,
      &v12);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
    v4 = IAMPrivate_QueryObject(
           v12,
           (const struct _GUID *)&SID_ImmersiveApplicationManagerPriv,
           &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
           &v11);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
    if ( v4 >= 0 )
    {
      v10 = 0LL;
      v5 = v11;
      v6 = *(__int64 (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)v11 + 56LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
      v4 = v6(v5, *(_QWORD *)(this + 480), &v10);
      if ( v4 >= 0 )
      {
        *(_DWORD *)a2 = *(_DWORD *)(this + 388);
        v4 = 0;
        if ( *(_BYTE *)(v10 + 33) || *(_BYTE *)(v10 + 35) )
        {
          v12 = 0LL;
          v8 = v11;
          v9 = *(int (__fastcall **)(void *, unsigned __int64, struct IUnknown **))(*(_QWORD *)v11 + 112LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
          if ( v9(v8, this & -(__int64)(this != 112), &v12) < 0 )
            *(_DWORD *)a2 |= 0x80000000;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
        }
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  return (unsigned int)v4;
}
