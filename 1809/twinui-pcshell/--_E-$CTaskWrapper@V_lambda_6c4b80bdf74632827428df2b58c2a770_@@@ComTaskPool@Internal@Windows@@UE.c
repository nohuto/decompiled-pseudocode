/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_6c4b80bdf74632827428df2b58c2a770_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1801D76E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_6c4b80bdf74632827428df2b58c2a770_::__lambda_6c4b80bdf74632827428df2b58c2a770_ @ 0x1801D4FBC (_lambda_6c4b80bdf74632827428df2b58c2a770_--__lambda_6c4b80bdf74632827428df2b58c2a770_.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_6c4b80bdf74632827428df2b58c2a770_>::`vector deleting destructor'(
        __int64 *a1,
        char a2)
{
  lambda_6c4b80bdf74632827428df2b58c2a770_::__lambda_6c4b80bdf74632827428df2b58c2a770_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x168);
  return a1;
}
