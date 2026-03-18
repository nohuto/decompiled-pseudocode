/*
 * XREFs of ??$InitMessage@U?$AlpcDatagram@$05@DispBroker@@@DispBrokerClient@DispBroker@@QEBAXAEAU?$AlpcDatagram@$05@1@@Z @ 0x1C00E0640
 * Callers:
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_6__lambda_d468e85fa23a2f0e45bbf885a2407a22___ @ 0x1C00E04D4 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_6__lambda_d468e85fa23a2f0e45bbf885a2407a22___.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall DispBroker::DispBrokerClient::InitMessage<DispBroker::AlpcDatagram<6>>(__int64 a1, _DWORD *a2)
{
  int v3; // eax
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-28h]

  memset(a2, 0, 0x48uLL);
  a2[10] = 6;
  a2[11] = 1;
  LODWORD(v5) = *((_DWORD *)gpGdiSharedMemory + 393252);
  HIDWORD(v5) = *((_DWORD *)gpGdiSharedMemory + 393258);
  v3 = *((_DWORD *)gpGdiSharedMemory + 393256);
  *((_QWORD *)a2 + 6) = v5;
  a2[14] = v3;
  result = 4294934528LL;
  *((_WORD *)a2 + 2) = 0x8000;
  *a2 = 4718624;
  return result;
}
