/*
 * XREFs of ??2@YAPEAX_K@Z @ 0x180004FC0
 * Callers:
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x180004490 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180003644 (ModuleFailFastForHRESULT.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x180004F7C (-Alloc@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 */

LPVOID __fastcall operator new()
{
  LPVOID result; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  result = WPF::ProcessHeapImpl::Alloc();
  if ( !result )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  return result;
}
