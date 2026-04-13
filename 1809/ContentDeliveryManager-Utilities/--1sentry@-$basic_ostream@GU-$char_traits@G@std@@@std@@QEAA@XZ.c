/*
 * XREFs of ??1sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x18002E844
 * Callers:
 *     _std::operator___unsigned_short_std::char_traits_unsigned_short____::_1_::dtor$0 @ 0x1800C94DB (_std--operator___unsigned_short_std--char_traits_unsigned_short____--_1_--dtor$0.c)
 * Callees:
 *     ?_Osfx@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAXXZ @ 0x1800315A4 (-_Osfx@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAXXZ.c)
 *     ?uncaught_exception@std@@YA_NXZ @ 0x1800AAE5C (-uncaught_exception@std@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::basic_ostream<unsigned short>::sentry::~sentry(__int64 **a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( !std::uncaught_exception() )
    std::basic_ostream<unsigned short>::_Osfx(*a1);
  result = **a1;
  v3 = *(__int64 *)((char *)*a1 + *(int *)(result + 4) + 72);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return result;
}
