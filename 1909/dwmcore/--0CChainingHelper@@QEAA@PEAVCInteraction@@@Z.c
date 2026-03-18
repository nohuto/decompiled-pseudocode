/*
 * XREFs of ??0CChainingHelper@@QEAA@PEAVCInteraction@@@Z @ 0x18021F348
 * Callers:
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBUMarshaledManipulationInfo@@@Z @ 0x18021DDA8 (-ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERA.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800573D0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

CChainingHelper *__fastcall CChainingHelper::CChainingHelper(CChainingHelper *this, struct CInteraction *a2)
{
  `vector constructor iterator'(
    (char *)this,
    12LL,
    3LL,
    (void (__fastcall *)(char *))CChainingHelper::RequestedConfigForAxis::RequestedConfigForAxis);
  *((_BYTE *)this + 36) &= 0xFCu;
  *((_QWORD *)this + 5) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct CInteraction *))a2)(a2);
  return this;
}
