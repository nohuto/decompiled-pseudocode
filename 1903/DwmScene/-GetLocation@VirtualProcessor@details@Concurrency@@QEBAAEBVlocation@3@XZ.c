/*
 * XREFs of ?GetLocation@VirtualProcessor@details@Concurrency@@QEBAAEBVlocation@3@XZ @ 0x1800FB330
 * Callers:
 *     sub_1800CB060 @ 0x1800CB060 (sub_1800CB060.c)
 * Callees:
 *     <none>
 */

const struct Concurrency::location *__fastcall Concurrency::details::VirtualProcessor::GetLocation(
        Concurrency::details::VirtualProcessor *this)
{
  return (Concurrency::details::VirtualProcessor *)((char *)this + 216);
}
