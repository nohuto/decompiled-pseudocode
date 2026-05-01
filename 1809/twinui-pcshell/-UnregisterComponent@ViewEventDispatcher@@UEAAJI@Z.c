/*
 * XREFs of ?UnregisterComponent@ViewEventDispatcher@@UEAAJI@Z @ 0x18021BA40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_UnregisterComponent@ViewEventDispatcher@@AEAAXI@Z @ 0x180220A08 (-_UnregisterComponent@ViewEventDispatcher@@AEAAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::UnregisterComponent(RTL_SRWLOCK *this, unsigned int a2)
{
  RTL_SRWLOCK *v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = this + 12;
  AcquireSRWLockExclusive(this + 12);
  v5 = (*(__int64 (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)this[41].Ptr + 56LL))(this[41].Ptr, a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    ViewEventDispatcher::_UnregisterComponent((ViewEventDispatcher *)&this[-25], a2);
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x520,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v5);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v6;
}
