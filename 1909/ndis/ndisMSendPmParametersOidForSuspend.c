/*
 * XREFs of ndisMSendPmParametersOidForSuspend @ 0x1C00B5BC8
 * Callers:
 *     ?ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C00B68B0 (-ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 *     ndisWdfSendPmParametersForSuspend @ 0x1C00BA7D8 (ndisWdfSendPmParametersForSuspend.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ndisMInvokeOidRequest @ 0x1C00FB8A0 (ndisMInvokeOidRequest.c)
 */

__int64 __fastcall ndisMSendPmParametersOidForSuspend(char a1, __int64 a2)
{
  __int64 result; // rax
  _OWORD v5[16]; // [rsp+30h] [rbp-D0h] BYREF

  memset(v5, 0, 0xF8uLL);
  DWORD2(v5[5]) |= 0x408u;
  *((_QWORD *)&v5[6] + 1) = &ndisIntReqGeneric;
  LODWORD(v5[0]) = 15466902;
  LODWORD(v5[2]) = -50265847;
  *(_QWORD *)((char *)v5 + 4) = 1LL;
  *((_QWORD *)&v5[2] + 1) = a2;
  LODWORD(v5[3]) = 20;
  KeInitializeEvent((PRKEVENT)&v5[7], NotificationEvent, 0);
  result = ndisMInvokeOidRequest(a1);
  if ( (_DWORD)result == 259 )
  {
    KeWaitForSingleObject(&v5[7], Executive, 0, 0, 0LL);
    return LODWORD(v5[5]);
  }
  return result;
}
