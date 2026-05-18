/*
 * XREFs of sub_18009BA9C @ 0x18009BA9C
 * Callers:
 *     sub_180012E10 @ 0x180012E10 (sub_180012E10.c)
 *     sub_1800988A0 @ 0x1800988A0 (sub_1800988A0.c)
 *     sub_1800C1450 @ 0x1800C1450 (sub_1800C1450.c)
 *     sub_1800DC36C @ 0x1800DC36C (sub_1800DC36C.c)
 *     sub_1800DD144 @ 0x1800DD144 (sub_1800DD144.c)
 *     sub_1800FA510 @ 0x1800FA510 (sub_1800FA510.c)
 *     sub_18010A850 @ 0x18010A850 (sub_18010A850.c)
 *     sub_180112790 @ 0x180112790 (sub_180112790.c)
 *     sub_180112CC0 @ 0x180112CC0 (sub_180112CC0.c)
 * Callees:
 *     sub_18009BB30 @ 0x18009BB30 (sub_18009BB30.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009BA9C(__int64 a1, _QWORD *a2)
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
  result = sub_18009BB30(a1, 0LL, &v6);
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
