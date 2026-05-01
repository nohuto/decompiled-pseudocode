/*
 * XREFs of ?ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z @ 0x1801112B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z @ 0x18011BB24 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x18011C1BC (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::ForgetApplicationsInPackage(
        CApplicationManager *this,
        const unsigned __int16 *a2)
{
  __int64 i; // rsi
  __int64 v5; // rbx
  __int64 v6; // r8
  const unsigned __int16 *v7; // rax
  bool v8; // bl
  __int64 v10; // [rsp+60h] [rbp+30h] BYREF
  void *ppvOut; // [rsp+70h] [rbp+40h] BYREF
  IUnknown *punk; // [rsp+78h] [rbp+48h] BYREF

  LODWORD(v10) = 0;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  for ( i = *((_QWORD *)this + 61); i; --i )
  {
    v10 = *(_QWORD *)(*((_QWORD *)this + 60) + 8 * i - 8);
    v5 = v10;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
    LOBYTE(v6) = 1;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, const unsigned __int16 *, __int64))(*(_QWORD *)v5 + 320LL))(
           v5,
           a2,
           v6) )
    {
      CApplicationManager::_ForgetApplicationNoLock((char *)this - 152, v5, 2LL);
      v7 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
      CApplicationManager::_DeleteApplicationData((CApplicationManager *)((char *)this - 152), v7);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  ppvOut = 0LL;
  punk = 0LL;
  LODWORD(v10) = 2;
  (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 13) + 32LL))(
    (char *)this - 104,
    &GUID_00000000_0000_0000_c000_000000000046,
    &punk);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v8 = IUnknown_QueryService(
         punk,
         &GUID_b70e7ce8_5eb0_4e5a_af6c_05e57f1e87a3,
         &GUID_b70e7ce8_5eb0_4e5a_af6c_05e57f1e87a3,
         &ppvOut) >= 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  if ( v8 )
    (*(void (__fastcall **)(void *, const unsigned __int16 *))(*(_QWORD *)ppvOut + 56LL))(ppvOut, a2);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return 0LL;
}
