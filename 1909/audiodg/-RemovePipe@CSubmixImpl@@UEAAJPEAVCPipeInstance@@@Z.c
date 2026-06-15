/*
 * XREFs of ?RemovePipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x14003EBD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028134 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSubmixImpl::RemovePipe(CSubmixImpl *this, struct CPipeInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 38);
  if ( v5 )
  {
    v11 = 0LL;
    v6 = (**v5)(v5, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v11);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 1298LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v6);
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v11);
      goto LABEL_9;
    }
    v6 = (*(__int64 (__fastcall **)(__int64, struct CPipeInstance *))(*(_QWORD *)v11 + 48LL))(v11, a2);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 1300LL;
      goto LABEL_6;
    }
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v11);
  }
  v7 = 0;
LABEL_9:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v7;
}
