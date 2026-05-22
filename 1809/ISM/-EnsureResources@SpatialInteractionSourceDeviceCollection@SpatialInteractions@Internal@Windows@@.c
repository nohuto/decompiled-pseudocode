/*
 * XREFs of ?EnsureResources@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800B21C8
 * Callers:
 *     _lambda_a518e9677c20752b15edab298cff80bd_::operator() @ 0x1800AF714 (_lambda_a518e9677c20752b15edab298cff80bd_--operator().c)
 *     ?EnsureDisplayWatcher@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800B04E4 (-EnsureDisplayWatcher@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wind.c)
 *     ?OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800B0708 (-OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180051ED8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnsureResources(
        struct _RTL_CRITICAL_SECTION *this,
        const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  HRESULT v5; // eax
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  HSTRING v7; // r14
  int ActivationFactory; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  LONG *p_LockCount; // rbx
  HRESULT v12; // eax
  __int64 v13; // rcx
  HSTRING v14; // r14
  HRESULT v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  HANDLE OwningThread; // rcx
  __int64 (__fastcall ***v19)(_QWORD, GUID *, char *); // rcx
  __int64 (__fastcall ***v20)(_QWORD, GUID *, char *); // rcx
  __int64 (__fastcall ***v22)(_QWORD, GUID *, char *); // [rsp+20h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-28h] BYREF
  HSTRING string; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v2 = this + 9;
  EnterCriticalSection(this + 9);
  v4 = this + 10;
  if ( !this[10].DebugInfo )
  {
    string = 0LL;
    v5 = WindowsCreateStringReference(L"Windows.Perception.PerceptionTimestampHelper", 0x2Cu, &hstringHeader, &string);
    if ( v5 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
      __debugbreak();
    }
    DebugInfo = v4->DebugInfo;
    v7 = string;
    if ( v4->DebugInfo )
    {
      v4->DebugInfo = 0LL;
      (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&DebugInfo->Type + 16LL))(DebugInfo);
    }
    ActivationFactory = RoGetActivationFactory(v7, &GUID_47a611d4_a9df_4edc_855d_f4d339d967ac, &this[10]);
    v9 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v10 = 1228LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
        (const char *)(unsigned int)ActivationFactory);
      goto LABEL_27;
    }
  }
  p_LockCount = &this[10].LockCount;
  if ( !*(_QWORD *)&this[10].LockCount )
  {
    string = 0LL;
    v12 = WindowsCreateStringReference(
            L"Windows.Graphics.Holographic.HolographicDisplay",
            0x2Fu,
            &hstringHeader,
            &string);
    if ( v12 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
      JUMPOUT(0x1800B2450LL);
    }
    v13 = *(_QWORD *)p_LockCount;
    v14 = string;
    if ( *(_QWORD *)p_LockCount )
    {
      *(_QWORD *)p_LockCount = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    ActivationFactory = RoGetActivationFactory(v14, &GUID_cb374983_e7b0_4841_8355_3ae5b536e9a4, &this[10].LockCount);
    v9 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v10 = 1233LL;
      goto LABEL_13;
    }
  }
  if ( this[10].OwningThread )
    goto LABEL_26;
  v22 = 0LL;
  string = 0LL;
  v15 = WindowsCreateStringReference(L"Windows.Perception.Spatial.SpatialLocator", 0x29u, &hstringHeader, &string);
  if ( v15 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15);
    __debugbreak();
  }
  v16 = RoGetActivationFactory(string, &GUID_b76e3340_a7c2_361b_bb82_56e93b89b1bb, &v22);
  v9 = v16;
  if ( v16 < 0 )
  {
    v17 = 1239LL;
    goto LABEL_22;
  }
  OwningThread = this[10].OwningThread;
  if ( OwningThread )
  {
    this[10].OwningThread = 0LL;
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)OwningThread + 16LL))(OwningThread);
  }
  v16 = (**v22)(v22, &GUID_a96534fe_8251_42e7_8755_e3eb989e56e9, (char *)&this[10].OwningThread);
  v9 = v16;
  if ( v16 >= 0 )
  {
    v20 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v20)[2])(v20);
    }
LABEL_26:
    v9 = 0;
    goto LABEL_27;
  }
  v17 = 1241LL;
LABEL_22:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
    (const char *)(unsigned int)v16);
  v19 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v19)[2])(v19);
  }
LABEL_27:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v9;
}
