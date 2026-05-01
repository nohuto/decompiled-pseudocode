/*
 * XREFs of ?Cancel@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00UDisableCausality@67@@WRL@Microsoft@@UEAAJXZ @ 0x180032250
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::DisableCausality>::Cancel(
        volatile signed __int32 *a1)
{
  signed __int32 v1; // edx
  signed __int32 v2; // eax
  signed __int32 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_DWORD *)a1 + 12);
  v4 = -2;
  _InterlockedCompareExchange(&v4, v1, -2);
  if ( !v4 )
  {
    v2 = _InterlockedCompareExchange(a1 + 12, 2, 0);
    if ( v2 == v4 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 152LL))(a1);
  }
  return 0LL;
}
