/*
 * XREFs of ?DisconnectFromDeviceGraph@CStreamGroup@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x14003CA20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028234 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CStreamGroup::DisconnectFromDeviceGraph(
        struct _RTL_CRITICAL_SECTION *this,
        __int64 (__fastcall ***a2)(struct IAudioDeviceGraph *, GUID *, __int64 *))
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 (__fastcall **v5)(struct IAudioDeviceGraph *, GUID *, __int64 *); // rax
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 5;
  EnterCriticalSection(this + 5);
  if ( !BYTE1(this[8].OwningThread) )
  {
    v5 = *a2;
    v11 = 0LL;
    v6 = (*v5)((struct IAudioDeviceGraph *)a2, &GUID_51181bd2_bd3f_43ae_b0d1_1cf3dfda303a, &v11);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x108,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
        (const char *)(unsigned int)v6);
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v11);
      goto LABEL_8;
    }
    (*((void (__fastcall **)(HANDLE *, __int64))this->LockSemaphore + 14))(&this->LockSemaphore, v11);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v11);
  }
  v8 = *(_QWORD *)&this[8].LockCount;
  *(_QWORD *)&this[8].LockCount = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v7 = 0;
LABEL_8:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v7;
}
