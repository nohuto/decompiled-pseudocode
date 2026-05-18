/*
 * XREFs of sub_180090B78 @ 0x180090B78
 * Callers:
 *     sub_1800C1340 @ 0x1800C1340 (sub_1800C1340.c)
 *     sub_1800DD034 @ 0x1800DD034 (sub_1800DD034.c)
 *     sub_1800FA400 @ 0x1800FA400 (sub_1800FA400.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18001D7D4 @ 0x18001D7D4 (sub_18001D7D4.c)
 *     sub_18008FA60 @ 0x18008FA60 (sub_18008FA60.c)
 *     sub_1800A40B8 @ 0x1800A40B8 (sub_1800A40B8.c)
 *     sub_1800A9304 @ 0x1800A9304 (sub_1800A9304.c)
 *     sub_1800CC090 @ 0x1800CC090 (sub_1800CC090.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_180090B78(_QWORD *a1, int a2, int a3, int a4)
{
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // r13
  volatile signed __int32 *v11; // rdi
  __int64 v12; // rcx
  char result; // al
  volatile signed __int32 *v14; // rbx
  __int64 v15; // [rsp+28h] [rbp-79h] BYREF
  volatile signed __int32 *v16; // [rsp+30h] [rbp-71h]
  __int64 v17; // [rsp+38h] [rbp-69h]
  __int64 v18; // [rsp+40h] [rbp-61h]
  volatile signed __int32 *v19; // [rsp+48h] [rbp-59h]
  _BYTE v20[8]; // [rsp+50h] [rbp-51h] BYREF
  volatile signed __int32 *v21; // [rsp+58h] [rbp-49h]
  _DWORD v22[6]; // [rsp+68h] [rbp-39h] BYREF
  char v23; // [rsp+80h] [rbp-21h]
  __int64 v24; // [rsp+84h] [rbp-1Dh]
  __int64 v25; // [rsp+8Ch] [rbp-15h]
  __int64 v26; // [rsp+94h] [rbp-Dh]
  __int64 v27; // [rsp+9Ch] [rbp-5h]
  char v28; // [rsp+A4h] [rbp+3h]
  bool v29; // [rsp+A5h] [rbp+4h]
  bool v30; // [rsp+A6h] [rbp+5h]
  __int16 v31; // [rsp+A7h] [rbp+6h]
  int v32; // [rsp+ACh] [rbp+Bh]

  v17 = -2LL;
  v8 = (volatile signed __int32 *)a1[18];
  if ( v8 )
  {
    _InterlockedIncrement(v8 + 2);
    v8 = (volatile signed __int32 *)a1[18];
  }
  v18 = a1[17];
  v19 = v8;
  v9 = *(_QWORD *)sub_1800A9304(v18, v20);
  v10 = (_QWORD *)sub_1800A40B8(v9);
  v11 = v21;
  if ( v21 )
  {
    if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  v22[0] = 0;
  v22[3] = 0;
  v22[4] = 0;
  v22[5] = 0;
  v23 = 0;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 1;
  v31 = 256;
  v32 = 3;
  v29 = ((a3 - 1) & 0xFFFFFFFD) == 0;
  v30 = (unsigned int)(a3 - 2) <= 1;
  v22[2] = a2;
  v22[1] = a4;
  v12 = a1[21];
  if ( !v12 || (result = sub_18008FA60(*(_QWORD *)(v12 + 112), (__int64)v22)) == 0 )
  {
    sub_18001D7D4(v10, &v15, 1u);
    std::shared_ptr<__ExceptionPtr>::operator=(a1 + 21, &v15);
    v14 = v16;
    if ( v16 && _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
    return sub_1800CC090(a1[21], v22, 0LL);
  }
  return result;
}
