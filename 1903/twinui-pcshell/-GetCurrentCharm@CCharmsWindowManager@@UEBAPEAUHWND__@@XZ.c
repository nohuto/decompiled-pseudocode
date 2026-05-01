/*
 * XREFs of ?GetCurrentCharm@CCharmsWindowManager@@UEBAPEAUHWND__@@XZ @ 0x18007AD60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCharmsWindowManager::GetCurrentCharm(CCharmsWindowManager *this)
{
  __int64 v1; // rbx
  __int64 v3; // rbx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( (*((_BYTE *)this + 56) & 1) != 0 )
  {
    v4 = **((_QWORD **)this + 3);
    v3 = v4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v4);
    v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v4);
  }
  return v1;
}
