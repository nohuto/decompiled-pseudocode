/*
 * XREFs of ??1CInteractionTrackerMarshaler@DirectComposition@@UEAA@XZ @ 0x1C01AB6F0
 * Callers:
 *     ??_ECInteractionTrackerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01AB750 (--_ECInteractionTrackerMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_G?$CDCompDynamicArray@UPositionShift@@@DirectComposition@@QEAAPEAXI@Z @ 0x1C01AB71C (--_G-$CDCompDynamicArray@UPositionShift@@@DirectComposition@@QEAAPEAXI@Z.c)
 */

void __fastcall DirectComposition::CInteractionTrackerMarshaler::~CInteractionTrackerMarshaler(
        DirectComposition::CInteractionTrackerMarshaler *this)
{
  *(_QWORD *)this = &DirectComposition::CInteractionTrackerMarshaler::`vftable';
  if ( *((_QWORD *)this + 43) )
    DirectComposition::CDCompDynamicArray<PositionShift>::`scalar deleting destructor'();
}
