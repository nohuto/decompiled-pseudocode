/*
 * XREFs of ?PutOnComplete@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAUIAsyncActionCompletedHandler@Foundation@3@@Z @ 0x1800326A0
 * Callers:
 *     ?put_Completed@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAUIAsyncActionCompletedHandler@Foundation@3@@Z @ 0x180032B60 (-put_Completed@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::DisableCausality>::PutOnComplete(
        __int64 a1,
        __int64 a2)
{
  signed __int32 v2; // r8d
  int AgileReference; // edi
  __int64 *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  signed __int32 v9; // ecx
  signed __int32 v11[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+20h] [rbp-28h]
  signed __int32 v13; // [rsp+50h] [rbp+8h] BYREF
  signed __int32 v14; // [rsp+60h] [rbp+18h] BYREF
  __int64 v15; // [rsp+68h] [rbp+20h]

  v2 = *(_DWORD *)(a1 + 48);
  v13 = -2;
  _InterlockedCompareExchange(&v13, v2, -2);
  if ( v13 == 4 )
  {
    AgileReference = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
  }
  else if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 20)) == 1 )
  {
    v6 = (__int64 *)(a1 + 112);
    v7 = 0LL;
    v8 = *v6;
    *v6 = 0LL;
    v15 = v8;
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      v7 = *v6;
    }
    AgileReference = 0;
    if ( a2 )
    {
      if ( v7 )
      {
        *v6 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      AgileReference = RoGetAgileReference(0LL, &GUID_a4ed5c81_76c9_40bd_8be6_b1d90fb20ae7, a2, v6);
    }
    else
    {
      *v6 = 0LL;
      v12 = v7;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( AgileReference >= 0 )
    {
      if ( a2 )
      {
        *(_QWORD *)(a1 + 120) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 128));
      }
      _InterlockedOr(v11, 0);
      v9 = *(_DWORD *)(a1 + 48);
      v14 = -2;
      _InterlockedCompareExchange(&v14, v9, -2);
      if ( (unsigned int)(v14 - 1) <= 3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
    }
  }
  else
  {
    return (unsigned int)-2147483624;
  }
  return (unsigned int)AgileReference;
}
