/*
 * XREFs of sub_180021718 @ 0x180021718
 * Callers:
 *     sub_18002598C @ 0x18002598C (sub_18002598C.c)
 *     sub_18002627C @ 0x18002627C (sub_18002627C.c)
 *     sub_1800264C4 @ 0x1800264C4 (sub_1800264C4.c)
 *     sub_180032918 @ 0x180032918 (sub_180032918.c)
 *     sub_180038CA4 @ 0x180038CA4 (sub_180038CA4.c)
 *     sub_180071834 @ 0x180071834 (sub_180071834.c)
 *     sub_180071E48 @ 0x180071E48 (sub_180071E48.c)
 *     sub_1800A1904 @ 0x1800A1904 (sub_1800A1904.c)
 * Callees:
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180021718(__int64 a1, char a2)
{
  volatile signed __int32 *v2; // rbx

  v2 = *(volatile signed __int32 **)(a1 + 16);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
