/*
 * XREFs of ndisGetCombinedPMConfig @ 0x1C0014FF4
 * Callers:
 *     ndisOidPostAddPMProtocolOffload @ 0x1C0014780 (ndisOidPostAddPMProtocolOffload.c)
 *     ndisOidPostRemovePMProtocolOffload @ 0x1C0014A50 (ndisOidPostRemovePMProtocolOffload.c)
 *     ndisOidPostPMAddWOLPattern @ 0x1C0014EA0 (ndisOidPostPMAddWOLPattern.c)
 *     ndisMIndicatePMOffloadReject @ 0x1C004A5AC (ndisMIndicatePMOffloadReject.c)
 *     ndisMIndicateWoLPatternReject @ 0x1C004A6A4 (ndisMIndicateWoLPatternReject.c)
 *     ndisOidPostPMRemoveWOLPattern @ 0x1C004AE60 (ndisOidPostPMRemoveWOLPattern.c)
 *     ndisPreSetPMParameters @ 0x1C00BBC64 (ndisPreSetPMParameters.c)
 *     ndisSetOpenEnableWakeUp @ 0x1C00E8C04 (ndisSetOpenEnableWakeUp.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisGetCombinedPMConfig(__int64 a1, __int64 a2)
{
  KIRQL v4; // r10
  __int64 v5; // r8
  int v6; // edx
  int v7; // r9d
  int v8; // ecx
  __int64 i; // rax
  int v10; // ecx
  __int128 v11; // [rsp+20h] [rbp-20h]

  LODWORD(v11) = 1311360;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v5 = *(_QWORD *)(a1 + 56);
  v6 = 0;
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1864) = 2755901;
  v7 = *(_DWORD *)(a2 + 4) & 2;
  v8 = 0;
  while ( v5 )
  {
    v7 |= *(_DWORD *)(v5 + 312);
    v6 |= *(_DWORD *)(v5 + 316);
    v8 |= *(_DWORD *)(v5 + 324);
    v5 = *(_QWORD *)(v5 + 392);
  }
  for ( i = *(_QWORD *)(a1 + 2056); i; i = *(_QWORD *)(i + 120) )
  {
    v7 |= *(_DWORD *)(i + 748);
    v6 |= *(_DWORD *)(i + 752);
    v8 |= *(_DWORD *)(i + 760);
  }
  v10 = *(_DWORD *)(a1 + 1156) | v8;
  DWORD2(v11) = *(_DWORD *)(a1 + 1148) | v6;
  DWORD1(v11) = *(_DWORD *)(a1 + 1144) | v7;
  HIDWORD(v11) = *(_DWORD *)(a2 + 12);
  *(_OWORD *)a2 = v11;
  *(_DWORD *)(a2 + 16) = v10;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1864) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
}
