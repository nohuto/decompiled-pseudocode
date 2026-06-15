/*
 * XREFs of _lambda_475610373546e0092494a79a1259d6e9_::_lambda_invoker_cdecl_ @ 0x18001C940
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000D600 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_475610373546e0092494a79a1259d6e9_::_lambda_invoker_cdecl_(
        void (__fastcall ***a1)(_QWORD, GUID *, __int64 *))
{
  volatile signed __int32 *v1; // rbx
  __int64 v2; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-18h] BYREF
  char v4; // [rsp+30h] [rbp-10h]
  __int64 v5; // [rsp+58h] [rbp+18h] BYREF
  __int64 v6; // [rsp+60h] [rbp+20h] BYREF

  v5 = 0LL;
  (**a1)(a1, &GUID_2ea99478_7574_414c_8ba3_0c615b1716a4, &v5);
  v1 = 0LL;
  v6 = 0LL;
  v2 = v5;
  if ( v5 )
  {
    v6 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 24LL))(v5, &v6) >= 0 )
    {
      lpCriticalSection = (LPCRITICAL_SECTION)(v6 + 144);
      v4 = 0;
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      if ( v4 )
        LeaveCriticalSection(lpCriticalSection);
    }
    v1 = (volatile signed __int32 *)v6;
    v2 = v5;
  }
  if ( v1 )
  {
    if ( _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 32LL))(v1);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
    }
    v2 = v5;
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}
