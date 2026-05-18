/*
 * XREFs of sub_1800F0C90 @ 0x1800F0C90
 * Callers:
 *     sub_18008E3E0 @ 0x18008E3E0 (sub_18008E3E0.c)
 *     sub_180099140 @ 0x180099140 (sub_180099140.c)
 *     sub_18009C420 @ 0x18009C420 (sub_18009C420.c)
 *     sub_1800ADBF0 @ 0x1800ADBF0 (sub_1800ADBF0.c)
 *     sub_1800B84D0 @ 0x1800B84D0 (sub_1800B84D0.c)
 *     sub_180101D10 @ 0x180101D10 (sub_180101D10.c)
 *     sub_180103F60 @ 0x180103F60 (sub_180103F60.c)
 * Callees:
 *     sub_180011714 @ 0x180011714 (sub_180011714.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F0C90(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  volatile signed __int32 *v5; // rbx
  signed __int32 v6; // eax
  bool v7; // zf

  sub_180011714((__int64 *)(*a2 + 24LL), (__int64 *)(a1 + 24));
  *(_BYTE *)(*a2 + 72LL) = *(_BYTE *)(a1 + 72);
  result = *(unsigned int *)(a1 + 76);
  *(_DWORD *)(*a2 + 76LL) = result;
  v5 = (volatile signed __int32 *)a2[1];
  if ( v5 )
  {
    v6 = _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF);
    v7 = v6 == 1;
    result = (unsigned int)(v6 - 1);
    if ( v7 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      result = (unsigned int)_InterlockedDecrement(v5 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return result;
}
