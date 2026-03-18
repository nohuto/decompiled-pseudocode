/*
 * XREFs of MiUnapplyDriverHotPatch @ 0x140858134
 * Callers:
 *     MiApplyHotPatchToDriver @ 0x140854344 (MiApplyHotPatchToDriver.c)
 * Callees:
 *     VslRevertHotPatch @ 0x14027BE0C (VslRevertHotPatch.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     VslDetermineHotPatchUndoTableSize @ 0x14081858C (VslDetermineHotPatchUndoTableSize.c)
 *     VslObtainHotPatchUndoTable @ 0x140818B94 (VslObtainHotPatchUndoTable.c)
 *     MiAllocateHotPatchPageBitMap @ 0x140853F8C (MiAllocateHotPatchPageBitMap.c)
 *     MiLockHotPatchUndoPages @ 0x140855F4C (MiLockHotPatchUndoPages.c)
 *     MiUnlockHotPatchPages @ 0x1408583BC (MiUnlockHotPatchPages.c)
 */

NTSTATUS __fastcall MiUnapplyDriverHotPatch(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax
  unsigned int v4; // ebx
  PVOID PoolWithTag; // rax
  void *v6; // rsi
  int HotPatchPageBitMap; // ebx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp+10h] BYREF

  if ( !*(_QWORD *)(a2 + 120) )
    return 0;
  v8[3] = 0LL;
  v8[0] = a1;
  result = VslDetermineHotPatchUndoTableSize(*(_QWORD *)(a1 + 48), &NumberOfBytes);
  if ( result < 0 )
    return result;
  v4 = NumberOfBytes;
  if ( !(_DWORD)NumberOfBytes )
    return 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x54555048u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  HotPatchPageBitMap = VslObtainHotPatchUndoTable(*(void **)(a1 + 48), (__int64)PoolWithTag, v4);
  if ( HotPatchPageBitMap >= 0 )
  {
    HotPatchPageBitMap = MiAllocateHotPatchPageBitMap(v8);
    if ( HotPatchPageBitMap >= 0 )
    {
      HotPatchPageBitMap = MiLockHotPatchUndoPages((__int64)v8, (int)v6);
      if ( HotPatchPageBitMap >= 0 )
        HotPatchPageBitMap = VslRevertHotPatch(*(_QWORD *)(a1 + 48), 0, 0);
    }
  }
  MiUnlockHotPatchPages(v8);
  ExFreePoolWithTag(v6, 0);
  return HotPatchPageBitMap;
}
