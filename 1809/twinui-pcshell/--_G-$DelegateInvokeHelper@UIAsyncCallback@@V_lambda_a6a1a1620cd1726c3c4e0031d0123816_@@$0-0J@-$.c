/*
 * XREFs of ??_G?$DelegateInvokeHelper@UIAsyncCallback@@V_lambda_a6a1a1620cd1726c3c4e0031d0123816_@@$0?0J@?$DelegateArgTraits@P8IAsyncCallback@@EAAJJ@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18008AD10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_a6a1a1620cd1726c3c4e0031d0123816_::__lambda_a6a1a1620cd1726c3c4e0031d0123816_ @ 0x18008AAC8 (_lambda_a6a1a1620cd1726c3c4e0031d0123816_--__lambda_a6a1a1620cd1726c3c4e0031d0123816_.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (IAsyncCallback::*)(long)>::DelegateInvokeHelper<IAsyncCallback,_lambda_a6a1a1620cd1726c3c4e0031d0123816_,-1,long>::`scalar deleting destructor'(
        __int64 *a1,
        char a2)
{
  lambda_a6a1a1620cd1726c3c4e0031d0123816_::__lambda_a6a1a1620cd1726c3c4e0031d0123816_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x48);
  return a1;
}
