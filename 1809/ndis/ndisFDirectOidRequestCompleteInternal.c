/*
 * XREFs of ndisFDirectOidRequestCompleteInternal @ 0x1C005B200
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C005C7D0 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C000D320 (ndisOidRequestComplete.c)
 *     ndisDereferenceRef @ 0x1C0018814 (ndisDereferenceRef.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     ndisReferenceRefNoCheck @ 0x1C0072308 (ndisReferenceRefNoCheck.c)
 */

void __fastcall ndisFDirectOidRequestCompleteInternal(_QWORD *Parameter)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  int v3; // ebx
  __int64 v4; // rdx
  int v5; // [rsp+20h] [rbp-48h]
  _QWORD v6[7]; // [rsp+30h] [rbp-38h] BYREF

  v1 = Parameter[3];
  v2 = Parameter[1];
  v3 = *(_DWORD *)(v1 + 80);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    v5 = *(_DWORD *)(v1 + 80);
    WPP_SF_qqd(0x35u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, v2, v1, v5);
  }
  memset(v6, 0, 0x30uLL);
  LODWORD(v6[5]) = v3;
  v6[2] = v2;
  v6[4] = v1;
  ndisReferenceRefNoCheck((PKSPIN_LOCK)(v2 + 320));
  ndisOidRequestComplete((__int64)v6, v4);
  ndisDereferenceRef((PKSPIN_LOCK)(v2 + 320), 0x14u);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0x36u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, v2, v1);
}
