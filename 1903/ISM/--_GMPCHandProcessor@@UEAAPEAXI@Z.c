/*
 * XREFs of ??_GMPCHandProcessor@@UEAAPEAXI@Z @ 0x180134680
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCHandProcessor@@UEAA@XZ @ 0x180133E6C (--1MPCHandProcessor@@UEAA@XZ.c)
 */

MPCHandProcessor *__fastcall MPCHandProcessor::`scalar deleting destructor'(MPCHandProcessor *this, char a2)
{
  MPCHandProcessor::~MPCHandProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2300);
  return this;
}
