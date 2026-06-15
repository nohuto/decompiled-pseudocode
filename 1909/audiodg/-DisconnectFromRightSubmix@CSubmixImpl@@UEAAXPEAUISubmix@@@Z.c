/*
 * XREFs of ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x14003E0C0
 * Callers:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x14003DA68 (--1CSubmixImpl@@QEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400046A4 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSubmixImpl::DisconnectFromRightSubmix(
        CSubmixImpl *this,
        void (__fastcall ***a2)(struct ISubmix *, GUID *, __int64 *))
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  void (__fastcall **v5)(struct ISubmix *, GUID *, __int64 *); // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v5 = *a2;
  v8 = 0LL;
  (*v5)((struct ISubmix *)a2, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v8);
  v6 = v8;
  if ( v8 )
  {
    (*(void (__fastcall **)(CSubmixImpl *))(*(_QWORD *)this + 152LL))(this);
    (*(void (__fastcall **)(__int64, CSubmixImpl *))(*(_QWORD *)v8 + 88LL))(v8, this);
  }
  v7 = *((_QWORD *)this + 38);
  *((_QWORD *)this + 38) = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  PublishDeviceGraphWnfState(v7, v6);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v8);
  if ( v2 )
    LeaveCriticalSection(v2);
}
