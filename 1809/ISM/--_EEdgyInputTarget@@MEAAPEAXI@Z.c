/*
 * XREFs of ??_EEdgyInputTarget@@MEAAPEAXI@Z @ 0x1800CE898
 * Callers:
 *     ??_EEdgyInputTarget@@OBA@EAAPEAXI@Z @ 0x1800CEA50 (--_EEdgyInputTarget@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 */

EdgyInputTarget *__fastcall EdgyInputTarget::`vector deleting destructor'(EdgyInputTarget *this, char a2)
{
  *(_QWORD *)this = &EdgyInputTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &EdgyInputTarget::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
