/*
 * XREFs of ??_ECInteractionTrackerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C016EAF0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ??_G?$CDCompDynamicArray@UPositionShift@@@DirectComposition@@QEAAPEAXI@Z @ 0x1C016EAB4 (--_G-$CDCompDynamicArray@UPositionShift@@@DirectComposition@@QEAAPEAXI@Z.c)
 */

DirectComposition::CInteractionTrackerMarshaler *__fastcall DirectComposition::CInteractionTrackerMarshaler::`vector deleting destructor'(
        DirectComposition::CInteractionTrackerMarshaler *this,
        char a2)
{
  __int64 *v4; // rcx

  *(_QWORD *)this = &DirectComposition::CInteractionTrackerMarshaler::`vftable';
  v4 = (__int64 *)*((_QWORD *)this + 48);
  if ( v4 )
    DirectComposition::CDCompDynamicArray<PositionShift>::`scalar deleting destructor'(v4);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
