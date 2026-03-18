/*
 * XREFs of GetFieldUnitRegionObj @ 0x1C0024410
 * Callers:
 *     ReadFieldObj @ 0x1C00013A0 (ReadFieldObj.c)
 *     WriteFieldObj @ 0x1C0023F50 (WriteFieldObj.c)
 *     GetFieldUnitRegionObj @ 0x1C0024410 (GetFieldUnitRegionObj.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C005A890 (InternalRawAccessOpRegionHandler.c)
 * Callees:
 *     GetObjectPath @ 0x1C0023478 (GetObjectPath.c)
 *     GetFieldUnitRegionObj @ 0x1C0024410 (GetFieldUnitRegionObj.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 */

__int64 __fastcall GetFieldUnitRegionObj(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  int FieldUnitRegionObj; // esi
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // ecx
  _QWORD *ObjectPath; // rax
  void *v11; // rdx
  void *v12; // rdi

  FieldUnitRegionObj = 0;
  v6 = *a1;
  v7 = *(unsigned __int16 *)(*a1 + 66) - 130;
  if ( v7 && (v8 = v7 - 1) != 0 )
  {
    if ( v8 == 1 )
    {
      FieldUnitRegionObj = GetFieldUnitRegionObj(
                             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 96) + 8LL) + 96LL),
                             a2,
                             a3,
                             a4);
    }
    else
    {
      LogError(3222536195LL, v6, a3, a4);
      AcpiDiagTraceAmlError(0LL, 3222536195LL);
      PrintDebugMessage(56, *(unsigned __int16 *)(*a2 + 66), 0, 0, 0LL);
      FieldUnitRegionObj = -1072431101;
    }
  }
  else
  {
    *a2 = **(_QWORD **)(v6 + 96);
  }
  if ( *a2 && *(_WORD *)(*a2 + 66) != 10 )
  {
    LogError(3222536195LL, v6, a3, a4);
    AcpiDiagTraceAmlError(0LL, 3222536195LL);
    ObjectPath = GetObjectPath(*a2);
    v11 = &unk_1C006E28A;
    v12 = ObjectPath;
    if ( ObjectPath )
      LODWORD(v11) = (_DWORD)ObjectPath;
    PrintDebugMessage(55, (_DWORD)v11, *(unsigned __int16 *)(*a2 + 66), 0, 0LL);
    FieldUnitRegionObj = -1072431101;
    if ( !v12 )
      goto LABEL_18;
    ExFreePoolWithTag(v12, 0);
  }
  if ( FieldUnitRegionObj < 0 || !*a2 )
  {
LABEL_18:
    *a2 = 0LL;
    return (unsigned int)FieldUnitRegionObj;
  }
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(*a2 + 112));
  return (unsigned int)FieldUnitRegionObj;
}
