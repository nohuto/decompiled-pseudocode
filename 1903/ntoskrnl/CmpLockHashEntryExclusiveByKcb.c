/*
 * XREFs of CmpLockHashEntryExclusiveByKcb @ 0x140631C1C
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x140045A40 (CmpDrainDelayDerefContext.c)
 *     CmpRemoveHiveFromNamespace @ 0x14008BE7C (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x140280714 (CmDeleteLayeredKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405F73E0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpTransMgrFreeVolatileData @ 0x140631678 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x14063846C (CmDeleteKey.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     CmpReferenceHive @ 0x14064E82C (CmpReferenceHive.c)
 */

__int64 __fastcall CmpLockHashEntryExclusiveByKcb(ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rdi
  unsigned __int64 v3; // r8
  ULONG_PTR v4; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(BugCheckParameter4 + 32);
  v3 = (unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9)));
  v4 = *(_QWORD *)(v2 + 1640) + 24 * ((unsigned int)(*(_DWORD *)(v2 + 1648) - 1) & (v3 ^ (v3 >> 9)));
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
  result = CmpReferenceHive(v2);
  if ( !(_BYTE)result )
    KeBugCheckEx(0x51u, 0x17uLL, v2, 8uLL, BugCheckParameter4);
  return result;
}
