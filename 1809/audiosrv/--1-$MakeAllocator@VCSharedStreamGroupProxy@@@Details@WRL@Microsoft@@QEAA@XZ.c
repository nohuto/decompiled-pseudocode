/*
 * XREFs of ??1?$MakeAllocator@VCSharedStreamGroupProxy@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18003E9DC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CSharedStreamGroupProxy_IStreamGroupProxy_StreamGroupParams_____ptr64_&___ptr64_ATL::CComHeapPtr_STREAM_GROUP_DESCRIPTOR__&___ptr64_unsigned_long_&___ptr64__::_1_::dtor$0 @ 0x18006ED92 (_Microsoft--WRL--Details--MakeAndInitialize_CSharedStreamGroupProxy_IStreamGroupProxy_StreamGrou.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<CSharedStreamGroupProxy>::~MakeAllocator<CSharedStreamGroupProxy>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)1);
}
