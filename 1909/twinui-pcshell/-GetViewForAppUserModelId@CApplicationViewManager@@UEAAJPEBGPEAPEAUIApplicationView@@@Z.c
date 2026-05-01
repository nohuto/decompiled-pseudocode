/*
 * XREFs of ?GetViewForAppUserModelId@CApplicationViewManager@@UEAAJPEBGPEAPEAUIApplicationView@@@Z @ 0x180175360
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034EE0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180148704 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewManager::GetViewForAppUserModelId(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2,
        struct IApplicationView **a3)
{
  RTL_SRWLOCK *v6; // rbx
  struct IApplicationView *v7; // rsi
  char *i; // r14
  __int64 v9; // rdi
  LPCWCH lpString2; // [rsp+38h] [rbp-18h] BYREF
  __int64 v12; // [rsp+40h] [rbp-10h]
  __int64 v13; // [rsp+48h] [rbp-8h]
  struct IApplicationView *v14; // [rsp+90h] [rbp+40h] BYREF
  RTL_SRWLOCK *v15; // [rsp+A0h] [rbp+50h]

  v6 = this + 67;
  v15 = this + 67;
  AcquireSRWLockShared(this + 67);
  *a3 = 0LL;
  v7 = 0LL;
  v14 = 0LL;
  for ( i = 0LL; !v7 && i < this[69].Ptr; ++i )
  {
    lpString2 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v9 = *((_QWORD *)this[68].Ptr + (_QWORD)i);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
    v12 = -1LL;
    v13 = -1LL;
    if ( (*(int (__fastcall **)(__int64, LPCWCH *))(*(_QWORD *)v9 + 136LL))(v9, &lpString2) >= 0
      && CompareStringOrdinal(a2, -1, lpString2, -1, 1) == 2 )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v14, (__int64 *)this[68].Ptr + (_QWORD)i);
      v7 = v14;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
  }
  v14 = 0LL;
  *a3 = v7;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v7 == 0LL ? 0x8002802B : 0;
}
