/*
 * XREFs of ??_E?$CResultTaskWrapper@V_lambda_d38fe7d7cbebf305295b5d6636e8a4b7_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18006E840
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper<_lambda_d38fe7d7cbebf305295b5d6636e8a4b7_>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
