/*
 * XREFs of CreateXField @ 0x1C0019A9C
 * Callers:
 *     CreateBitField @ 0x1C001C060 (CreateBitField.c)
 *     CreateDWordField @ 0x1C002ADE0 (CreateDWordField.c)
 *     CreateWordField @ 0x1C002CB80 (CreateWordField.c)
 *     CreateByteField @ 0x1C002F150 (CreateByteField.c)
 *     CreateField @ 0x1C0066CE0 (CreateField.c)
 *     CreateQWordField @ 0x1C0066DA0 (CreateQWordField.c)
 * Callees:
 *     HeapAlloc @ 0x1C0003960 (HeapAlloc.c)
 *     CreateNameSpaceObject @ 0x1C0017B60 (CreateNameSpaceObject.c)
 *     ValidateArgTypes @ 0x1C001A610 (ValidateArgTypes.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall CreateXField(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int NameSpaceObject; // ebx
  __int64 v9; // rbp
  void *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx

  NameSpaceObject = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0LL, "BI");
  if ( !NameSpaceObject )
  {
    NameSpaceObject = CreateNameSpaceObject(
                        *(struct _SLIST_ENTRY **)(a1 + 320),
                        *(unsigned __int8 **)(a3 + 32),
                        *(_QWORD *)(a1 + 80),
                        *(struct _EX_RUNDOWN_REF **)(a1 + 88),
                        (struct _EX_RUNDOWN_REF **)(a2 + 64),
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
        v11 = *(_QWORD *)(a2 + 80);
        v12 = *(_QWORD *)(v9 + 96);
        *a4 = v12;
        *(_QWORD *)v12 = *(_QWORD *)(v11 + 32);
        *(_DWORD *)(v12 + 8) = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 24LL);
      }
      else
      {
        NameSpaceObject = -1073741670;
        LogError(3221225626LL);
        AcpiDiagTraceAmlError(a1, 3221225626LL);
        PrintDebugMessage(38, 0, 0, 0, 0LL);
      }
    }
  }
  return NameSpaceObject;
}
