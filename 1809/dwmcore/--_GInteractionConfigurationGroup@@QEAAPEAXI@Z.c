/*
 * XREFs of ??_GInteractionConfigurationGroup@@QEAAPEAXI@Z @ 0x1801EEDE0
 * Callers:
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x1801EEEB8 (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 *     RemoveCountFromEndOfArrayAndFree @ 0x1801FA674 (RemoveCountFromEndOfArrayAndFree.c)
 * Callees:
 *     ??1InteractionConfigurationGroup@@QEAA@XZ @ 0x18009EF88 (--1InteractionConfigurationGroup@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

void **__fastcall InteractionConfigurationGroup::`scalar deleting destructor'(void **this)
{
  InteractionConfigurationGroup::~InteractionConfigurationGroup(this);
  operator delete(this);
  return this;
}
