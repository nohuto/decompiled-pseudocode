/*
 * XREFs of _lambda_175779e8aec8e508ceed20f7fb25cadd_::operator() @ 0x18001EEE4
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_175779e8aec8e508ceed20f7fb25cadd___::Run @ 0x18001EEC0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_175779e8aec8e508ceed20f7fb25cadd___--.c)
 * Callees:
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18001F220 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_175779e8aec8e508ceed20f7fb25cadd_::operator()(int **a1)
{
  int *v2; // rdx
  int *v3; // rcx
  int v4; // edx
  __int16 v5; // ax
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = a1[1];
  if ( **a1 == 1 )
    v2[45] |= 0x100u;
  else
    v2[45] &= ~0x100u;
  v3 = a1[1];
  v4 = **a1;
  if ( (v3[45] & 0x40) != 0 )
  {
    if ( v4 )
      return 0LL;
    try
    {
      *((_WORD *)v3 + 126) &= ~0x80u;
      WindowWrapperBase::CommitImportanceVector((WindowWrapperBase *)a1[1]);
      *((_WORD *)a1[1] + 126) |= 0x80u;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x6E7,
                             (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                             v7);
    }
  }
  else
  {
    *((_WORD *)v3 + 126) &= ~0x40u;
    v5 = 0;
    if ( v4 == 1 )
      v5 = 64;
    *((_WORD *)v3 + 126) |= v5;
  }
  WindowWrapperBase::CommitImportanceVector((WindowWrapperBase *)a1[1]);
  return 0LL;
}
