/*
 * XREFs of ?GetMany@?$IIterator_impl@I$00@Collections@Foundation@Windows@@UEAAJIPEAI0@Z @ 0x18029CF60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Foundation::Collections::IIterator_impl<unsigned int,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        void *a3,
        _DWORD *a4)
{
  return Windows::Foundation::Collections::Detail::_IteratorGetMany<Windows::Foundation::Collections::IIterator_impl<unsigned int,1>,unsigned int>(
           a1,
           a2,
           a3,
           a4);
}
