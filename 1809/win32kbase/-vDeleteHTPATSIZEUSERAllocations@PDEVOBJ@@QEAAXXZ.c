/*
 * XREFs of ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C009137C
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C009C000 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     _lambda_49808adf2e8287706ad80fa46f25ee96_::operator() @ 0x1C00A9E58 (_lambda_49808adf2e8287706ad80fa46f25ee96_--operator().c)
 * Callees:
 *     EngFreeUserMem @ 0x1C009D8E0 (EngFreeUserMem.c)
 */

void __fastcall PDEVOBJ::vDeleteHTPATSIZEUSERAllocations(PDEVOBJ *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v2 + 40) & 0x400000) != 0 )
  {
    EngFreeUserMem(*(PVOID *)(v2 + 2416));
    EngFreeUserMem(*(PVOID *)(*(_QWORD *)this + 2424LL));
    EngFreeUserMem(*(PVOID *)(*(_QWORD *)this + 2432LL));
  }
}
