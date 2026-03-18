/*
 * XREFs of ?consume@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEAAX_J@Z @ 0x1800C6D94
 * Callers:
 *     ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAX_K0@Z @ 0x180098154 (-clear_region@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@de.c)
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x180098A64 (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x180099050 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

void __fastcall detail::pointer_buffer_impl<CDrawListEntry *>::consume(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( (*(_DWORD *)a1 & 3) == 0 )
      goto LABEL_3;
    if ( (*(_DWORD *)a1 & 3) == 1 )
    {
      v4 = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1, a2, a3);
      *(_QWORD *)(v4 - 16) += a2;
      return;
    }
    if ( (*(_DWORD *)a1 & 3) != 2 )
    {
      if ( (*(_DWORD *)a1 & 3) != 3 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr, a3);
      if ( a2 != 1 )
LABEL_3:
        *a1 = 2LL;
    }
  }
}
