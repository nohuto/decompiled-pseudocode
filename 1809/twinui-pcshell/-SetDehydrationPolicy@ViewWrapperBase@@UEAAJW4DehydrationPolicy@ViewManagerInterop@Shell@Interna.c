/*
 * XREFs of ?SetDehydrationPolicy@ViewWrapperBase@@UEAAJW4DehydrationPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180243930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::SetDehydrationPolicy(__int64 a1, unsigned int a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // rdx

  v4 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 144) + 296LL);
  AcquireSRWLockExclusive(v4);
  if ( a2 != *(_DWORD *)(a1 + 324) )
  {
    *(_DWORD *)(a1 + 324) = a2;
    v5 = *(_QWORD *)(a1 + 168);
    if ( v5 )
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 144) + 520LL) + 80LL))(
        *(_QWORD *)(*(_QWORD *)(a1 + 144) + 520LL),
        v5,
        a2);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
