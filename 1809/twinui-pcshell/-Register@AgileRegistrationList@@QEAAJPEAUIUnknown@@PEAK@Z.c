/*
 * XREFs of ?Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x1800F1588
 * Callers:
 *     ?Register@CApplicationManager@@UEAAJPEAUIImmersiveApplicationNotification@@PEAK@Z @ 0x1800F16B0 (-Register@CApplicationManager@@UEAAJPEAUIImmersiveApplicationNotification@@PEAK@Z.c)
 *     ?Register@CImmersiveMode@@UEAAJPEAUIActiveZBandNotification@@PEAK@Z @ 0x1801016E0 (-Register@CImmersiveMode@@UEAAJPEAUIActiveZBandNotification@@PEAK@Z.c)
 *     ?Register@CImmersiveMode@@UEAAJPEAUIImmersiveSystemModeNotification@@PEAK@Z @ 0x180101700 (-Register@CImmersiveMode@@UEAAJPEAUIImmersiveSystemModeNotification@@PEAK@Z.c)
 *     ?RegisterForApplicationViewChanges@CApplicationViewManager@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x18012D3D0 (-RegisterForApplicationViewChanges@CApplicationViewManager@@UEAAJPEAUIApplicationViewChangeListe.c)
 *     ?RegisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x18012F390 (-RegisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicat.c)
 *     ?Register@HolographicPositioner@@UEAAJPEAUIHolographicViewTransitionNotification@@PEAK@Z @ 0x1801B4840 (-Register@HolographicPositioner@@UEAAJPEAUIHolographicViewTransitionNotification@@PEAK@Z.c)
 *     ?RegisterInternal@CVirtualDesktopNotifications@@UEAAJPEAUIVirtualDesktopNotification@@PEAK@Z @ 0x1803804E0 (-RegisterInternal@CVirtualDesktopNotifications@@UEAAJPEAUIVirtualDesktopNotification@@PEAK@Z.c)
 *     ?Register@VirtualDesktopAnimationSyncNotifications@@UEAAJPEAUIVirtualDesktopAnimationSyncNotification@@PEAK@Z @ 0x18038B840 (-Register@VirtualDesktopAnimationSyncNotifications@@UEAAJPEAUIVirtualDesktopAnimationSyncNotific.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??$_Emplace_reallocate@UItem@AgileRegistrationList@@@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAPEAUItem@AgileRegistrationList@@QEAU23@$$QEAU23@@Z @ 0x1800E9D48 (--$_Emplace_reallocate@UItem@AgileRegistrationList@@@-$vector@UItem@AgileRegistrationList@@V-$al.c)
 *     ??$com_agile_query@AEAPEAUIUnknown@@@wil@@YA?AV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@0@AEAPEAUIUnknown@@W4AgileReferenceOptions@@@Z @ 0x1800EA490 (--$com_agile_query@AEAPEAUIUnknown@@@wil@@YA-AV-$com_ptr_t@UIAgileReference@@Uerr_exception_poli.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AgileRegistrationList::Register(RTL_SRWLOCK *this, struct IUnknown *a2, unsigned int *a3)
{
  __int64 *v5; // rax
  __int64 v6; // r14
  int Ptr; // eax
  _QWORD *v8; // rdx
  const char *v9; // r9
  __int64 result; // rax
  int v11; // [rsp+28h] [rbp-30h] BYREF
  __int64 v12[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IUnknown *v14; // [rsp+68h] [rbp+10h] BYREF
  RTL_SRWLOCK *v15; // [rsp+70h] [rbp+18h] BYREF

  v14 = a2;
  *a3 = 0;
  v11 = 1;
  v12[0] = 0LL;
  try
  {
    v5 = wil::com_agile_query<IUnknown * &>(&v15, (__int64 *)&v14);
    v6 = *v5;
    *v5 = 0LL;
    v12[0] = v6;
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v15);
    AcquireSRWLockExclusive(this + 3);
    v15 = this + 3;
    Ptr = (int)this[4].Ptr;
    v11 = Ptr;
    v8 = this[1].Ptr;
    if ( this[2].Ptr == v8 )
    {
      std::vector<AgileRegistrationList::Item>::_Emplace_reallocate<AgileRegistrationList::Item>(
        this,
        v8,
        (__int64)&v11);
    }
    else
    {
      *(_DWORD *)v8 = Ptr;
      v12[0] = 0LL;
      v8[1] = v6;
      this[1].Ptr = (char *)this[1].Ptr + 16;
    }
    *a3 = LODWORD(this[4].Ptr)++;
    if ( this != (RTL_SRWLOCK *)-24LL )
      ReleaseSRWLockExclusive(this + 3);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v12);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v15) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x1E,
                     (__int64)"internal\\shell\\private\\inc\\agileregistrationlist.h",
                     v9);
    return (unsigned int)v15;
  }
  return result;
}
