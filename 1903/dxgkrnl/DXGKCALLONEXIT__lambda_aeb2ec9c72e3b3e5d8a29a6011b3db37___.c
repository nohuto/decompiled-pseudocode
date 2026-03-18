/*
 * XREFs of DXGKCALLONEXIT__lambda_aeb2ec9c72e3b3e5d8a29a6011b3db37___ @ 0x1C003F850
 * Callers:
 *     ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1C014C294 (-SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGKCALLONEXIT__lambda_aeb2ec9c72e3b3e5d8a29a6011b3db37_(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // xmm1_8

  result = a1;
  v3 = *(_QWORD *)(a2 + 16);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_BYTE *)(a1 + 24) = 1;
  *(_QWORD *)(a1 + 16) = v3;
  return result;
}
