/*
 * XREFs of AlpcpValidateConnectionMessage @ 0x1406154F8
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x140614A64 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x140619CD8 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     AlpcpValidateMessage @ 0x1406163AC (AlpcpValidateMessage.c)
 */

__int64 __fastcall AlpcpValidateConnectionMessage(__int64 a1, _WORD *a2, char a3)
{
  __int64 v5; // rdx

  if ( !a3 )
    return AlpcpValidateMessage(a2, 0LL);
  v5 = *(_QWORD *)(a1 + 272);
  if ( (unsigned __int16)*a2 > (unsigned __int64)(v5 - 40) )
    *a2 = v5 - 40;
  return 0LL;
}
