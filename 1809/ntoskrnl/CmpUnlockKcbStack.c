/*
 * XREFs of CmpUnlockKcbStack @ 0x1406440C0
 * Callers:
 *     CmQueryLayeredKey @ 0x14026BF18 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x14026CCCC (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x1405A9DD8 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1405B6634 (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1405B8548 (CmpSetKeySecurity.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1405CB1A0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpQueryKeySecurity @ 0x1405CB550 (CmpQueryKeySecurity.c)
 *     CmSetValueKey @ 0x1405CBE28 (CmSetValueKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405D7CC0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x140641CA0 (CmpDoParseKey.c)
 *     CmQueryValueKey @ 0x140645190 (CmQueryValueKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x1407307B8 (CmpStartSiloRegistryNamespace.c)
 *     CmpAssignKeySecurity @ 0x14075B95C (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x1407EAC30 (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1407ED350 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1407ED62C (CmQueryMultipleValueForLayeredKey.c)
 *     CmSetLastWriteTimeKey @ 0x1407EF8AC (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x1407EFD80 (CmpEnumerateLayeredKey.c)
 *     CmpDoBuildVirtualStack @ 0x1407F2A18 (CmpDoBuildVirtualStack.c)
 *     CmSaveKey @ 0x140801F30 (CmSaveKey.c)
 *     CmpPromoteKey @ 0x1408055E0 (CmpPromoteKey.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     CmpFreeKeyControlBlock @ 0x140692BF4 (CmpFreeKeyControlBlock.c)
 */

__int64 __fastcall CmpUnlockKcbStack(__int64 a1)
{
  __int16 i; // bx
  ULONG_PTR v3; // rdi
  bool v4; // bp
  __int64 result; // rax

  for ( i = 0; i <= *(__int16 *)(a1 + 2); ++i )
  {
    if ( i >= 2 )
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * i - 16);
    else
      v3 = *(_QWORD *)(a1 + 8LL * i + 8);
    v4 = (*(_DWORD *)(v3 + 4) & 0x80000) != 0;
    if ( *(struct _KTHREAD **)(v3 + 48) == KeGetCurrentThread() )
      *(_QWORD *)(v3 + 48) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(v3 + 48));
    result = ExReleasePushLockEx(v3 + 40, 0LL);
    if ( v4 && (*(_DWORD *)(v3 + 4) & 0x80000) != 0 )
      result = CmpFreeKeyControlBlock(v3);
  }
  return result;
}
