/*
 * XREFs of ?NeedsPresent@CFrameInfo@@QEBA_NXZ @ 0x18014C358
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800CA2F0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CFrameInfo::NeedsPresent(CFrameInfo *this)
{
  bool result; // al

  result = 0;
  if ( *((_BYTE *)this + 1056) )
    return *((_BYTE *)this + 1057) == 0;
  return result;
}
