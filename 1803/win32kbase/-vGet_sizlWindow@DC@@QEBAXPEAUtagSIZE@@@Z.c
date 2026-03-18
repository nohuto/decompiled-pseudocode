/*
 * XREFs of ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C0026A00
 * Callers:
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0025830 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00C48B0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C0026A30 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 */

void __fastcall DC::vGet_sizlWindow(DC *this, struct tagSIZE *a2)
{
  _QWORD *v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rax

  if ( (unsigned int)DC::bDpiScaledSurface(this) )
    v4 = *(_QWORD *)(v3 + 540);
  else
    v4 = *(_QWORD *)(v3 + 520);
  *v2 = v4;
}
