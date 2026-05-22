/*
 * XREFs of ??_EDWMInputDisplay@@MEAAPEAXI@Z @ 0x18008EB38
 * Callers:
 *     ??_EDWMInputDisplay@@O7EAAPEAXI@Z @ 0x18008EEC0 (--_EDWMInputDisplay@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 */

DWMInputDisplay *__fastcall DWMInputDisplay::`vector deleting destructor'(DWMInputDisplay *this, char a2)
{
  *(_QWORD *)this = &DWMInputDisplay::`vftable'{for `IInputDisplay'};
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
