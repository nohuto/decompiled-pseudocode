/*
 * XREFs of sub_1800B88B0 @ 0x1800B88B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E168 @ 0x18000E168 (sub_18000E168.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180015DF4 @ 0x180015DF4 (sub_180015DF4.c)
 *     sub_1800645F4 @ 0x1800645F4 (sub_1800645F4.c)
 *     sub_18009F6C0 @ 0x18009F6C0 (sub_18009F6C0.c)
 *     sub_1800B8A60 @ 0x1800B8A60 (sub_1800B8A60.c)
 *     sub_1800F0EB4 @ 0x1800F0EB4 (sub_1800F0EB4.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800B88B0(__int64 a1)
{
  __int64 *v1; // rsi
  _QWORD *v3; // rax
  volatile signed __int32 *v4; // rbx
  _QWORD *v5; // rcx
  __int64 v7; // [rsp+28h] [rbp-29h] BYREF
  volatile signed __int32 *v8; // [rsp+30h] [rbp-21h]
  __int128 v9; // [rsp+38h] [rbp-19h] BYREF
  __int64 v10[4]; // [rsp+48h] [rbp-9h] BYREF
  _DWORD v11[7]; // [rsp+68h] [rbp+17h] BYREF
  __int128 v12; // [rsp+84h] [rbp+33h]
  int v13; // [rsp+94h] [rbp+43h]
  int v14; // [rsp+98h] [rbp+47h]

  v1 = (__int64 *)(a1 + 512);
  if ( !*(_QWORD *)(a1 + 512) )
  {
    v3 = (_QWORD *)sub_1800F0EB4(a1);
    sub_180015DF4(v3, &v7, 1u);
    std::shared_ptr<__ExceptionPtr>::operator=(v1, &v7);
    v4 = v8;
    if ( v8 )
    {
      if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      }
    }
    v10[2] = 0LL;
    v10[3] = 15LL;
    LOBYTE(v10[0]) = 0;
    sub_18000E168(v10, 0x13uLL, 0LL, "Light Probe Sampler");
    sub_1800645F4(*v1, v10);
    v11[1] = 0;
    v11[2] = 0;
    v11[3] = 0;
    v11[4] = 0;
    v13 = 0;
    v5 = (_QWORD *)*v1;
    v14 = 2139095039;
    v12 = 0LL;
    v11[6] = 7;
    v11[0] = 3;
    v11[5] = 8;
    sub_18009F6C0(v5, v11, 0LL);
  }
  v9 = xmmword_18025F030;
  return sub_1800B8A60(a1, &v9);
}
