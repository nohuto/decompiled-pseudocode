/*
 * XREFs of ??$CreateGitHelper@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@2@PEAPEAU342@@Z @ 0x18009FF0C
 * Callers:
 *     ?Add@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_exception_policy@wil@@@wil@@QEAAXPEAU?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1800A216C (-Add@-$AsyncEventSourceT@U-$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x18006E08C (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ??0?$GitInvokeHelper@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@QEAA@XZ @ 0x1800A0EF4 (--0-$GitInvokeHelper@U-$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Inte.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Details::CreateGitHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *>>>(
        __int64 a1,
        _QWORD *a2)
{
  void *v4; // rax
  void *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 *v8; // rax
  int AgileReference; // ebx
  __int64 *v10; // rsi
  __int64 *v11; // rax
  __int64 *v13; // [rsp+48h] [rbp+10h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4
    && (memset_0(v4, 0, 0x38uLL),
        v6 = Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *>>,2>::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *>>,2>(v5),
        (v7 = v6) != 0) )
  {
    v13 = (__int64 *)(v6 + 48);
    v8 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v13);
    AgileReference = 0;
    v10 = v8;
    if ( a1 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
      AgileReference = RoGetAgileReference(0LL, &GUID_bad293d5_858d_5301_8043_987e7a3cfce6, a1, v10);
    }
    else
    {
      v11 = (__int64 *)*v8;
      v14 = 0LL;
      *v10 = 0LL;
      v13 = v11;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    }
    if ( AgileReference >= 0 )
      AgileReference = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v7)(
                         v7,
                         &GUID_bad293d5_858d_5301_8043_987e7a3cfce6,
                         a2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)AgileReference;
}
