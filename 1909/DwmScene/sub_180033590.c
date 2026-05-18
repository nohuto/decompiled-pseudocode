/*
 * XREFs of sub_180033590 @ 0x180033590
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800171D4 @ 0x1800171D4 (sub_1800171D4.c)
 *     sub_18002D45C @ 0x18002D45C (sub_18002D45C.c)
 *     sub_180032B64 @ 0x180032B64 (sub_180032B64.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180033590(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rcx
  signed __int32 v11; // eax
  bool v12; // zf
  volatile signed __int32 *v13; // rbx
  __int64 v14; // [rsp+20h] [rbp-50h] BYREF
  volatile signed __int32 *v15; // [rsp+28h] [rbp-48h]
  __int64 v16[3]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v17; // [rsp+48h] [rbp-28h] BYREF
  __int64 v18; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v19; // [rsp+60h] [rbp-10h] BYREF

  v16[2] = -2LL;
  v14 = 0LL;
  v15 = 0LL;
  v5 = *(_DWORD *)(a1 + 88);
  v6 = *a2;
  v19 = v5;
  sub_180032B64((__int64 **)(v6 + 120), (__int64)&v17, &v19);
  v7 = v17;
  v8 = *(_QWORD *)(v17 + 48);
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = *(_QWORD *)(v7 + 48);
  }
  v16[0] = *(_QWORD *)(v7 + 40);
  v16[1] = v8;
  sub_1800171D4(&v14, v16);
  v18 = 0LL;
  sub_18002D45C(v14, &v18);
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 144) + 400LL))(*(_QWORD *)(a1 + 144), v18, a3);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
  v10 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( v15 )
  {
    v11 = _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF);
    v12 = v11 == 1;
    result = (unsigned int)(v11 - 1);
    if ( v12 )
    {
      v13 = v15;
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      result = (unsigned int)_InterlockedDecrement(v13 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  return result;
}
