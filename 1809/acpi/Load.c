/*
 * XREFs of Load @ 0x1C00248D0
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x1C00038B0 (DereferenceObjectEx.c)
 *     ValidateArgTypes @ 0x1C00099D0 (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C000AF3C (ValidateTarget.c)
 *     GetNameSpaceObject @ 0x1C0021288 (GetNameSpaceObject.c)
 *     LoadMemDDB @ 0x1C0024870 (LoadMemDDB.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     AMLIDebugger @ 0x1C0063760 (AMLIDebugger.c)
 *     LoadFieldUnitDDB @ 0x1C00648AC (LoadFieldUnitDDB.c)
 */

__int64 __fastcall Load(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned int NameSpaceObject; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rdi
  __int16 v10; // ax
  unsigned int MemDDB; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // [rsp+58h] [rbp+10h] BYREF
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF

  v17 = 0LL;
  v4 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "Z");
  if ( v4 )
    return v4;
  v4 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 40LL, 133LL, (__int64)&v18);
  if ( v4 )
    return v4;
  NameSpaceObject = GetNameSpaceObject(
                      *(_BYTE **)(*(_QWORD *)(a2 + 80) + 32LL),
                      *(_QWORD *)(a1 + 80),
                      (__int64 *)&v17,
                      0x80000000);
  v9 = v17;
  v4 = NameSpaceObject;
  if ( NameSpaceObject == -1073741772 )
  {
    LogError(3221225524LL, v6, v7, v8);
    AcpiDiagTraceAmlError(a1, 3221225524LL);
    PrintDebugMessage(78, *(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL), 0, 0, 0LL);
  }
  else if ( !NameSpaceObject )
  {
    v10 = *(_WORD *)(v17 + 66);
    if ( v10 == 10 && (v6 = *(_QWORD *)(v17 + 96), *(_BYTE *)(v6 + 12) == (_BYTE)v4) )
    {
      MemDDB = LoadMemDDB(a1, *(_QWORD *)v6, v18);
    }
    else
    {
      if ( v10 != 5 )
      {
        v4 = -1072431095;
        LogError(3222536201LL, v6, v7, v8);
        AcpiDiagTraceAmlError(a1, 3222536201LL);
        PrintDebugMessage(79, *(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL), 0, 0, 0LL);
LABEL_9:
        if ( (gdwfAMLIInit & 2) != 0 )
        {
          PrintDebugMessage(16, 0, 0, 0, 0LL);
          AMLIDebugger(v14, v13, v15, v16);
        }
        goto LABEL_11;
      }
      MemDDB = LoadFieldUnitDDB(a1, v17 + 64, v18);
    }
    v4 = MemDDB;
    goto LABEL_9;
  }
LABEL_11:
  if ( v9 )
    DereferenceObjectEx(v9);
  return v4;
}
