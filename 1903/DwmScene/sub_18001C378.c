/*
 * XREFs of sub_18001C378 @ 0x18001C378
 * Callers:
 *     sub_1800167C8 @ 0x1800167C8 (sub_1800167C8.c)
 * Callees:
 *     sub_18000C338 @ 0x18000C338 (sub_18000C338.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     sub_18001BDD0 @ 0x18001BDD0 (sub_18001BDD0.c)
 *     sub_18008B2A0 @ 0x18008B2A0 (sub_18008B2A0.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001C378(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // r14
  _QWORD *v4; // rax
  signed int v5; // edi
  volatile signed __int32 *v6; // rbx
  const char *v7; // r8
  int v8; // edx
  _QWORD *v10; // rax
  volatile signed __int32 *v11; // rbx
  _BYTE v12[8]; // [rsp+30h] [rbp-21h] BYREF
  volatile signed __int32 *v13; // [rsp+38h] [rbp-19h]
  _BYTE v14[8]; // [rsp+40h] [rbp-11h] BYREF
  volatile signed __int32 *v15; // [rsp+48h] [rbp-9h]
  _QWORD v16[4]; // [rsp+50h] [rbp-1h] BYREF
  _QWORD v17[5]; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 retaddr; // [rsp+B0h] [rbp+5Fh]

  v3 = a1 + 2;
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 2, a2);
  v16[2] = 0LL;
  v16[3] = 0LL;
  sub_18001110C(v16, (__int64)&unk_1802587A8);
  v4 = (_QWORD *)sub_18008B2A0(*v3, v12, v16);
  v5 = sub_18001BDD0(a1 + 4, v4);
  v6 = v13;
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  if ( v5 < 0 )
  {
    v7 = "SpectreWorld.cpp";
    v8 = 32;
LABEL_7:
    sub_18000C338(retaddr, v8, (__int64)v7, v5);
    return (unsigned int)v5;
  }
  v17[2] = 0LL;
  v17[3] = 0LL;
  sub_18001110C(v17, (__int64)&qword_180258808);
  v10 = (_QWORD *)sub_18008B2A0(*v3, v14, v17);
  v5 = sub_18001BDD0(a1 + 5, v10);
  v11 = v15;
  if ( v15 && _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
    if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
  }
  if ( v5 < 0 )
  {
    v7 = "SpectreWorld.cpp";
    v8 = 36;
    goto LABEL_7;
  }
  return 0LL;
}
