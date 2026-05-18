/*
 * XREFs of ?ResetConnection@CApiPortClient@@QEAAXXZ @ 0x18000461C
 * Callers:
 *     DwmpResetPortConnection @ 0x180003E40 (DwmpResetPortConnection.c)
 * Callees:
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x1800040A0 (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x1800043F4 (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 */

void __fastcall CApiPortClient::ResetConnection(CApiPortClient *this)
{
  CApiPortClient *v1; // rcx
  CApiPortClient *v2; // rcx

  EnterCriticalSection(&CriticalSection);
  if ( CApiPortClient::IsConnected(v1) )
    CApiPortClient::Disconnect(v2);
  LeaveCriticalSection(&CriticalSection);
}
