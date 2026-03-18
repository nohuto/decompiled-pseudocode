/*
 * XREFs of ??_GCD2DContext@@UEAAPEAXI@Z @ 0x18015A5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DContext@@UEAA@XZ @ 0x18002C6A4 (--1CD2DContext@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 */

CD2DContext *__fastcall CD2DContext::`scalar deleting destructor'(CD2DContext *this, char a2)
{
  CD2DContext::~CD2DContext(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
