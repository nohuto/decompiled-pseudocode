/*
 * XREFs of ??_GCBaseInput@@UEAAPEAXI@Z @ 0x1C01496F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBaseInput@@UEAA@XZ @ 0x1C00076AC (--1CBaseInput@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

CBaseInput *__fastcall CBaseInput::`scalar deleting destructor'(CBaseInput *this, char a2)
{
  CBaseInput::~CBaseInput(this);
  if ( (a2 & 1) != 0 && this )
    Win32FreePool((__int64)this);
  return this;
}
