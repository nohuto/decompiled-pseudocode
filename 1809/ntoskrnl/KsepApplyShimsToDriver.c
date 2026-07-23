/*
 * XREFs of KsepApplyShimsToDriver @ 0x1408493BC
 * Callers:
 *     KseDriverLoadImage @ 0x14067F100 (KseDriverLoadImage.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     KsepLogInfo @ 0x1400F4DB8 (KsepLogInfo.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KsepDebugPrint @ 0x14029FE34 (KsepDebugPrint.c)
 *     KsepLogError @ 0x1402A00D4 (KsepLogError.c)
 *     KsepPatchDriverImportsTable @ 0x1408495EC (KsepPatchDriverImportsTable.c)
 */

__int64 __fastcall KsepApplyShimsToDriver(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v7; // r14d
  __int64 *v8; // rsi
  unsigned int v9; // edi
  __int64 v10; // rcx
  void (__fastcall *v11)(__int64, _QWORD, _QWORD, _QWORD, _DWORD); // rax
  void *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // rax

  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v7 = 0;
  if ( !a4 )
  {
LABEL_16:
    v14 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v14]) = 0;
    LODWORD(KsepHistoryMessages[v14]) = 459420;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(8LL, "KSE: Successfully applied shims to driver [%ws]\n", *(_QWORD *)(a2 + 8));
    KsepLogInfo(8LL, (__int64)"KSE: Successfully applied shims to driver [%ws]\n", *(_QWORD *)(a2 + 8));
    return 0;
  }
  v8 = (__int64 *)(a3 + 72);
  while ( (*(_DWORD *)(*v8 + 28) & 4) != 0 )
  {
LABEL_15:
    ++v7;
    v8 += 10;
    if ( v7 >= a4 )
      goto LABEL_16;
  }
  v9 = KsepPatchDriverImportsTable(a1, *(_QWORD *)(*v8 + 16));
  if ( (v9 & 0x80000000) == 0 )
  {
    v10 = *v8;
    v11 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)(*v8 + 16) + 40LL);
    if ( v11 )
    {
      v11(a2, *(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), *(unsigned int *)(a1 + 156), *(_DWORD *)(a1 + 120));
      v10 = *v8;
    }
    v12 = *(void **)(v10 + 32);
    if ( v12 )
      ObfReferenceObject(v12);
    v13 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v13]) = 0;
    LODWORD(KsepHistoryMessages[v13]) = 459416;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(
        8LL,
        "KSE: Applied shim [0x%08X] to driver [%ws]\n",
        **(unsigned int **)(*(_QWORD *)(*v8 + 16) + 8LL),
        *(_QWORD *)(a2 + 8));
    KsepLogInfo(
      8LL,
      (__int64)"KSE: Applied shim [0x%08X] to driver [%ws]\n",
      **(unsigned int **)(*(_QWORD *)(*v8 + 16) + 8LL),
      *(_QWORD *)(a2 + 8));
    goto LABEL_15;
  }
  v16 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
  dword_14041BCA4[2 * v16] = v9;
  KsepHistoryErrors[2 * v16] = 459377;
  if ( (KsepDebugFlag & 2) != 0 )
    KsepDebugPrint(8LL, "KSE: Failed to patch driver [%ws]: 0x%x\n", *(_QWORD *)(a2 + 8), v9);
  KsepLogError(8, "KSE: Failed to patch driver [%ws]: 0x%x\n", *(_QWORD *)(a2 + 8), v9);
  return v9;
}
