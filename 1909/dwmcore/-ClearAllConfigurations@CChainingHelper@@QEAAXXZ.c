/*
 * XREFs of ?ClearAllConfigurations@CChainingHelper@@QEAAXXZ @ 0x18021F49C
 * Callers:
 *     ??1InteractionSourceManager@@QEAA@XZ @ 0x18021CE7C (--1InteractionSourceManager@@QEAA@XZ.c)
 *     ?CleanupManipulationMap@InteractionSourceManager@@AEAAXAEBV?$vector@PEAVCManipulation@@V?$allocator@PEAVCManipulation@@@std@@@std@@@Z @ 0x18021D054 (-CleanupManipulationMap@InteractionSourceManager@@AEAAXAEBV-$vector@PEAVCManipulation@@V-$alloca.c)
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBUMarshaledManipulationInfo@@@Z @ 0x18021DDA8 (-ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERA.c)
 * Callees:
 *     <none>
 */

void __fastcall CChainingHelper::ClearAllConfigurations(CChainingHelper *this)
{
  CChainingHelper *v1; // rax
  __int64 v2; // rdx

  v1 = this;
  v2 = 3LL;
  do
  {
    *(_BYTE *)v1 &= 0xFCu;
    *((_DWORD *)v1 + 1) = 0;
    *((_BYTE *)this + 36) |= 1u;
    *(_BYTE *)v1 &= 0xFAu;
    *((_DWORD *)v1 + 2) = 0;
    v1 = (CChainingHelper *)((char *)v1 + 12);
    *((_BYTE *)this + 36) |= 2u;
    --v2;
  }
  while ( v2 );
  CChainingHelper::UpdateConfigurationIfDirty(this);
}
