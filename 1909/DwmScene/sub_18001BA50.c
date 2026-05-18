/*
 * XREFs of sub_18001BA50 @ 0x18001BA50
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_1800160E0 @ 0x1800160E0 (sub_1800160E0.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_18001BA50(__int64 a1, __int64 *a2)
{
  char v3; // si
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rbx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v8; // [rsp+28h] [rbp-10h]

  v7 = 0LL;
  v8 = 0LL;
  sub_1800160E0(*a2, &v7);
  v3 = 0;
  if ( v7 )
  {
    std::shared_ptr<__ExceptionPtr>::operator=(*(_QWORD **)(a1 + 8), &v7);
    if ( v8 )
    {
      if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
      {
        v4 = v8;
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
  }
  else
  {
    if ( v8 )
    {
      if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
      {
        v5 = v8;
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
    return 1;
  }
  return v3;
}
