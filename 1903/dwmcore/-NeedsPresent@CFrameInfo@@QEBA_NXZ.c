/*
 * XREFs of ?NeedsPresent@CFrameInfo@@QEBA_NXZ @ 0x18018D27C
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180094CE0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
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
