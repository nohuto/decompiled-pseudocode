/*
 * XREFs of sub_1800F0DA0 @ 0x1800F0DA0
 * Callers:
 *     sub_18008E4F0 @ 0x18008E4F0 (sub_18008E4F0.c)
 *     sub_180099250 @ 0x180099250 (sub_180099250.c)
 *     sub_18009C530 @ 0x18009C530 (sub_18009C530.c)
 *     sub_1800ADD00 @ 0x1800ADD00 (sub_1800ADD00.c)
 *     sub_1800B85E0 @ 0x1800B85E0 (sub_1800B85E0.c)
 *     sub_180101E20 @ 0x180101E20 (sub_180101E20.c)
 *     sub_180104070 @ 0x180104070 (sub_180104070.c)
 * Callees:
 *     sub_180011764 @ 0x180011764 (sub_180011764.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F0DA0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  volatile signed __int32 *v5; // rbx
  signed __int32 v6; // eax
  bool v7; // zf

  sub_180011764((__int64 *)(*a2 + 24LL), (__int64 *)(a1 + 24));
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
