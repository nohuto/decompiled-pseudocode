/*
 * XREFs of ??_ECAudioSession@@MEAAPEAXI@Z @ 0x1800CCB44
 * Callers:
 *     ??_ECAudioSession@@OCA@EAAPEAXI@Z @ 0x18006C9F0 (--_ECAudioSession@@OCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CAudioSession@@MEAA@XZ @ 0x1800306CC (--1CAudioSession@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CAudioSession *__fastcall CAudioSession::`vector deleting destructor'(CAudioSession *this, char a2)
{
  CAudioSession::~CAudioSession(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x3D8);
  return this;
}
