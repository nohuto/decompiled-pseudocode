/*
 * XREFs of ??0CApiPortClient@@QEAA@I@Z @ 0x180004014
 * Callers:
 *     _dynamic_initializer_for__g_PortClient__ @ 0x180001150 (_dynamic_initializer_for__g_PortClient__.c)
 * Callees:
 *     <none>
 */

CApiPortClient *__fastcall CApiPortClient::CApiPortClient(CApiPortClient *this)
{
  CApiPortClient *result; // rax

  g_PortClient = 0;
  BaseAddress = 0LL;
  *(_OWORD *)&hObject = 0LL;
  InitializeCriticalSection(&CriticalSection);
  result = (CApiPortClient *)&g_PortClient;
  byte_18000B7B8 = 0;
  return result;
}
