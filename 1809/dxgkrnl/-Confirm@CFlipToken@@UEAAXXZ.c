/*
 * XREFs of ?Confirm@CFlipToken@@UEAAXXZ @ 0x1C0007780
 * Callers:
 *     <none>
 * Callees:
 *     ?ConfirmIndependentFlipEntry@CFlipToken@@IEAAXXZ @ 0x1C0007D38 (-ConfirmIndependentFlipEntry@CFlipToken@@IEAAXXZ.c)
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0008A9C (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 */

void __fastcall CFlipToken::Confirm(CFlipToken *this)
{
  *((_DWORD *)this + 6) = 4;
  CFlipToken::TraceStateChanged(this);
  CFlipToken::ConfirmIndependentFlipEntry(this);
}
