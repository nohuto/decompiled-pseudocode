/*
 * XREFs of sub_1800F610C @ 0x1800F610C
 * Callers:
 *     sub_1800911F0 @ 0x1800911F0 (sub_1800911F0.c)
 *     sub_1800A527C @ 0x1800A527C (sub_1800A527C.c)
 *     sub_1800DD144 @ 0x1800DD144 (sub_1800DD144.c)
 *     sub_1800F541C @ 0x1800F541C (sub_1800F541C.c)
 *     sub_1800FA510 @ 0x1800FA510 (sub_1800FA510.c)
 *     sub_180112790 @ 0x180112790 (sub_180112790.c)
 *     sub_180112CC0 @ 0x180112CC0 (sub_180112CC0.c)
 * Callees:
 *     sub_1800F2D88 @ 0x1800F2D88 (sub_1800F2D88.c)
 *     sub_1800F61AC @ 0x1800F61AC (sub_1800F61AC.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F610C(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int16 v5; // ax
  __int64 result; // rax
  volatile signed __int32 *v7; // rbx
  signed __int32 v8; // eax
  bool v9; // zf
  _QWORD v10[4]; // [rsp+28h] [rbp-20h] BYREF

  v5 = sub_1800F2D88(*(_QWORD *)(a1 + 16), a2);
  v10[0] = *a3;
  v10[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  result = sub_1800F61AC(a1, v5, v10);
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
