/*
 * XREFs of ??1CFlipToken@@MEAA@XZ @ 0x1C0007D04
 * Callers:
 *     ??_ECFlipToken@@MEAAPEAXI@Z @ 0x1C0007CC0 (--_ECFlipToken@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x1C0007DA0 (-Discard@CFlipToken@@UEAAXXZ.c)
 *     ??1CToken@@UEAA@XZ @ 0x1C0007FA4 (--1CToken@@UEAA@XZ.c)
 */

void __fastcall CFlipToken::~CFlipToken(CFlipToken *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 6) == 6;
  *(_QWORD *)this = &CFlipToken::`vftable';
  if ( !v1 )
    CFlipToken::Discard(this);
  CToken::~CToken(this);
}
