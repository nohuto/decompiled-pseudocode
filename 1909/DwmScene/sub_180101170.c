/*
 * XREFs of sub_180101170 @ 0x180101170
 * Callers:
 *     sub_180100440 @ 0x180100440 (sub_180100440.c)
 *     sub_1801017E0 @ 0x1801017E0 (sub_1801017E0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180015DF4 @ 0x180015DF4 (sub_180015DF4.c)
 *     sub_18002C0E4 @ 0x18002C0E4 (sub_18002C0E4.c)
 *     sub_1800645F4 @ 0x1800645F4 (sub_1800645F4.c)
 *     sub_18009F6C0 @ 0x18009F6C0 (sub_18009F6C0.c)
 *     sub_1800F0EB4 @ 0x1800F0EB4 (sub_1800F0EB4.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_180101170(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 *v3; // rsi
  volatile signed __int32 *v4; // rbx
  __int64 *v5; // rax
  int v6; // eax
  bool v7; // zf
  _QWORD *v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-19h] BYREF
  volatile signed __int32 *v11; // [rsp+30h] [rbp-11h]
  const void *Src; // [rsp+38h] [rbp-9h] BYREF
  __m128i si128; // [rsp+58h] [rbp+17h] BYREF
  int v14; // [rsp+68h] [rbp+27h]
  int v15; // [rsp+6Ch] [rbp+2Bh]
  int v16; // [rsp+70h] [rbp+2Fh]
  __int128 v17; // [rsp+74h] [rbp+33h]
  int v18; // [rsp+84h] [rbp+43h]
  int v19; // [rsp+88h] [rbp+47h]

  v2 = (_QWORD *)sub_1800F0EB4(a1);
  sub_180015DF4(v2, &v10, 1u);
  v3 = (__int64 *)(a1 + 1816);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 1816), &v10);
  v4 = v11;
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  v5 = (__int64 *)sub_18002C0E4(&Src, (_QWORD *)(a1 + 24), " DepthSampler");
  sub_1800645F4(*v3, v5);
  v14 = 0;
  v18 = 0;
  v6 = 3;
  v15 = 0;
  v7 = *(_DWORD *)(a1 + 1944) == 1;
  v19 = 2139095039;
  if ( v7 )
    v6 = 6;
  v8 = (_QWORD *)*v3;
  v17 = xmmword_18025F030;
  v16 = v6;
  si128 = _mm_load_si128(&xmmword_18020D030);
  return sub_18009F6C0(v8, &si128, 0LL);
}
