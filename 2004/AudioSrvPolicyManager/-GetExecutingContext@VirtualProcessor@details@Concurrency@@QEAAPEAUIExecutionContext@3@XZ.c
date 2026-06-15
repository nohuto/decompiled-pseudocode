/*
 * XREFs of ?GetExecutingContext@VirtualProcessor@details@Concurrency@@QEAAPEAUIExecutionContext@3@XZ @ 0x180019900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct Concurrency::IExecutionContext *__fastcall Concurrency::details::VirtualProcessor::GetExecutingContext(
        Concurrency::details::VirtualProcessor *this)
{
  return (struct Concurrency::IExecutionContext *)*((_QWORD *)this + 23);
}
