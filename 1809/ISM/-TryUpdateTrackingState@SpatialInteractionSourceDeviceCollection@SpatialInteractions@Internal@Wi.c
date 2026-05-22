/*
 * XREFs of ?TryUpdateTrackingState@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800B123C
 * Callers:
 *     ?FinalizeInitialization@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800AF90C (-FinalizeInitialization@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 *     std::_Func_impl_no_alloc__lambda_85f9a2e6b160a42d5da92bb8c74ed5b7__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&___ptr64_::_Do_call @ 0x1800B7840 (std--_Func_impl_no_alloc__lambda_85f9a2e6b160a42d5da92bb8c74ed5b7__void_std--shared_ea_1800B7840.c)
 *     std::_Func_impl_no_alloc__lambda_b985727d7fd2fa03c0691abcb8181017__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&___ptr64_::_Do_call @ 0x1800B78E0 (std--_Func_impl_no_alloc__lambda_b985727d7fd2fa03c0691abcb8181017__void_std--shared_ea_1800B78E0.c)
 *     std::_Func_impl_no_alloc__lambda_908627fe01edce7427e4f315127fd81c__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&___ptr64_::_Do_call @ 0x1800B79A0 (std--_Func_impl_no_alloc__lambda_908627fe01edce7427e4f315127fd81c__void_std--shared_ea_1800B79A0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?ControllerNodeTrackingSkipped_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXK@Z @ 0x1800ABCAC (-ControllerNodeTrackingSkipped_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXK@Z.c)
 *     ?EnsureDisplayWatcher@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800B04E4 (-EnsureDisplayWatcher@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wind.c)
 *     ?EnsureHmdNode@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800B10D0 (-EnsureHmdNode@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::TryUpdateTrackingState(
        HSTRING *this,
        _QWORD *a2)
{
  HSTRING v4; // rdi
  HSTRING v5; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v7; // rdx
  int v8; // eax
  int v9; // r14d
  HSTRING v10; // rbx
  HSTRING v11; // rbx
  HSTRING v12; // rbx
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v13; // rdx
  int v14; // eax
  int v15; // ebx
  _DWORD *v16; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v17; // rcx
  HSTRING v19; // [rsp+30h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  HSTRING string; // [rsp+90h] [rbp+40h] BYREF
  HSTRING v22; // [rsp+A8h] [rbp+58h]

  v4 = 0LL;
  v22 = 0LL;
  v5 = 0LL;
  v19 = 0LL;
  string = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)(this + 12);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 12));
  v8 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnsureDisplayWatcher(
         (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)this,
         v7);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38C,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_18;
  }
  v10 = this[17];
  if ( v10 )
  {
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v10 + 8LL))(this[17]);
    v22 = v10;
  }
  v11 = this[18];
  if ( v11 )
  {
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v11 + 8LL))(this[18]);
    v19 = v11;
  }
  v12 = this[19];
  if ( !v12 || v12 != string )
  {
    WindowsDeleteString(string);
    string = 0LL;
    WindowsDuplicateString(v12, &string);
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  *(_BYTE *)(*a2 + 107LL) = 0;
  v4 = v22;
  if ( !v22 || (v5 = v19) == 0LL || !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 32LL))(*a2) )
  {
    v15 = *(_DWORD *)(*a2 + 8LL);
    v16 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
    if ( v16 && *v16 )
    {
      SpatialInteractionDevices::SpatialInteractionTrace::Instance();
      SpatialInteractionDevices::SpatialInteractionTrace::ControllerNodeTrackingSkipped_(v17, v15);
    }
    goto LABEL_26;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, HSTRING, HSTRING, int))(*(_QWORD *)*a2 + 160LL))(
         *a2,
         v4,
         v19,
         string,
         1);
  if ( v9 < 0 )
    goto LABEL_27;
  EnterCriticalSection(v6);
  v14 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnsureHmdNode(
          (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)this,
          v13);
  v9 = v14;
  if ( v14 >= 0 )
  {
    if ( v6 )
      LeaveCriticalSection(v6);
    *(_BYTE *)(*a2 + 105LL) = 1;
LABEL_26:
    *(_BYTE *)(*a2 + 107LL) = 1;
    v9 = 0;
    v4 = v22;
    v5 = v19;
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3A1,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
    (const char *)(unsigned int)v14);
LABEL_18:
  if ( v6 )
    LeaveCriticalSection(v6);
LABEL_27:
  WindowsDeleteString(string);
  string = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v4 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v9;
}
