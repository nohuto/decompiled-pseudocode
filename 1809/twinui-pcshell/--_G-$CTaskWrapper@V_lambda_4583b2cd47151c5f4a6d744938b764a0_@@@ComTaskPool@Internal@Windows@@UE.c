/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_4583b2cd47151c5f4a6d744938b764a0_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1801F6DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_4583b2cd47151c5f4a6d744938b764a0_::__lambda_4583b2cd47151c5f4a6d744938b764a0_ @ 0x1801F6100 (_lambda_4583b2cd47151c5f4a6d744938b764a0_--__lambda_4583b2cd47151c5f4a6d744938b764a0_.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_4583b2cd47151c5f4a6d744938b764a0_>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  lambda_4583b2cd47151c5f4a6d744938b764a0_::__lambda_4583b2cd47151c5f4a6d744938b764a0_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x48);
  return a1;
}
