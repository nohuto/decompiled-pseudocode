/*
 * XREFs of ndisSendWithPause @ 0x1C00599C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisSendPacketsWithPause @ 0x1C0059670 (ndisSendPacketsWithPause.c)
 */

__int64 __fastcall ndisSendWithPause(__int64 a1, struct _NDIS_PACKET *a2)
{
  struct _NDIS_PACKET *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qq(0x32u, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, a1, a2);
  ndisSendPacketsWithPause(a1, &v4, 1u);
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qq(0x33u, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, a1, v4);
  return 259LL;
}
