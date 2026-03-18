/*
 * XREFs of RtlpHpFreeHeap @ 0x140003214
 * Callers:
 *     ExpHpCompactionRoutine @ 0x140002FF0 (ExpHpCompactionRoutine.c)
 *     ExAllocateHeapPool @ 0x140037CE0 (ExAllocateHeapPool.c)
 *     ExAllocateContiguousHeapPool @ 0x1400F6154 (ExAllocateContiguousHeapPool.c)
 *     RtlpHpMetadataFree @ 0x14010DA2C (RtlpHpMetadataFree.c)
 *     ExpResizeBigPageTable @ 0x140157548 (ExpResizeBigPageTable.c)
 *     ExPoolCleanupExpansionTable @ 0x1401660EC (ExPoolCleanupExpansionTable.c)
 *     ExGetBigPoolInfo @ 0x140338D60 (ExGetBigPoolInfo.c)
 *     ExpFreeHeapSpecialPool @ 0x14033ECD0 (ExpFreeHeapSpecialPool.c)
 * Callees:
 *     RtlpHpSegFree @ 0x14001D8B4 (RtlpHpSegFree.c)
 *     RtlpHpEnvGetHeapManager @ 0x1400201A8 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpLargeFree @ 0x14010D6C0 (RtlpHpLargeFree.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x140116F10 (RtlCSparseBitmapBitmaskRead.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     RtlpLogHeapFailure @ 0x140319BCC (RtlpLogHeapFailure.c)
 *     RtlpHpExtrasGet @ 0x14031AFE8 (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeap @ 0x14031B0FC (RtlpHpSizeHeap.c)
 */

__int64 __fastcall RtlpHpFreeHeap(__int128 *a1, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  unsigned int v9; // esi
  int v10; // eax
  __int64 HeapManager; // rax
  __int64 v13; // rax
  __int64 v14; // r9
  char v15; // al
  int v16; // eax
  int v17; // eax
  __int128 v18; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  v6 = 0;
  v7 = a3 | *((_DWORD *)a1 + 5) & 0x11000001;
  v8 = *((_DWORD *)a1 + 55);
  if ( v8 )
    LOBYTE(v6) = v8 == KeGetCurrentThread()[1].CurrentRunTime;
  v9 = v7 | 1;
  if ( !v6 )
    v9 = v7;
  if ( (v9 & 0x1000000) != 0
    || !*((_DWORD *)a1 + 6)
    || (v14 = RtlpHpExtrasGet(a1, a2, v9, 0LL), (unsigned __int64)(v14 - 1) > 0xFFFFFFFFFFFFFFFDuLL)
    || (v15 = *(_BYTE *)(v14 + 2), (v15 & 0xF) == 0)
    || ((v16 = v15 & 0xF) == 0 || (_WORD)v16 != 1
      ? (v17 = -1073741823)
      : (v17 = ((__int64 (__fastcall *)(__int128 *, __int64, __int64, __int64))CLFS_LSN_NULL_EXT)(a1, a2, 3LL, v14 + 16)),
        v17 >= 0) )
  {
    if ( (*((_DWORD *)a1 + 5) & 0x10000000) != 0 && RtlpHpSizeHeap(a1, a2, v9) == -1 )
    {
      RtlpLogHeapFailure(9, (_DWORD)a1, a2, 0, 0LL, 0LL);
      return v4;
    }
    if ( (_WORD)a2 )
    {
      v10 = 0;
    }
    else
    {
      v18 = *a1;
      HeapManager = RtlpHpEnvGetHeapManager(&v18);
      v13 = RtlCSparseBitmapBitmaskRead(
              HeapManager + 16,
              2 * ((unsigned __int64)(a2 - *(_QWORD *)(HeapManager + 8)) >> 20));
      if ( !v13 )
        goto LABEL_25;
      v10 = v13 - 1;
    }
    if ( v10 != 2 )
      return (unsigned int)RtlpHpSegFree(&a1[12 * v10 + 16], a2, v9);
LABEL_25:
    LOBYTE(v4) = RtlpHpLargeFree(a1, a2, v9) != 0;
  }
  return v4;
}
