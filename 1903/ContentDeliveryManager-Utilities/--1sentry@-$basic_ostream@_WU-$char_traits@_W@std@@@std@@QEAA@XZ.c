/*
 * XREFs of ??1sentry@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAA@XZ @ 0x1800761F0
 * Callers:
 *     _std::operator___wchar_t_std::char_traits_wchar_t____::_1_::dtor$0 @ 0x1800D10FA (_std--operator___wchar_t_std--char_traits_wchar_t____--_1_--dtor$0.c)
 * Callees:
 *     ?_Osfx@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAAXXZ @ 0x180076638 (-_Osfx@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAAXXZ.c)
 *     ?uncaught_exception@std@@YA_NXZ @ 0x1800AEDDC (-uncaught_exception@std@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::wostream::sentry::~sentry(__int64 **a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( !std::uncaught_exception() )
    std::wostream::_Osfx(*a1);
  result = **a1;
  v3 = *(__int64 *)((char *)*a1 + *(int *)(result + 4) + 72);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return result;
}
