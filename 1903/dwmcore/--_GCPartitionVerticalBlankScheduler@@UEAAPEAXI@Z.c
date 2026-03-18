/*
 * XREFs of ??_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z @ 0x180179700
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800DE60C (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801792F8 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 */

CPartitionVerticalBlankScheduler *__fastcall CPartitionVerticalBlankScheduler::`scalar deleting destructor'(
        CPartitionVerticalBlankScheduler *this,
        char a2)
{
  CPartitionVerticalBlankScheduler::~CPartitionVerticalBlankScheduler(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
