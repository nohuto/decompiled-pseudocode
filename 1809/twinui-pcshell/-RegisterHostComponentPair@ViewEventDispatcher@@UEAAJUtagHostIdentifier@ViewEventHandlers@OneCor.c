/*
 * XREFs of ?RegisterHostComponentPair@ViewEventDispatcher@@UEAAJUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@IIPEAUIInspectable@@@Z @ 0x180217770
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_PropagateNewRegistration@ViewEventDispatcher@@AEAAXW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@II@Z @ 0x18022015C (-_PropagateNewRegistration@ViewEventDispatcher@@AEAAXW4CRSIdType@ViewEventHandlers@OneCore@Inter.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::RegisterHostComponentPair(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  RTL_SRWLOCK *v9; // rdi
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v13; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v9 = (RTL_SRWLOCK *)(a1 + 96);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 96));
  v13 = *(_QWORD *)a2;
  v14 = a2[2];
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 328) + 48LL))(
          *(_QWORD *)(a1 + 328),
          &v13,
          a3,
          a4,
          a5);
  v11 = v10;
  if ( v10 >= 0 )
  {
    ViewEventDispatcher::_PropagateNewRegistration(a1 - 200, *a2, a2[1], a4);
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48A,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v10);
  }
  if ( v9 )
    ReleaseSRWLockExclusive(v9);
  return v11;
}
