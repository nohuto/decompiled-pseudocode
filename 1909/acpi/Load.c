/*
 * XREFs of Load @ 0x1C001E7B0
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x1C0013B20 (DereferenceObjectEx.c)
 *     ValidateArgTypes @ 0x1C001A610 (ValidateArgTypes.c)
 *     GetNameSpaceObject @ 0x1C001AD04 (GetNameSpaceObject.c)
 *     ValidateTarget @ 0x1C001BBA0 (ValidateTarget.c)
 *     LoadMemDDB @ 0x1C001E898 (LoadMemDDB.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     AMLIDebugger @ 0x1C00657A8 (AMLIDebugger.c)
 *     LoadFieldUnitDDB @ 0x1C006688C (LoadFieldUnitDDB.c)
 */

__int64 __fastcall Load(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned int NameSpaceObject; // eax
  unsigned __int64 v6; // rdi
  __int16 v7; // ax
  __int64 v8; // rdx
  unsigned int MemDDB; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // [rsp+58h] [rbp+10h] BYREF
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  v15 = 0LL;
  v4 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "Z");
  if ( v4 )
    return v4;
  v4 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 40LL, 0x85u, (__int64)&v16);
  if ( v4 )
    return v4;
  NameSpaceObject = GetNameSpaceObject(
                      *(_BYTE **)(*(_QWORD *)(a2 + 80) + 32LL),
                      *(_QWORD *)(a1 + 80),
                      (__int64 *)&v15,
                      0x80000000);
  v6 = v15;
  v4 = NameSpaceObject;
  if ( NameSpaceObject == -1073741772 )
  {
    LogError(3221225524LL);
    AcpiDiagTraceAmlError(a1, 3221225524LL);
    PrintDebugMessage(78, *(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL), 0, 0, 0LL);
  }
  else if ( !NameSpaceObject )
  {
    v7 = *(_WORD *)(v15 + 66);
    if ( v7 == 10 && (v8 = *(_QWORD *)(v15 + 96), *(_BYTE *)(v8 + 12) == (_BYTE)v4) )
    {
      MemDDB = LoadMemDDB(a1, *(_QWORD *)v8, v16);
    }
    else
    {
      if ( v7 != 5 )
      {
        v4 = -1072431095;
        LogError(3222536201LL);
        AcpiDiagTraceAmlError(a1, 3222536201LL);
        PrintDebugMessage(79, *(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL), 0, 0, 0LL);
LABEL_9:
        if ( (gdwfAMLIInit & 2) != 0 )
        {
          PrintDebugMessage(16, 0, 0, 0, 0LL);
          AMLIDebugger(v12, v11, v13, v14);
        }
        goto LABEL_11;
      }
      MemDDB = LoadFieldUnitDDB(a1, v15 + 64, v16);
    }
    v4 = MemDDB;
    goto LABEL_9;
  }
LABEL_11:
  if ( v6 )
    DereferenceObjectEx(v6);
  return v4;
}
