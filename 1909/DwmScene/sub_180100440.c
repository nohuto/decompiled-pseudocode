/*
 * XREFs of sub_180100440 @ 0x180100440
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000D790 (_guard_check_icall_nop.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180015DF4 @ 0x180015DF4 (sub_180015DF4.c)
 *     sub_18002C0E4 @ 0x18002C0E4 (sub_18002C0E4.c)
 *     sub_1800645F4 @ 0x1800645F4 (sub_1800645F4.c)
 *     sub_1800F0EB4 @ 0x1800F0EB4 (sub_1800F0EB4.c)
 *     sub_180101098 @ 0x180101098 (sub_180101098.c)
 *     sub_180101170 @ 0x180101170 (sub_180101170.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180100440(__int64 a1)
{
  _QWORD *v2; // rax
  volatile signed __int32 *v3; // rdi
  __int64 *v4; // rax
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  volatile signed __int32 *v7; // [rsp+28h] [rbp-30h]
  const void *Src; // [rsp+30h] [rbp-28h] BYREF

  sub_180101098(a1);
  *(_BYTE *)(a1 + 465) |= 2u;
  sub_180101170(a1);
  if ( !*(_QWORD *)(a1 + 1896) )
  {
    v2 = (_QWORD *)sub_1800F0EB4(a1);
    sub_180015DF4(v2, &v6, 1u);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 1896), &v6);
    v3 = v7;
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
        if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
      }
    }
    v4 = (__int64 *)sub_18002C0E4(&Src, (_QWORD *)(a1 + 24), " ColorSampler");
    sub_1800645F4(*(_QWORD *)(a1 + 1896), v4);
  }
  return sub_180101020(a1);
}
