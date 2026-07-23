/*
 * XREFs of KdpCopyContext @ 0x140919934
 * Callers:
 *     KdpSetContextEx @ 0x14028C86C (KdpSetContextEx.c)
 *     KdpReport @ 0x14028CCF0 (KdpReport.c)
 *     KdpGetContext @ 0x1409172E4 (KdpGetContext.c)
 *     KdpSetContext @ 0x1409189F0 (KdpSetContext.c)
 *     KdpCommandString @ 0x140919164 (KdpCommandString.c)
 *     KdpSymbol @ 0x140919500 (KdpSymbol.c)
 * Callees:
 *     KdpQuickMoveMemory @ 0x140919B04 (KdpQuickMoveMemory.c)
 */

__int64 __fastcall KdpCopyContext(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // r10
  __int64 v4; // r11
  __int64 result; // rax
  int v6; // r9d
  unsigned int v7; // eax
  __int64 v8; // r8

  KdpQuickMoveMemory(a1, a3, 1232LL);
  result = 1048640LL;
  v3[12] = v6;
  if ( (v6 & 0x100040) == 0x100040 )
  {
    v7 = v3[313];
    v8 = *(unsigned int *)(v4 + 1252);
    if ( v7 <= (unsigned int)v8 )
      v8 = v7;
    return KdpQuickMoveMemory((char *)v3 + v3[312] + 1232, *(int *)(v4 + 1248) + v4 + 1232, v8);
  }
  return result;
}
