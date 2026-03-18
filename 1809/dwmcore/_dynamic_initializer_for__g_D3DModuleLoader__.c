/*
 * XREFs of _dynamic_initializer_for__g_D3DModuleLoader__ @ 0x180002A30
 * Callers:
 *     <none>
 * Callees:
 *     ??0CD3DModuleLoaderInternal@@QEAA@XZ @ 0x18007C0A0 (--0CD3DModuleLoaderInternal@@QEAA@XZ.c)
 */

int __fastcall dynamic_initializer_for__g_D3DModuleLoader__(CD3DModuleLoaderInternal *a1)
{
  CD3DModuleLoaderInternal::CD3DModuleLoaderInternal(a1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_D3DModuleLoader__);
}
