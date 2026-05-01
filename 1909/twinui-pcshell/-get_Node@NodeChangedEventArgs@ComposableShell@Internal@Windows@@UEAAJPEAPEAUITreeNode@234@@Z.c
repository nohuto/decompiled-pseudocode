/*
 * XREFs of ?get_Node@NodeChangedEventArgs@ComposableShell@Internal@Windows@@UEAAJPEAPEAUITreeNode@234@@Z @ 0x180236830
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComposableShell::NodeChangedEventArgs::get_Node(
        Windows::Internal::ComposableShell::NodeChangedEventArgs *this,
        struct Windows::Internal::ComposableShell::ITreeNode **a2,
        __int64 a3,
        const char *a4)
{
  struct Windows::Internal::ComposableShell::ITreeNode *v4; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    *a2 = 0LL;
    v4 = (struct Windows::Internal::ComposableShell::ITreeNode *)*((_QWORD *)this + 3);
    if ( v4 )
    {
      *a2 = v4;
      (*(void (__fastcall **)(struct Windows::Internal::ComposableShell::ITreeNode *))(*(_QWORD *)v4 + 8LL))(v4);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4C,
                           (__int64)"internal\\shellcommoncomposable\\inc\\treenodebase.h",
                           a4);
  }
  return result;
}
