/*
 * XREFs of ?OperationRequestComplete@ViewWrapperBase@@UEAAXW4ViewOperationRequestType@@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180298C30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x180044D90 (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1802105BC (-InternalRelease@-$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VViewHandledEventArgs@@V1@_N@Details@WRL@Microsoft@@YAJPEAPEAVViewHandledEventArgs@@$$QEA_N@Z @ 0x180295024 (--$MakeAndInitialize@VViewHandledEventArgs@@V1@_N@Details@WRL@Microsoft@@YAJPEAPEAVViewHandledEv.c)
 */

// Hidden C++ exception states: #wind=4
_UNKNOWN **__fastcall ViewWrapperBase::OperationRequestComplete(__int64 a1, int a2, __int32 a3)
{
  _UNKNOWN **result; // rax
  RTL_SRWLOCK *v6; // rsi
  __int64 v7; // rbx
  RTL_SRWLOCK *v8; // rsi
  __int64 v9; // rbx
  __int64 *v10; // rax
  struct IInspectable *v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+28h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14[3]; // [rsp+38h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+18h] BYREF
  bool v16; // [rsp+78h] [rbp+28h] BYREF
  volatile signed __int64 *v17; // [rsp+88h] [rbp+38h] BYREF

  result = &retaddr;
  v14[1] = -2LL;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v6 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 160) + 280LL);
      AcquireSRWLockExclusive(v6);
      v7 = *(_QWORD *)(a1 + 472);
      *(_QWORD *)(a1 + 472) = 0LL;
      v14[0] = v7;
      if ( v6 )
        ReleaseSRWLockExclusive(v6);
      if ( v7 )
      {
        _InterlockedExchange((volatile __int32 *)(v7 + 168), a3);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v7 + 16) + 128LL))(v7 + 16);
      }
      return (_UNKNOWN **)Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
    }
  }
  else
  {
    v12 = 0LL;
    v8 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 160) + 280LL);
    AcquireSRWLockExclusive(v8);
    v9 = 0LL;
    if ( *(_BYTE *)(a1 + 460) )
    {
      *(_BYTE *)(a1 + 460) = 0;
      v10 = (__int64 *)(a1 + 464);
      if ( &v13 != (__int64 *)(a1 + 464) )
      {
        v9 = *v10;
        *v10 = 0LL;
      }
      v13 = 0LL;
      v12 = v9;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    }
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
    v11 = 0LL;
    if ( v9 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
      if ( (int)Microsoft::WRL::WeakRef::InternalResolve(
                  (Microsoft::WRL::WeakRef *)&v12,
                  &GUID_4874a3f0_c856_52e6_ab24_d29fbf386438,
                  &v11) >= 0 )
      {
        v17 = 0LL;
        v16 = a3 == 1;
        Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease(&v17);
        if ( (int)Microsoft::WRL::Details::MakeAndInitialize<ViewHandledEventArgs,ViewHandledEventArgs,bool>(&v17, &v16) >= 0 )
          ((void (__fastcall *)(struct IInspectable *, __int64, volatile signed __int64 *))v11->lpVtbl->GetIids)(
            v11,
            a1 & -(__int64)(a1 != 8),
            v17);
        Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease(&v17);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    return (_UNKNOWN **)Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
  return result;
}
