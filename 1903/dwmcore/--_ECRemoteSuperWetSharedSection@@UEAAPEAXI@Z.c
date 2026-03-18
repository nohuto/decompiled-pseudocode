/*
 * XREFs of ??_ECRemoteSuperWetSharedSection@@UEAAPEAXI@Z @ 0x1801C7D80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     ??1CRemoteSuperWetSharedSection@@UEAA@XZ @ 0x1801C7C54 (--1CRemoteSuperWetSharedSection@@UEAA@XZ.c)
 */

CRemoteSuperWetSharedSection *__fastcall CRemoteSuperWetSharedSection::`vector deleting destructor'(
        CRemoteSuperWetSharedSection *this,
        char a2)
{
  CRemoteSuperWetSharedSection::~CRemoteSuperWetSharedSection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
