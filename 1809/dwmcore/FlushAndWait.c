/*
 * XREFs of FlushAndWait @ 0x1801E185C
 * Callers:
 *     ?DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z @ 0x1801E11F4 (-DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18007B470 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180085E50 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180143514 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180143A08 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801448CC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015930C (-reset@-$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall FlushAndWait(__int64 a1)
{
  int v2; // eax
  int LastErrorFailHr; // edi
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  HANDLE v7; // rbx
  __int64 v8; // rdx
  wil::details *v9; // rcx
  wil::details *Event; // rdi
  __int64 v11; // r8
  const char *v12; // r9
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  void *v16; // rdx
  DWORD v17; // eax
  const char *v18; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v21; // [rsp+50h] [rbp+20h] BYREF
  __int64 v22; // [rsp+58h] [rbp+28h] BYREF
  HANDLE hHandle; // [rsp+60h] [rbp+30h] BYREF

  v22 = 0LL;
  wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset(&v22);
  v2 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)a1 + 56LL))(
         a1,
         &GUID_189819f1_1db6_4b57_be54_1821339b85f7,
         &v22);
  LastErrorFailHr = v2;
  if ( v2 >= 0 )
  {
    v21 = 0LL;
    v4 = v22;
    wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset(&v21);
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, GUID *, __int64 *))(*(_QWORD *)v4 + 288LL))(
           v4,
           0LL,
           0LL,
           &GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76,
           &v21);
    LastErrorFailHr = v5;
    if ( v5 < 0 )
    {
      v6 = 232LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
        (const char *)(unsigned int)v5);
LABEL_23:
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v21);
      goto LABEL_24;
    }
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 112LL))(a1, v21, 1LL);
    LastErrorFailHr = v5;
    if ( v5 < 0 )
    {
      v6 = 233LL;
      goto LABEL_7;
    }
    v7 = 0LL;
    hHandle = 0LL;
    Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
    if ( Event )
    {
      GetLastError();
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
        (wil::details **)&hHandle,
        Event);
      v7 = hHandle;
      LastErrorFailHr = 0;
    }
    else
    {
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v9, v8, v11, v12);
    }
    if ( LastErrorFailHr >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, __int64, HANDLE))(*(_QWORD *)v21 + 72LL))(v21, 1LL, v7);
      LastErrorFailHr = v15;
      if ( v15 >= 0 )
      {
        v17 = WaitForSingleObjectEx(v7, 0xFFFFFFFF, 0);
        if ( v17 == 258 )
        {
          LastErrorFailHr = wil::details::in1diag3::Return_GetLastError(
                              retaddr,
                              (void *)0xEF,
                              (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
                              v18);
        }
        else
        {
          if ( v17 )
          {
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0xA07,
              (__int64)"internal\\sdk\\inc\\wil/resource.h",
              v18);
            __debugbreak();
          }
          LastErrorFailHr = 0;
        }
        goto LABEL_21;
      }
      v13 = (unsigned int)v15;
      v14 = 238LL;
    }
    else
    {
      v13 = (unsigned int)LastErrorFailHr;
      v14 = 237LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
      (const char *)v13);
LABEL_21:
    if ( v7 )
      wil::details::CloseHandle((wil::details *)v7, v16);
    goto LABEL_23;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE5,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
    (const char *)(unsigned int)v2);
LABEL_24:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v22);
  return (unsigned int)LastErrorFailHr;
}
