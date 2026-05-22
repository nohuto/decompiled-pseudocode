/*
 * XREFs of ?GetDisplayForDevice@DWMInputRouter@@UEAAJPEAUDeviceInfo@@PEAPEAUIInputDisplay@@@Z @ 0x180006F40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z @ 0x180014F0C (-Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??0ContextualProcessorInitialState@@QEAA@AEBU0@@Z @ 0x1800C202C (--0ContextualProcessorInitialState@@QEAA@AEBU0@@Z.c)
 */

__int64 __fastcall DWMInputRouter::GetDisplayForDevice(
        DWMInputRouter *this,
        struct DeviceInfo *a2,
        struct IInputDisplay **a3)
{
  HMONITOR v3; // rdi
  __int64 *v7; // rdi
  __int64 *i; // r14
  struct IInputDisplay *v9; // rcx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  ContextualProcessorInitialState *v14; // rax
  int v15; // r15d
  __int64 v16; // rcx
  int v17[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HMONITOR v19; // [rsp+58h] [rbp+10h] BYREF

  v3 = (HMONITOR)*((_QWORD *)a2 + 3);
  if ( v3 )
  {
    v11 = *((_QWORD *)this + 28);
    v19 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, HMONITOR *))(*(_QWORD *)v11 + 24LL))(v11, &v19);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x6A2,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v12,
        v17[0]);
      __debugbreak();
    }
    if ( v3 == v19 )
    {
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)this + 28);
      *a3 = (struct IInputDisplay *)*((_QWORD *)this + 28);
    }
    else
    {
      v13 = DWMInputDisplay::Create(v3, a3);
      if ( v13 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x6AA,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v13,
          v17[0]);
        __debugbreak();
      }
    }
  }
  else
  {
    v7 = (__int64 *)*((_QWORD *)this + 25);
    for ( i = (__int64 *)*((_QWORD *)this + 26); v7 != i; v7 += 2 )
    {
      v14 = ContextualProcessorInitialState::ContextualProcessorInitialState(
              (ContextualProcessorInitialState *)v17,
              (const struct ContextualProcessorInitialState *)v7);
      v15 = *((_DWORD *)a2 + 1) & *(_DWORD *)v14;
      v16 = *((_QWORD *)v14 + 1);
      if ( v16 )
      {
        *((_QWORD *)v14 + 1) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      if ( v15 )
        break;
    }
    if ( v7 == *((__int64 **)this + 26) )
    {
      v9 = (struct IInputDisplay *)*((_QWORD *)this + 28);
      if ( v9 )
      {
        (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v9 + 8LL))(v9);
        v9 = (struct IInputDisplay *)*((_QWORD *)this + 28);
      }
      *a3 = v9;
    }
    else
    {
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v7 + 1);
      *a3 = (struct IInputDisplay *)v7[1];
    }
  }
  return 0LL;
}
