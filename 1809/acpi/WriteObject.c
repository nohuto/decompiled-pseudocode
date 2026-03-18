/*
 * XREFs of WriteObject @ 0x1C000A8E0
 * Callers:
 *     Store @ 0x1C000A740 (Store.c)
 *     Index @ 0x1C000ADE0 (Index.c)
 *     ToInteger @ 0x1C000BDD0 (ToInteger.c)
 *     ProcessIncDec @ 0x1C002A1D0 (ProcessIncDec.c)
 *     CondRefOf @ 0x1C002B500 (CondRefOf.c)
 *     ExprOp1_64 @ 0x1C002ED8C (ExprOp1_64.c)
 *     Concat @ 0x1C00666C0 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C00669C0 (ConcatenateResTemplate.c)
 *     CopyObject @ 0x1C0066BC0 (CopyObject.c)
 *     ExprOp1_32 @ 0x1C0066D74 (ExprOp1_32.c)
 *     ExprOp2_32 @ 0x1C0066EB0 (ExprOp2_32.c)
 *     MidString @ 0x1C00677B0 (MidString.c)
 *     ProcessDivide @ 0x1C0067AF0 (ProcessDivide.c)
 *     ToBuffer @ 0x1C0068220 (ToBuffer.c)
 *     ToDecStr @ 0x1C00682A0 (ToDecStr.c)
 *     ToHexStr @ 0x1C0068670 (ToHexStr.c)
 * Callees:
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     DupObjData @ 0x1C000A090 (DupObjData.c)
 *     CopyObjBuffer @ 0x1C000AA64 (CopyObjBuffer.c)
 *     WriteField @ 0x1C00225A0 (WriteField.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     GetObjectTypeName @ 0x1C0062FC4 (GetObjectTypeName.c)
 *     DumpObject @ 0x1C0065214 (DumpObject.c)
 */

__int64 __fastcall WriteObject(struct _SLIST_ENTRY *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v7; // ax
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 result; // rax
  bool v13; // di
  size_t v14; // rdx
  int v15; // edx
  int ObjectTypeName; // eax
  unsigned int v17; // [rsp+48h] [rbp+10h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      v7 = *(_WORD *)(a2 + 2);
      if ( v7 != 128 )
        break;
      a2 = *(_QWORD *)(a2 + 16) + 64LL;
    }
    if ( v7 != 129 )
      break;
    a2 = *(_QWORD *)(a2 + 16);
  }
  if ( !v7 )
    return DupObjData((struct _SLIST_ENTRY *)gpheapGlobal, a2, a3, a4);
  switch ( v7 )
  {
    case 1:
      v13 = 0;
      v17 = 0;
      if ( ghGetAcpiTableVersion )
      {
        ghGetAcpiTableVersion(1413763908LL, &v17);
        v13 = v17 >= 2;
      }
      v14 = 4LL;
      if ( v13 )
        v14 = 8LL;
      result = CopyObjBuffer((void *)(a2 + 16), v14);
      break;
    case 2:
      v15 = *(_DWORD *)(a2 + 24);
      if ( v15 )
        result = CopyObjBuffer(*(void **)(a2 + 32), (unsigned int)(v15 - 1));
      else
        result = 3221225485LL;
      break;
    case 3:
      result = CopyObjBuffer(*(void **)(a2 + 32), *(unsigned int *)(a2 + 24));
      break;
    case 5:
      v8 = HeapAlloc(a1 + 30, 1297237576, 0x30u);
      v11 = v8;
      if ( v8 )
      {
        *(_QWORD *)(v8 + 8) = a1[26].Next;
        a1[26].Next = (_SLIST_ENTRY *)v8;
        *(_DWORD *)v8 = 1430668097;
        *(_QWORD *)(v8 + 24) = AccFieldUnit;
        result = 0LL;
        *(_QWORD *)(v11 + 32) = a2;
        *(_QWORD *)(v11 + 40) = a3;
      }
      else
      {
        LogError(3222536194LL, 0LL, v9, v10);
        AcpiDiagTraceAmlError(a1, 3222536194LL);
        PrintDebugMessage(153, 0, 0, 0, 0LL);
        result = 3222536194LL;
      }
      break;
    case 14:
      result = WriteField(a1, a2, *(_QWORD *)(a2 + 32) + 12LL, a3);
      break;
    case 16:
      if ( (gDebugger & 0x20000) != 0 )
        DumpObject(a3, 0x1C0000000uLL, 0LL);
      result = 0LL;
      break;
    default:
      LogError(3222536201LL, 0x1C0000000uLL, a3, a4);
      AcpiDiagTraceAmlError(a1, 3222536201LL);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a2 + 2));
      PrintDebugMessage(215, ObjectTypeName, 0, 0, 0LL);
      result = 3222536201LL;
      break;
  }
  return result;
}
