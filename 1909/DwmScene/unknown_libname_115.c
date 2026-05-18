/*
 * XREFs of unknown_libname_115 @ 0x1800100F8
 * Callers:
 *     sub_1800110A4 @ 0x1800110A4 (sub_1800110A4.c)
 *     sub_180011218 @ 0x180011218 (sub_180011218.c)
 *     sub_1800113D8 @ 0x1800113D8 (sub_1800113D8.c)
 *     sub_18006CFB0 @ 0x18006CFB0 (sub_18006CFB0.c)
 *     sub_18006D800 @ 0x18006D800 (sub_18006D800.c)
 *     sub_18006E4D8 @ 0x18006E4D8 (sub_18006E4D8.c)
 *     sub_180074638 @ 0x180074638 (sub_180074638.c)
 *     sub_180079210 @ 0x180079210 (sub_180079210.c)
 *     sub_18007F9A8 @ 0x18007F9A8 (sub_18007F9A8.c)
 *     sub_180080370 @ 0x180080370 (sub_180080370.c)
 *     sub_180080488 @ 0x180080488 (sub_180080488.c)
 *     sub_1800808A0 @ 0x1800808A0 (sub_1800808A0.c)
 *     sub_1800809E0 @ 0x1800809E0 (sub_1800809E0.c)
 *     sub_1800818D8 @ 0x1800818D8 (sub_1800818D8.c)
 *     sub_1800A9714 @ 0x1800A9714 (sub_1800A9714.c)
 *     sub_18010B528 @ 0x18010B528 (sub_18010B528.c)
 *     sub_18010B89C @ 0x18010B89C (sub_18010B89C.c)
 *     sub_18010B948 @ 0x18010B948 (sub_18010B948.c)
 *     sub_18010BA58 @ 0x18010BA58 (sub_18010BA58.c)
 *     sub_18010BDB0 @ 0x18010BDB0 (sub_18010BDB0.c)
 *     sub_18011223C @ 0x18011223C (sub_18011223C.c)
 *     sub_180114670 @ 0x180114670 (sub_180114670.c)
 *     sub_18011E420 @ 0x18011E420 (sub_18011E420.c)
 *     sub_18011E8C0 @ 0x18011E8C0 (sub_18011E8C0.c)
 *     sub_18011EC54 @ 0x18011EC54 (sub_18011EC54.c)
 * Callees:
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Microsoft VisualC v14 64bit runtime
__int64 __fastcall unknown_libname_115(__int64 a1, char a2)
{
  volatile signed __int32 *v2; // rbx

  v2 = *(volatile signed __int32 **)(a1 + 8);
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
