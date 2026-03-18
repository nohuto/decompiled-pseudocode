/*
 * XREFs of MiCopyPfnEntryEx @ 0x14009D550
 * Callers:
 *     MiReplaceTransitionPage @ 0x14009CF60 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x1400A0834 (MiStealPage.c)
 *     MiMigratePfn @ 0x1400D3F30 (MiMigratePfn.c)
 *     MiTradeActivePage @ 0x1400F6324 (MiTradeActivePage.c)
 *     MiSwapStackPageNoDpc @ 0x140134888 (MiSwapStackPageNoDpc.c)
 *     MiConvertStandbyToProto @ 0x140140900 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x1401416D0 (MiConvertPrivateToProto.c)
 *     MiSwitchKstackPages @ 0x1402C479C (MiSwitchKstackPages.c)
 *     MiSplitDirectMapPage @ 0x1402CCFA8 (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402DA970 (MiSwapNumaStandbyPage.c)
 *     MiSwapHardFaultPage @ 0x1402EC2A0 (MiSwapHardFaultPage.c)
 *     MiTradeBootImagePage @ 0x1409EF93C (MiTradeBootImagePage.c)
 *     MxSwapPages @ 0x1409FC488 (MxSwapPages.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 */

char __fastcall MiCopyPfnEntryEx(__int64 a1, __int128 *a2)
{
  unsigned __int64 v3; // rdi
  char result; // al
  __int128 v5; // [rsp+30h] [rbp-78h]
  __int128 v6; // [rsp+50h] [rbp-58h]
  __int128 v7; // [rsp+60h] [rbp-48h]
  _QWORD v8[6]; // [rsp+70h] [rbp-38h] BYREF

  v5 = *a2;
  v6 = a2[1];
  v7 = a2[2];
  v3 = *((_QWORD *)a2 + 5);
  BYTE3(v7) = BYTE3(v7) & 0x7F | *(_BYTE *)(a1 + 35) & 0x80;
  BYTE3(v7) ^= (BYTE3(v7) ^ *(_BYTE *)(a1 + 35) & 0xC0) & 0x40;
  if ( ((*((_QWORD *)&v7 + 1) >> 54) & 7) == 3 )
    v3 = *((_QWORD *)&v7 + 1) & 0xFE3FFFFFFFFFFFFFuLL;
  BYTE2(v7) = BYTE2(v7) & 0x3F | *(_BYTE *)(a1 + 34) & 0xC0;
  memset(v8, 0, sizeof(v8));
  v8[5] = *(_QWORD *)(a1 + 40) ^ (v3 ^ *(_QWORD *)(a1 + 40)) & 0x3FFFFFFFFFFFFFFLL;
  result = BYTE2(v7) & 7;
  *((_QWORD *)&v7 + 1) = v8[5] & 0xFFFC00CFFFFFFFFFuLL | (((*(_QWORD *)(a1 + 40) >> 36) & 3LL | (16
                                                                                               * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL))) << 36);
  if ( (BYTE2(v7) & 7) != 6 )
  {
    result = 0;
    *((_QWORD *)&v6 + 1) ^= (*(_QWORD *)(a1 + 24) ^ *((_QWORD *)&v6 + 1)) & 0xF00000000000000LL;
  }
  *(_OWORD *)a1 = v5;
  *(_OWORD *)(a1 + 16) = v6;
  *(_OWORD *)(a1 + 32) = v7;
  return result;
}
