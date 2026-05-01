/*
 * XREFs of ??$query@UITabDragHandler@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UITabDragHandler@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800A6E30
 * Callers:
 *     _lambda_2de9129cf7ca5d1ddf0542513b424d5e_::operator() @ 0x1802755A4 (_lambda_2de9129cf7ca5d1ddf0542513b424d5e_--operator().c)
 *     _lambda_9e85f7730accfb574b1a6ae66a739164_::operator() @ 0x180275EA4 (_lambda_9e85f7730accfb574b1a6ae66a739164_--operator().c)
 *     ?PerformComplete@TabTransferManager@@AEAAXXZ @ 0x18027746C (-PerformComplete@TabTransferManager@@AEAAXXZ.c)
 *     ?PerformDrop@TabTransferManager@@AEAAXXZ @ 0x180277AEC (-PerformDrop@TabTransferManager@@AEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180269BE0 (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 */

void **__fastcall wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::query<ITabDragHandler>(
        struct IWeakReference **a1,
        void **a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = wil::details::weak_query_policy::query(*a1, &GUID_50f69da0_d009_4299_9e32_c39657f57ce3, a2);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5421LL,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  return a2;
}
