/*
 * XREFs of ?GetLocation@VirtualProcessor@details@Concurrency@@QEBAAEBVlocation@3@XZ @ 0x1800FB440
 * Callers:
 *     sub_1800CB170 @ 0x1800CB170 (sub_1800CB170.c)
 * Callees:
 *     <none>
 */

const struct Concurrency::location *__fastcall Concurrency::details::VirtualProcessor::GetLocation(
        Concurrency::details::VirtualProcessor *this)
{
  return (Concurrency::details::VirtualProcessor *)((char *)this + 216);
}
