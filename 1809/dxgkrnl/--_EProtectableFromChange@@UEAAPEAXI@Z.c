/*
 * XREFs of ??_EProtectableFromChange@@UEAAPEAXI@Z @ 0x1C004EA60
 * Callers:
 *     <none>
 * Callees:
 *     ??1ProtectableFromChange@@UEAA@XZ @ 0x1C00047F8 (--1ProtectableFromChange@@UEAA@XZ.c)
 */

ProtectableFromChange *__fastcall ProtectableFromChange::`vector deleting destructor'(
        ProtectableFromChange *P,
        char a2)
{
  ProtectableFromChange::~ProtectableFromChange(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
