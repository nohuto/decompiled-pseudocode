/*
 * XREFs of MiCopyPfnEntryEx @ 0x14010E080
 * Callers:
 *     MiMigratePfn @ 0x14003C640 (MiMigratePfn.c)
 *     MiConvertPrivateToProto @ 0x140082EA0 (MiConvertPrivateToProto.c)
 *     MiStealPage @ 0x1400EBFC4 (MiStealPage.c)
 *     MiReplaceTransitionPage @ 0x1401184DC (MiReplaceTransitionPage.c)
 *     MiSwapStackPageNoDpc @ 0x14012D744 (MiSwapStackPageNoDpc.c)
 *     MiTradeActivePage @ 0x14012DFF4 (MiTradeActivePage.c)
 *     MiSwitchKstackPages @ 0x14015EC94 (MiSwitchKstackPages.c)
 *     MiSplitDirectMapPage @ 0x1402B6F14 (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402C1200 (MiSwapNumaStandbyPage.c)
 *     MiSwapHardFaultPage @ 0x1402D014C (MiSwapHardFaultPage.c)
 *     MiTradeBootImagePage @ 0x1409B96AC (MiTradeBootImagePage.c)
 *     MxSwapPages @ 0x1409C14C8 (MxSwapPages.c)
 * Callees:
 *     <none>
 */

char __fastcall MiCopyPfnEntryEx(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  __int128 v7; // [rsp+10h] [rbp-28h]
  __int128 v8; // [rsp+20h] [rbp-18h]

  v2 = *(_OWORD *)(a2 + 32);
  v3 = *(_OWORD *)(a2 + 16);
  *(_QWORD *)&v8 = v2;
  v4 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)&v7 = v3;
  BYTE3(v8) = BYTE3(v2) & 0x7F | *(_BYTE *)(a1 + 35) & 0x80;
  BYTE3(v8) ^= (BYTE3(v8) ^ *(_BYTE *)(a1 + 35) & 0xC0) & 0x40;
  if ( ((*((_QWORD *)&v2 + 1) >> 54) & 7) == 3 )
    v4 = *((_QWORD *)&v2 + 1) & 0xFE3FFFFFFFFFFFFFuLL;
  BYTE2(v8) = BYTE2(v2) & 0x3F | *(_BYTE *)(a1 + 34) & 0xC0;
  LOBYTE(v5) = BYTE2(v2) & 7;
  *((_QWORD *)&v8 + 1) = (*(_QWORD *)(a1 + 40) ^ (v4 ^ *(_QWORD *)(a1 + 40)) & 0x3FFFFFFFFFFFFFFLL) & 0xFFFC00CFFFFFFFFFuLL | (((*(_QWORD *)(a1 + 40) >> 36) & 3LL | (16 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL))) << 36);
  if ( (BYTE2(v2) & 7) != 6 )
  {
    v5 = (*((_QWORD *)&v3 + 1) ^ *(_QWORD *)(a1 + 24)) & 0xF00000000000000LL ^ *((_QWORD *)&v3 + 1);
    *((_QWORD *)&v7 + 1) = v5;
    v3 = v7;
  }
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = v3;
  *(_OWORD *)(a1 + 32) = v8;
  return v5;
}
