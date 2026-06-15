/*
 * XREFs of ?OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ @ 0x18012E5D8
 * Callers:
 *     ?OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18012E730 (-OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18012E8B8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioDGProcess::OnADGProcessTerminated(CAudioDGProcess *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  char *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  __int64 v6; // rdx
  void (__fastcall ***v7)(_QWORD, __int64); // rcx
  DWORD ExitCode; // [rsp+30h] [rbp-78h] BYREF
  __int64 v9; // [rsp+38h] [rbp-70h]
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+40h] [rbp-68h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-58h] BYREF
  char *v12; // [rsp+70h] [rbp-38h]
  int v13; // [rsp+78h] [rbp-30h]
  int v14; // [rsp+7Ch] [rbp-2Ch]
  DWORD *p_ExitCode; // [rsp+80h] [rbp-28h]
  int v16; // [rsp+88h] [rbp-20h]
  int v17; // [rsp+8Ch] [rbp-1Ch]

  v9 = -2LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v10 = v2;
  v3 = (char *)*((_QWORD *)this + 11);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && GetExitCodeProcess(v3, &ExitCode) )
  {
    if ( (unsigned int)dword_1801B14C0 > 4 )
    {
      v12 = (char *)this + 96;
      v13 = 4;
      v14 = 0;
      p_ExitCode = &ExitCode;
      v16 = 4;
      v17 = 0;
      TlgWrite((TraceLoggingHProvider)&dword_1801B14C0, &unk_180177AFD, v4, v5, 4u, &pData);
    }
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (char *)this + 88,
      0LL);
    *((_DWORD *)this + 24) = 0;
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 96LL))(
      ThreadPool,
      *((_QWORD *)this + 16));
    *((_QWORD *)this + 16) = 0LL;
    v7 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 19);
    if ( v7 )
    {
      LOBYTE(v6) = 1;
      (**v7)(v7, v6);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
