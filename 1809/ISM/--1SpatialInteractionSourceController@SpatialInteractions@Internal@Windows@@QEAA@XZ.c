/*
 * XREFs of ??1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x180124DA4
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj@VSpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@@std@@EEAAXXZ @ 0x1800B6790 (-_Destroy@-$_Ref_count_obj@VSpatialInteractionSourceController@SpatialInteractions@Internal@Wind.c)
 * Callees:
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ??1HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ @ 0x1800A87EC (--1HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ.c)
 *     ?ControllerHapticsStatistics_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKJJN@Z @ 0x180122E54 (-ControllerHapticsStatistics_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKJJN@Z.c)
 *     ?Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z @ 0x180123170 (-Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z.c)
 *     ?ReleaseNodePropertyChangedHandler@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXXZ @ 0x180128190 (-ReleaseNodePropertyChangedHandler@SpatialInteractionSourceController@SpatialInteractions@Intern.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::~SpatialInteractionSourceController(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  double v8; // xmm6_8
  int v9; // eax
  _DWORD *v10; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v11; // rcx
  void *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rcx
  const struct std::nothrow_t *v15; // rdx
  __int64 v16; // rcx
  struct _TP_TIMER *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rcx

  *(_QWORD *)this = &Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::`vftable';
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 752);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 752));
  v3 = *((_QWORD *)this + 99);
  if ( v3 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 72));
    *(_BYTE *)(v3 + 231) = 0;
    v5 = *(_QWORD *)(v3 + 184);
    if ( v5 )
    {
      LOBYTE(v4) = v5 != v3 + 128;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, v4);
      *(_QWORD *)(v3 + 184) = 0LL;
    }
    v6 = *(_QWORD *)(v3 + 120);
    if ( v6 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 56LL))(v6, 0LL);
    v7 = *(_QWORD *)(v3 + 120);
    if ( v7 )
    {
      *(_QWORD *)(v3 + 120) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( v3 != -72 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v3 + 72));
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  v8 = DOUBLE_N1_0;
  v9 = *((_DWORD *)this + 203);
  if ( v9 )
    v8 = (double)*((int *)this + 204) / (double)v9;
  v10 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( v10 && *v10 )
  {
    SpatialInteractionDevices::SpatialInteractionTrace::Instance();
    SpatialInteractionDevices::SpatialInteractionTrace::ControllerHapticsStatistics_(
      v11,
      *((_DWORD *)this + 2),
      *((_DWORD *)this + 202),
      *((_DWORD *)this + 203),
      v8);
  }
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ReleaseNodePropertyChangedHandler(this);
  v12 = (void *)*((_QWORD *)this + 62);
  if ( v12 )
  {
    SpatialInteractionDevices::SpatialInteractionHeartbeat::Report(
      *((SpatialInteractionDevices::SpatialInteractionHeartbeat **)this + 62),
      1);
    operator delete(v12, (const struct std::nothrow_t *)0x40);
    *((_QWORD *)this + 62) = 0LL;
  }
  v13 = *((_QWORD *)this + 99);
  if ( v13 )
  {
    *((_QWORD *)this + 99) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  DeleteCriticalSection(v2);
  v14 = *((_QWORD *)this + 92);
  if ( v14 )
  {
    *((_QWORD *)this + 92) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 696));
  v16 = *((_QWORD *)this + 83);
  if ( v16 )
  {
    LOBYTE(v15) = v16 != (_QWORD)this + 608;
    (*(void (__fastcall **)(__int64, const struct std::nothrow_t *))(*(_QWORD *)v16 + 32LL))(v16, v15);
    *((_QWORD *)this + 83) = 0LL;
  }
  *((_QWORD *)this + 72) = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ThreadpoolTimerTraitsImpl>::`vftable';
  v17 = (struct _TP_TIMER *)*((_QWORD *)this + 73);
  if ( v17 )
  {
    SetThreadpoolTimer(*((PTP_TIMER *)this + 73), 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v17, 1);
    CloseThreadpoolTimer(v17);
    *((_QWORD *)this + 73) = 0LL;
  }
  SpatialInteractionDevices::HID_HANDLE::~HID_HANDLE(
    (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)((char *)this + 120),
    v15);
  v18 = *((_QWORD *)this + 14);
  if ( v18 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  WindowsDeleteString(*((HSTRING *)this + 12));
  *((_QWORD *)this + 12) = 0LL;
  v19 = *((_QWORD *)this + 11);
  if ( v19 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  WindowsDeleteString(*((HSTRING *)this + 5));
  *((_QWORD *)this + 5) = 0LL;
}
