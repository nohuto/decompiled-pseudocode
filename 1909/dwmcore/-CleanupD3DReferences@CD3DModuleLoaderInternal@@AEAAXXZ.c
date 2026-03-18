/*
 * XREFs of ?CleanupD3DReferences@CD3DModuleLoaderInternal@@AEAAXXZ @ 0x1800D9764
 * Callers:
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800B2D70 (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 *     ??1CD3DModuleLoaderInternal@@QEAA@XZ @ 0x1800D9740 (--1CD3DModuleLoaderInternal@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CD3DModuleLoaderInternal::CleanupD3DReferences(CD3DModuleLoaderInternal *this)
{
  if ( dword_18033D428 >= 0 )
  {
    FreeLibrary(hLibModule);
    hLibModule = 0LL;
    dword_18033D428 = -2003292404;
  }
}
