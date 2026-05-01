/*
 * XREFs of ?hresult_from_win32@impl@winrt@@YAHI@Z @ 0x1800C4BCC
 * Callers:
 *     ?throw_last_error@winrt@@YAXXZ @ 0x1800C5130 (-throw_last_error@winrt@@YAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::hresult_from_win32(winrt::impl *this)
{
  if ( (int)this > 0 )
    LODWORD(this) = (unsigned __int16)this | 0x80070000;
  return (unsigned int)this;
}
