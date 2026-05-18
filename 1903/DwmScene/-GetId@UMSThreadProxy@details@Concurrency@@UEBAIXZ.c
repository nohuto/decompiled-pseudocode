/*
 * XREFs of ?GetId@UMSThreadProxy@details@Concurrency@@UEBAIXZ @ 0x18008E5E4
 * Callers:
 *     sub_18010C4A0 @ 0x18010C4A0 (sub_18010C4A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Concurrency::details::UMSThreadProxy::GetId(Concurrency::details::UMSThreadProxy *this)
{
  return *((unsigned int *)this + 32);
}
