/*
 * XREFs of ?_FirePresentationReadinessOrRetryAfterDelay@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_KV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@Z @ 0x1802153A8
 * Callers:
 *     _lambda_95637ad5d0367f8d6b0e04a0e83efd7d_::operator() @ 0x18020D9AC (_lambda_95637ad5d0367f8d6b0e04a0e83efd7d_--operator().c)
 *     ?add_PresentationReadyChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x180216AF0 (-add_PresentationReadyChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJP.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18004D924 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18004DC78 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     LambdaHelpers::CTimer::Create__lambda_95637ad5d0367f8d6b0e04a0e83efd7d___ @ 0x180209654 (LambdaHelpers--CTimer--Create__lambda_95637ad5d0367f8d6b0e04a0e83efd7d___.c)
 *     ??$com_weak_copy_failfast@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@$$QEAPEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x18020B334 (--$com_weak_copy_failfast@PEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@wil@@.c)
 *     ?_RaisePresentationReadyEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_N@Z @ 0x180215CB4 (-_RaisePresentationReadyEvent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_.c)
 *     ?get_ReadyToPresent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z @ 0x1802175A0 (-get_ReadyToPresent@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_FirePresentationReadinessOrRetryAfterDelay(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  int ready; // ebx
  __int64 v9; // rdx
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14[5]; // [rsp+28h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  RTL_SRWLOCK *v16; // [rsp+70h] [rbp+20h] BYREF
  __int64 v17; // [rsp+88h] [rbp+38h] BYREF

  if ( *((_QWORD *)this + 69)
    && ((Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v16, (RTL_SRWLOCK *)this + 70),
         (v6 = *((_QWORD *)this + 69)) != 0)
      ? (v7 = (__int64)(*(_QWORD *)(v6 + 24) - *(_QWORD *)(v6 + 16)) >> 3)
      : (v7 = 0LL),
        (Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v16), v7)
     && (LOBYTE(v16) = 0,
         (int)Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::get_ReadyToPresent(
                this,
                (unsigned __int8 *)&v16) >= 0)
     && (_BYTE)v16) )
  {
    ready = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_RaisePresentationReadyEvent(this, 1);
    if ( ready < 0 )
    {
      v9 = 671LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
        (const char *)(unsigned int)ready);
      return (unsigned int)ready;
    }
    return 0LL;
  }
  else if ( a2 )
  {
    v16 = (RTL_SRWLOCK *)this;
    v11 = wil::com_weak_copy_failfast<Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *>(
            &v17,
            (__int64 *)&v16);
    v12 = *v11;
    *v11 = 0LL;
    v14[0] = v12;
    v14[1] = (__int64)this;
    v14[2] = a2;
    v14[3] = a3;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 57);
    ready = LambdaHelpers::CTimer::Create__lambda_95637ad5d0367f8d6b0e04a0e83efd7d___(
              (__int64 *)this + 57,
              v13,
              a3,
              (__int64)v14);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v14);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v17);
    if ( ready < 0 )
    {
      v9 = 693LL;
      goto LABEL_10;
    }
    return 1LL;
  }
  else
  {
    return 2147943635LL;
  }
}
