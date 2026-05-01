/*
 * XREFs of ?add_PresentationReadyChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x180216AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18004D924 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18004DC78 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_EnableControlOfShowWindowBehavior@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008CFC8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_EnableControlOfShowWindowBehavior@@@.c)
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x1801422DC (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Int.c)
 *     ??$CreateGitHelper@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@2@PEAPEAU342@@Z @ 0x180209A90 (--$CreateGitHelper@U-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Intern_ea_180209A90.c)
 *     ?_FirePresentationReadinessOrRetryAfterDelay@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_KV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@Z @ 0x1802153A8 (-_FirePresentationReadinessOrRetryAfterDelay@Win32BackedViewHostItem@Holographic@Shell@Internal@.c)
 *     ?get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z @ 0x180217300 (-get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::add_PresentationReadyChanged(
        RTL_SRWLOCK *this,
        __int64 a2,
        struct IUnknown **a3)
{
  RTL_SRWLOCK *v3; // rsi
  int ready; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rbx
  _QWORD *Ptr; // rax
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v16; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v3 = this + 26;
  AcquireSRWLockExclusive(this + 26);
  if ( !a2 )
  {
    ready = -2147024809;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A6,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
      (const char *)(unsigned int)ready);
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
    return (unsigned int)ready;
  }
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  ready = Windows::Internal::Details::CreateGitHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *>>>(
            a2,
            &v16);
  if ( ready >= 0 )
  {
    if ( v16 )
      ready = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
                (__int64)&this[69],
                (struct IUnknown *)v16,
                *(void **)(*(_QWORD *)a2 + 24LL),
                a3);
    else
      ready = -2147024809;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  if ( ready < 0 )
    goto LABEL_8;
  if ( this[69].Ptr )
  {
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v16, this + 70);
    Ptr = this[69].Ptr;
    if ( Ptr )
      v12 = (__int64)(Ptr[3] - Ptr[2]) >> 3;
    else
      v12 = 0LL;
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v16);
  }
  else
  {
    v12 = 0LL;
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  wil::Feature<__WilFeatureTraits_Feature_EnableControlOfShowWindowBehavior>::ReportUsageToService(v9, v8, v10);
  if ( v12 == 1 )
  {
    LODWORD(v16) = 0;
    if ( (int)Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::get_FrameworkViewType(
                (Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)this,
                (int *)&v16) >= 0
      && (_DWORD)v16 == 1 )
    {
      v14 = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_FirePresentationReadinessOrRetryAfterDelay(
              (Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)this,
              10LL,
              2000LL);
      ready = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1B6,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
          (const char *)(unsigned int)v14);
        return (unsigned int)ready;
      }
    }
  }
  return 0LL;
}
