/*
 * XREFs of ?get_EventType@TreeNodeEventArgsBase@ComposableShell@Internal@Windows@@UEAAJPEAW4TreeNodeEventType@234@@Z @ 0x180084040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComposableShell::TreeNodeEventArgsBase::get_EventType(
        Windows::Internal::ComposableShell::TreeNodeEventArgsBase *this,
        enum Windows::Internal::ComposableShell::TreeNodeEventType *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 12);
  return 0LL;
}
