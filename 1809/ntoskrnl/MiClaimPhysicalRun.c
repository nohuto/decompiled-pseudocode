/*
 * XREFs of MiClaimPhysicalRun @ 0x14009BE60
 * Callers:
 *     MiFindContiguousPages @ 0x14009A050 (MiFindContiguousPages.c)
 *     MiScrubNode @ 0x1402CF8B8 (MiScrubNode.c)
 *     MmRelocatePfnList @ 0x140860568 (MmRelocatePfnList.c)
 * Callees:
 *     MiTradePage @ 0x14009C030 (MiTradePage.c)
 *     MiReleaseFreshPage @ 0x1400E1084 (MiReleaseFreshPage.c)
 */

__int64 __fastcall MiClaimPhysicalRun(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        __int64 *a10)
{
  __int64 v11; // rbx
  int v12; // r14d
  __int64 v13; // r12
  unsigned __int64 v14; // rsi
  __int64 v15; // r15
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v20; // r13
  _QWORD v21[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v22; // [rsp+30h] [rbp-68h]
  int v23; // [rsp+38h] [rbp-60h]
  int v24; // [rsp+3Ch] [rbp-5Ch]
  int v25; // [rsp+40h] [rbp-58h]
  __int64 v26; // [rsp+48h] [rbp-50h]
  unsigned __int64 v27; // [rsp+50h] [rbp-48h]
  __int64 v28; // [rsp+58h] [rbp-40h]
  __int64 v29; // [rsp+60h] [rbp-38h]

  v11 = a2;
  if ( a10 )
    *a10 = -1LL;
  v29 = a8;
  v12 = 0;
  v13 = a3;
  v21[1] = a5;
  v24 = a7;
  v21[0] = a1;
  v25 = a9;
  v23 = a6;
  v22 = a3;
  v28 = a4;
  v26 = -1LL;
  v14 = 48 * a2 - 0x58000000000LL;
  v15 = a2 + a3;
  v16 = v14 + 48 * a3;
  while ( 1 )
  {
    v17 = MiTradePage(v21, v11);
    v18 = v17;
    if ( !v17 )
    {
      v17 = 1LL;
      if ( v27 > 1 )
      {
        if ( v11 == (v11 & ~(v27 - 1)) )
          v17 = v27;
        else
          v17 = (~(v27 - 1) & (v11 + v27 - 1)) - v11;
      }
      if ( !v12 )
      {
        if ( v27 )
          v13 = v15 - (v11 & ~(v27 - 1));
        v12 = 1;
      }
      if ( (a6 & 0x2000) == 0 )
        goto LABEL_20;
      if ( v17 >= v15 - v11 )
        goto LABEL_11;
    }
    v11 += v17;
    v14 += 48 * v17;
    v22 -= v18;
    if ( !v22 )
      break;
    if ( v14 >= v16 )
    {
LABEL_11:
      if ( (a6 & 0x2000) == 0 )
      {
LABEL_20:
        v20 = a3 - v22;
        if ( a8 )
          *(_DWORD *)(a8 + 40) += -4096 * v20;
        for ( ; v20; --v20 )
        {
          v14 -= 48LL;
          MiReleaseFreshPage(v14);
        }
      }
      return v13;
    }
  }
  if ( (a6 & 0x400000) != 0 && a10 )
    *a10 = v26;
  return 0LL;
}
