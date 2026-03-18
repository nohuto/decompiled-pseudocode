/*
 * XREFs of ??$InitMessage@U?$AlpcRequest@$06@DispBroker@@@DispBrokerClient@DispBroker@@QEBAXAEAU?$AlpcRequest@$06@1@@Z @ 0x1C00E06DC
 * Callers:
 *     ??$SyncMessage@$06@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$06@1@PEAU?$AlpcReply@$06@1@G@Z @ 0x1C00E0818 (--$SyncMessage@$06@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$06@1@PEAU-$AlpcReply@$06.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall DispBroker::DispBrokerClient::InitMessage<DispBroker::AlpcRequest<7>>(__int64 a1, _DWORD *a2)
{
  int v3; // eax
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-28h]

  memset(a2, 0, 0x128uLL);
  a2[10] = 7;
  a2[11] = 1;
  LODWORD(v5) = *((_DWORD *)gpGdiSharedMemory + 393252);
  HIDWORD(v5) = *((_DWORD *)gpGdiSharedMemory + 393258);
  v3 = *((_DWORD *)gpGdiSharedMemory + 393256);
  *((_QWORD *)a2 + 6) = v5;
  a2[14] = v3;
  result = 4294934528LL;
  *((_WORD *)a2 + 2) = 0x8000;
  *a2 = 19398912;
  return result;
}
