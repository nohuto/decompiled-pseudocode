/*
 * XREFs of ?CreateWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@PEAPEAUIDisplayFence@Core@Display@Devices@Windows@@PEAPEAUID3D12Fence@@@Z @ 0x1801B7064
 * Callers:
 *     ?SetupWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z @ 0x1801B7FF4 (-SetupWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800DF1A8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015EA50 (-reset@-$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     McTemplateU0xuqf @ 0x1801B846C (McTemplateU0xuqf.c)
 */

__int64 __fastcall CComputeScribbleRenderer::CScheduler::CreateWakeupFence(
        CComputeScribbleRenderer::CScheduler *this,
        const struct CComputeScribbleRenderer::CScheduler::ScribbleFrame *a2,
        struct Windows::Devices::Display::Core::IDisplayFence **a3,
        struct ID3D12Fence **a4)
{
  float v4; // xmm0_4
  unsigned __int64 v6; // rdx
  __int64 v7; // rdi
  float v9; // xmm0_4
  __int64 (__fastcall *v12)(__int64, _QWORD, unsigned __int64, struct Windows::Devices::Display::Core::IDisplayFence **); // r13
  unsigned __int64 v13; // rbx
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // rcx
  int v19; // eax
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, struct Windows::Devices::Display::Core::IDisplayFence *, _QWORD, __int64, _QWORD, HANDLE *); // rdi
  int v22; // eax
  __int64 v23; // rdi
  __int64 (__fastcall *v24)(__int64, GUID *, __int64 *); // rbx
  int v25; // eax
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, HANDLE, GUID *, struct ID3D12Fence **); // rdi
  int v28; // eax
  int v29; // r9d
  __int64 v31; // [rsp+40h] [rbp-20h] BYREF
  HANDLE hObject; // [rsp+48h] [rbp-18h] BYREF
  __int64 v33[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  struct Windows::Devices::Display::Core::IDisplayFence *v35; // [rsp+A0h] [rbp+40h] BYREF
  struct ID3D12Fence *v36; // [rsp+A8h] [rbp+48h] BYREF

  v4 = *((float *)a2 + 5);
  v35 = 0LL;
  v6 = 0LL;
  v7 = *((_QWORD *)this + 2);
  v9 = v4 * 10000000.0;
  v12 = *(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, struct Windows::Devices::Display::Core::IDisplayFence **))(*(_QWORD *)v7 + 72LL);
  if ( v9 >= 9.223372e18 )
  {
    v9 = v9 - 9.223372e18;
    if ( v9 < 9.223372e18 )
      v6 = 0x8000000000000000uLL;
  }
  v13 = v6 + (unsigned int)(int)v9;
  wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset((__int64 *)&v35);
  v14 = v12(v7, *((_QWORD *)this + 3), v13, &v35);
  v15 = v14;
  if ( v14 < 0 )
  {
    v16 = (unsigned int)v14;
    v17 = 353LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
      (const char *)v16);
    goto LABEL_25;
  }
  if ( !v35 )
  {
    v15 = -2147024882;
    v17 = 356LL;
    v16 = 2147942414LL;
    goto LABEL_8;
  }
  v18 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 2);
  v33[0] = 0LL;
  v19 = (**v18)(v18, &GUID_64338358_366a_471b_bd56_dd8ef48e439b, v33);
  v15 = v19;
  if ( v19 >= 0 )
  {
    v20 = v33[0];
    hObject = 0LL;
    v21 = *(__int64 (__fastcall **)(__int64, struct Windows::Devices::Display::Core::IDisplayFence *, _QWORD, __int64, _QWORD, HANDLE *))(*(_QWORD *)v33[0] + 24LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      0LL);
    v22 = v21(v20, v35, 0LL, 0x10000000LL, 0LL, &hObject);
    v15 = v22;
    if ( v22 >= 0 )
    {
      v23 = *((_QWORD *)this + 1);
      v31 = 0LL;
      v24 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v23 + 56LL);
      wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset(&v31);
      v25 = v24(v23, &GUID_189819f1_1db6_4b57_be54_1821339b85f7, &v31);
      v15 = v25;
      if ( v25 >= 0 )
      {
        v26 = v31;
        v36 = 0LL;
        v27 = *(__int64 (__fastcall **)(__int64, HANDLE, GUID *, struct ID3D12Fence **))(*(_QWORD *)v31 + 256LL);
        wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset((__int64 *)&v36);
        v28 = v27(v26, hObject, &GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76, &v36);
        v15 = v28;
        if ( v28 >= 0 )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          {
            LOBYTE(v29) = *(_BYTE *)(*(_QWORD *)a2 + 242LL);
            McTemplateU0xuqf(
              *(_QWORD *)a2,
              (unsigned int)&EVTDESC_COMPUTESCRIBBLE_WAKEUPEVENTCREATED,
              *((_QWORD *)a2 + 1),
              v29,
              *((_DWORD *)a2 + 4),
              *((_DWORD *)a2 + 5));
          }
          v15 = 0;
          *a3 = v35;
          *a4 = v36;
          v35 = 0LL;
          v36 = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x173,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
            (const char *)(unsigned int)v28);
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v36);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x170,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
          (const char *)(unsigned int)v25);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v31);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16D,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
        (const char *)(unsigned int)v22);
    }
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      CloseHandle(hObject);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x167,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
      (const char *)(unsigned int)v19);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v33);
LABEL_25:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v35);
  return v15;
}
