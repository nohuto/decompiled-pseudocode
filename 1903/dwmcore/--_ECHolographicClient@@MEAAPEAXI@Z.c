/*
 * XREFs of ??_ECHolographicClient@@MEAAPEAXI@Z @ 0x180248A60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     ??1CHolographicClient@@MEAA@XZ @ 0x180248890 (--1CHolographicClient@@MEAA@XZ.c)
 */

CHolographicClient *__fastcall CHolographicClient::`vector deleting destructor'(CHolographicClient *this, char a2)
{
  CHolographicClient::~CHolographicClient(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
