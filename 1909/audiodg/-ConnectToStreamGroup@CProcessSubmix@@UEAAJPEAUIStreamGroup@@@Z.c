/*
 * XREFs of ?ConnectToStreamGroup@CProcessSubmix@@UEAAJPEAUIStreamGroup@@@Z @ 0x14000F320
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028134 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProcessSubmix::ConnectToStreamGroup(
        CProcessSubmix *this,
        __int64 (__fastcall ***a2)(struct IStreamGroup *, GUID *, __int64 *))
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 (__fastcall **v5)(struct IStreamGroup *, GUID *, __int64 *); // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  v5 = *a2;
  v12 = 0LL;
  v6 = (*v5)((struct IStreamGroup *)a2, &GUID_51181bd2_bd3f_43ae_b0d1_1cf3dfda303a, &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = 86LL;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(char *, __int64, _QWORD))(*((_QWORD *)this + 2) + 224LL))(
           (char *)this + 16,
           v12,
           0LL);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v7 = 0;
      goto LABEL_4;
    }
    v9 = 88LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processsubmix.cpp",
    (const char *)(unsigned int)v6,
    v10);
LABEL_4:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v12);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v7;
}
