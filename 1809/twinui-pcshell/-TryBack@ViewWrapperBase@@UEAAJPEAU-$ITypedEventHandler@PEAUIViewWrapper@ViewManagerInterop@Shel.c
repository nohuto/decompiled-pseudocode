/*
 * XREFs of ?TryBack@ViewWrapperBase@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewHandledEventArgs@2345@@Foundation@Windows@@@Z @ 0x180245130
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??4AgileGitPtr@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800E5AB0 (--4AgileGitPtr@@QEAAAEAV0@$$QEAV0@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewWrapperBase::TryBack(__int64 a1, __int64 a2)
{
  int AgileReference; // ebx
  __int64 v5; // rcx
  RTL_SRWLOCK *v6; // rsi
  __int64 v7; // rdx
  int v8; // eax
  unsigned __int64 v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v12; // [rsp+50h] [rbp+20h] BYREF
  __int64 v13; // [rsp+60h] [rbp+30h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 8) + 112LL))(a1 - 8) )
  {
    v13 = 0LL;
    if ( a2 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      v12 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      AgileReference = RoGetAgileReference(0LL, &GUID_74a6aa4a_97db_52bb_9d5b_d1dc398860b1, a2, &v12);
      if ( AgileReference >= 0 )
      {
        v5 = v13;
        v13 = v12;
        v12 = v5;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      if ( AgileReference < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x605,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
          (const char *)(unsigned int)AgileReference);
LABEL_24:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
        return (unsigned int)AgileReference;
      }
    }
    v6 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 160) + 296LL);
    AcquireSRWLockExclusive(v6);
    v12 = (__int64)v6;
    if ( *(_QWORD *)(a1 + 184) )
    {
      if ( *(_BYTE *)(a1 + 460) )
      {
        AgileReference = -2147483638;
        v7 = 1549LL;
LABEL_21:
        v9 = (unsigned int)AgileReference;
LABEL_22:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
          (const char *)v9);
        if ( v6 )
          ReleaseSRWLockExclusive(v6);
        goto LABEL_24;
      }
      if ( *(_DWORD *)(a1 + 280) == 4 && *(_DWORD *)(a1 + 284) == 4 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 160) + 520LL) + 120LL))(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 520LL));
        AgileReference = v8;
        if ( v8 >= 0 )
        {
          *(_BYTE *)(a1 + 460) = 1;
          AgileGitPtr::operator=((__int64 *)(a1 + 464), &v13);
          if ( v6 )
            ReleaseSRWLockExclusive(v6);
          AgileReference = 0;
          goto LABEL_24;
        }
        v9 = (unsigned int)v8;
        v7 = 1564LL;
        goto LABEL_22;
      }
      v7 = 1561LL;
    }
    else
    {
      v7 = 1546LL;
    }
    AgileReference = -2147019873;
    goto LABEL_21;
  }
  AgileReference = -2147467263;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5FE,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
    (const char *)0x80004001LL);
  return (unsigned int)AgileReference;
}
