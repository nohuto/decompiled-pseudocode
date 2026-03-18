/*
 * XREFs of ??0CD3DModuleLoaderInternal@@QEAA@XZ @ 0x1800D9B68
 * Callers:
 *     _dynamic_initializer_for__g_D3DModuleLoader__ @ 0x180001220 (_dynamic_initializer_for__g_D3DModuleLoader__.c)
 * Callees:
 *     <none>
 */

CD3DModuleLoaderInternal *__fastcall CD3DModuleLoaderInternal::CD3DModuleLoaderInternal(CD3DModuleLoaderInternal *this)
{
  CD3DModuleLoaderInternal *result; // rax

  InitializeCriticalSection(&CriticalSection);
  hLibModule = 0LL;
  result = (CD3DModuleLoaderInternal *)&CriticalSection;
  dword_18033D428 = -2003292404;
  return result;
}
