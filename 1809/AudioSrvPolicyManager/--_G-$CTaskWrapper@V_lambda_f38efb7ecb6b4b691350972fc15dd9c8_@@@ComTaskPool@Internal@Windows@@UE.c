/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_f38efb7ecb6b4b691350972fc15dd9c8_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180019B10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_f38efb7ecb6b4b691350972fc15dd9c8_>::`scalar deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
