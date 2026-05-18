/*
 * XREFs of sub_1800DBDEC @ 0x1800DBDEC
 * Callers:
 *     sub_1800DDA58 @ 0x1800DDA58 (sub_1800DDA58.c)
 * Callees:
 *     sub_1800DD034 @ 0x1800DD034 (sub_1800DD034.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800DBDEC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  volatile signed __int32 *v5; // rbx

  result = sub_1800DD034(a1);
  v5 = *(volatile signed __int32 **)(a3 + 8);
  if ( v5 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      result = (unsigned int)_InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return result;
}
