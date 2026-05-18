/*
 * XREFs of sub_1800A9578 @ 0x1800A9578
 * Callers:
 *     sub_18009087C @ 0x18009087C (sub_18009087C.c)
 * Callees:
 *     sub_1800635DC @ 0x1800635DC (sub_1800635DC.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_1800AA360 @ 0x1800AA360 (sub_1800AA360.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800A9578(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 result; // rax
  volatile signed __int32 *v6; // rcx

  v4 = a1 + 472;
  sub_1800635DC(a1 + 472);
  sub_1800AA360(a1 + 480, a2);
  result = sub_180063668(v4);
  v6 = *(volatile signed __int32 **)(a2 + 8);
  if ( v6 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  return result;
}
