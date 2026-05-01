/*
 * XREFs of ??_E?$DelegateInvokeHelper@UIAsyncCallback@@V_lambda_2791fcf0aaab69d566675f60a729cea4_@@$0?0J@?$DelegateArgTraits@P8IAsyncCallback@@EAAJJ@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801084B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_2791fcf0aaab69d566675f60a729cea4_::__lambda_2791fcf0aaab69d566675f60a729cea4_ @ 0x180107924 (_lambda_2791fcf0aaab69d566675f60a729cea4_--__lambda_2791fcf0aaab69d566675f60a729cea4_.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (IAsyncCallback::*)(long)>::DelegateInvokeHelper<IAsyncCallback,_lambda_2791fcf0aaab69d566675f60a729cea4_,-1,long>::`vector deleting destructor'(
        __int64 *a1,
        char a2)
{
  lambda_2791fcf0aaab69d566675f60a729cea4_::__lambda_2791fcf0aaab69d566675f60a729cea4_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x170);
  return a1;
}
