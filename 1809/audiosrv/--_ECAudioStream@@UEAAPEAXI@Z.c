/*
 * XREFs of ??_ECAudioStream@@UEAAPEAXI@Z @ 0x1800CB650
 * Callers:
 *     ??_ECAudioStream@@WBI@EAAPEAXI@Z @ 0x180068B10 (--_ECAudioStream@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAudioStream@@UEAA@XZ @ 0x1800CB4A4 (--1CAudioStream@@UEAA@XZ.c)
 */

CAudioStream *__fastcall CAudioStream::`vector deleting destructor'(CAudioStream *this, void *a2)
{
  char v2; // bl

  v2 = (char)a2;
  CAudioStream::~CAudioStream(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1A8);
  return this;
}
