/*
 * XREFs of ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x18023EE8C
 * Callers:
 *     ?QueueMidManipulationUpdate@CGlobalManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x180239C4C (-QueueMidManipulationUpdate@CGlobalManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCV.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType@@@Z @ 0x18023C3AC (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType.c)
 *     ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z @ 0x18023D528 (-PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180080598 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800EA828 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 */

char __fastcall CManipulationContext::VisualHasAnyChildFlagged(struct CVisual *a1)
{
  _QWORD *v1; // r11
  unsigned __int64 Count; // rax
  unsigned __int64 v3; // rdx
  __int64 *v4; // rcx
  char v5; // r9
  unsigned __int64 v6; // rax

  v1 = (_QWORD *)((char *)a1 + 72);
  while ( 1 )
  {
    Count = CPtrArray<CVisual>::GetCount(v1);
    if ( v3 >= Count )
      break;
    v6 = CPtrArrayBase::operator[](v4, v3);
    if ( v6 && (*(_BYTE *)(v6 + 94) & 2) != 0 )
      return 1;
  }
  return v5;
}
