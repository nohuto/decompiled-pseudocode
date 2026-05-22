/*
 * XREFs of ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x18001F5FC
 * Callers:
 *     ?Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x18001F524 (-Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18001F94C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x18001FB40 (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ?Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ @ 0x18001FD14 (-Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x180020148 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x1800205A4 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VSpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UISpatialInteractionSourceCollection@234@$$V@Details@WRL@Microsoft@@YAJPEAPEAUISpatialInteractionSourceCollection@SpatialInteractions@Internal@Windows@@@Z @ 0x180029A38 (--$MakeAndInitialize@VSpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wind.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180059CF0 (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z @ 0x18009DDA0 (-OnCompositorRunningStateChanged@SpatialRimDeviceCollection@@AEAAX_N@Z.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::Initialize(SpatialRimDeviceCollection *this, void **a2)
{
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // edx
  unsigned int v9; // r9d
  int v10; // eax
  unsigned int v11; // ebx
  void *v12; // rdx
  unsigned int v13; // r8d
  const char *v14; // r9
  HANDLE Event; // r15
  wil::details *v16; // r14
  DWORD LastError; // ebx
  void *v18; // rdx
  int v19; // eax
  unsigned int v20; // ebx
  int v21; // eax
  unsigned int v22; // ebx
  RTL_SRWLOCK *Instance; // rbx
  const char *v24; // r9
  __int64 result; // rax
  __int128 v26; // [rsp+38h] [rbp-80h]
  char v27; // [rsp+48h] [rbp-70h]
  void **v28; // [rsp+58h] [rbp-60h] BYREF
  __int128 v29; // [rsp+60h] [rbp-58h]
  char v30; // [rsp+70h] [rbp-48h]
  SpatialRimDeviceCollection *v31; // [rsp+78h] [rbp-40h]
  void ***v32; // [rsp+90h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  try
  {
    v4 = (_QWORD *)((char *)this + 2776);
    v5 = *((_QWORD *)this + 347);
    if ( v5 )
    {
      *v4 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    v6 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollection,>(v4);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x114,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
        (const char *)(unsigned int)v6);
      result = v7;
    }
    else
    {
      *((_DWORD *)this + 696) = GetCurrentThreadId();
      v10 = HIDDeviceCollection::Initialize(this, v8, (struct _RIM_USAGE_ANDPAGE *const)&unk_1801E0420, v9, 0x1Du, a2);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x11F,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
          (const char *)(unsigned int)v10);
        result = v11;
      }
      else
      {
        Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
        if ( !Event )
        {
          wil::details::in1diag3::Throw_GetLastError(retaddr, v12, v13, v14);
          JUMPOUT(0x1800495B0LL);
        }
        GetLastError();
        v16 = (wil::details *)*((_QWORD *)this + 365);
        if ( v16 )
        {
          LastError = GetLastError();
          wil::details::CloseHandle(v16, v18);
          SetLastError(LastError);
        }
        *((_QWORD *)this + 365) = Event;
        v19 = (*(__int64 (__fastcall **)(_QWORD, HANDLE, __int64 (__fastcall *)(void *, unsigned int, void *), SpatialRimDeviceCollection *))(**((_QWORD **)this + 346) + 248LL))(
                *((_QWORD *)this + 346),
                Event,
                SpatialRimDeviceCollection::OnCallbackOnInputThreadStatic,
                this);
        v20 = v19;
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x123,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
            (const char *)(unsigned int)v19);
          result = v20;
        }
        else
        {
          v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v4 + 96LL))(*v4, *((_QWORD *)this + 365));
          v22 = v21;
          if ( v21 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x126,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
              (const char *)(unsigned int)v21);
            result = v22;
          }
          else
          {
            Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
            if ( MPC3DStateHelper::Is3DCompositorRunning(Instance) )
            {
              SpatialRimDeviceCollection::OnCompositorRunningStateChanged(this, 1);
            }
            else
            {
              *(_QWORD *)&v26 = SpatialRimDeviceCollection::OnCompositorRunningStateChanged;
              DWORD2(v26) = 0;
              v28 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (SpatialRimDeviceCollection::*)(bool),SpatialRimDeviceCollection *,std::_Ph<1> const &>,void,bool>::`vftable';
              v29 = v26;
              v30 = v27;
              v31 = this;
              v32 = &v28;
              MPC3DStateHelper::RegisterFor3DCompositorRunningChanged(Instance);
            }
            result = 0LL;
          }
        }
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x135,
                           (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialr"
                                         "imdevicecollection.cpp",
                           v24);
  }
  return result;
}
