/*
 * XREFs of ProcessIncDec @ 0x1C002A1D0
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x1C0001FAC (HeapFree.c)
 *     FreeDataBuffs @ 0x1C0002E30 (FreeDataBuffs.c)
 *     WriteObject @ 0x1C000A8E0 (WriteObject.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     GetObjectTypeName @ 0x1C0062FC4 (GetObjectTypeName.c)
 */

__int64 __fastcall ProcessIncDec(struct _SLIST_ENTRY *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v5; // edi
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  _SLIST_ENTRY *Next; // rcx
  int ObjectTypeName; // eax
  int v14; // r11d

  v5 = a3;
  if ( a3 )
    v7 = 1;
  else
    v7 = *(_DWORD *)(a2 + 16) & 0xF;
  if ( v7 )
  {
    if ( v7 != 1 )
      return v5;
    goto LABEL_10;
  }
  v8 = *(_QWORD *)(a2 + 48);
  ++*(_DWORD *)(a2 + 16);
  if ( *(_WORD *)(v8 + 2) != 1 )
  {
    FreeDataBuffs(v8, 1u);
    v5 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError(a1, 3222536201LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(*(_QWORD *)(a2 + 48) + 2LL));
    PrintDebugMessage(147, v14, ObjectTypeName, 0, 0LL);
LABEL_10:
    Next = a1[26].Next;
    a1[26].Next = (_SLIST_ENTRY *)*((_QWORD *)&Next->Next + 1);
    HeapFree(Next);
    return v5;
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( *(_QWORD *)(a2 + 32) == 117LL )
    v10 = v9 + 1;
  else
    v10 = v9 - 1;
  *(_QWORD *)(v8 + 16) = v10;
  if ( a3 )
    goto LABEL_10;
  v5 = WriteObject(a1, *(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48), a4);
  if ( v5 != 32772 && (_SLIST_ENTRY *)a2 == a1[26].Next )
    goto LABEL_10;
  return v5;
}
