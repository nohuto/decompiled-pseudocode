/*
 * XREFs of ??1ResultException@wil@@UEAA@XZ @ 0x1801001B8
 * Callers:
 *     ??_GResultException@wil@@UEAAPEAXI@Z @ 0x180100680 (--_GResultException@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18004A8EC (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::ResultException::~ResultException(LPVOID *this)
{
  wil::details::shared_buffer::reset(this + 23);
  wil::details::shared_buffer::reset(this + 21);
  *this = &std::exception::`vftable';
  o___std_exception_destroy_0((__int64)(this + 1));
}
