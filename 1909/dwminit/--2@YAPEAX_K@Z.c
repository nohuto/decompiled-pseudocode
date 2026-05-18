/*
 * XREFs of ??2@YAPEAX_K@Z @ 0x180004F5C
 * Callers:
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x180004420 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180003604 (ModuleFailFastForHRESULT.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180004F08 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 */

LPVOID __fastcall operator new()
{
  LPVOID result; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  result = DefaultHeap::Alloc();
  if ( !result )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  return result;
}
