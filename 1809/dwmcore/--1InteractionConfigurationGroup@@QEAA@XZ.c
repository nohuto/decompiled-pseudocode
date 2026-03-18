/*
 * XREFs of ??1InteractionConfigurationGroup@@QEAA@XZ @ 0x18009EF88
 * Callers:
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x18009EF04 (--1CInteractionProcessor@@QEAA@XZ.c)
 *     ??_GInteractionConfigurationGroup@@QEAAPEAXI@Z @ 0x1801EEDE0 (--_GInteractionConfigurationGroup@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall InteractionConfigurationGroup::~InteractionConfigurationGroup(void **this)
{
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 13);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 9);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 5);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 1);
}
