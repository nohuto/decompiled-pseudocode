/*
 * XREFs of ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180331CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003072C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18004FD9C (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800500AC (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$OnViewCreatedFailed@AEAJ@TouchKeyboardExperienceTelemetryLogger@@SAXAEAJ@Z @ 0x18032B960 (--$OnViewCreatedFailed@AEAJ@TouchKeyboardExperienceTelemetryLogger@@SAXAEAJ@Z.c)
 *     wil::ResultFromException__lambda_77e671bdbb59ac3c8957d1d382607d03___ @ 0x18032BAEC (wil--ResultFromException__lambda_77e671bdbb59ac3c8957d1d382607d03___.c)
 *     ?DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18032DB50 (-DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?OnViewCreated_19H1@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180331A14 (-OnViewCreated_19H1@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@She.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_StabilizeInputAppActivation@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180333820 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_StabilizeInputAppActivation@@@wil@@C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::OnViewEvent(
        RTL_SRWLOCK *this,
        struct IUnknown *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  struct EventRegistrationToken v8; // r8
  bool v9; // r8
  char *Ptr; // rdi
  char *v11; // rbx
  volatile signed __int32 *v12; // rbx
  int v13; // eax
  int v14; // eax
  unsigned int v15; // edi
  RTL_SRWLOCK *v16; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v17[2]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v18[2]; // [rsp+38h] [rbp-28h] BYREF
  struct IUnknown **v19; // [rsp+48h] [rbp-18h]
  volatile signed __int32 *v20; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  int v22; // [rsp+90h] [rbp+30h] BYREF
  int v23; // [rsp+98h] [rbp+38h] BYREF

  v17[1] = -2LL;
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v22);
  if ( v5 < 0 )
  {
    v6 = 2075LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( !v22 )
  {
    v5 = ((__int64 (__fastcall *)(struct IUnknown *, __int64))a2->lpVtbl[16].AddRef)(a2, 4LL);
    if ( v5 < 0 )
    {
      v6 = 2080LL;
      goto LABEL_3;
    }
    wil::Feature<__WilFeatureTraits_Feature_StabilizeInputAppActivation>::ReportUsageToService();
    v23 = TouchKeyboardExperienceManager::OnViewCreated_19H1((TouchKeyboardExperienceManager *)this, a2, v8);
    if ( v23 < 0 )
      TouchKeyboardExperienceTelemetryLogger::OnViewCreatedFailed<long &>((__int64)&v23);
    return 0LL;
  }
  if ( v22 != 4 )
    return 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v16, this + 57);
  Ptr = (char *)this[58].Ptr;
  v11 = (char *)this[59].Ptr;
  while ( Ptr != v11 && !(unsigned int)SHIsSameObject(**(struct IUnknown ***)Ptr, a2) )
    Ptr += 16;
  v17[0] = Ptr;
  if ( Ptr == this[59].Ptr )
  {
LABEL_25:
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v16);
    return 0LL;
  }
  v12 = (volatile signed __int32 *)*((_QWORD *)Ptr + 1);
  if ( v12 )
  {
    _InterlockedIncrement(v12 + 2);
    v12 = (volatile signed __int32 *)*((_QWORD *)Ptr + 1);
  }
  v19 = *(struct IUnknown ***)Ptr;
  v20 = v12;
  v13 = TouchKeyboardExperienceManager::DestroyView(
          (TouchKeyboardExperienceManager *)this,
          (struct KBViewInfo *)v19,
          v9);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x846,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
  v18[0] = (__int64)this;
  v18[1] = (__int64)v17;
  v14 = wil::ResultFromException__lambda_77e671bdbb59ac3c8957d1d382607d03___(v18);
  v15 = v14;
  if ( v14 >= 0 )
  {
    if ( v12 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v12);
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x84A,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v14);
  if ( v12 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v12);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v16);
  return v15;
}
