/*
 * XREFs of _RmpClientCallbackGenerateLastMessage@8 @ 0x10011CDF
 * Callers:
 *     _RmpClientSubscriptionDeliverPayload@12 @ 0x10011D70 (_RmpClientSubscriptionDeliverPayload@12.c)
 * Callees:
 *     _memset @ 0x1000D154 (_memset.c)
 */

int __fastcall RmpClientCallbackGenerateLastMessage(_DWORD *a1, _DWORD *a2)
{
  int v4; // eax
  int result; // eax
  int v6; // esi
  int v7; // ecx
  int v8; // edx

  memset(a2, 0, 0x30u);
  v4 = a1[8];
  *a2 = v4;
  if ( v4 )
  {
    result = v4 - 1;
    if ( result )
      return result;
    v6 = a1[13];
    v7 = a1[6];
    v8 = a1[7];
    a2[2] = a1[10];
    result = a1[11];
    a2[7] = 0;
    a2[5] = v8;
    a2[6] = v6;
  }
  else
  {
    v7 = a1[13];
    a2[2] = a1[6];
    result = a1[7];
    a2[5] = 0;
  }
  a2[4] = v7;
  a2[3] = result;
  return result;
}
