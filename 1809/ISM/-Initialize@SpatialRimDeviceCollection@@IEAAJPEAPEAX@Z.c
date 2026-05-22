/*
 * XREFs of ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800620A8
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18005C284 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800035C4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180004D78 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000FC00 (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18003A930 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ @ 0x18003AFA0 (-Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ.c)
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x18003B008 (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ?UseDdiForHands@@YA_NXZ @ 0x180058594 (-UseDdiForHands@@YA_NXZ.c)
 *     ?OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z @ 0x1800634F0 (-OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x1800690D0 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ??0SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1800B5FEC (--0SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SpatialRimDeviceCollection::Initialize(SpatialRimDeviceCollection *this, void **a2)
{
  _QWORD *v4; // r14
  __int64 v5; // rcx
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *v6; // rax
  int v7; // ebx
  _QWORD *v8; // rdi
  const char *v9; // r9
  PTP_WORK ThreadpoolWork; // r15
  struct _TP_WORK *v11; // r12
  DWORD LastError; // ebx
  const char *v13; // r9
  __int64 result; // rax
  unsigned int v15; // edx
  unsigned int v16; // r9d
  int v17; // eax
  unsigned int v18; // ebx
  void *v19; // rdx
  HANDLE Event; // rbx
  __int64 v21; // r8
  const char *v22; // r9
  int v23; // eax
  unsigned int v24; // ebx
  int v25; // eax
  unsigned int v26; // ebx
  RTL_SRWLOCK *Instance; // rbx
  __int128 v28; // [rsp+38h] [rbp-A0h]
  __int128 v29; // [rsp+48h] [rbp-90h]
  void **v30; // [rsp+58h] [rbp-80h] BYREF
  __int128 v31; // [rsp+60h] [rbp-78h]
  __int128 v32; // [rsp+70h] [rbp-68h]
  void ***v33; // [rsp+90h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  try
  {
    v4 = (_QWORD *)((char *)this + 2776);
    v5 = *((_QWORD *)this + 347);
    if ( v5 )
    {
      *v4 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    *v4 = 0LL;
    v6 = (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)operator new(
                                                                                               0x2B8uLL,
                                                                                               (const struct std::nothrow_t *)&std::nothrow);
    if ( !v6 )
    {
      v7 = -2147024882;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
        (const char *)(unsigned int)v7);
      return (unsigned int)v7;
    }
    v8 = (_QWORD *)Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection(v6);
    ThreadpoolWork = CreateThreadpoolWork(
                       Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::StaticExecuteWorkItems,
                       v8,
                       0LL);
    v11 = (struct _TP_WORK *)v8[73];
    if ( v11 )
    {
      LastError = GetLastError();
      WaitForThreadpoolWorkCallbacks(v11, 0);
      CloseThreadpoolWork(v11);
      SetLastError(LastError);
    }
    v8[73] = ThreadpoolWork;
    if ( ThreadpoolWork )
      v7 = 0;
    else
      v7 = wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0xAA,
             (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
             v9);
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*v8)(
             v8,
             &GUID_00759b61_908b_429d_b44f_bab28638e1a4,
             v4);
    }
    else if ( !v8 )
    {
LABEL_16:
      if ( v7 < 0 )
        goto LABEL_17;
      *((_DWORD *)this + 696) = GetCurrentThreadId();
      v17 = HIDDeviceCollection::Initialize(this, v15, (struct _RIM_USAGE_ANDPAGE *const)&unk_180192900, v16, 0x1Du, a2);
      v18 = v17;
      if ( v17 >= 0 )
      {
        Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
        if ( !Event )
        {
          wil::details::in1diag3::Throw_GetLastError(retaddr, v19, v21, v22);
          JUMPOUT(0x1800623CCLL);
        }
        GetLastError();
        wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
          (void **)this + 365,
          Event);
        v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(void *, unsigned int, void *), SpatialRimDeviceCollection *))(**((_QWORD **)this + 346) + 264LL))(
                *((_QWORD *)this + 346),
                *((_QWORD *)this + 365),
                SpatialRimDeviceCollection::OnCallbackOnInputThreadStatic,
                this);
        v24 = v23;
        if ( v23 >= 0 )
        {
          v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v4 + 88LL))(*v4, *((_QWORD *)this + 365));
          v26 = v25;
          if ( v25 >= 0 )
          {
            if ( UseDdiForHands() )
            {
              Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
              if ( MPC3DStateHelper::Is3DCompositorRunning(Instance) )
              {
                SpatialRimDeviceCollection::OnCompositorRunningStateChanged(this, 1);
              }
              else
              {
                *(_QWORD *)&v28 = SpatialRimDeviceCollection::OnCompositorRunningStateChanged;
                DWORD2(v28) = 0;
                *((_QWORD *)&v29 + 1) = this;
                v30 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (SpatialRimDeviceCollection::*)(bool),SpatialRimDeviceCollection *,std::_Ph<1> const &>,void,bool>::`vftable';
                v31 = v28;
                v32 = v29;
                v33 = &v30;
                MPC3DStateHelper::RegisterFor3DCompositorRunningChanged(
                  Instance,
                  (__int64)&v30,
                  (unsigned int *)this + 711);
              }
            }
            return 0LL;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x121,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
              (const char *)(unsigned int)v25);
            return v26;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x11E,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
            (const char *)(unsigned int)v23);
          return v24;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x11A,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
          (const char *)(unsigned int)v17);
        return v18;
      }
    }
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
    goto LABEL_16;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x136,
                           (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialr"
                                         "imdevicecollection.cpp",
                           v13);
  }
  return result;
}
