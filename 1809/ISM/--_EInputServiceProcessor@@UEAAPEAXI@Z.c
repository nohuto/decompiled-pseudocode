/*
 * XREFs of ??_EInputServiceProcessor@@UEAAPEAXI@Z @ 0x1800D20C0
 * Callers:
 *     ??_EInputServiceProcessor@@W7EAAPEAXI@Z @ 0x1800D2500 (--_EInputServiceProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 */

InputServiceProcessor *__fastcall InputServiceProcessor::`vector deleting destructor'(
        InputServiceProcessor *this,
        char a2)
{
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
