/*
 * XREFs of ??1_Sentry_base@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x18002F274
 * Callers:
 *     _std::basic_ostream_unsigned_short_std::char_traits_unsigned_short___::sentry::sentry_::_1_::dtor$0 @ 0x1800CD4CB (_std--basic_ostream_unsigned_short_std--char_traits_unsigned_short___--sentry--sentry_--_1_--dto.c)
 *     _std::basic_istream_unsigned_short_std::char_traits_unsigned_short___::operator___::_1_::dtor$2 @ 0x1800CD5B8 (_std--basic_istream_unsigned_short_std--char_traits_unsigned_short___--operator___--_1_--dtor$2.c)
 *     _std::basic_ostream_wchar_t_std::char_traits_wchar_t___::sentry::sentry_::_1_::dtor$0 @ 0x1800D110C (_std--basic_ostream_wchar_t_std--char_traits_wchar_t___--sentry--sentry_--_1_--dtor$0.c)
 *     _std::operator___wchar_t_std::char_traits_wchar_t__wchar_t__::_1_::dtor$2 @ 0x1800D312B (_std--operator___wchar_t_std--char_traits_wchar_t__wchar_t__--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::basic_istream<unsigned short>::_Sentry_base::~_Sentry_base(__int64 **a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = **a1;
  v2 = *(__int64 *)((char *)*a1 + *(int *)(result + 4) + 72);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
