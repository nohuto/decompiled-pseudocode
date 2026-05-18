/*
 * XREFs of sub_1800101CC @ 0x1800101CC
 * Callers:
 *     sub_180016260 @ 0x180016260 (sub_180016260.c)
 * Callees:
 *     sub_18000F808 @ 0x18000F808 (sub_18000F808.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180077A8C @ 0x180077A8C (sub_180077A8C.c)
 *     sub_18008374C @ 0x18008374C (sub_18008374C.c)
 *     sub_18008F3F4 @ 0x18008F3F4 (sub_18008F3F4.c)
 *     sub_18008F3F8 @ 0x18008F3F8 (sub_18008F3F8.c)
 *     sub_18008F400 @ 0x18008F400 (sub_18008F400.c)
 *     sub_18008F404 @ 0x18008F404 (sub_18008F404.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800101CC(__int64 a1, int a2, _QWORD *a3)
{
  char v6; // di
  int v7; // ebx
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 *v11; // rax
  volatile signed __int32 *v12; // rbx
  __int64 v13; // rdx
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int32 *v16; // [rsp+28h] [rbp-20h]

  *(_DWORD *)(a1 + 48) = a2;
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 16), a3);
  if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) != 0 )
  {
    v6 = 0;
    v7 = a2 - 1;
    if ( v7 )
      v8 = v7 == 2;
    else
      v8 = 2;
    v9 = sub_18008374C(*a3);
    v10 = sub_180077A8C(v9, 1LL);
    v11 = sub_18000F808(*(_QWORD *)(a1 + 16), &v15);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 32), v11);
    v12 = v16;
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
        if ( !_InterlockedDecrement(v12 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      }
    }
    sub_18008F404(*(_QWORD *)(a1 + 32), v8);
    sub_18008F3F8(*(_QWORD *)(a1 + 32), 1000LL);
    *(_BYTE *)(*(_QWORD *)(a1 + 32) + 72LL) = 1;
    sub_18008F3F4(*(_QWORD *)(a1 + 32), 3LL);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_18025A498, 0LL)
      || (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_18025A858, 0LL)
      || (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_18025AC18, 0LL) )
    {
      v6 = 1;
    }
    LOBYTE(v13) = v6;
    sub_18008F400(*(_QWORD *)(a1 + 32), v13);
  }
  return 0LL;
}
