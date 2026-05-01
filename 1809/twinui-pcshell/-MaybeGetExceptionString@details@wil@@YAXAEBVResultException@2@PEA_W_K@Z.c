/*
 * XREFs of ?MaybeGetExceptionString@details@wil@@YAXAEBVResultException@2@PEA_W_K@Z @ 0x18025B6A8
 * Callers:
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$0 @ 0x1800AF067 (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$0.c)
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$4 @ 0x1800AF14D (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$4.c)
 * Callees:
 *     ?GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z @ 0x18025A5C4 (-GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z.c)
 */

void __fastcall wil::details::MaybeGetExceptionString(
        wil::details *this,
        const struct wil::ResultException *a2,
        wchar_t *a3)
{
  if ( a2 )
    wil::GetFailureLogString(a2, a3, (__int64)this + 24, (const struct wil::FailureInfo *)a3);
}
