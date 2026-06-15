/*
 * XREFs of ?SetGroupingParam@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x180042CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSession::SetGroupingParam(CAudioSession *this, const struct _GUID *a2, const struct _GUID *a3)
{
  _QWORD *v6; // rbp
  _QWORD *i; // rsi
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0;
  I_RpcBindingInqLocalClientPID(0LL, &v12);
  if ( v12 == *((_DWORD *)this + 69) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
    v6 = (_QWORD *)*((_QWORD *)this + 98);
    for ( i = (_QWORD *)*((_QWORD *)this + 97); i != v6; ++i )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 448LL))(*i);
    if ( this != (CAudioSession *)-736LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  }
  v8 = (*(__int64 (__fastcall **)(CAudioSession *, const struct _GUID *, const struct _GUID *))(*(_QWORD *)this + 112LL))(
         this,
         a2,
         a3);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2F6,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
