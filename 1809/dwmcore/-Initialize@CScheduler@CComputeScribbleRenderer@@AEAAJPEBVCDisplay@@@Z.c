/*
 * XREFs of ?Initialize@CScheduler@CComputeScribbleRenderer@@AEAAJPEBVCDisplay@@@Z @ 0x18022F484
 * Callers:
 *     ?Create@CScheduler@CComputeScribbleRenderer@@SAJPEBVCDisplay@@PEAUID3D12CommandQueue@@PEAPEAV12@@Z @ 0x18022EFB8 (-Create@CScheduler@CComputeScribbleRenderer@@SAJPEBVCDisplay@@PEAUID3D12CommandQueue@@PEAPEAV12@.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180063A40 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180085E50 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     ??4?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIDisplayDevice@Core@Display@Devices@Windows@@@Z @ 0x1800EF5B8 (--4-$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180143A08 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801448CC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015BA40 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureDDisplayResources@CDisplay@@QEBAJXZ @ 0x1801E3634 (-EnsureDDisplayResources@CDisplay@@QEBAJXZ.c)
 *     CalculateDisplayBlankTime @ 0x18022ED94 (CalculateDisplayBlankTime.c)
 *     ?Create@CComputeScribbleStopwatch@@SAJPEAUID3D12CommandQueue@@PEAPEAV1@@Z @ 0x1802303DC (-Create@CComputeScribbleStopwatch@@SAJPEAUID3D12CommandQueue@@PEAPEAV1@@Z.c)
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
  __int64 v20; // r14
  struct ID3D12CommandQueue *v21; // rcx
  int v22; // r14d
  __int64 *v23; // rbx
  __int64 v24; // rcx
  HANDLE Thread; // rax
  const char *v26; // r9
  char *v27; // rbx
  __int64 v28; // rdx
  HRESULT v29; // eax
  int v30; // [rsp+30h] [rbp-30h] BYREF
  HANDLE hThread; // [rsp+38h] [rbp-28h] BYREF
  __int64 **v32; // [rsp+40h] [rbp-20h]
  struct CComputeScribbleStopwatch *v33; // [rsp+48h] [rbp-18h] BYREF
  char v34; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v4 = *((_QWORD *)a2 + 11);
  v5 = _mm_srli_si128(*(__m128i *)((char *)a2 + 88), 8).m128i_u64[0];
  *((_DWORD *)this + 8) = v5 - v4;
  *((_DWORD *)this + 9) = HIDWORD(v5) - HIDWORD(v4);
  *((float *)this + 10) = (float)*((int *)a2 + 71) / (float)*((int *)a2 + 70);
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
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
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
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
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
  v20 = *((_QWORD *)a2 + 30);
  LastErrorFailHr = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 3) + 64LL))(
                      *((_QWORD *)this + 3),
                      &v30);
  if ( LastErrorFailHr < 0 )
  {
    v8 = 102LL;
    goto LABEL_3;
  }
  LastErrorFailHr = CalculateDisplayBlankTime(
                      (unsigned int)v20 | (unsigned __int64)((__int64)SHIDWORD(v20) << 32),
                      v30,
                      (float *)this + 11);
  if ( LastErrorFailHr < 0 )
  {
    v8 = 103LL;
    goto LABEL_3;
  }
  v21 = (struct ID3D12CommandQueue *)*((_QWORD *)this + 1);
  v32 = (__int64 **)((char *)this + 72);
  v33 = 0LL;
  v34 = 1;
  v22 = CComputeScribbleStopwatch::Create(v21, &v33);
  if ( v34 )
  {
    v23 = *v32;
    *v32 = (__int64 *)v33;
    if ( v23 )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v23 + 5);
      v24 = v23[4];
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v23);
      operator delete(v23);
    }
  }
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
      (const char *)(unsigned int)v22);
    return (unsigned int)v22;
  }
  hThread = 0LL;
  *(float *)this = (float)(int)CCommonRegistryData::m_dwSuperWetExtensionTimeMicroseconds / 1000000.0;
  Thread = CreateThread(
             0LL,
             0LL,
             (LPTHREAD_START_ROUTINE)lambda_ad5752422a00f3d87d96ef70e6320478_::_lambda_invoker_cdecl_,
             this,
             4u,
             0LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &hThread,
    Thread);
  v27 = (char *)hThread;
  if ( hThread )
  {
    v29 = SetThreadDescription(hThread, L"D3D12 Compute Scribble");
    if ( v29 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7C,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
        (const char *)(unsigned int)v29);
    if ( SetThreadPriority(v27, 2) && ResumeThread(v27) != -1 )
    {
      if ( (HANDLE *)((char *)this + 48) != &hThread )
      {
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
          (void **)this + 6,
          v27);
        v27 = 0LL;
      }
      goto LABEL_35;
    }
    v28 = 133LL;
  }
  else
  {
    v28 = 120LL;
  }
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)v28,
                (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
                v26);
LABEL_35:
  if ( (unsigned __int64)(v27 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v27);
  return LastError;
}
