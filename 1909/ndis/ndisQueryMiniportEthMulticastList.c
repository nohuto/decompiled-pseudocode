/*
 * XREFs of ndisQueryMiniportEthMulticastList @ 0x1C006F440
 * Callers:
 *     ndisOidPreEthMulticastList @ 0x1C0025730 (ndisOidPreEthMulticastList.c)
 * Callees:
 *     EthQueryGlobalFilterAddresses @ 0x1C00A21A0 (EthQueryGlobalFilterAddresses.c)
 */

__int64 __fastcall ndisQueryMiniportEthMulticastList(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF

  EthQueryGlobalFilterAddresses((int)&v5, *(_QWORD *)(a1 + 400), *(_DWORD *)(a2 + 48), (int)&v6, *(void **)(a2 + 40));
  result = v5;
  if ( v5 )
  {
    *(_DWORD *)(a2 + 56) = 6 * *(_DWORD *)(*(_QWORD *)(a1 + 400) + 384LL);
    return 3221291028LL;
  }
  else
  {
    *(_DWORD *)(a2 + 52) = 6 * v6;
  }
  return result;
}
