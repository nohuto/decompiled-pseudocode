/*
 * XREFs of sub_180064AEC @ 0x180064AEC
 * Callers:
 *     sub_18000E9D0 @ 0x18000E9D0 (sub_18000E9D0.c)
 *     sub_180028830 @ 0x180028830 (sub_180028830.c)
 *     sub_18004046C @ 0x18004046C (sub_18004046C.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180032A54 @ 0x180032A54 (sub_180032A54.c)
 *     sub_180064574 @ 0x180064574 (sub_180064574.c)
 *     sub_180064C9C @ 0x180064C9C (sub_180064C9C.c)
 *     sub_18009D918 @ 0x18009D918 (sub_18009D918.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180064AEC(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  volatile signed __int32 *v5; // rbx
  int v6; // r12d
  __int64 v7; // rsi
  int v8; // edi
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int128 v19; // [rsp+30h] [rbp-40h] BYREF
  __int128 v20; // [rsp+40h] [rbp-30h] BYREF
  __int64 v21; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v22; // [rsp+68h] [rbp-8h] BYREF

  sub_180064574(a1, 1, 0);
  sub_180064574(a1, 2, 0);
  v4 = *a2;
  v5 = *(volatile signed __int32 **)(*a2 + 120LL);
  if ( v5 )
  {
    _InterlockedIncrement(v5 + 2);
    v5 = *(volatile signed __int32 **)(v4 + 120);
  }
  v6 = *(_QWORD *)(v4 + 112) != 0LL ? 0x80 : 0;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v7 = *a2;
  v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 64LL))(v7);
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
  sub_180064C9C(a1, v10, v9, v8, v6, 0LL);
  v11 = *a2;
  v19 = 0LL;
  v12 = *(_QWORD *)(v11 + 104);
  if ( v12 )
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
  *(_QWORD *)&v19 = *(_QWORD *)(v11 + 96);
  v13 = *(_QWORD *)(v11 + 104);
  v14 = *(_QWORD *)(a1 + 136);
  *((_QWORD *)&v19 + 1) = v13;
  sub_18009D918(v14, &v19);
  v15 = *(_QWORD *)(a1 + 152);
  if ( v15 )
  {
    v16 = *a2;
    v20 = 0LL;
    v17 = *(_QWORD *)(v16 + 120);
    if ( v17 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
      v15 = *(_QWORD *)(a1 + 152);
    }
    v20 = *(_OWORD *)(v16 + 112);
    sub_18009D918(v15, &v20);
  }
  v22 = *(_DWORD *)(*a2 + 88LL);
  sub_180032A54((__int64 **)(a1 + 120), (__int64)&v21, &v22);
  return std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v21 + 40), a2);
}
