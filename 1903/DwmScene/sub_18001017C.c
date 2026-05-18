/*
 * XREFs of sub_18001017C @ 0x18001017C
 * Callers:
 *     sub_1800161F0 @ 0x1800161F0 (sub_1800161F0.c)
 * Callees:
 *     sub_18000F7B8 @ 0x18000F7B8 (sub_18000F7B8.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18007797C @ 0x18007797C (sub_18007797C.c)
 *     sub_18008363C @ 0x18008363C (sub_18008363C.c)
 *     sub_18008F2E4 @ 0x18008F2E4 (sub_18008F2E4.c)
 *     sub_18008F2E8 @ 0x18008F2E8 (sub_18008F2E8.c)
 *     sub_18008F2F0 @ 0x18008F2F0 (sub_18008F2F0.c)
 *     sub_18008F2F4 @ 0x18008F2F4 (sub_18008F2F4.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001017C(__int64 a1, int a2, _QWORD *a3)
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
    v9 = sub_18008363C(*a3);
    v10 = sub_18007797C(v9, 1LL);
    v11 = sub_18000F7B8(*(_QWORD *)(a1 + 16), &v15);
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
    sub_18008F2F4(*(_QWORD *)(a1 + 32), v8);
    sub_18008F2E8(*(_QWORD *)(a1 + 32), 1000LL);
    *(_BYTE *)(*(_QWORD *)(a1 + 32) + 72LL) = 1;
    sub_18008F2E4(*(_QWORD *)(a1 + 32), 3LL);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180259498, 0LL)
      || (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180259858, 0LL)
      || (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_180259C18, 0LL) )
    {
      v6 = 1;
    }
    LOBYTE(v13) = v6;
    sub_18008F2F0(*(_QWORD *)(a1 + 32), v13);
  }
  return 0LL;
}
