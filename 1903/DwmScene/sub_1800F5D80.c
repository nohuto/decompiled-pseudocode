/*
 * XREFs of sub_1800F5D80 @ 0x1800F5D80
 * Callers:
 *     sub_180090DD4 @ 0x180090DD4 (sub_180090DD4.c)
 *     sub_1800A5128 @ 0x1800A5128 (sub_1800A5128.c)
 *     sub_1800DD034 @ 0x1800DD034 (sub_1800DD034.c)
 *     sub_1800F530C @ 0x1800F530C (sub_1800F530C.c)
 *     sub_1800FA400 @ 0x1800FA400 (sub_1800FA400.c)
 *     sub_180112680 @ 0x180112680 (sub_180112680.c)
 *     sub_180112BB0 @ 0x180112BB0 (sub_180112BB0.c)
 * Callees:
 *     sub_1800F2CAC @ 0x1800F2CAC (sub_1800F2CAC.c)
 *     sub_1800F5E20 @ 0x1800F5E20 (sub_1800F5E20.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F5D80(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int16 v5; // ax
  __int64 result; // rax
  volatile signed __int32 *v7; // rbx
  signed __int32 v8; // eax
  bool v9; // zf
  _QWORD v10[4]; // [rsp+28h] [rbp-20h] BYREF

  v5 = sub_1800F2CAC(*(_QWORD *)(a1 + 16), a2);
  v10[0] = *a3;
  v10[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  result = sub_1800F5E20(a1, v5, v10);
  v7 = (volatile signed __int32 *)a3[1];
  if ( v7 )
  {
    v8 = _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF);
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
