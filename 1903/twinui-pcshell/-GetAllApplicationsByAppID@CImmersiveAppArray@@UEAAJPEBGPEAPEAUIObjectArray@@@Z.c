/*
 * XREFs of ?GetAllApplicationsByAppID@CImmersiveAppArray@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x180123060
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x180026898 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveAppArray::GetAllApplicationsByAppID(
        CImmersiveAppArray *this,
        const unsigned __int16 *a2,
        struct IObjectArray **a3)
{
  char v6; // r15
  const struct _GUID *v7; // rdx
  __int64 v8; // rcx
  int Instance; // edi
  unsigned int v10; // esi
  int (__fastcall *v11)(CImmersiveAppArray *, _QWORD, GUID *, __int64 *); // rbx
  __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  void *v14[3]; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+A0h] [rbp+50h] BYREF
  int v16; // [rsp+A8h] [rbp+58h] BYREF

  v14[1] = (void *)-2LL;
  *a3 = 0LL;
  v6 = 0;
  v14[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v14);
  Instance = CEnumerableObjectCollection::CreateInstance(v8, v7, v14);
  if ( Instance >= 0 )
  {
    Instance = (*(__int64 (__fastcall **)(CImmersiveAppArray *, unsigned int *))(*(_QWORD *)this + 24LL))(this, &v15);
    v10 = 0;
    if ( Instance >= 0 )
    {
      do
      {
        if ( v10 >= v15 )
          break;
        v13 = 0LL;
        v11 = *(int (__fastcall **)(CImmersiveAppArray *, _QWORD, GUID *, __int64 *))(*(_QWORD *)this + 32LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
        if ( v11(this, v10, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v13) >= 0
          && (*(int (__fastcall **)(__int64, const unsigned __int16 *, int *))(*(_QWORD *)v13 + 88LL))(v13, a2, &v16) >= 0
          && v16 )
        {
          Instance = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v14[0] + 40LL))(v14[0], v13);
          v6 = 1;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
        ++v10;
      }
      while ( Instance >= 0 );
      if ( Instance >= 0 )
      {
        if ( !v6 )
          Instance = -2147319765;
        if ( Instance >= 0 )
          Instance = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v14[0])(
                       v14[0],
                       &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                       a3);
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v14);
  return (unsigned int)Instance;
}
