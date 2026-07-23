/*
 * XREFs of WmipProcessLegacyEtwCallback @ 0x1408B5830
 * Callers:
 *     WmipLegacyEtwWorker @ 0x140757650 (WmipLegacyEtwWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     WmipSendWmiIrp @ 0x1405FCEA0 (WmipSendWmiIrp.c)
 *     WmipUnreferenceEntry @ 0x1405FD204 (WmipUnreferenceEntry.c)
 */

char __fastcall WmipProcessLegacyEtwCallback(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v5; // rbp
  UCHAR i; // si
  __int128 v7; // xmm0
  __int64 v8; // rbx
  __int128 v9; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v10[8]; // [rsp+40h] [rbp-68h] BYREF

  result = -*(_BYTE *)(a1 + 36);
  v5 = 0LL;
  for ( i = 5 - (*(_BYTE *)(a1 + 36) != 0); (unsigned int)v5 < *(_DWORD *)(a1 + 32); v5 = (unsigned int)(v5 + 1) )
  {
    memset(v10, 0, sizeof(v10));
    v7 = *(_OWORD *)(a2 + 72);
    v8 = *(_QWORD *)(a1 + 8 * v5 + 40);
    v10[1] = *(_QWORD *)(a1 + 24);
    v10[6] = v10[1];
    *(_OWORD *)&v10[3] = v7;
    LODWORD(v10[0]) = 64;
    HIDWORD(v10[5]) = 0x20000;
    WmipSendWmiIrp(i, *(_DWORD *)(v8 + 56), (UNICODE_STRING *)&v10[3], 0x40u, (__int64)v10, &v9);
    result = WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, (volatile signed __int64 *)v8);
  }
  return result;
}
