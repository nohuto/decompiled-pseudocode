/*
 * XREFs of ?ConfirmIndependentFlipEntry@CFlipToken@@IEAAXXZ @ 0x1C0007D38
 * Callers:
 *     ?Confirm@CFlipToken@@UEAAXXZ @ 0x1C0007780 (-Confirm@CFlipToken@@UEAAXXZ.c)
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x1C0007DA0 (-Discard@CFlipToken@@UEAAXXZ.c)
 * Callees:
 *     ?ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z @ 0x1C001DBD4 (-ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z.c)
 */

void __fastcall CFlipToken::ConfirmIndependentFlipEntry(CFlipToken *this)
{
  if ( *((_BYTE *)this + 557) )
  {
    CompositionSurfaceObject::ConfirmIndependentFlipEntry(
      *((CompositionSurfaceObject **)this + 4),
      *((_QWORD *)this + 5),
      *((_QWORD *)this + 70),
      *((_QWORD *)this + 12),
      *((_DWORD *)this + 144),
      *((_DWORD *)this + 145),
      *((_QWORD *)this + 71));
    *((_BYTE *)this + 557) = 0;
  }
}
