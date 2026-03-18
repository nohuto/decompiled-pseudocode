/*
 * XREFs of ?GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ @ 0x1C0181C48
 * Callers:
 *     InitializeInputComponents @ 0x1C00A90D8 (InitializeInputComponents.c)
 *     UnInitializeInputComponents @ 0x1C00B1AC4 (UnInitializeInputComponents.c)
 *     ChildProcessRootSynthesizedMouseInput @ 0x1C0181D40 (ChildProcessRootSynthesizedMouseInput.c)
 *     ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x1C01864DC (-DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

struct InputVirtualization::RootSynthesizedMouseList *InputVirtualization::RootSynthesizedMouseList::GetInstance(void)
{
  if ( (`InputVirtualization::RootSynthesizedMouseList::GetInstance'::`2'::`local static guard' & 1) == 0 )
  {
    `InputVirtualization::RootSynthesizedMouseList::GetInstance'::`2'::`local static guard' |= 1u;
    qword_1C0215658 = (__int64)&CPushLock::`vftable';
    xmmword_1C0215660 = 0LL;
  }
  return (struct InputVirtualization::RootSynthesizedMouseList *)&`InputVirtualization::RootSynthesizedMouseList::GetInstance'::`2'::inst;
}
