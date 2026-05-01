/*
 * XREFs of _lambda_896972b7315e759534395e3cb0475917_::operator() @ 0x18001BB74
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_896972b7315e759534395e3cb0475917___::Run @ 0x18001BB50 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_896972b7315e759534395e3cb0475917___--.c)
 * Callees:
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18001BEB8 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_896972b7315e759534395e3cb0475917_::operator()(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  _DWORD *v4; // rax
  __int16 v5; // cx
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 8);
  if ( **(_DWORD **)a1 == 1 )
    *(_DWORD *)(v2 + 188) |= 0x100u;
  else
    *(_DWORD *)(v2 + 188) &= ~0x100u;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD **)a1;
  v5 = 0;
  if ( (*(_BYTE *)(v3 + 188) & 0x40) != 0 )
  {
    if ( *v4 )
      return 0LL;
    try
    {
      *(_WORD *)(v3 + 260) &= ~0x80u;
      WindowWrapperBase::CommitImportanceVector(*(WindowWrapperBase **)(a1 + 8));
      *(_WORD *)(*(_QWORD *)(a1 + 8) + 260LL) |= 0x80u;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x78C,
                             (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                             v7);
    }
  }
  else
  {
    if ( *v4 == 1 )
      v5 = 64;
    *(_WORD *)(v3 + 260) = *(_WORD *)(v3 + 260) & 0xFFBF | v5;
  }
  WindowWrapperBase::CommitImportanceVector(*(WindowWrapperBase **)(a1 + 8));
  return 0LL;
}
