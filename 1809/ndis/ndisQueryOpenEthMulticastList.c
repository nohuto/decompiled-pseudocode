/*
 * XREFs of ndisQueryOpenEthMulticastList @ 0x1C00E4C6C
 * Callers:
 *     ndisOidPreEthMulticastList @ 0x1C00CD290 (ndisOidPreEthMulticastList.c)
 * Callees:
 *     EthQueryOpenFilterAddresses @ 0x1C006743C (EthQueryOpenFilterAddresses.c)
 */

__int64 __fastcall ndisQueryOpenEthMulticastList(__int64 a1, __int64 a2)
{
  unsigned int v4; // edx
  unsigned int v5; // ecx
  int v6; // eax
  __int64 result; // rax
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+48h] [rbp+10h] BYREF

  EthQueryOpenFilterAddresses(
    (int *)&v8,
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL),
    a1,
    *(_DWORD *)(a2 + 48),
    &v9,
    *(char **)(a2 + 40));
  v4 = v8;
  if ( v8 == -1073741823 )
  {
    v4 = -1073676268;
    v5 = 0;
    v6 = 6 * *(_DWORD *)(a1 + 456);
  }
  else
  {
    v5 = 6 * v9;
    v6 = 0;
  }
  *(_DWORD *)(a2 + 56) = v6;
  result = v4;
  *(_DWORD *)(a2 + 52) = v5;
  return result;
}
