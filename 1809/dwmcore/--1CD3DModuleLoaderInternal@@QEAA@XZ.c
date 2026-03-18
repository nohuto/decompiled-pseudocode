/*
 * XREFs of ??1CD3DModuleLoaderInternal@@QEAA@XZ @ 0x1800EB48C
 * Callers:
 *     _dynamic_atexit_destructor_for__g_D3DModuleLoader__ @ 0x1800F1790 (_dynamic_atexit_destructor_for__g_D3DModuleLoader__.c)
 * Callees:
 *     ?CleanupD3DReferences@CD3DModuleLoaderInternal@@AEAAXXZ @ 0x1801E3FE4 (-CleanupD3DReferences@CD3DModuleLoaderInternal@@AEAAXXZ.c)
 */

void __fastcall CD3DModuleLoaderInternal::~CD3DModuleLoaderInternal(CD3DModuleLoaderInternal *this)
{
  CD3DModuleLoaderInternal::CleanupD3DReferences(this);
  DeleteCriticalSection(&stru_180308758);
}
