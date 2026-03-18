/*
 * XREFs of ReadField @ 0x1C001F540
 * Callers:
 *     AsyncEvalObject @ 0x1C0002B10 (AsyncEvalObject.c)
 *     ParseTerm @ 0x1C0017FB0 (ParseTerm.c)
 *     ReadObject @ 0x1C001BF34 (ReadObject.c)
 * Callees:
 *     HeapAlloc @ 0x1C0003960 (HeapAlloc.c)
 *     PushAccFieldObj @ 0x1C0020858 (PushAccFieldObj.c)
 *     SupportsOnlyRawAccess @ 0x1C0020A18 (SupportsOnlyRawAccess.c)
 *     IsCompatableDSDTRevision @ 0x1C0020A38 (IsCompatableDSDTRevision.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     GetObjectTypeName @ 0x1C0064F74 (GetObjectTypeName.c)
 *     RawFieldAccess @ 0x1C0067824 (RawFieldAccess.c)
 */

__int64 __fastcall ReadField(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rbp
  char v8; // al
  int v9; // ecx
  char v10; // al
  int v11; // r9d
  __int64 v12; // r10
  __int64 v13; // r8
  unsigned int v15; // edi
  int v17; // ecx
  int ObjectTypeName; // edx
  int v19; // ecx
  unsigned int v20; // r8d
  void *v21; // rax

  v4 = a4;
  v7 = a1;
  if ( (*(_DWORD *)(a3 + 12) & 0xFu) > 4 )
  {
    if ( *(_WORD *)(a2 + 2) == 5 )
    {
      v13 = a2;
      return (unsigned int)RawFieldAccess(a1, 0LL, v13, a4);
    }
    v15 = -1072431087;
    LogError(3222536209LL);
    AcpiDiagTraceAmlError(v7, 3222536209LL);
    ObjectTypeName = *(_DWORD *)(a3 + 12);
    v19 = 162;
    goto LABEL_23;
  }
  v8 = IsCompatableDSDTRevision(a1, a2, a3, a4);
  v9 = *(unsigned __int16 *)(v4 + 2);
  if ( *(_WORD *)(v4 + 2) )
  {
    v17 = v9 - 1;
    if ( !v17 || (unsigned int)(v17 - 1) < 2 )
      goto LABEL_6;
    v15 = -1072431095;
    LogError(3222536201LL);
    AcpiDiagTraceAmlError(v7, 3222536201LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v4 + 2));
    v19 = 163;
LABEL_23:
    PrintDebugMessage(v19, ObjectTypeName, 0, 0, 0LL);
    return v15;
  }
  if ( (*(_DWORD *)(a3 + 12) & 0x10000) == 0 && *(_DWORD *)(a3 + 8) <= 8 * (v8 != 0 ? 8 : 4) )
  {
    *(_WORD *)(v4 + 2) = v9 + 1;
    goto LABEL_6;
  }
  *(_WORD *)(v4 + 2) = 3;
  v20 = (unsigned int)(*(_DWORD *)(a3 + 8) + 7) >> 3;
  *(_DWORD *)(v4 + 24) = v20;
  v21 = (void *)HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1179992648, v20);
  *(_QWORD *)(v4 + 32) = v21;
  if ( !v21 )
  {
    v15 = -1073741670;
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(v7, 3221225626LL);
    ObjectTypeName = *(_DWORD *)(v4 + 24);
    v19 = 161;
    goto LABEL_23;
  }
  memset(v21, 0, *(unsigned int *)(v4 + 24));
LABEL_6:
  v10 = SupportsOnlyRawAccess(a2);
  v13 = a2;
  a1 = v7;
  if ( v10 )
  {
    a4 = v4;
    return (unsigned int)RawFieldAccess(a1, 0LL, v13, a4);
  }
  return (unsigned int)PushAccFieldObj(v7, ReadFieldObj, a2, a3, v12, v11);
}
