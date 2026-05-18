/*
 * XREFs of sub_18009B98C @ 0x18009B98C
 * Callers:
 *     sub_180012DC0 @ 0x180012DC0 (sub_180012DC0.c)
 *     sub_180098790 @ 0x180098790 (sub_180098790.c)
 *     sub_1800C1340 @ 0x1800C1340 (sub_1800C1340.c)
 *     sub_1800DC25C @ 0x1800DC25C (sub_1800DC25C.c)
 *     sub_1800DD034 @ 0x1800DD034 (sub_1800DD034.c)
 *     sub_1800FA400 @ 0x1800FA400 (sub_1800FA400.c)
 *     sub_18010A740 @ 0x18010A740 (sub_18010A740.c)
 *     sub_180112680 @ 0x180112680 (sub_180112680.c)
 *     sub_180112BB0 @ 0x180112BB0 (sub_180112BB0.c)
 * Callees:
 *     sub_18009BA20 @ 0x18009BA20 (sub_18009BA20.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009B98C(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8
  __int64 result; // rax
  volatile signed __int32 *v5; // rbx
  __int128 v6; // [rsp+28h] [rbp-20h] BYREF

  v6 = 0LL;
  v3 = a2[1];
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    v3 = a2[1];
  }
  *(_QWORD *)&v6 = *a2;
  *((_QWORD *)&v6 + 1) = v3;
  result = sub_18009BA20(a1, 0LL, &v6);
  v5 = (volatile signed __int32 *)a2[1];
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
