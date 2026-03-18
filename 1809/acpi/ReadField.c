/*
 * XREFs of ReadField @ 0x1C0023DF0
 * Callers:
 *     AsyncEvalObject @ 0x1C0005370 (AsyncEvalObject.c)
 *     ParseTerm @ 0x1C0006EE0 (ParseTerm.c)
 *     ReadObject @ 0x1C000B1A0 (ReadObject.c)
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C0002280 (IsCompatableDSDTRevision.c)
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     PushAccFieldObj @ 0x1C0024724 (PushAccFieldObj.c)
 *     SupportsOnlyRawAccess @ 0x1C0024850 (SupportsOnlyRawAccess.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     GetObjectTypeName @ 0x1C0062FC4 (GetObjectTypeName.c)
 *     RawFieldAccess @ 0x1C0065834 (RawFieldAccess.c)
 */

__int64 __fastcall ReadField(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rbp
  bool v8; // al
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // ecx
  __int64 v12; // r9
  char v13; // al
  int v14; // r9d
  __int64 v15; // r10
  __int64 v16; // r8
  unsigned int v18; // edi
  int v20; // ecx
  int ObjectTypeName; // edx
  int v22; // ecx
  unsigned int v23; // r8d
  void *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9

  v4 = a4;
  v7 = a1;
  if ( (*(_DWORD *)(a3 + 12) & 0xFu) > 4 )
  {
    if ( *(_WORD *)(a2 + 2) == 5 )
    {
      v16 = a2;
      return (unsigned int)RawFieldAccess(a1, 0LL, v16, a4);
    }
    v18 = -1072431087;
    LogError(3222536209LL, a2, a3, a4);
    AcpiDiagTraceAmlError(v7, 3222536209LL);
    ObjectTypeName = *(_DWORD *)(a3 + 12);
    v22 = 162;
    goto LABEL_23;
  }
  v8 = IsCompatableDSDTRevision();
  v11 = *(unsigned __int16 *)(v4 + 2);
  v12 = v8 ? 8 : 4;
  if ( *(_WORD *)(v4 + 2) )
  {
    v20 = v11 - 1;
    if ( !v20 || (unsigned int)(v20 - 1) < 2 )
      goto LABEL_6;
    v18 = -1072431095;
    LogError(3222536201LL, v9, v10, v12);
    AcpiDiagTraceAmlError(v7, 3222536201LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v4 + 2));
    v22 = 163;
LABEL_23:
    PrintDebugMessage(v22, ObjectTypeName, 0, 0, 0LL);
    return v18;
  }
  if ( (*(_DWORD *)(a3 + 12) & 0x10000) == 0 && *(_DWORD *)(a3 + 8) <= (unsigned int)(8 * v12) )
  {
    *(_WORD *)(v4 + 2) = v11 + 1;
    goto LABEL_6;
  }
  *(_WORD *)(v4 + 2) = 3;
  v23 = (unsigned int)(*(_DWORD *)(a3 + 8) + 7) >> 3;
  *(_DWORD *)(v4 + 24) = v23;
  v24 = (void *)HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1179992648, v23);
  *(_QWORD *)(v4 + 32) = v24;
  if ( !v24 )
  {
    v18 = -1073741670;
    LogError(3221225626LL, v25, v26, v27);
    AcpiDiagTraceAmlError(v7, 3221225626LL);
    ObjectTypeName = *(_DWORD *)(v4 + 24);
    v22 = 161;
    goto LABEL_23;
  }
  memset(v24, 0, *(unsigned int *)(v4 + 24));
LABEL_6:
  v13 = SupportsOnlyRawAccess(a2);
  v16 = a2;
  a1 = v7;
  if ( v13 )
  {
    a4 = v4;
    return (unsigned int)RawFieldAccess(a1, 0LL, v16, a4);
  }
  return (unsigned int)PushAccFieldObj(v7, ReadFieldObj, a2, a3, v15, v14);
}
