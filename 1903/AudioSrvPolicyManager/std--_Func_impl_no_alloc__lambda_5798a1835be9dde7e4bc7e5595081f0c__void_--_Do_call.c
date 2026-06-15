/*
 * XREFs of std::_Func_impl_no_alloc__lambda_5798a1835be9dde7e4bc7e5595081f0c__void_::_Do_call @ 0x180016700
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000D630 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_5798a1835be9dde7e4bc7e5595081f0c__void_::_Do_call(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v5; // [rsp+30h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 8);
  lpCriticalSection = (LPCRITICAL_SECTION)(v1 + 32);
  v5 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = *(_QWORD **)(v1 + 72);
  while ( v2 )
  {
    v3 = v2[2];
    v2 = (_QWORD *)*v2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 80LL))(v3, v1 + 16);
  }
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
}
