/*
 * XREFs of ObjTypeSizeOf @ 0x1C0067A10
 * Callers:
 *     <none>
 * Callees:
 *     GetBaseData @ 0x1C000B2B8 (GetBaseData.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     GetObjectTypeName @ 0x1C0062FC4 (GetObjectTypeName.c)
 */

__int64 __fastcall ObjTypeSizeOf(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 BaseData; // rbx
  __int64 v5; // r8
  unsigned __int16 v6; // dx
  __int64 v7; // rcx
  const void *ObjectTypeName; // rax

  v3 = 0;
  BaseData = GetBaseData(*(_QWORD *)(a2 + 80));
  *(_WORD *)(*(_QWORD *)(v5 + 88) + 2LL) = 1;
  v6 = *(_WORD *)(BaseData + 2);
  if ( *(_DWORD *)(*(_QWORD *)(v5 + 56) + 8LL) == 142 )
  {
    v7 = v6;
LABEL_9:
    *(_QWORD *)(*(_QWORD *)(v5 + 88) + 16LL) = v7;
    return v3;
  }
  switch ( v6 )
  {
    case 2u:
      *(_QWORD *)(*(_QWORD *)(v5 + 88) + 16LL) = (unsigned int)(*(_DWORD *)(BaseData + 24) - 1);
      return v3;
    case 3u:
      v7 = *(unsigned int *)(BaseData + 24);
      goto LABEL_9;
    case 4u:
      v7 = **(unsigned int **)(BaseData + 32);
      goto LABEL_9;
  }
  LogError(-1072431096);
  AcpiDiagTraceAmlError(a1, -1072431096);
  ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(BaseData + 2));
  PrintDebugMessage(176, ObjectTypeName, 0LL, 0LL, 0LL);
  return (unsigned int)-1072431096;
}
