/*
 * XREFs of sub_180099C60 @ 0x180099C60
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180015C64 @ 0x180015C64 (sub_180015C64.c)
 *     sub_180096464 @ 0x180096464 (sub_180096464.c)
 *     sub_180099E18 @ 0x180099E18 (sub_180099E18.c)
 *     sub_1800F0DA4 @ 0x1800F0DA4 (sub_1800F0DA4.c)
 *     sub_1800F0E50 @ 0x1800F0E50 (sub_1800F0E50.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180099C60(__int64 a1, __int64 a2, int a3, _DWORD *a4, int a5, int a6)
{
  volatile signed __int32 *v10; // rbx
  _QWORD *v11; // rax
  __int64 *v12; // rdi
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rcx
  char v15; // r8
  __int128 v17; // [rsp+60h] [rbp-58h] BYREF
  __int64 v18; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v19; // [rsp+78h] [rbp-40h]
  __int64 v20; // [rsp+80h] [rbp-38h] BYREF
  volatile signed __int32 *v21; // [rsp+88h] [rbp-30h]

  sub_1800F0E50(a1, &v20);
  v10 = v21;
  if ( v21 )
  {
    if ( !_InterlockedDecrement(v21 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( !_InterlockedDecrement(v10 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = (_QWORD *)sub_1800F0DA4(a1);
  sub_180015C64(v11, &v18, 1u);
  v12 = (__int64 *)(a1 + 88);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 88), &v18);
  v13 = v19;
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  sub_180096464(*v12, (__int64)a4);
  v14 = *(_QWORD *)(a1 + 96);
  v15 = (a4[7] & 0x200) != 0;
  v17 = 0LL;
  if ( v14 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    v14 = *(_QWORD *)(a1 + 96);
  }
  *(_QWORD *)&v17 = *v12;
  *((_QWORD *)&v17 + 1) = v14;
  sub_180099E18(
    a1,
    a2,
    a3,
    a6,
    (__int64)&v17,
    a4[4],
    a4[2],
    (__int64)(a4 + 29),
    (__int64)(a4 + 45),
    (__int64)(a4 + 48),
    v15);
  return a2;
}
