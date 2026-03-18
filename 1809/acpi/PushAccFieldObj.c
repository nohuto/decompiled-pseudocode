/*
 * XREFs of PushAccFieldObj @ 0x1C0024724
 * Callers:
 *     ReadFieldObj @ 0x1C00013A0 (ReadFieldObj.c)
 *     AccFieldUnit @ 0x1C0009B30 (AccFieldUnit.c)
 *     PreserveWriteObj @ 0x1C0023D40 (PreserveWriteObj.c)
 *     ReadField @ 0x1C0023DF0 (ReadField.c)
 *     WriteFieldObj @ 0x1C0023F50 (WriteFieldObj.c)
 * Callees:
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 */

__int64 __fastcall PushAccFieldObj(
        struct _SLIST_ENTRY *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  unsigned int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // r8d

  v6 = 0;
  v11 = 128;
  if ( *(_DWORD *)(a4 + 20) )
    v11 = *(_DWORD *)(a4 + 28) + 128;
  v12 = HeapAlloc(a1 + 30, 1297237576, v11);
  if ( v12 )
  {
    *(_QWORD *)(v12 + 8) = a1[26].Next;
    a1[26].Next = (_SLIST_ENTRY *)v12;
    *(_DWORD *)v12 = 1330004801;
    *(_QWORD *)(v12 + 24) = a2;
    *(_QWORD *)(v12 + 32) = a3;
    *(_QWORD *)(v12 + 40) = a5;
    *(_QWORD *)(v12 + 48) = a5 + a6;
    v15 = 1 << ((*(_BYTE *)(a4 + 12) & 0xF) - 1);
    if ( (*(_DWORD *)(a4 + 12) & 0xFu) - 1 > 3 )
      v15 = 1;
    *(_DWORD *)(v12 + 56) = v15;
    *(_DWORD *)(v12 + 60) = (8 * v15 + *(_DWORD *)(a4 + 8) + *(_DWORD *)(a4 + 4) - 1) / (unsigned int)(8 * v15);
    *(_QWORD *)(v12 + 64) = ((1LL << (8 * *(_BYTE *)(v12 + 56))) & -(__int64)((unsigned int)(8 * *(_DWORD *)(v12 + 56)) < 0x40))
                          - 1;
    *(_DWORD *)(v12 + 72) = 8 * *(_DWORD *)(v12 + 56) - *(_DWORD *)(a4 + 4);
    *(_DWORD *)(v12 + 76) = *(_DWORD *)(a4 + 4);
    memmove((void *)(v12 + 96), (const void *)a4, (unsigned int)(*(_DWORD *)(a4 + 28) + 32));
  }
  else
  {
    LogError(3222536194LL, v13, v14, 0LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
    return (unsigned int)-1072431102;
  }
  return v6;
}
