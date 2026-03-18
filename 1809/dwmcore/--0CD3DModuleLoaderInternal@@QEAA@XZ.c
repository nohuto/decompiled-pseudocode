/*
 * XREFs of ??0CD3DModuleLoaderInternal@@QEAA@XZ @ 0x18007C0A0
 * Callers:
 *     _dynamic_initializer_for__g_D3DModuleLoader__ @ 0x180002A30 (_dynamic_initializer_for__g_D3DModuleLoader__.c)
 * Callees:
 *     <none>
 */

CD3DModuleLoaderInternal *__fastcall CD3DModuleLoaderInternal::CD3DModuleLoaderInternal(CD3DModuleLoaderInternal *this)
{
  CD3DModuleLoaderInternal *result; // rax

  InitializeCriticalSection(&stru_180308758);
  hLibModule = 0LL;
  result = (CD3DModuleLoaderInternal *)&stru_180308758;
  dword_180308780 = -2003292404;
  return result;
}
