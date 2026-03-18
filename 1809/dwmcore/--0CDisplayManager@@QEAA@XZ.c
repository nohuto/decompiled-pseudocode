/*
 * XREFs of ??0CDisplayManager@@QEAA@XZ @ 0x18007BE8C
 * Callers:
 *     _dynamic_initializer_for__g_DisplayManager__ @ 0x1800029B0 (_dynamic_initializer_for__g_DisplayManager__.c)
 * Callees:
 *     <none>
 */

CDisplayManager *__fastcall CDisplayManager::CDisplayManager(CDisplayManager *this)
{
  CDisplayManager *result; // rax

  InitializeCriticalSection(&g_DisplayManager);
  result = (CDisplayManager *)&g_DisplayManager;
  qword_180308258 = 0LL;
  qword_180308260 = 0LL;
  dword_180308268 = 0;
  qword_180308270 = 0LL;
  dword_180308278 = 0;
  dword_18030827C = 0;
  return result;
}
