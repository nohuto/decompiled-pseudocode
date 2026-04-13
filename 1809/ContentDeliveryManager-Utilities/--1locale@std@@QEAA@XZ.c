/*
 * XREFs of ??1locale@std@@QEAA@XZ @ 0x18002406C
 * Callers:
 *     tidy_global @ 0x1800AAE20 (tidy_global.c)
 *     _std::basic_istream_wchar_t_std::char_traits_wchar_t___::operator___::_1_::dtor$1 @ 0x1800C955B (_std--basic_istream_wchar_t_std--char_traits_wchar_t___--operator___--_1_--dtor$1.c)
 *     _std::num_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::do_get_::_1_::dtor$0 @ 0x1800C95DB (_std--num_get_wchar_t_std--istreambuf_iterator_wchar_t_std--char_traits_wchar_t_____--do_get_--_.c)
 *     _std::num_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::do_get_::_1_::dtor$4 @ 0x1800C95FF (_std--num_get_wchar_t_std--istreambuf_iterator_wchar_t_std--char_traits_wchar_t_____ea_1800C95FF.c)
 *     _std::basic_istream_wchar_t_std::char_traits_wchar_t___::_Ipfx_::_1_::dtor$0 @ 0x1800C969D (_std--basic_istream_wchar_t_std--char_traits_wchar_t___--_Ipfx_--_1_--dtor$0.c)
 *     _std::basic_istream_unsigned_short_std::char_traits_unsigned_short___::basic_istream_unsigned_short_std::char_traits_unsigned_short____::_1_::dtor$1 @ 0x1800C96AF (_std--basic_istream_unsigned_short_std--char_traits_unsigned_short___--basic_istream_unsigned_sh.c)
 *     _std::num_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::_Getffld_::_1_::dtor$0 @ 0x1800C96E7 (_std--num_get_wchar_t_std--istreambuf_iterator_wchar_t_std--char_traits_wchar_t_____--_Getffld_-.c)
 *     _std::wstring_convert_std::codecvt_utf8_unsigned_short_1114111_0__unsigned_short_std::allocator_unsigned_short__std::allocator_char___::wstring_convert_std::codecvt_utf8_unsigned_short_1114111_0__unsigned_short_std::allocator_unsigned_short__std::allocator_char____::_1_::dtor$0 @ 0x1800CAE66 (_std--wstring_convert_std--codecvt_utf8_unsigned_short_1114111_0__unsigned_short_std--allocator_.c)
 *     _std::basic_ios_wchar_t_std::char_traits_wchar_t___::init_::_1_::dtor$0 @ 0x1800CD0CF (_std--basic_ios_wchar_t_std--char_traits_wchar_t___--init_--_1_--dtor$0.c)
 *     _std::operator___wchar_t_std::char_traits_wchar_t__wchar_t__::_1_::dtor$1 @ 0x1800D08E2 (_std--operator___wchar_t_std--char_traits_wchar_t__wchar_t__--_1_--dtor$1.c)
 *     _std::time_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::do_get_::_1_::dtor$0 @ 0x1800D08F4 (_std--time_get_wchar_t_std--istreambuf_iterator_wchar_t_std--char_traits_wchar_t_____--do_get_--.c)
 *     _std::time_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::do_get_year_::_1_::dtor$0 @ 0x1800D0906 (_std--time_get_wchar_t_std--istreambuf_iterator_wchar_t_std--char_traits_wchar_t_____--do_get_ye.c)
 *     _std::time_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::do_get_date_::_1_::dtor$0 @ 0x1800D0918 (_std--time_get_wchar_t_std--istreambuf_iterator_wchar_t_std--char_traits_wchar_t_____--do_get_da.c)
 *     _std::time_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::get_::_1_::dtor$0 @ 0x1800D092A (_std--time_get_wchar_t_std--istreambuf_iterator_wchar_t_std--char_traits_wchar_t_____--get_--_1_.c)
 *     _std::num_put_wchar_t_std::ostreambuf_iterator_wchar_t_std::char_traits_wchar_t_____::do_put_::_1_::dtor$0 @ 0x1800D0D76 (_std--num_put_wchar_t_std--ostreambuf_iterator_wchar_t_std--char_traits_wchar_t_____--do_put_--_.c)
 *     _std::money_put_char_std::ostreambuf_iterator_char_std::char_traits_char_____::_Putmfld_::_1_::dtor$2 @ 0x1800D111F (_std--money_put_char_std--ostreambuf_iterator_char_std--char_traits_char_____--_Putmfld_--_1_--d.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::locale::~locale(std::locale *this)
{
  __int64 v1; // rcx
  void (__fastcall ***v2)(_QWORD, __int64); // rax

  v1 = *(_QWORD *)this;
  if ( v1 )
  {
    v2 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    if ( v2 )
      (**v2)(v2, 1LL);
  }
}
