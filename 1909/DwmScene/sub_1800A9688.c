/*
 * XREFs of sub_1800A9688 @ 0x1800A9688
 * Callers:
 *     sub_18009098C @ 0x18009098C (sub_18009098C.c)
 * Callees:
 *     sub_1800636EC @ 0x1800636EC (sub_1800636EC.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_1800AA470 @ 0x1800AA470 (sub_1800AA470.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800A9688(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 result; // rax
  volatile signed __int32 *v6; // rcx

  v4 = a1 + 472;
  sub_1800636EC(a1 + 472);
  sub_1800AA470(a1 + 480, a2);
  result = sub_180063778(v4);
  v6 = *(volatile signed __int32 **)(a2 + 8);
  if ( v6 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  return result;
}
