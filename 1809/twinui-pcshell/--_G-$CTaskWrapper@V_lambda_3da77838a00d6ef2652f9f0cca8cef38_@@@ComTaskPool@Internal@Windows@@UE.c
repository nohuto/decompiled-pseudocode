/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_3da77838a00d6ef2652f9f0cca8cef38_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180078F30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_3da77838a00d6ef2652f9f0cca8cef38_>::`scalar deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
