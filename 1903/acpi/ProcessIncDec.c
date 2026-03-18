/*
 * XREFs of ProcessIncDec @ 0x1C0011BE0
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x1C0013E30 (FreeDataBuffs.c)
 *     HeapInsertFreeList @ 0x1C0014540 (HeapInsertFreeList.c)
 *     WriteObject @ 0x1C001B6E0 (WriteObject.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     GetObjectTypeName @ 0x1C0064F74 (GetObjectTypeName.c)
 */

__int64 __fastcall ProcessIncDec(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // edi
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbx
  int ObjectTypeName; // eax
  int v14; // r11d

  v4 = a3;
  if ( a3 )
    v6 = 1;
  else
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  if ( v6 )
  {
    if ( v6 != 1 )
      return v4;
    goto LABEL_10;
  }
  v7 = *(_QWORD *)(a2 + 48);
  ++*(_DWORD *)(a2 + 16);
  if ( *(_WORD *)(v7 + 2) != 1 )
  {
    FreeDataBuffs(v7, 1LL);
    v4 = -1072431095;
    LogError(3222536201LL);
    AcpiDiagTraceAmlError(a1, 3222536201LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(*(_QWORD *)(a2 + 48) + 2LL));
    PrintDebugMessage(147, v14, ObjectTypeName, 0, 0LL);
LABEL_10:
    v10 = *(_QWORD *)(a1 + 416);
    v11 = v10 - 16;
    *(_QWORD *)(a1 + 416) = *(_QWORD *)(v10 + 8);
    *(_DWORD *)(v10 - 16) = 0;
    byte_1C0082B28 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    HeapInsertFreeList(*(_QWORD *)(v11 + 8), v11);
    KeReleaseSpinLock(&gmutHeap, byte_1C0082B28);
    return v4;
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( *(_QWORD *)(a2 + 32) == 117LL )
    v9 = v8 + 1;
  else
    v9 = v8 - 1;
  *(_QWORD *)(v7 + 16) = v9;
  if ( a3 )
    goto LABEL_10;
  v4 = WriteObject(a1, *(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48));
  if ( v4 != 32772 && a2 == *(_QWORD *)(a1 + 416) )
    goto LABEL_10;
  return v4;
}
