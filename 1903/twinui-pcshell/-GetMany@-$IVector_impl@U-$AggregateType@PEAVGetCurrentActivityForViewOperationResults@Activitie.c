/*
 * XREFs of ?GetMany@?$IVector_impl@U?$AggregateType@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@PEAUIGetCurrentActivityForViewOperationResults@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@4@PEAI@Z @ 0x180112560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Foundation::Collections::IVector_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *,Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults *>,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        _DWORD *a5)
{
  return Windows::Foundation::Collections::Detail::_VectorGetMany<Windows::Foundation::Collections::IVectorView_impl<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,1>,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>(
           a1,
           a2,
           a3,
           a4,
           a5);
}
