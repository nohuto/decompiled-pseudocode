/*
 * XREFs of sub_1800852E4 @ 0x1800852E4
 * Callers:
 *     sub_18008C330 @ 0x18008C330 (sub_18008C330.c)
 * Callees:
 *     sub_180085384 @ 0x180085384 (sub_180085384.c)
 *     sub_180087450 @ 0x180087450 (sub_180087450.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800852E4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v8; // rbp
  _QWORD *i; // rbx
  __int64 result; // rax

  sub_180087450(a1);
  v8 = *(_QWORD **)(a1 + 384);
  for ( i = *(_QWORD **)(a1 + 376); i != v8; i += 2 )
  {
    if ( *(_BYTE *)(*i + 72LL) )
      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(*(_QWORD *)*i + 56LL))(*i, a3, a2, a4);
  }
  result = 196608LL;
  if ( (*(_DWORD *)(*(_QWORD *)a4 + 440LL) & 0x30000) == 0x30000 )
    sub_180085384(a1, a2, a3, a4);
  return result;
}
