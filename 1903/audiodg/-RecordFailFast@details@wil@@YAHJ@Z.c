/*
 * XREFs of ?RecordFailFast@details@wil@@YAHJ@Z @ 0x140014AC0
 * Callers:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x140027740 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::RecordFailFast(wil::details *this)
{
  `wil::details::RecordFailFast'::`2'::s_hrErrorLast = (int)this;
  return 1LL;
}
