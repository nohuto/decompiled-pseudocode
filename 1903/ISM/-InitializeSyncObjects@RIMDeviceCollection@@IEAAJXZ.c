/*
 * XREFs of ?InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ @ 0x180020808
 * Callers:
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x1800205A4 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x18009A758 (-Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800519D4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall RIMDeviceCollection::InitializeSyncObjects(RIMDeviceCollection *this)
{
  HANDLE CurrentProcess; // rsi
  HANDLE EventW; // rax
  const char *v4; // r9
  HANDLE v5; // rax
  HANDLE v6; // r15
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rcx
  HANDLE v10; // rax
  HANDLE v11; // r15
  int v12; // eax
  __int64 v13; // rcx
  HANDLE WaitableTimer; // rax
  HANDLE v15; // r15
  int v16; // eax
  __int64 v17; // rcx
  HANDLE v18; // rax
  HANDLE v19; // rsi
  int v20; // eax
  __int64 v21; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  HANDLE TargetHandle; // [rsp+80h] [rbp+30h] BYREF
  __int64 v31; // [rsp+88h] [rbp+38h] BYREF

  CurrentProcess = GetCurrentProcess();
  TargetHandle = 0LL;
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 5) = EventW;
  if ( !EventW )
  {
    v23 = 771LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v23,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v4);
  }
  v5 = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 6) = v5;
  if ( !v5 )
  {
    v23 = 778LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v23,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v4);
  }
  if ( !DuplicateHandle(CurrentProcess, v5, CurrentProcess, &TargetHandle, 0, 0, 2u) )
  {
    v23 = 787LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v23,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v4);
  }
  v6 = TargetHandle;
  v31 = 0LL;
  v7 = CoreUICreate(&v31);
  v8 = v7;
  if ( v7 < 0 )
  {
    v24 = 1192LL;
LABEL_46:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v31);
    goto LABEL_10;
  }
  if ( !v31 )
  {
    v8 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4AC,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)0x8000FFFFLL);
    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v31);
    goto LABEL_48;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, HANDLE, __int64 (__fastcall *)(void *, unsigned int, void *), RIMDeviceCollection *))(*(_QWORD *)v31 + 248LL))(
         v31,
         v6,
         RIMDeviceCollection::OnRIMPnpEventStatic,
         this);
  v8 = v7;
  if ( v7 < 0 )
  {
    v24 = 1202LL;
    goto LABEL_46;
  }
  v9 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v8 = 0;
LABEL_10:
  if ( v8 >= 0 )
  {
    v10 = CreateEventW(0LL, 0, 0, 0LL);
    *((_QWORD *)this + 7) = v10;
    if ( !v10 )
    {
      v23 = 799LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v23,
               (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
               v4);
    }
    if ( !DuplicateHandle(CurrentProcess, v10, CurrentProcess, &TargetHandle, 0, 0, 2u) )
    {
      v23 = 808LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v23,
               (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
               v4);
    }
    v11 = TargetHandle;
    v31 = 0LL;
    v12 = CoreUICreate(&v31);
    v8 = v12;
    if ( v12 < 0 )
    {
      v26 = 1192LL;
    }
    else
    {
      if ( !v31 )
      {
        v8 = -2147418113;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4AC,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
          (const char *)0x8000FFFFLL);
        Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v31);
        goto LABEL_58;
      }
      v12 = (*(__int64 (__fastcall **)(__int64, HANDLE, __int64 (__fastcall *)(void *, unsigned int, void *), RIMDeviceCollection *))(*(_QWORD *)v31 + 248LL))(
              v31,
              v11,
              RIMDeviceCollection::OnRIMDeferredRead,
              this);
      v8 = v12;
      if ( v12 >= 0 )
      {
        v13 = v31;
        if ( v31 )
        {
          v31 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        v8 = 0;
LABEL_19:
        if ( v8 >= 0 )
        {
          WaitableTimer = CreateWaitableTimerExW(0LL, 0LL, 0, 0x100002u);
          *((_QWORD *)this + 8) = WaitableTimer;
          if ( !WaitableTimer )
          {
            v23 = 821LL;
            return wil::details::in1diag3::Return_GetLastError(
                     retaddr,
                     (void *)v23,
                     (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
                     v4);
          }
          if ( !DuplicateHandle(CurrentProcess, WaitableTimer, CurrentProcess, &TargetHandle, 0, 0, 2u) )
          {
            v23 = 830LL;
            return wil::details::in1diag3::Return_GetLastError(
                     retaddr,
                     (void *)v23,
                     (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
                     v4);
          }
          v15 = TargetHandle;
          v31 = 0LL;
          v16 = CoreUICreate(&v31);
          v8 = v16;
          if ( v16 < 0 )
          {
            v27 = 1192LL;
          }
          else
          {
            if ( !v31 )
            {
              v8 = -2147418113;
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x4AC,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
                (const char *)0x8000FFFFLL);
              Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v31);
              goto LABEL_65;
            }
            v16 = (*(__int64 (__fastcall **)(__int64, HANDLE, __int64 (__fastcall *)(void *, unsigned int, void *), RIMDeviceCollection *))(*(_QWORD *)v31 + 248LL))(
                    v31,
                    v15,
                    RIMDeviceCollection::OnRIMTimerEventStatic,
                    this);
            v8 = v16;
            if ( v16 >= 0 )
            {
              v17 = v31;
              if ( v31 )
              {
                v31 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
              }
              v8 = 0;
LABEL_28:
              if ( v8 >= 0 )
              {
                v18 = CreateWaitableTimerExW(0LL, 0LL, 0, 0x100002u);
                *((_QWORD *)this + 9) = v18;
                if ( v18 )
                {
                  if ( DuplicateHandle(CurrentProcess, v18, CurrentProcess, &TargetHandle, 0, 0, 2u) )
                  {
                    v19 = TargetHandle;
                    v31 = 0LL;
                    v20 = CoreUICreate(&v31);
                    v8 = v20;
                    if ( v20 < 0 )
                    {
                      v28 = 1192LL;
                    }
                    else
                    {
                      if ( !v31 )
                      {
                        v8 = -2147418113;
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)0x4AC,
                          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
                          (const char *)0x8000FFFFLL);
                        Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v31);
LABEL_50:
                        v25 = 856LL;
                        goto LABEL_51;
                      }
                      v20 = (*(__int64 (__fastcall **)(__int64, HANDLE, __int64 (__fastcall *)(void *, unsigned int, void *), RIMDeviceCollection *))(*(_QWORD *)v31 + 248LL))(
                              v31,
                              v19,
                              RIMDeviceCollection::OnRIMAutoRepeatEventStatic,
                              this);
                      v8 = v20;
                      if ( v20 >= 0 )
                      {
                        v21 = v31;
                        if ( v31 )
                        {
                          v31 = 0LL;
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
                        }
                        v8 = 0;
LABEL_37:
                        if ( v8 >= 0 )
                          return 0LL;
                        goto LABEL_50;
                      }
                      v28 = 1202LL;
                    }
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)v28,
                      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
                      (const char *)(unsigned int)v20);
                    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v31);
                    goto LABEL_37;
                  }
                  v23 = 851LL;
                }
                else
                {
                  v23 = 842LL;
                }
                return wil::details::in1diag3::Return_GetLastError(
                         retaddr,
                         (void *)v23,
                         (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
                         v4);
              }
LABEL_65:
              v25 = 835LL;
              goto LABEL_51;
            }
            v27 = 1202LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v27,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
            (const char *)(unsigned int)v16);
          Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v31);
          goto LABEL_28;
        }
LABEL_58:
        v25 = 813LL;
        goto LABEL_51;
      }
      v26 = 1202LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)v12);
    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v31);
    goto LABEL_19;
  }
LABEL_48:
  v25 = 792LL;
LABEL_51:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v25,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
