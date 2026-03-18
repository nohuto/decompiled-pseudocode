/*
 * XREFs of WriteField @ 0x1C001C620
 * Callers:
 *     ExprOp2_64 @ 0x1C0019E50 (ExprOp2_64.c)
 *     WriteObject @ 0x1C001B6E0 (WriteObject.c)
 *     AccFieldUnit @ 0x1C001C0C0 (AccFieldUnit.c)
 * Callees:
 *     HeapAlloc @ 0x1C0003960 (HeapAlloc.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     GetObjectTypeName @ 0x1C0064F74 (GetObjectTypeName.c)
 *     RawFieldAccess @ 0x1C0067824 (RawFieldAccess.c)
 */

__int64 __fastcall WriteField(struct _SLIST_ENTRY *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  int v9; // edx
  unsigned int v10; // esi
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 result; // rax
  int v17; // edx
  int ObjectTypeName; // eax

  v5 = (unsigned int)(*(_DWORD *)(a3 + 8) + 7) >> 3;
  if ( (*(_DWORD *)(a3 + 12) & 0xFu) > 4 )
  {
    if ( *(_WORD *)(a2 + 2) == 5 )
    {
      return RawFieldAccess(a1, 1LL, a2, a4);
    }
    else
    {
      LogError(3222536209LL);
      AcpiDiagTraceAmlError(a1, 3222536209LL);
      PrintDebugMessage(213, *(_DWORD *)(a3 + 12), 0, 0, 0LL);
      return 3222536209LL;
    }
  }
  else
  {
    v9 = *(unsigned __int16 *)(a4 + 2);
    if ( v9 == 1 )
    {
      v10 = 8;
      v11 = a4 + 16;
      if ( v5 < 8 )
        v10 = (unsigned int)(*(_DWORD *)(a3 + 8) + 7) >> 3;
    }
    else
    {
      v17 = v9 - 2;
      if ( v17 )
      {
        if ( v17 != 1 )
        {
          LogError(3222536201LL);
          AcpiDiagTraceAmlError(a1, 3222536201LL);
          ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a4 + 2));
          PrintDebugMessage(214, ObjectTypeName, 0, 0, 0LL);
          return 3222536201LL;
        }
        v10 = *(_DWORD *)(a4 + 24);
        v11 = *(_QWORD *)(a4 + 32);
      }
      else
      {
        v11 = *(_QWORD *)(a4 + 32);
        v10 = *(_DWORD *)(a4 + 24) - 1;
      }
    }
    if ( *(_WORD *)(a2 + 2) != 5 )
      goto LABEL_10;
    v12 = **(_QWORD **)(a2 + 32);
    if ( *(_WORD *)(v12 + 66) != 131 )
      goto LABEL_10;
    v13 = gpRSAccessHead;
    if ( !gpRSAccessHead )
      goto LABEL_10;
    while ( *(_DWORD *)(v13 + 8) != *(unsigned __int8 *)(*(_QWORD *)(**(_QWORD **)(v12 + 96) + 96LL) + 12LL) )
    {
      v13 = *(_QWORD *)v13;
      if ( !v13 )
        goto LABEL_10;
    }
    if ( v13 && *(_QWORD *)(v13 + 32) && !*(_QWORD *)(v13 + 16) )
    {
      return RawFieldAccess(a1, 1LL, a2, a4);
    }
    else
    {
LABEL_10:
      v14 = HeapAlloc(a1 + 30, 1297237576, 0x40u);
      v15 = v14;
      if ( v14 )
      {
        *(_QWORD *)(v14 + 8) = a1[26].Next;
        a1[26].Next = (_SLIST_ENTRY *)v14;
        *(_QWORD *)(v14 + 24) = WriteFieldLoop;
        result = 0LL;
        *(_DWORD *)v15 = 1279677015;
        *(_QWORD *)(v15 + 32) = a2;
        *(_QWORD *)(v15 + 40) = a3;
        *(_QWORD *)(v15 + 48) = v11;
        *(_DWORD *)(v15 + 56) = v10;
        *(_DWORD *)(v15 + 60) = v5;
      }
      else
      {
        LogError(3222536194LL);
        AcpiDiagTraceAmlError(a1, 3222536194LL);
        PrintDebugMessage(153, 0, 0, 0, 0LL);
        return 3222536194LL;
      }
    }
  }
  return result;
}
