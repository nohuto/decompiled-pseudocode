/*
 * XREFs of ??_GAlpcPort@@UEAAPEAXI@Z @ 0x18009FED0
 * Callers:
 *     <none>
 * Callees:
 *     ??1AlpcPort@@UEAA@XZ @ 0x18009FF0C (--1AlpcPort@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

AlpcPort *__fastcall AlpcPort::`scalar deleting destructor'(AlpcPort *this, char a2)
{
  AlpcPort::~AlpcPort(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1D0);
  return this;
}
