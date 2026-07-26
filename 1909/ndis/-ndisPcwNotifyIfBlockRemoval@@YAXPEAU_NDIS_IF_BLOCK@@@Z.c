/*
 * XREFs of ?ndisPcwNotifyIfBlockRemoval@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C011A624
 * Callers:
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x1C00638AC (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FCD0C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FCF64 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall ndisPcwNotifyIfBlockRemoval(struct _NDIS_IF_BLOCK *a1)
{
  _NDIS_PCW_DATA_BLOCK *v2; // rbx
  _NDIS_PCW_DATA_BLOCK *PcwDataBlock; // rcx
  _NDIS_PCW_DATA_BLOCK *v4; // rax
  _NDIS_PCW_DATA_BLOCK *Next; // rdx
  KLockHolder v6; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  v6.m_Lock = (KPushLockBase *)&ndisPcwMutex;
  v6.m_State = Unlocked;
  v6.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v6);
  PcwDataBlock = a1->PcwDataBlock;
  if ( PcwDataBlock )
  {
    --PcwDataBlock->ReferenceCount;
    a1->PcwDataBlock = 0LL;
    v4 = (_NDIS_PCW_DATA_BLOCK *)ndisPcwDataBlockList;
    if ( ndisPcwDataBlockList )
    {
      while ( 1 )
      {
        Next = v4->Next;
        if ( v4 == PcwDataBlock )
          break;
        v2 = v4;
        v4 = v4->Next;
        if ( !Next )
          goto LABEL_9;
      }
      if ( v2 )
        v2->Next = Next;
      else
        ndisPcwDataBlockList = v4->Next;
    }
LABEL_9:
    if ( !PcwDataBlock->ReferenceCount )
      ExFreePoolWithTag(PcwDataBlock, 0);
  }
  KLockHolder::~KLockHolder(&v6);
}
