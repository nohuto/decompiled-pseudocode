/*
 * XREFs of ?PropagateVisualManipulationNotificationFlag@CManipulationContext@@SAXPEAVCVisual@@_NI@Z @ 0x18023D528
 * Callers:
 *     ?QueueMidManipulationUpdate@CGlobalManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x180239C4C (-QueueMidManipulationUpdate@CGlobalManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCV.c)
 * Callees:
 *     ?VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z @ 0x18023EE4C (-VisualHasActiveInteraction@CManipulationContext@@CA_NPEAVCVisual@@I@Z.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x18023EE8C (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 */

void __fastcall CManipulationContext::PropagateVisualManipulationNotificationFlag(
        struct CVisual *a1,
        char a2,
        unsigned int a3)
{
  struct CVisual *v4; // rbx
  char v5; // al
  char v6; // di

  if ( a1 )
  {
    v4 = a1;
    if ( a2 )
    {
      do
      {
        v5 = *((_BYTE *)v4 + 94);
        if ( (v5 & 2) != 0 )
          break;
        *((_BYTE *)v4 + 94) = v5 | 2;
        v4 = (struct CVisual *)*((_QWORD *)v4 + 10);
      }
      while ( v4 );
    }
    else
    {
      do
      {
        v6 = *((_BYTE *)v4 + 94);
        if ( (v6 & 2) == 0 )
          break;
        if ( CManipulationContext::VisualHasActiveInteraction(v4, a3) )
          break;
        if ( CManipulationContext::VisualHasAnyChildFlagged(v4) )
          break;
        *((_BYTE *)v4 + 94) = v6 & 0xFD;
        v4 = (struct CVisual *)*((_QWORD *)v4 + 10);
      }
      while ( v4 );
    }
  }
}
