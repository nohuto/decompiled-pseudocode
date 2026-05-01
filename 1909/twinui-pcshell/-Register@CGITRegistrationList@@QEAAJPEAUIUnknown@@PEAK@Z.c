/*
 * XREFs of ?Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x1804333CC
 * Callers:
 *     ?Register@FullScreenPositioner@@UEAAJPEAUIFullScreenPositionerNotification@@PEAK@Z @ 0x18018D290 (-Register@FullScreenPositioner@@UEAAJPEAUIFullScreenPositionerNotification@@PEAK@Z.c)
 *     ?Register@CFullScreenManager@@UEAAJPEAUIFullScreenNotification@@PEAK@Z @ 0x180190FE0 (-Register@CFullScreenManager@@UEAAJPEAUIFullScreenNotification@@PEAK@Z.c)
 *     ?RegisterForShowMoveSizeEvents@ViewPresentationMediator@@UEAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@Z @ 0x1802C9D70 (-RegisterForShowMoveSizeEvents@ViewPresentationMediator@@UEAAJPEAUIWindowManagementShowMoveSizeE.c)
 *     ?RegisterForWindowGroupingEvents@ViewPresentationMediator@@UEAAJPEAUIWindowManagementWindowGroupingEvents@@PEAK@Z @ 0x1802C9DB0 (-RegisterForWindowGroupingEvents@ViewPresentationMediator@@UEAAJPEAUIWindowManagementWindowGroup.c)
 *     ?Register@MultitaskingViewVisibilityService@@UEAAJPEAUIMultitaskingViewVisibilityNotification@@PEAK@Z @ 0x180363AD0 (-Register@MultitaskingViewVisibilityService@@UEAAJPEAUIMultitaskingViewVisibilityNotification@@P.c)
 *     ?RegisterBeginEndListener@ObservableObjectArray@@UEAAJPEAUIObservableObjectArrayChangedBeginEnd@@PEAK@Z @ 0x1803802A0 (-RegisterBeginEndListener@ObservableObjectArray@@UEAAJPEAUIObservableObjectArrayChangedBeginEnd@.c)
 *     ?RegisterListener@ObservableObjectArray@@UEAAJPEAUIObservableObjectArrayChanged@@PEAK@Z @ 0x1803802E0 (-RegisterListener@ObservableObjectArray@@UEAAJPEAUIObservableObjectArrayChanged@@PEAK@Z.c)
 *     ?RegisterForDesktopVisibilityChanges@CPerMonitorDesktopVisibilityService@@UEAAJW4DESKTOP_VISIBILITY_NOTIFICATION_TYPE@@PEAUIDesktopVisibilityChangesNotification@@PEAK@Z @ 0x1803AEA80 (-RegisterForDesktopVisibilityChanges@CPerMonitorDesktopVisibilityService@@UEAAJW4DESKTOP_VISIBIL.c)
 *     ?RegisterForAppLayoutChanges@TabletModePositionerManager@@UEAAJPEAUITabletModePositionerManagerNotification@@PEAK@Z @ 0x1803C7E40 (-RegisterForAppLayoutChanges@TabletModePositionerManager@@UEAAJPEAUITabletModePositionerManagerN.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ReleaseSRWLockExclusive_0 @ 0x18008AB1A (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x18008AB3E (__Platform_AcquireSRWLockExclusive.c)
 *     CoCreateInstance_0 @ 0x18008ADC7 (CoCreateInstance_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18013B2DC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??$MakeAndInitialize@VCGITCookieObject@@UIGITCookieObject@@PEAUIGlobalInterfaceTable@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIGITCookieObject@@$$QEAPEAUIGlobalInterfaceTable@@AEAPEAUIUnknown@@@Z @ 0x180433064 (--$MakeAndInitialize@VCGITCookieObject@@UIGITCookieObject@@PEAUIGlobalInterfaceTable@@AEAPEAUIUn.c)
 */

__int64 __fastcall CGITRegistrationList::Register(RTL_SRWLOCK *this, struct IUnknown *a2, unsigned int *a3)
{
  RTL_SRWLOCK *v3; // r14
  RTL_SRWLOCK v6; // rbx
  int v7; // edi
  LPVOID v8; // rbx
  RTL_SRWLOCK v9; // rcx
  LPVOID v10; // rcx
  struct IGlobalInterfaceTable *Ptr; // rax
  void *v12; // r8
  PVOID v13; // rdx
  LPVOID *v14; // rdx
  LPVOID ppv; // [rsp+60h] [rbp+30h] BYREF
  struct IUnknown *v17; // [rsp+68h] [rbp+38h] BYREF
  struct IGlobalInterfaceTable *v18; // [rsp+70h] [rbp+40h] BYREF

  v17 = a2;
  *a3 = 0;
  v3 = this + 1;
  _Platform_AcquireSRWLockExclusive(this + 1);
  v6.Ptr = this->Ptr;
  ReleaseSRWLockExclusive_0(v3);
  if ( v6.Ptr )
    goto LABEL_11;
  ppv = 0LL;
  v7 = CoCreateInstance_0(&CLSID_StdGlobalInterfaceTable, 0LL, 1u, &GUID_00000146_0000_0000_c000_000000000046, &ppv);
  if ( v7 >= 0 )
  {
    _Platform_AcquireSRWLockExclusive(v3);
    if ( !this->Ptr )
    {
      v8 = ppv;
      if ( ppv )
      {
        v18 = (struct IGlobalInterfaceTable *)ppv;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
        v9.Ptr = this->Ptr;
        this->Ptr = v8;
        if ( v9.Ptr )
          (*(void (__fastcall **)(RTL_SRWLOCK))(*(_QWORD *)v9.Ptr + 16LL))(v9);
      }
    }
    ReleaseSRWLockExclusive_0(v3);
  }
  v10 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( v7 >= 0 )
  {
LABEL_11:
    Ptr = (struct IGlobalInterfaceTable *)this->Ptr;
    ppv = 0LL;
    v18 = Ptr;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    v7 = Microsoft::WRL::Details::MakeAndInitialize<CGITCookieObject,IGITCookieObject,IGlobalInterfaceTable *,IUnknown * &>(
           &ppv,
           &v18,
           &v17);
    if ( v7 >= 0 )
    {
      _Platform_AcquireSRWLockExclusive(v3);
      v13 = this[3].Ptr;
      v7 = 0;
      if ( v13 != this[5].Ptr
        || (v7 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                   (__int64)&this[2],
                   (unsigned __int64)v13 + 1,
                   v12),
            v7 >= 0) )
      {
        v14 = (LPVOID *)((char *)this[2].Ptr + 8 * (__int64)this[3].Ptr++);
        if ( v14 )
        {
          *v14 = ppv;
          if ( ppv )
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 8LL))(ppv);
        }
      }
      ReleaseSRWLockExclusive_0(v3);
      if ( v7 >= 0 )
        *a3 = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 32LL))(ppv);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  }
  return (unsigned int)v7;
}
