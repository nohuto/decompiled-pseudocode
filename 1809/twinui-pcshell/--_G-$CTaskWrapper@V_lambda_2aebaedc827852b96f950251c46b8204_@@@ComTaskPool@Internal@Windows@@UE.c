/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_2aebaedc827852b96f950251c46b8204_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180089ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::__lambda_73bca28b4d92a1291c49cf8f8a9be4e0_ @ 0x180089AF4 (_lambda_73bca28b4d92a1291c49cf8f8a9be4e0_--__lambda_73bca28b4d92a1291c49cf8f8a9be4e0_.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_2aebaedc827852b96f950251c46b8204_>::`scalar deleting destructor'(
        __int64 *a1,
        char a2)
{
  lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::__lambda_73bca28b4d92a1291c49cf8f8a9be4e0_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
