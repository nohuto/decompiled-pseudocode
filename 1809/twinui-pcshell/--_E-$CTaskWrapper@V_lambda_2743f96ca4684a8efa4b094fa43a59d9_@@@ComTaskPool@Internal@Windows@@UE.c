/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_2743f96ca4684a8efa4b094fa43a59d9_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180077C80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_2743f96ca4684a8efa4b094fa43a59d9_>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  void *v4; // rcx

  v4 = (void *)a1[3];
  if ( v4 )
    DeleteObject(v4);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
