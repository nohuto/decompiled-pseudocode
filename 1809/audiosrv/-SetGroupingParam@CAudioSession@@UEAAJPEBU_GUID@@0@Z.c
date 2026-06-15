/*
 * XREFs of ?SetGroupingParam@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x1800145F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSession::SetGroupingParam(CAudioSession *this, const struct _GUID *a2, const struct _GUID *a3)
{
  _QWORD *v6; // rbp
  _QWORD *i; // rsi
  int v8; // eax
  unsigned int v9; // ebx
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0;
  I_RpcBindingInqLocalClientPID(0LL, &v13);
  if ( v13 == *((_DWORD *)this + 69) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 776));
    v6 = (_QWORD *)*((_QWORD *)this + 103);
    for ( i = (_QWORD *)*((_QWORD *)this + 102); i != v6; ++i )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 448LL))(*i);
    if ( this != (CAudioSession *)-776LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 776));
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
    (void *)0x2F7,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
    (const char *)(unsigned int)v8,
    v11);
  return v9;
}
