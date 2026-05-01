/*
 * XREFs of ??_G?$CResultTaskWrapper@V_lambda_9797597bf431d4ad7279a02679ece25d_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18005EA80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper<_lambda_9797597bf431d4ad7279a02679ece25d_>::`scalar deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
