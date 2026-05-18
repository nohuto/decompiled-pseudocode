/*
 * XREFs of sub_1800759B0 @ 0x1800759B0
 * Callers:
 *     sub_180073AB4 @ 0x180073AB4 (sub_180073AB4.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_180072AF4 @ 0x180072AF4 (sub_180072AF4.c)
 *     sub_1800732E8 @ 0x1800732E8 (sub_1800732E8.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800759B0(__int64 a1, int a2)
{
  unsigned int v3; // edi
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rbx
  __int128 v7; // [rsp+28h] [rbp-29h] BYREF
  __int64 v8; // [rsp+38h] [rbp-19h]
  __int64 v9; // [rsp+40h] [rbp-11h] BYREF
  __int64 v10; // [rsp+50h] [rbp-1h] BYREF
  unsigned int v11; // [rsp+60h] [rbp+Fh] BYREF
  int v12; // [rsp+68h] [rbp+17h] BYREF
  __int64 v13; // [rsp+70h] [rbp+1Fh] BYREF
  volatile signed __int32 *v14; // [rsp+78h] [rbp+27h]
  __int64 v15; // [rsp+80h] [rbp+2Fh] BYREF
  __int64 v16; // [rsp+88h] [rbp+37h]

  v8 = -2LL;
  v12 = a2;
  v15 = 0LL;
  v16 = 0LL;
  sub_1800631C0(a1 + 8, &v15);
  v7 = 0LL;
  if ( v12 )
  {
    sub_180072AF4((__int64 **)(a1 + 1080), (__int64)&v9, &v12);
    std::shared_ptr<__ExceptionPtr>::operator=(&v7, (_QWORD *)(v9 + 40));
  }
  v11 = *(_DWORD *)(a1 + 1096);
  *(_DWORD *)(a1 + 1096) = v11 + 1;
  v13 = 0LL;
  v14 = 0LL;
  sub_1800732E8(&v13, &v11, &v7);
  sub_180072AF4((__int64 **)(a1 + 1080), (__int64)&v10, &v11);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v10 + 40), &v13);
  v3 = v11;
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    {
      v4 = v14;
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  if ( *((_QWORD *)&v7 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v7 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v5 = *((_QWORD *)&v7 + 1);
      (***((void (__fastcall ****)(_QWORD))&v7 + 1))(*((_QWORD *)&v7 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v7 + 1) + 8LL))(*((_QWORD *)&v7 + 1));
    }
  }
  if ( (_BYTE)v16 )
    sub_180063668(v15);
  return v3;
}
