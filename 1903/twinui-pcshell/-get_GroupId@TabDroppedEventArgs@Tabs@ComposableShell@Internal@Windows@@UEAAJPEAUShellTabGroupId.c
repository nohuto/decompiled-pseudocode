/*
 * XREFs of ?get_GroupId@TabDroppedEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAUShellTabGroupId@2345@@Z @ 0x180084EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs::get_GroupId(
        Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs *this,
        struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a2 = *((_OWORD *)this + 4);
  return result;
}
