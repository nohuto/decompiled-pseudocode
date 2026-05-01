/*
 * XREFs of ?_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1800404EC
 * Callers:
 *     ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x18003FB00 (-HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown.c)
 * Callees:
 *     ?UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x180040624 (-UpdateMonitorForAppAsync@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2)
{
  __int64 (__fastcall *v4)(struct IImmersiveApplicationInternal *, __int64 *); // rbx
  int v5; // edi
  RTL_SRWLOCK *v6; // rbx
  __int64 (__fastcall *v7)(struct IImmersiveApplicationInternal *, __int64 *); // rdi
  __int64 v9; // [rsp+68h] [rbp+38h] BYREF
  __int64 v10; // [rsp+70h] [rbp+40h] BYREF
  PSRWLOCK v11; // [rsp+78h] [rbp+48h]

  v10 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = *(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, __int64 *))(*(_QWORD *)a2 + 504LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  v5 = v4(a2, &v10);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v5 >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10);
    v9 = 0LL;
    v6 = CApplicationManagerUtility::g_pIAMGlobals;
    v11 = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v7 = *(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, __int64 *))(*(_QWORD *)a2 + 496LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    v5 = v7(a2, &v9);
    if ( v6 )
      ReleaseSRWLockShared(v6);
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 176LL))(v9, 1LL);
      if ( v5 >= 0 )
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 76) + 88LL))(*((_QWORD *)this + 76), v9);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    if ( v5 >= 0 )
      CApplicationManager::UpdateMonitorForAppAsync(this, a2);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  return (unsigned int)v5;
}
