/*
 * XREFs of ?GetAllApplicationsByAppID@CImmersiveAppArray@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x1800FD0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800ED150 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveAppArray::GetAllApplicationsByAppID(
        CImmersiveAppArray *this,
        const unsigned __int16 *a2,
        struct IObjectArray **a3)
{
  char v6; // r14
  const struct _GUID *v7; // rdx
  __int64 v8; // rcx
  int Instance; // ebx
  unsigned int v10; // edi
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  void *v13[3]; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v14; // [rsp+90h] [rbp+40h] BYREF
  int v15; // [rsp+98h] [rbp+48h] BYREF

  v13[1] = (void *)-2LL;
  *a3 = 0LL;
  v6 = 0;
  v13[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
  Instance = CEnumerableObjectCollection::CreateInstance(v8, v7, v13);
  if ( Instance >= 0 )
  {
    Instance = (*(__int64 (__fastcall **)(CImmersiveAppArray *, unsigned int *))(*(_QWORD *)this + 24LL))(this, &v14);
    v10 = 0;
    if ( Instance >= 0 )
    {
      do
      {
        if ( v10 >= v14 )
          break;
        v12 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
        if ( (*(int (__fastcall **)(CImmersiveAppArray *, _QWORD, GUID *, __int64 *))(*(_QWORD *)this + 32LL))(
               this,
               v10,
               &GUID_8b14e88b_5663_4caf_b196_c31479262831,
               &v12) >= 0
          && (*(int (__fastcall **)(__int64, const unsigned __int16 *, int *))(*(_QWORD *)v12 + 88LL))(v12, a2, &v15) >= 0
          && v15 )
        {
          Instance = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v13[0] + 40LL))(v13[0], v12);
          v6 = 1;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
        ++v10;
      }
      while ( Instance >= 0 );
      if ( Instance >= 0 )
      {
        if ( !v6 )
          Instance = -2147319765;
        if ( Instance >= 0 )
          Instance = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v13[0])(
                       v13[0],
                       &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                       a3);
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v13);
  return (unsigned int)Instance;
}
