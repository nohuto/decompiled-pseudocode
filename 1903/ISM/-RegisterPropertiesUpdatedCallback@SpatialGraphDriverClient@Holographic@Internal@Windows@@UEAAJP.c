/*
 * XREFs of ?RegisterPropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUISpatialGraphPropertiesUpdatedCallback@234@@Z @ 0x18015CB60
 * Callers:
 *     ?RegisterPropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJPEAUISpatialGraphPropertiesUpdatedCallback@234@@Z @ 0x18003A7D0 (-RegisterPropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18002AE60 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800519D4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$AsWeak@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@YAJPEAUISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@PEAVWeakRef@01@@Z @ 0x1800E9BA8 (--$AsWeak@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Window.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800EAE90 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$RegisterPropertiesUpdateCallback@W4TraceDriverType@@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEAPEAUISpatialGraphPropertiesUpdatedCallback@345@PEAUIWeakReference@@@HolographicDriverClientTrace@@SAX$$QEAW4TraceDriverType@@$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEAPEAUISpatialGraphPropertiesUpdatedCallback@345@$$QEAPEAUIWeakReference@@@Z @ 0x18014B214 (--$RegisterPropertiesUpdateCallback@W4TraceDriverType@@PEAVSpatialGraphDriverClient@Holographic@.c)
 *     ?EnsurePropertyThread@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18015559C (-EnsurePropertyThread@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEBV-$unique_a.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::RegisterPropertiesUpdatedCallback(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        struct Windows::Internal::Holographic::ISpatialGraphPropertiesUpdatedCallback *a2)
{
  unsigned int LastError; // ebx
  RTL_SRWLOCK *v5; // rsi
  __int64 (__fastcall **v6)(_QWORD, GUID *, __int64 *); // rax
  __int64 *v7; // rax
  int v8; // eax
  void *v9; // rdx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const char *v11; // r9
  struct _TP_TIMER *v12; // rcx
  char *v14; // [rsp+20h] [rbp-10h] BYREF
  struct Windows::Internal::Holographic::ISpatialGraphPropertiesUpdatedCallback *v15; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct Windows::Internal::Holographic::ISpatialGraphPropertiesUpdatedCallback *v17; // [rsp+68h] [rbp+38h] BYREF
  struct _FILETIME pftDueTime; // [rsp+70h] [rbp+40h] BYREF
  __int64 v19; // [rsp+78h] [rbp+48h] BYREF

  v17 = a2;
  if ( a2 )
  {
    v5 = (RTL_SRWLOCK *)((char *)this + 128);
    AcquireSRWLockExclusive((PSRWLOCK)this + 16);
    if ( *((_QWORD *)this + 19) )
    {
      LastError = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2DF,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)0x8000FFFFLL);
    }
    else
    {
      v6 = *(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2;
      v15 = a2;
      ((void (__fastcall *)(struct Windows::Internal::Holographic::ISpatialGraphPropertiesUpdatedCallback *))v6[1])(a2);
      pftDueTime = (struct _FILETIME)((char *)this + 152);
      v7 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&pftDueTime);
      v8 = Microsoft::WRL::AsWeak<Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal>(
             (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2,
             v7);
      LastError = v8;
      if ( v8 >= 0 )
      {
        if ( *((_BYTE *)this + 115)
          || (ThreadpoolTimer = CreateThreadpoolTimer(
                                  Windows::Internal::Holographic::SpatialGraphDriverClient::StaticNodesChangeIdTimerCallback,
                                  (char *)this - 8,
                                  0LL),
              wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
                (struct _TP_TIMER **)this + 18,
                ThreadpoolTimer),
              *((_QWORD *)this + 18)) )
        {
          if ( *((_BYTE *)this + 113) && (*((_BYTE *)this + 114) || *((_BYTE *)this + 115)) )
            Windows::Internal::Holographic::SpatialGraphDriverClient::EnsurePropertyThread(
              (wil::details **)this - 1,
              v9);
          v12 = (struct _TP_TIMER *)*((_QWORD *)this + 18);
          if ( v12 )
          {
            pftDueTime.dwLowDateTime = 0;
            pftDueTime.dwHighDateTime = 0;
            SetThreadpoolTimer(v12, &pftDueTime, 0x10u, 0);
          }
          v19 = *((_QWORD *)this + 19);
          v14 = (char *)this - 8;
          pftDueTime.dwLowDateTime = 1;
          HolographicDriverClientTrace::RegisterPropertiesUpdateCallback<enum TraceDriverType,Windows::Internal::Holographic::SpatialGraphDriverClient *,Windows::Internal::Holographic::ISpatialGraphPropertiesUpdatedCallback * &,IWeakReference *>(
            (unsigned int *)&pftDueTime,
            &v14,
            &v17,
            &v19);
          LastError = 0;
        }
        else
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x2E8,
                        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
                        v11);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2E2,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
          (const char *)(unsigned int)v8);
      }
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v15);
    }
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
  }
  else
  {
    LastError = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2DB,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x80070057LL);
  }
  return LastError;
}
