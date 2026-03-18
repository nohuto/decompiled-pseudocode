/*
 * XREFs of CmpUnlockKcbStack @ 0x1405F9440
 * Callers:
 *     CmQueryLayeredKey @ 0x14027F678 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x140280474 (CmDeleteLayeredKey.c)
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 *     CmQueryValueKey @ 0x1405FE220 (CmQueryValueKey.c)
 *     CmSetValueKey @ 0x140630930 (CmSetValueKey.c)
 *     CmDeleteKey @ 0x14063B4FC (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x14063CCDC (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1406409F0 (CmpSetKeySecurity.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1406608E0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpQueryKeySecurity @ 0x140662610 (CmpQueryKeySecurity.c)
 *     CmpGetSymbolicLinkTarget @ 0x140668CB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpStartSiloRegistryNamespace @ 0x14077EB0C (CmpStartSiloRegistryNamespace.c)
 *     CmpAssignKeySecurity @ 0x140786470 (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x140824E80 (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14082750C (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1408277E4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmSetLastWriteTimeKey @ 0x1408297E0 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x140829C6C (CmpEnumerateLayeredKey.c)
 *     CmSaveKey @ 0x14083AA9C (CmSaveKey.c)
 *     CmpPromoteKey @ 0x14083E42C (CmpPromoteKey.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     CmpFreeKeyControlBlock @ 0x1406BA6D0 (CmpFreeKeyControlBlock.c)
 */

char __fastcall CmpUnlockKcbStack(__int64 a1)
{
  __int16 i; // bx
  ULONG_PTR v3; // rdi
  bool v4; // bp
  char result; // al

  for ( i = 0; i <= *(__int16 *)(a1 + 2); ++i )
  {
    if ( i >= 2 )
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * i - 16);
    else
      v3 = *(_QWORD *)(a1 + 8LL * i + 8);
    v4 = (*(_DWORD *)(v3 + 8) & 0x80000) != 0;
    if ( *(struct _KTHREAD **)(v3 + 56) == KeGetCurrentThread() )
      *(_QWORD *)(v3 + 56) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(v3 + 56));
    result = ExReleasePushLockEx(v3 + 48, 0LL);
    if ( v4 && (*(_DWORD *)(v3 + 8) & 0x80000) != 0 )
      result = CmpFreeKeyControlBlock(v3);
  }
  return result;
}
