/*
 * XREFs of ??1InitialThreadParam@UMSFreeVirtualProcessorRoot@details@Concurrency@@QEAA@XZ @ 0x180118940
 * Callers:
 *     sub_1801340D6 @ 0x1801340D6 (sub_1801340D6.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::UMSFreeVirtualProcessorRoot::InitialThreadParam::~InitialThreadParam(
        Concurrency::details::UMSFreeVirtualProcessorRoot::InitialThreadParam *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
    o__aligned_free(v1);
}
