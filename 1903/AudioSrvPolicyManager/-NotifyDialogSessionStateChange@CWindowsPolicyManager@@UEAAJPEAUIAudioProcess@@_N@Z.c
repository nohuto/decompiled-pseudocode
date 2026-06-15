/*
 * XREFs of ?NotifyDialogSessionStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z @ 0x180006ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800295F4 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::NotifyDialogSessionStateChange(
        CWindowsPolicyManager *this,
        __int64 a2,
        char a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  volatile signed __int32 *v6; // rdi
  int v7; // eax
  unsigned int v8; // esi
  int v10[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+28h] [rbp-40h]
  char v12; // [rsp+30h] [rbp-38h]
  int *v13; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( !g_ApplicationManager )
    return 0LL;
  v3 = a2 - 16;
  v4 = -a2;
  v5 = v3 & -(__int64)(v4 != 0);
  v6 = (volatile signed __int32 *)(v5 + 8);
  if ( v5 )
  {
    _InterlockedIncrement(v6);
    _InterlockedIncrement(v6);
  }
  v11 = v3 & -(__int64)(v4 != 0);
  *(_QWORD *)v10 = &off_180039090;
  v12 = a3;
  v13 = v10;
  v7 = QueueGenericWorkItem(v10);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( v5 && _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x294,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    (const char *)(unsigned int)v7);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
    }
  }
  return v8;
}
