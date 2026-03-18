/*
 * XREFs of ?CleanupD3DReferences@CD3DModuleLoaderInternal@@AEAAXXZ @ 0x1800D8FC4
 * Callers:
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800A9258 (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 *     ??1CD3DModuleLoaderInternal@@QEAA@XZ @ 0x1800D8FA0 (--1CD3DModuleLoaderInternal@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CD3DModuleLoaderInternal::CleanupD3DReferences(CD3DModuleLoaderInternal *this)
{
  if ( dword_180340348 >= 0 )
  {
    FreeLibrary(hLibModule);
    hLibModule = 0LL;
    dword_180340348 = -2003292404;
  }
}
