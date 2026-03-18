/*
 * XREFs of CreateXField @ 0x1C0028790
 * Callers:
 *     CreateByteField @ 0x1C0028640 (CreateByteField.c)
 *     CreateWordField @ 0x1C0028690 (CreateWordField.c)
 *     CreateDWordField @ 0x1C00286E0 (CreateDWordField.c)
 *     CreateBitField @ 0x1C0028730 (CreateBitField.c)
 *     CreateField @ 0x1C0064CF0 (CreateField.c)
 *     CreateQWordField @ 0x1C0064DB0 (CreateQWordField.c)
 * Callees:
 *     CreateNameSpaceObject @ 0x1C0006190 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x1C00099D0 (ValidateArgTypes.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall CreateXField(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int NameSpaceObject; // ebx
  __int64 v9; // rbp
  void *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx

  NameSpaceObject = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "BI");
  if ( !NameSpaceObject )
  {
    NameSpaceObject = CreateNameSpaceObject(
                        *(_QWORD *)(a1 + 320),
                        *(unsigned __int8 **)(a3 + 32),
                        *(_QWORD *)(a1 + 80),
                        *(struct _EX_RUNDOWN_REF **)(a1 + 88),
                        (_QWORD *)(a2 + 64),
                        0);
    if ( !NameSpaceObject )
    {
      v9 = *(_QWORD *)(a2 + 64);
      *(_WORD *)(v9 + 66) = 14;
      *(_DWORD *)(v9 + 88) = 48;
      v10 = (void *)HeapAlloc(*(struct _SLIST_ENTRY **)(a1 + 320), 1145455176, 0x30u);
      *(_QWORD *)(v9 + 96) = v10;
      if ( v10 )
      {
        memset(v10, 0, *(unsigned int *)(v9 + 88));
        v14 = *(_QWORD *)(a2 + 80);
        v15 = *(_QWORD *)(v9 + 96);
        *a4 = v15;
        *(_QWORD *)v15 = *(_QWORD *)(v14 + 32);
        *(_DWORD *)(v15 + 8) = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 24LL);
      }
      else
      {
        NameSpaceObject = -1073741670;
        LogError(3221225626LL, v11, v12, v13);
        AcpiDiagTraceAmlError(a1, 3221225626LL);
        PrintDebugMessage(38, 0, 0, 0, 0LL);
      }
    }
  }
  return NameSpaceObject;
}
