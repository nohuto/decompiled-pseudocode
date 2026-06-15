/*
 * XREFs of ?InitializeHardwareStreamControls@CAudioStream@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x1800DA700
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D1EF0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 */

__int64 __fastcall CAudioStream::InitializeHardwareStreamControls(CAudioStream *this, struct IAudioDeviceGraph *a2)
{
  char *v2; // rbx
  int v5; // eax
  int v6; // ebx
  __int64 v7; // rdx
  int v9; // eax
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (char *)this + 168;
  *((_DWORD *)this + 31) = 2;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)this + 21);
  v5 = (**(__int64 (__fastcall ***)(struct IAudioDeviceGraph *, GUID *, char *))a2)(
         a2,
         &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
         v2);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C8,
      (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/com.h",
      (const char *)(unsigned int)v5);
    v7 = 713LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)this + 22);
  v9 = (**(__int64 (__fastcall ***)(struct IAudioDeviceGraph *, GUID *, char *))a2)(
         a2,
         &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd,
         (char *)this + 176);
  v6 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C8,
      (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/com.h",
      (const char *)(unsigned int)v9);
    v7 = 714LL;
    goto LABEL_3;
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)this + 23);
  v10 = (**(__int64 (__fastcall ***)(struct IAudioDeviceGraph *, GUID *, char *))a2)(
          a2,
          &GUID_419b26e3_fa99_4408_83de_cc1276efa489,
          (char *)this + 184);
  v6 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C8,
      (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/com.h",
      (const char *)(unsigned int)v10);
    v7 = 715LL;
    goto LABEL_3;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 23) + 32LL))(
         *((_QWORD *)this + 23),
         (char *)this + 88);
  if ( v6 < 0 )
  {
    v7 = 717LL;
    goto LABEL_3;
  }
  return 0LL;
}
