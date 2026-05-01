/*
 * XREFs of ?GetBehaviorFlagsInternal@CImmersiveApp@@UEAAJPEAW4__MIDL___MIDL_itf_shpriv_core_0000_0318_0003@@@Z @ 0x180079E00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x180079F28 (-IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CImmersiveApp::GetBehaviorFlagsInternal(
        unsigned __int64 this,
        enum __MIDL___MIDL_itf_shpriv_core_0000_0318_0003 *a2)
{
  signed int v4; // edi
  void *v5; // rbx
  void *v7; // rbx
  __int64 v8; // [rsp+60h] [rbp+30h] BYREF
  void *v9; // [rsp+68h] [rbp+38h] BYREF
  struct IUnknown *v10; // [rsp+70h] [rbp+40h] BYREF

  LODWORD(v8) = 0;
  *(_DWORD *)a2 = 0;
  v9 = 0LL;
  v4 = *(_BYTE *)(this + 592) != 0 ? 0x8007139F : 0;
  if ( !*(_BYTE *)(this + 592) )
  {
    v10 = 0LL;
    LODWORD(v8) = 2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
    (*(void (__fastcall **)(unsigned __int64, GUID *, struct IUnknown **))(*(_QWORD *)(this - 64) + 32LL))(
      this - 64,
      &GUID_00000000_0000_0000_c000_000000000046,
      &v10);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
    v4 = IAMPrivate_QueryObject(
           v10,
           (const struct _GUID *)&SID_ImmersiveApplicationManagerPriv,
           &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
           &v9);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
    if ( v4 >= 0 )
    {
      v8 = 0LL;
      v5 = v9;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
      v4 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)v5 + 56LL))(
             v5,
             *(_QWORD *)(this + 448),
             &v8);
      if ( v4 >= 0 )
      {
        *(_DWORD *)a2 = *(_DWORD *)(this + 356);
        v4 = 0;
        if ( *(_BYTE *)(v8 + 33) || *(_BYTE *)(v8 + 35) )
        {
          v10 = 0LL;
          v7 = v9;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
          if ( (*(int (__fastcall **)(void *, _QWORD, struct IUnknown **))(*(_QWORD *)v7 + 112LL))(
                 v7,
                 this & ((unsigned __int128)-(__int128)(this - 112) >> 64),
                 &v10) < 0 )
            *(_DWORD *)a2 |= 0x80000000;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
        }
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
  return (unsigned int)v4;
}
