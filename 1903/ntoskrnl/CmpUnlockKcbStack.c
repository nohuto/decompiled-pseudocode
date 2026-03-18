/*
 * XREFs of CmpUnlockKcbStack @ 0x1405F83F0
 * Callers:
 *     CmQueryLayeredKey @ 0x14027F918 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x140280714 (CmDeleteLayeredKey.c)
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     CmQueryValueKey @ 0x1405FD190 (CmQueryValueKey.c)
 *     CmSetValueKey @ 0x14062CAE0 (CmSetValueKey.c)
 *     CmDeleteKey @ 0x14063846C (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x140639C4C (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x14063D6B0 (CmpSetKeySecurity.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14064CB80 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpQueryKeySecurity @ 0x14064F450 (CmpQueryKeySecurity.c)
 *     CmpGetSymbolicLinkTarget @ 0x140655BB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpAssignKeySecurity @ 0x140784110 (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x140825780 (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140827E0C (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1408280E4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmSetLastWriteTimeKey @ 0x14082A0E0 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x14082A56C (CmpEnumerateLayeredKey.c)
 *     CmSaveKey @ 0x14083B43C (CmSaveKey.c)
 *     CmpPromoteKey @ 0x14083EDCC (CmpPromoteKey.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     CmpFreeKeyControlBlock @ 0x14069B720 (CmpFreeKeyControlBlock.c)
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
