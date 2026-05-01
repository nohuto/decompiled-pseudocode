/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_6920fd0394d91195244b848df2c49eea_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1800938A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18004059C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_6920fd0394d91195244b848df2c49eea_>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  std::wstring::_Tidy_deallocate(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
