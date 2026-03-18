/*
 * XREFs of Release @ 0x1C0022840
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C00099D0 (ValidateArgTypes.c)
 *     PushFrame @ 0x1C00227C0 (PushFrame.c)
 *     GetObjectPath @ 0x1C0023478 (GetObjectPath.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     ReleaseASLMutex @ 0x1C002E80C (ReleaseASLMutex.c)
 *     GetObjectTypeName @ 0x1C0062FC4 (GetObjectTypeName.c)
 */

__int64 __fastcall Release(struct _SLIST_ENTRY *a1, _QWORD *a2)
{
  __int64 v4; // rdx
  unsigned int v5; // edi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  char v9; // al
  __int64 v10; // r14
  __int16 v11; // si
  __int64 v12; // r8
  __int64 v13; // rdx
  void *ObjectPath; // rsi
  int ObjectTypeName; // eax
  int v17; // r11d
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF

  v5 = ValidateArgTypes((__int64)a1, a2[10], 0, "O");
  if ( !v5 )
  {
    v8 = *(_QWORD *)(a2[10] + 16LL);
    v9 = gdwfAMLI;
    a2[8] = v8;
    if ( (v9 & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 112));
      v8 = a2[8];
    }
    v10 = *(_QWORD *)(v8 + 96);
    v11 = *(_WORD *)(v8 + 64) & 2;
    if ( *(_WORD *)(v8 + 66) == 9 )
    {
      v5 = PushFrame(a1, 1179403602, 0x38u, (__int64)ParseRelease, &v18);
      if ( v5 )
      {
        LOBYTE(v12) = v11 != 0;
        return (unsigned int)ReleaseASLMutex(a1, v10, v12);
      }
      else
      {
        v13 = v18;
        *(_QWORD *)(v18 + 32) = v10;
        *(_QWORD *)(v13 + 40) = a2[11];
        *(_QWORD *)(v13 + 48) = *(_QWORD *)(a2[8] + 16LL);
        if ( v11 )
          *(_DWORD *)(v13 + 16) = 0x10000;
      }
    }
    else
    {
      v5 = -1072431095;
      LogError(3222536201LL, v4, v6, v7);
      AcpiDiagTraceAmlError(a1, 3222536201LL);
      ObjectPath = (void *)GetObjectPath(a2[8]);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 66LL));
      PrintDebugMessage(173, v17, ObjectTypeName, 0, 0LL);
      if ( ObjectPath )
        ExFreePoolWithTag(ObjectPath, 0);
    }
  }
  return v5;
}
