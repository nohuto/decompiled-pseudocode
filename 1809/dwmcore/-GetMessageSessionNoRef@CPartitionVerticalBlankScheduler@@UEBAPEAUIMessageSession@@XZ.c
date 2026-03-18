/*
 * XREFs of ?GetMessageSessionNoRef@CPartitionVerticalBlankScheduler@@UEBAPEAUIMessageSession@@XZ @ 0x1800E5C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IMessageSession *__fastcall CPartitionVerticalBlankScheduler::GetMessageSessionNoRef(
        CPartitionVerticalBlankScheduler *this)
{
  return (struct IMessageSession *)*((_QWORD *)this + 12);
}
