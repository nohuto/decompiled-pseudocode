/*
 * XREFs of ?OperationRequestComplete@ViewWrapperBase@@UEAAXW4ViewOperationRequestType@@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180242B70
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180025E48 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??4AgileGitPtr@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800E5AB0 (--4AgileGitPtr@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?InternalRelease@?$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1801BE674 (-InternalRelease@-$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VViewHandledEventArgs@@V1@_N@Details@WRL@Microsoft@@YAJPEAPEAVViewHandledEventArgs@@$$QEA_N@Z @ 0x18023EE94 (--$MakeAndInitialize@VViewHandledEventArgs@@V1@_N@Details@WRL@Microsoft@@YAJPEAPEAVViewHandledEv.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ViewWrapperBase::OperationRequestComplete(__int64 a1, int a2, __int32 a3)
{
  RTL_SRWLOCK *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rbx
  RTL_SRWLOCK *v8; // rsi
  void *v9; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+28h] [rbp-18h] BYREF
  __int64 v11[2]; // [rsp+30h] [rbp-10h] BYREF
  bool v12; // [rsp+68h] [rbp+28h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  v11[1] = -2LL;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v5 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 160) + 296LL);
      AcquireSRWLockExclusive(v5);
      v6 = *(_QWORD *)(a1 + 472);
      *(_QWORD *)(a1 + 472) = 0LL;
      v11[0] = v6;
      if ( v5 )
        ReleaseSRWLockExclusive(v5);
      if ( v6 )
      {
        _InterlockedExchange((volatile __int32 *)(v6 + 176), a3);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v6 + 16) + 128LL))(v6 + 16);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
    }
  }
  else
  {
    v7 = 0LL;
    v10 = 0LL;
    v8 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 160) + 296LL);
    AcquireSRWLockExclusive(v8);
    if ( *(_BYTE *)(a1 + 460) )
    {
      *(_BYTE *)(a1 + 460) = 0;
      AgileGitPtr::operator=(&v10, (__int64 *)(a1 + 464));
      v7 = v10;
    }
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
    v9 = 0LL;
    if ( v7 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
      if ( (int)AgileGitPtr::CopyLocal((AgileGitPtr *)&v10, &GUID_74a6aa4a_97db_52bb_9d5b_d1dc398860b1, &v9) >= 0 )
      {
        v13 = 0LL;
        v12 = a3 == 1;
        Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease(&v13);
        if ( (int)Microsoft::WRL::Details::MakeAndInitialize<ViewHandledEventArgs,ViewHandledEventArgs,bool>(&v13, &v12) >= 0 )
          (*(void (__fastcall **)(void *, _QWORD, __int64))(*(_QWORD *)v9 + 24LL))(
            v9,
            a1 & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 - 8) >> 64),
            v13);
        Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease(&v13);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  }
}
