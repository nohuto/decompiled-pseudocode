/*
 * XREFs of ?_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18002D6A8
 * Callers:
 *     ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@@Z @ 0x18002D980 (-HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown.c)
 * Callees:
 *     CDelayIAMOperations::AddOperation__lambda_10b4c988f85343d83f62704ef48f9972___ @ 0x18002D820 (CDelayIAMOperations--AddOperation__lambda_10b4c988f85343d83f62704ef48f9972___.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2)
{
  int v4; // edi
  RTL_SRWLOCK *v5; // rbx
  CApplicationManager *v7; // [rsp+28h] [rbp-18h] BYREF
  struct IImmersiveApplicationInternal *v8; // [rsp+30h] [rbp-10h] BYREF
  struct IImmersiveApplicationInternal *v9; // [rsp+78h] [rbp+38h] BYREF
  __int64 v10; // [rsp+80h] [rbp+40h] BYREF
  PSRWLOCK v11; // [rsp+88h] [rbp+48h]

  v10 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  v4 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, __int64 *))(*(_QWORD *)a2 + 504LL))(a2, &v10);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v4 >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10);
    v9 = 0LL;
    v5 = CApplicationManagerUtility::g_pIAMGlobals;
    v11 = CApplicationManagerUtility::g_pIAMGlobals;
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    v4 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, struct IImmersiveApplicationInternal **))(*(_QWORD *)a2 + 496LL))(
           a2,
           &v9);
    if ( v5 )
      ReleaseSRWLockShared(v5);
    if ( v4 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, __int64))(*(_QWORD *)v9 + 176LL))(v9, 1LL);
      if ( v4 >= 0 )
        (*(void (__fastcall **)(_QWORD, struct IImmersiveApplicationInternal *))(**((_QWORD **)this + 76) + 88LL))(
          *((_QWORD *)this + 76),
          v9);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    if ( v4 >= 0 )
    {
      v9 = a2;
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 8LL))(a2);
      v7 = this;
      v8 = a2;
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 8LL))(a2);
      CDelayIAMOperations::AddOperation__lambda_10b4c988f85343d83f62704ef48f9972___(*((_QWORD *)this + 100), &v7);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  return (unsigned int)v4;
}
