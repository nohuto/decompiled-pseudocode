/*
 * XREFs of sub_180079170 @ 0x180079170
 * Callers:
 *     sub_1800C2630 @ 0x1800C2630 (sub_1800C2630.c)
 * Callees:
 *     sub_1800766BC @ 0x1800766BC (sub_1800766BC.c)
 *     sub_180077A8C @ 0x180077A8C (sub_180077A8C.c)
 *     sub_180078454 @ 0x180078454 (sub_180078454.c)
 *     sub_1800A40AC @ 0x1800A40AC (sub_1800A40AC.c)
 *     sub_1800E3428 @ 0x1800E3428 (sub_1800E3428.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall sub_180079170(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // eax
  unsigned __int64 result; // rax
  volatile signed __int32 *v7; // rbx
  signed __int32 v8; // eax
  bool v9; // zf
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v11; // [rsp+28h] [rbp-10h]

  v4 = sub_180077A8C(a1, 1);
  sub_1800E3428(v4, 1LL);
  *(_DWORD *)(a1 + 696) = *(_DWORD *)(a2 + 56);
  v5 = sub_1800A40AC();
  sub_180078454((_QWORD *)a1, v5);
  result = (unsigned __int64)sub_1800766BC(a1, &v10);
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
