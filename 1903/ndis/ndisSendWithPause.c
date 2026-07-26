/*
 * XREFs of ndisSendWithPause @ 0x1C008CA70
 * Callers:
 *     <none>
 * Callees:
 *     ndisSendPacketsWithPause @ 0x1C008C7A0 (ndisSendPacketsWithPause.c)
 */

__int64 __fastcall ndisSendWithPause(__int64 a1, struct _NDIS_PACKET *a2)
{
  struct _NDIS_PACKET *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  ndisSendPacketsWithPause(a1, &v3, 1u);
  return 259LL;
}
