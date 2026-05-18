/*
 * XREFs of ?GetId@UMSThreadProxy@details@Concurrency@@UEBAIXZ @ 0x18008E6F4
 * Callers:
 *     sub_18010C5B0 @ 0x18010C5B0 (sub_18010C5B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Concurrency::details::UMSThreadProxy::GetId(Concurrency::details::UMSThreadProxy *this)
{
  return *((unsigned int *)this + 32);
}
