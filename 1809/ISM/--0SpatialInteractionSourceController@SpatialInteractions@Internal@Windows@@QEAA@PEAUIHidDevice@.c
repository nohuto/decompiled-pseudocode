/*
 * XREFs of ??0SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@PEAUIHidDevice@123@KKV?$function@$$A6AXXZ@std@@@Z @ 0x1801248BC
 * Callers:
 *     ?OnDeviceAttach@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKKPEAUIHidDevice@234@PEAUMPCControllerDeviceInfo@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800AEDE0 (-OnDeviceAttach@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@U.c)
 * Callees:
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z @ 0x1800A4E18 (-GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z.c)
 *     ??0HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ @ 0x1800A86EC (--0HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ.c)
 *     ?HapticsIntensityLevelsSet_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKKE@Z @ 0x1801227D8 (-HapticsIntensityLevelsSet_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKKE@Z.c)
 *     ?SetButtonLatencyMicroseconds@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAAXH@Z @ 0x180125070 (-SetButtonLatencyMicroseconds@SpatialInteractionSourceController@SpatialInteractions@Internal@Wi.c)
 *     ?SetHapticsOutputReportPeriodMicroseconds@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAAXI@Z @ 0x1801250E8 (-SetHapticsOutputReportPeriodMicroseconds@SpatialInteractionSourceController@SpatialInteractions.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *__fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SpatialInteractionSourceController(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5)
{
  RegistryHelpers *v7; // rcx
  RegistryHelpers *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __m256i *v12; // rdx
  PTP_TIMER ThreadpoolTimer; // r15
  struct _TP_TIMER *v14; // rdi
  __m256i *v15; // rdx
  _DWORD *v16; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v17; // rcx
  char *v18; // rax
  __int64 v19; // rdx
  char *v20; // rbx
  __int64 v21; // rcx
  __m256i v23; // [rsp+38h] [rbp-48h] BYREF
  __m256i *v24; // [rsp+70h] [rbp-10h]

  *(_QWORD *)this = &Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::`vftable';
  *((_DWORD *)this + 2) = a3;
  *((_DWORD *)this + 3) = a4;
  *((_DWORD *)this + 4) = 0x2000;
  *((_QWORD *)this + 5) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 6);
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  InitializeSRWLock((PSRWLOCK)this + 10);
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_BYTE *)this + 108) = 0;
  *(_QWORD *)this = &Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::`vftable';
  *((_QWORD *)this + 14) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  SpatialInteractionDevices::HID_HANDLE::HID_HANDLE((Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)((char *)this + 120));
  *((_DWORD *)this + 106) = 0;
  *((_QWORD *)this + 54) = 0LL;
  *((_WORD *)this + 220) = 0;
  *((float *)this + 111) = (float)(int)RegistryHelpers::GetDwordWithDefault(
                                         v7,
                                         (const WCHAR *)&stru_1801510A0,
                                         L"AnalogTriggerInteractionTimeoutInMilliseconds",
                                         (const wchar_t *)0x3E8)
                         / 1000.0;
  *((_DWORD *)this + 112) = 0;
  *((float *)this + 113) = (float)(int)RegistryHelpers::GetDwordWithDefault(
                                         v8,
                                         (const WCHAR *)&stru_1801510A0,
                                         L"AnalogTriggerInteractionThresholdPercent",
                                         (const wchar_t *)0xA)
                         / 100.0;
  *((_WORD *)this + 228) = 0;
  *((_QWORD *)this + 62) = 0LL;
  *((_DWORD *)this + 126) = 0;
  v24 = 0LL;
  v9 = *(_QWORD *)(a5 + 56);
  if ( v9 )
  {
    if ( v9 == a5 )
    {
      v24 = (__m256i *)(*(__int64 (__fastcall **)(__int64, __m256i *))(*(_QWORD *)v9 + 8LL))(v9, &v23);
      v11 = *(_QWORD *)(a5 + 56);
      if ( !v11 )
        goto LABEL_9;
      LOBYTE(v10) = v11 != a5;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 32LL))(v11, v10);
    }
    else
    {
      v24 = *(__m256i **)(a5 + 56);
    }
    *(_QWORD *)(a5 + 56) = 0LL;
  }
LABEL_9:
  *((_QWORD *)this + 72) = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ThreadpoolTimerTraitsImpl>::`vftable';
  *((_QWORD *)this + 73) = 0LL;
  *((_BYTE *)this + 592) = 0;
  InitializeSRWLock((PSRWLOCK)this + 75);
  *((_QWORD *)this + 83) = 0LL;
  if ( !v24 )
    goto LABEL_15;
  if ( v24 == &v23 )
  {
    *((_QWORD *)this + 83) = (*(__int64 (__fastcall **)(__m256i *, char *))(v24->m256i_i64[0] + 8))(
                               v24,
                               (char *)this + 608);
    if ( !v24 )
      goto LABEL_15;
    v12 = &v23;
    LOBYTE(v12) = v24 != &v23;
    (*(void (__fastcall **)(__m256i *, __m256i *))(v24->m256i_i64[0] + 32))(v24, v12);
  }
  else
  {
    *((_QWORD *)this + 83) = v24;
  }
  v24 = 0LL;
LABEL_15:
  *((_QWORD *)this + 84) = GetTickCount64();
  *((_QWORD *)this + 85) = 5000LL;
  ThreadpoolTimer = CreateThreadpoolTimer(
                      (PTP_TIMER_CALLBACK)lambda_730587c1c62906cad33c140b5ea68fdf_::_lambda_invoker_cdecl_,
                      (char *)this + 576,
                      0LL);
  v14 = (struct _TP_TIMER *)*((_QWORD *)this + 73);
  if ( ThreadpoolTimer != v14 )
  {
    if ( v14 )
    {
      SetThreadpoolTimer(*((PTP_TIMER *)this + 73), 0LL, 0, 0);
      WaitForThreadpoolTimerCallbacks(v14, 1);
      CloseThreadpoolTimer(v14);
      *((_QWORD *)this + 73) = 0LL;
    }
    *((_QWORD *)this + 73) = ThreadpoolTimer;
  }
  if ( v24 )
  {
    v15 = &v23;
    LOBYTE(v15) = v24 != &v23;
    (*(void (__fastcall **)(__m256i *, __m256i *))(v24->m256i_i64[0] + 32))(v24, v15);
  }
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 696), 0, 0);
  *((_QWORD *)this + 92) = 0LL;
  *((_DWORD *)this + 186) = 0;
  *((_BYTE *)this + 748) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 752), 0, 0);
  *((_QWORD *)this + 99) = 0LL;
  *((_DWORD *)this + 200) = 0;
  *((_BYTE *)this + 804) = 0;
  *((_QWORD *)this + 101) = 0LL;
  *((_DWORD *)this + 204) = 0;
  *((_BYTE *)this + 904) = 0;
  memset_0((char *)this + 908, 0, 0x20uLL);
  *((_QWORD *)this + 118) = 0LL;
  *((_BYTE *)this + 952) = 0;
  *((_DWORD *)this + 239) = 0;
  memset_0((char *)this + 960, 0, 0x40uLL);
  memset_0((char *)this + 1024, 0, 0xA0uLL);
  *((_BYTE *)this + 1184) = 0;
  memset_0((char *)this + 1024, 0, 0xA0uLL);
  memset_0((char *)this + 960, 0, 0x40uLL);
  v23.m256i_i64[0] = qword_180193DF0;
  v23.m256i_i32[2] = dword_180193DF8;
  *(_OWORD *)((char *)&v23.m256i_u64[1] + 4) = xmmword_180165BC0;
  v23.m256i_i16[14] = 257;
  *(__m256i *)((char *)this + 540) = v23;
  v23.m256i_i64[0] = qword_180193DF0;
  v23.m256i_i32[2] = dword_180193DF8;
  *(_OWORD *)((char *)&v23.m256i_u64[1] + 4) = xmmword_180165BC0;
  v23.m256i_i16[14] = 257;
  *(__m256i *)((char *)this + 508) = v23;
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetButtonLatencyMicroseconds(this, 13000);
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetHapticsOutputReportPeriodMicroseconds(
    this,
    0x7530u);
  *((_BYTE *)this + 804) = 100;
  v16 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( v16 && *v16 )
  {
    SpatialInteractionDevices::SpatialInteractionTrace::Instance();
    SpatialInteractionDevices::SpatialInteractionTrace::HapticsIntensityLevelsSet_(
      v17,
      *((_DWORD *)this + 2),
      *((_DWORD *)this + 3),
      100);
  }
  v18 = (char *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v20 = v18;
  if ( v18 )
  {
    memset_0(v18, 0, 0x40uLL);
    *((_DWORD *)v20 + 4) = 0;
    *((_WORD *)v20 + 10) = 0;
    *((_QWORD *)v20 + 3) = 0LL;
    *((_DWORD *)v20 + 8) = 0;
    *(_QWORD *)(v20 + 36) = 0LL;
    *(_QWORD *)(v20 + 44) = 0LL;
    *(_QWORD *)(v20 + 52) = 0LL;
    *((_DWORD *)v20 + 15) = 0;
  }
  else
  {
    v20 = 0LL;
  }
  *((_QWORD *)this + 62) = v20;
  v21 = *(_QWORD *)(a5 + 56);
  if ( v21 )
  {
    LOBYTE(v19) = v21 != a5;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 32LL))(v21, v19);
    *(_QWORD *)(a5 + 56) = 0LL;
  }
  return this;
}
