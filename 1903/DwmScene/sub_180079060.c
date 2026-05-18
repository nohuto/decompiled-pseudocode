/*
 * XREFs of sub_180079060 @ 0x180079060
 * Callers:
 *     sub_1800C2520 @ 0x1800C2520 (sub_1800C2520.c)
 * Callees:
 *     sub_1800765AC @ 0x1800765AC (sub_1800765AC.c)
 *     sub_18007797C @ 0x18007797C (sub_18007797C.c)
 *     sub_180078344 @ 0x180078344 (sub_180078344.c)
 *     sub_1800A3F9C @ 0x1800A3F9C (sub_1800A3F9C.c)
 *     sub_1800E3318 @ 0x1800E3318 (sub_1800E3318.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall sub_180079060(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // eax
  unsigned __int64 result; // rax
  volatile signed __int32 *v7; // rbx
  signed __int32 v8; // eax
  bool v9; // zf
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v11; // [rsp+28h] [rbp-10h]

  v4 = sub_18007797C(a1, 1);
  sub_1800E3318(v4, 1LL);
  *(_DWORD *)(a1 + 696) = *(_DWORD *)(a2 + 56);
  v5 = sub_1800A3F9C();
  sub_180078344((_QWORD *)a1, v5);
  result = (unsigned __int64)sub_1800765AC(a1, &v10);
  v7 = v11;
  if ( v11 )
  {
    v8 = _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF);
    v9 = v8 == 1;
    result = (unsigned int)(v8 - 1);
    if ( v9 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      result = (unsigned int)_InterlockedDecrement(v7 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return result;
}
