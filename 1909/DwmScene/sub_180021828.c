/*
 * XREFs of sub_180021828 @ 0x180021828
 * Callers:
 *     sub_180025A9C @ 0x180025A9C (sub_180025A9C.c)
 *     sub_18002638C @ 0x18002638C (sub_18002638C.c)
 *     sub_1800265D4 @ 0x1800265D4 (sub_1800265D4.c)
 *     sub_180032A28 @ 0x180032A28 (sub_180032A28.c)
 *     sub_180038DB4 @ 0x180038DB4 (sub_180038DB4.c)
 *     sub_180071944 @ 0x180071944 (sub_180071944.c)
 *     sub_180071F58 @ 0x180071F58 (sub_180071F58.c)
 *     sub_1800A1A14 @ 0x1800A1A14 (sub_1800A1A14.c)
 * Callees:
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180021828(__int64 a1, char a2)
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
