/*
 * XREFs of ?CreateWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@PEAPEAUIDisplayFence@Core@Display@Devices@Windows@@PEAPEAUID3D12Fence@@@Z @ 0x18022F058
 * Callers:
 *     ?SetupWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z @ 0x18022FE18 (-SetupWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180063A40 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015930C (-reset@-$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     McTemplateU0xuqf @ 0x18023029C (McTemplateU0xuqf.c)
 */

__int64 __fastcall CComputeScribbleRenderer::CScheduler::CreateWakeupFence(
        CComputeScribbleRenderer::CScheduler *this,
        const struct CComputeScribbleRenderer::CScheduler::ScribbleFrame *a2,
        struct Windows::Devices::Display::Core::IDisplayFence **a3,
        struct ID3D12Fence **a4)
{
  unsigned __int64 v4; // rax
  float v5; // xmm0_4
  __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // rcx
  int v17; // eax
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // rbx
  int v23; // eax
  int v24; // r9d
  struct Windows::Devices::Display::Core::IDisplayFence *v25; // rax
  struct ID3D12Fence *v26; // rax
  __int64 v28; // [rsp+40h] [rbp-20h] BYREF
  HANDLE hObject; // [rsp+48h] [rbp-18h] BYREF
  __int64 v30[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  struct Windows::Devices::Display::Core::IDisplayFence *v32; // [rsp+90h] [rbp+30h] BYREF
  struct ID3D12Fence *v33; // [rsp+98h] [rbp+38h] BYREF

  v4 = 0LL;
  v5 = *((float *)a2 + 5) * 10000000.0;
  v32 = 0LL;
  if ( v5 >= 9.223372e18 )
  {
    v5 = v5 - 9.223372e18;
    if ( v5 < 9.223372e18 )
      v4 = 0x8000000000000000uLL;
  }
  v10 = *((_QWORD *)this + 2);
  v11 = v4 + (unsigned int)(int)v5;
  wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset((__int64 *)&v32);
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, struct Windows::Devices::Display::Core::IDisplayFence **))(*(_QWORD *)v10 + 72LL))(
          v10,
          *((_QWORD *)this + 3),
          v11,
          &v32);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = (unsigned int)v12;
    v15 = 343LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
      (const char *)v14);
    goto LABEL_25;
  }
  if ( !v32 )
  {
    v13 = -2147024882;
    v15 = 346LL;
    v14 = 2147942414LL;
    goto LABEL_8;
  }
  v16 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 2);
  v30[0] = 0LL;
  v17 = (**v16)(v16, &GUID_64338358_366a_471b_bd56_dd8ef48e439b, v30);
  v13 = v17;
  if ( v17 >= 0 )
  {
    hObject = 0LL;
    v18 = v30[0];
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      0LL);
    v19 = (*(__int64 (__fastcall **)(__int64, struct Windows::Devices::Display::Core::IDisplayFence *, _QWORD, __int64, _QWORD, HANDLE *))(*(_QWORD *)v18 + 24LL))(
            v18,
            v32,
            0LL,
            0x10000000LL,
            0LL,
            &hObject);
    v13 = v19;
    if ( v19 >= 0 )
    {
      v28 = 0LL;
      v20 = *((_QWORD *)this + 1);
      wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset(&v28);
      v21 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v20 + 56LL))(
              v20,
              &GUID_189819f1_1db6_4b57_be54_1821339b85f7,
              &v28);
      v13 = v21;
      if ( v21 >= 0 )
      {
        v33 = 0LL;
        v22 = v28;
        wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset((__int64 *)&v33);
        v23 = (*(__int64 (__fastcall **)(__int64, HANDLE, GUID *, struct ID3D12Fence **))(*(_QWORD *)v22 + 256LL))(
                v22,
                hObject,
                &GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76,
                &v33);
        v13 = v23;
        if ( v23 >= 0 )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          {
            LOBYTE(v24) = *(_BYTE *)(*(_QWORD *)a2 + 242LL);
            McTemplateU0xuqf(
              *(_QWORD *)a2,
              (unsigned int)&EVTDESC_COMPUTESCRIBBLE_WAKEUPEVENTCREATED,
              *((_QWORD *)a2 + 1),
              v24,
              *((_DWORD *)a2 + 4),
              *((_DWORD *)a2 + 5));
          }
          v25 = v32;
          v32 = 0LL;
          *a3 = v25;
          v26 = v33;
          v33 = 0LL;
          v13 = 0;
          *a4 = v26;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x169,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
            (const char *)(unsigned int)v23);
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v33);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x166,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
          (const char *)(unsigned int)v21);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v28);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x163,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
        (const char *)(unsigned int)v19);
    }
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15D,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
      (const char *)(unsigned int)v17);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v30);
LABEL_25:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v32);
  return v13;
}
