/*
 * XREFs of sub_18007E450 @ 0x18007E450
 * Callers:
 *     sub_180079210 @ 0x180079210 (sub_180079210.c)
 *     sub_18007E450 @ 0x18007E450 (sub_18007E450.c)
 *     sub_18007F174 @ 0x18007F174 (sub_18007F174.c)
 * Callees:
 *     sub_1800113D8 @ 0x1800113D8 (sub_1800113D8.c)
 *     sub_18007E450 @ 0x18007E450 (sub_18007E450.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18007E450(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  volatile signed __int32 *v5; // rcx
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_18007E450(a1, i[2]);
    i = (__int64 *)*i;
    sub_1800113D8(v2 + 6);
    v5 = (volatile signed __int32 *)v2[5];
    if ( v5 )
    {
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
    result = j_j__o_free(v2);
  }
  return result;
}
