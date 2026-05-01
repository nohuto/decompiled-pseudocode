/*
 * XREFs of ?get@?QIVectorChangedEventArgs@Collections@Foundation@Windows@@Index@VectorChangedEventArgs@Details@2Platform@@UE$AAAIXZ @ 0x18027C760
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _CxxThrowException_0 @ 0x1800850F0 (_CxxThrowException_0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall _get__QIVectorChangedEventArgs_Collections_Foundation_Windows__Index_VectorChangedEventArgs_Details_2Platform__UE_AAAIXZ(
        __int64 a1)
{
  __int64 pExceptionObject; // [rsp+40h] [rbp+8h] BYREF
  void *Exception; // [rsp+48h] [rbp+10h]

  if ( !*(_DWORD *)(a1 + 40) )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    Exception = (void *)Platform::FailureException::FailureException(Exception);
    pExceptionObject = __abi_winrt_ptr_ctor((__int64)Exception);
    throw (Platform::FailureException **)&pExceptionObject;
  }
  return *(unsigned int *)(a1 + 44);
}
