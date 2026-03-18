/*
 * XREFs of ?GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ @ 0x1C0183E38
 * Callers:
 *     InitializeInputComponents @ 0x1C0060348 (InitializeInputComponents.c)
 *     UnInitializeInputComponents @ 0x1C00B45A4 (UnInitializeInputComponents.c)
 *     ChildProcessRootSynthesizedMouseInput @ 0x1C0183F30 (ChildProcessRootSynthesizedMouseInput.c)
 *     ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x1C01886CC (-DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

struct InputVirtualization::RootSynthesizedMouseList *InputVirtualization::RootSynthesizedMouseList::GetInstance(void)
{
  if ( (`InputVirtualization::RootSynthesizedMouseList::GetInstance'::`2'::`local static guard' & 1) == 0 )
  {
    `InputVirtualization::RootSynthesizedMouseList::GetInstance'::`2'::`local static guard' |= 1u;
    qword_1C0218658 = (__int64)&CPushLock::`vftable';
    xmmword_1C0218660 = 0LL;
  }
  return (struct InputVirtualization::RootSynthesizedMouseList *)&`InputVirtualization::RootSynthesizedMouseList::GetInstance'::`2'::inst;
}
