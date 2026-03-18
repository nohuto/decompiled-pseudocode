/*
 * XREFs of ?Initialize@CScheduler@CComputeScribbleRenderer@@AEAAJPEBVCDisplay@@@Z @ 0x1801B5C5C
 * Callers:
 *     ?Create@CScheduler@CComputeScribbleRenderer@@SAJPEBVCDisplay@@PEAUID3D12CommandQueue@@PEAPEAV12@@Z @ 0x1801B5724 (-Create@CScheduler@CComputeScribbleRenderer@@SAJPEBVCDisplay@@PEAUID3D12CommandQueue@@PEAPEAV12@.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800B2D2C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800DFAE0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??$min@M@std@@YAAEBMAEBM0@Z @ 0x1800ECB7C (--$min@M@std@@YAAEBMAEBM0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180153F48 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180154D5C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIDisplayDevice@Core@Display@Devices@Windows@@@Z @ 0x180159330 (--4-$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?EnsureDDisplayResources@CDisplay@@QEBAJXZ @ 0x180159410 (-EnsureDDisplayResources@CDisplay@@QEBAJXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18015A4E4 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180166860 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CalculateDisplayBlankTime @ 0x1801B5500 (CalculateDisplayBlankTime.c)
 *     ?Create@CComputeScribbleStopwatch@@SAJPEAUID3D12CommandQueue@@PEAPEAV1@@Z @ 0x1801BBFA0 (-Create@CComputeScribbleStopwatch@@SAJPEAUID3D12CommandQueue@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CComputeScribbleRenderer::CScheduler::Initialize(
        CComputeScribbleRenderer::CScheduler *this,
        const struct CDisplay *a2)
{
  __int64 v4; // r8
  unsigned __int64 v5; // r9
  unsigned int LastError; // edi
  int LastErrorFailHr; // ebx
  __int64 v8; // rdx
  __int64 v10; // rdx
  wil::details *v11; // rcx
  wil::details *Event; // rbx
  __int64 v13; // r8
  const char *v14; // r9
  __int64 v15; // rdx
  wil::details *v16; // rcx
  wil::details *v17; // rbx
  __int64 v18; // r8
  const char *v19; // r9
  __int64 v20; // rcx
  void *v21; // rbx
  int v22; // r14d
  __int64 v23; // rdx
  struct ID3D12CommandQueue *v24; // rcx
  __int64 *v25; // rbx
  __int64 v26; // rcx
  int v27; // ecx
  float *v28; // rax
  _DWORD *v29; // r8
  HANDLE Thread; // rax
  const char *v31; // r9
  HANDLE v32; // rbx
  __int64 v33; // rdx
  HRESULT v34; // eax
  HANDLE hThread; // [rsp+30h] [rbp-30h] BYREF
  int v36; // [rsp+38h] [rbp-28h] BYREF
  float v37; // [rsp+3Ch] [rbp-24h] BYREF
  __int64 **v38; // [rsp+40h] [rbp-20h]
  struct CComputeScribbleStopwatch *v39; // [rsp+48h] [rbp-18h] BYREF
  char v40; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v4 = *((_QWORD *)a2 + 11);
  v5 = _mm_srli_si128(*(__m128i *)((char *)a2 + 88), 8).m128i_u64[0];
  *((_DWORD *)this + 8) = v5 - v4;
  *((_DWORD *)this + 9) = HIDWORD(v5) - HIDWORD(v4);
  *((float *)this + 10) = (float)*((int *)a2 + 69) / (float)*((int *)a2 + 68);
  LastError = 0;
  LastErrorFailHr = CDisplay::EnsureDDisplayResources(a2);
  if ( LastErrorFailHr < 0 )
  {
    v8 = 92LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
      (const char *)(unsigned int)LastErrorFailHr);
    return (unsigned int)LastErrorFailHr;
  }
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>::operator=(
    (__int64 *)this + 2,
    *((_QWORD *)a2 + 7));
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>::operator=(
    (__int64 *)this + 3,
    *((_QWORD *)a2 + 6));
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (wil::details **)this + 7,
      Event);
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v11, v10, v13, v14);
  }
  if ( LastErrorFailHr < 0 )
  {
    v8 = 97LL;
    goto LABEL_3;
  }
  v17 = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( v17 )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (wil::details **)this + 8,
      v17);
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v16, v15, v18, v19);
  }
  if ( LastErrorFailHr < 0 )
  {
    v8 = 98LL;
    goto LABEL_3;
  }
  v20 = *((_QWORD *)this + 3);
  v21 = (void *)*((_QWORD *)a2 + 29);
  hThread = v21;
  v22 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 64LL))(v20, &v36);
  if ( v22 < 0 )
  {
    v23 = 102LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
      (const char *)(unsigned int)v22);
    return (unsigned int)v22;
  }
  LastErrorFailHr = CalculateDisplayBlankTime(
                      (unsigned int)v21 | (unsigned __int64)((__int64)SHIDWORD(hThread) << 32),
                      v36,
                      (float *)this + 11);
  if ( LastErrorFailHr < 0 )
  {
    v8 = 103LL;
    goto LABEL_3;
  }
  v24 = (struct ID3D12CommandQueue *)*((_QWORD *)this + 1);
  v38 = (__int64 **)((char *)this + 72);
  v39 = 0LL;
  v40 = 1;
  v22 = CComputeScribbleStopwatch::Create(v24, &v39);
  if ( v40 )
  {
    v25 = *v38;
    *v38 = (__int64 *)v39;
    if ( v25 )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v25 + 5);
      v26 = v25[4];
      if ( v26 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v25);
      operator delete(v25);
    }
  }
  if ( v22 < 0 )
  {
    v23 = 106LL;
    goto LABEL_16;
  }
  *(float *)this = (float)CCommonRegistryData::SuperWetTiming::ExtensionTimeMicroseconds / 1000000.0;
  v27 = *(_DWORD *)std::min<float>((float *)this, (float *)this + 10);
  v37 = FLOAT_0_0049999999;
  *(_DWORD *)this = v27;
  *((float *)this + 1) = (float)CCommonRegistryData::SuperWetTiming::PeriodicFenceMinDifferenceMicroseconds / 1000000.0;
  v28 = std::min<float>((float *)this + 1, &v37);
  hThread = 0LL;
  *v29 = *(_DWORD *)v28;
  Thread = CreateThread(
             0LL,
             0LL,
             (LPTHREAD_START_ROUTINE)lambda_f5ee18462900d72415eda3f3bddefa30_::_lambda_invoker_cdecl_,
             this,
             4u,
             0LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &hThread,
    Thread);
  v32 = hThread;
  if ( hThread )
  {
    v34 = SetThreadDescription(hThread, L"D3D12 Compute Scribble");
    if ( v34 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x81,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
        (const char *)(unsigned int)v34);
    if ( SetThreadPriority(v32, 2) && ResumeThread(v32) != -1 )
    {
      if ( (HANDLE *)((char *)this + 48) != &hThread )
      {
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
          (void **)this + 6,
          v32);
        hThread = 0LL;
      }
      goto LABEL_36;
    }
    v33 = 138LL;
  }
  else
  {
    v33 = 125LL;
  }
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)v33,
                (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
                v31);
LABEL_36:
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&hThread);
  return LastError;
}
