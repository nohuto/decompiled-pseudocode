/*
 * XREFs of ?InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ @ 0x18005E704
 * Callers:
 *     ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x18005DE50 (-Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x1800690D0 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800035C4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?RegisterWaitHandler@RIMDeviceCollection@@AEAAJPEAXP6AJ0K0@Z0@Z @ 0x18005EDDC (-RegisterWaitHandler@RIMDeviceCollection@@AEAAJPEAXP6AJ0K0@Z0@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::InitializeSyncObjects(RIMDeviceCollection *this)
{
  HANDLE CurrentProcess; // rax
  void *v3; // rdi
  HANDLE EventW; // rax
  const char *v5; // r9
  __int64 v6; // rdx
  HANDLE v8; // rax
  RIMDeviceCollection *v9; // rcx
  int v10; // esi
  __int64 v11; // rdx
  HANDLE v12; // rax
  RIMDeviceCollection *v13; // rcx
  HANDLE WaitableTimer; // rax
  RIMDeviceCollection *v15; // rcx
  HANDLE v16; // rax
  RIMDeviceCollection *v17; // rcx
  int v18; // eax
  unsigned int v19; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HANDLE TargetHandle; // [rsp+50h] [rbp+8h] BYREF

  CurrentProcess = GetCurrentProcess();
  TargetHandle = 0LL;
  v3 = CurrentProcess;
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 5) = EventW;
  if ( !EventW )
  {
    v6 = 763LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v6,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v5);
  }
  v8 = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 6) = v8;
  if ( !v8 )
  {
    v6 = 770LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v6,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v5);
  }
  if ( !DuplicateHandle(v3, v8, v3, &TargetHandle, 0, 0, 2u) )
  {
    v6 = 779LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v6,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v5);
  }
  v10 = RIMDeviceCollection::RegisterWaitHandler(
          v9,
          TargetHandle,
          (int (*)(void *, unsigned int, void *))RIMDeviceCollection::OnRIMPnpEventStatic,
          this);
  if ( v10 < 0 )
  {
    v11 = 784LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  v12 = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 7) = v12;
  if ( !v12 )
  {
    v6 = 791LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v6,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v5);
  }
  if ( !DuplicateHandle(v3, v12, v3, &TargetHandle, 0, 0, 2u) )
  {
    v6 = 800LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v6,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v5);
  }
  v10 = RIMDeviceCollection::RegisterWaitHandler(
          v13,
          TargetHandle,
          (int (*)(void *, unsigned int, void *))RIMDeviceCollection::OnRIMDeferredRead,
          this);
  if ( v10 < 0 )
  {
    v11 = 805LL;
    goto LABEL_10;
  }
  WaitableTimer = CreateWaitableTimerExW(0LL, 0LL, 0, 0x100002u);
  *((_QWORD *)this + 8) = WaitableTimer;
  if ( !WaitableTimer )
  {
    v6 = 813LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v6,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v5);
  }
  if ( !DuplicateHandle(v3, WaitableTimer, v3, &TargetHandle, 0, 0, 2u) )
  {
    v6 = 822LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v6,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v5);
  }
  v10 = RIMDeviceCollection::RegisterWaitHandler(
          v15,
          TargetHandle,
          (int (*)(void *, unsigned int, void *))RIMDeviceCollection::OnRIMTimerEventStatic,
          this);
  if ( v10 < 0 )
  {
    v11 = 827LL;
    goto LABEL_10;
  }
  v16 = CreateWaitableTimerExW(0LL, 0LL, 0, 0x100002u);
  *((_QWORD *)this + 9) = v16;
  if ( !v16 )
  {
    v6 = 834LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v6,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v5);
  }
  if ( !DuplicateHandle(v3, v16, v3, &TargetHandle, 0, 0, 2u) )
  {
    v6 = 843LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v6,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v5);
  }
  v18 = RIMDeviceCollection::RegisterWaitHandler(
          v17,
          TargetHandle,
          (int (*)(void *, unsigned int, void *))RIMDeviceCollection::OnRIMAutoRepeatEventStatic,
          this);
  v19 = v18;
  if ( v18 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x350,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
    (const char *)(unsigned int)v18);
  return v19;
}
