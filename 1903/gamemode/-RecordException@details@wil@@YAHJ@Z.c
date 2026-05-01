/*
 * XREFs of ?RecordException@details@wil@@YAHJ@Z @ 0x180001768
 * Callers:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEB_W_NPEA_W_KPEAD6PEAUFailureInfo@2@@Z @ 0x18000215C (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEB_W_NPEA_W_KPEAD6PEAUFailureInfo@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::RecordException(wil::details *this)
{
  `wil::details::RecordException'::`2'::s_hrErrorLast = (int)this;
  return (unsigned int)_InterlockedIncrement(&`wil::details::RecordException'::`2'::s_cErrorCount);
}
