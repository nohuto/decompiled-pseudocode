/*
 * XREFs of ?SetRenderingAdapter@CHolographicClient@@UEAAXAEBU_LUID@@@Z @ 0x18024A1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802485CC (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicClient::SetRenderingAdapter(CHolographicInteropTaskQueue **this, const struct _LUID *a2)
{
  CHolographicInteropTaskQueue::PostMessageW(
    this[31],
    19,
    0LL,
    (void *)a2->HighPart,
    (struct _SLIST_ENTRY *)a2->LowPart,
    0LL,
    0LL);
}
