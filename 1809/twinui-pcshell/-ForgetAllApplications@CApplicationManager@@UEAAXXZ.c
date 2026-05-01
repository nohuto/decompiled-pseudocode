/*
 * XREFs of ?ForgetAllApplications@CApplicationManager@@UEAAXXZ @ 0x1800EDC40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x1800F6E9C (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::ForgetAllApplications(CApplicationManager *this)
{
  __int64 i; // rsi
  __int64 v3; // rbx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  for ( i = *((_QWORD *)this + 50); i; --i )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 49) + 8 * i - 8);
    v3 = v4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v4);
    CApplicationManager::_ForgetApplicationNoLock((char *)this - 240, v3, 2LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v4);
  }
}
