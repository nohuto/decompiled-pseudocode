/*
 * XREFs of ?DisconnectFromStreamGroup@CProcessSubmix@@UEAAJPEAUIStreamGroup@@@Z @ 0x14003F2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028134 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProcessSubmix::DisconnectFromStreamGroup(
        CProcessSubmix *this,
        __int64 (__fastcall ***a2)(struct IStreamGroup *, GUID *, __int64 *))
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 (__fastcall **v5)(struct IStreamGroup *, GUID *, __int64 *); // rax
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  v5 = *a2;
  v10 = 0LL;
  v6 = (*v5)((struct IStreamGroup *)a2, &GUID_51181bd2_bd3f_43ae_b0d1_1cf3dfda303a, &v10);
  v7 = v6;
  if ( v6 >= 0 )
  {
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 2) + 112LL))((char *)this + 16, v10);
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x67,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\processsubmix.cpp",
      (const char *)(unsigned int)v6);
  }
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v10);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v7;
}
