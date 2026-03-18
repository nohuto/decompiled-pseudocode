/*
 * XREFs of Concat @ 0x1C00666C0
 * Callers:
 *     <none>
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C0002280 (IsCompatableDSDTRevision.c)
 *     FreeDataBuffs @ 0x1C0002E30 (FreeDataBuffs.c)
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x1C00099D0 (ValidateArgTypes.c)
 *     WriteObject @ 0x1C000A8E0 (WriteObject.c)
 *     ValidateTarget @ 0x1C000AF3C (ValidateTarget.c)
 *     ConvertToInteger @ 0x1C000BE4C (ConvertToInteger.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     CheckAndPromoteAliasedObjects @ 0x1C0062CD0 (CheckAndPromoteAliasedObjects.c)
 *     GetObjectTypeName @ 0x1C0062FC4 (GetObjectTypeName.c)
 *     ConvertToBuffer @ 0x1C0068CD8 (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C0068EAC (ConvertToString.c)
 */

__int64 __fastcall Concat(struct _SLIST_ENTRY *a1, __int64 a2)
{
  char v4; // r12
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // r15
  __int16 v9; // ax
  _BYTE *v10; // rbp
  int v11; // eax
  __int16 v12; // cx
  __int64 v13; // r11
  const void *ObjectTypeName; // rbx
  const void *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // rax
  __int16 v21; // cx
  bool v22; // al
  __int64 v23; // r9
  _QWORD *v24; // rdx
  bool v25; // zf
  size_t v26; // r8
  const void *v27; // rdx
  void *v28; // rcx
  void *v29; // rcx
  _BYTE v31[48]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v32; // [rsp+98h] [rbp+10h] BYREF

  v4 = 0;
  memset(v31, 0, 0x28uLL);
  v5 = ValidateArgTypes((__int64)a1, *(_QWORD *)(a2 + 80), 0, "DD");
  if ( v5 )
    return v5;
  v5 = ValidateTarget((__int64)a1, *(_QWORD *)(a2 + 80) + 80LL, 135LL, (__int64)&v32);
  if ( v5 )
    return v5;
  v7 = *(_QWORD *)(a2 + 80);
  v8 = v32;
  if ( *(_WORD *)(v7 + 82) != 128 )
  {
    CheckAndPromoteAliasedObjects(*(__int16 **)(a2 + 80), v6, v32);
    v7 = *(_QWORD *)(a2 + 80);
  }
  v9 = *(_WORD *)(v7 + 2);
  v10 = (_BYTE *)(v7 + 40);
  if ( v9 != *(_WORD *)(v7 + 42) )
  {
    switch ( v9 )
    {
      case 1:
        v11 = ConvertToInteger(v7 + 40, (__int64)v31);
        break;
      case 2:
        v11 = ConvertToString(v7 + 40, 0LL, v31);
        break;
      case 3:
        v11 = ConvertToBuffer(v7 + 40, v31);
        break;
      default:
LABEL_13:
        v10 = v31;
        v4 = 1;
        goto LABEL_14;
    }
    v5 = v11;
    if ( v11 >= 0 )
      goto LABEL_13;
  }
LABEL_14:
  v12 = *(_WORD *)(v7 + 2);
  if ( v12 == *((_WORD *)v10 + 1) )
  {
    v16 = *(_QWORD *)(a2 + 88);
    if ( v12 == 1 )
    {
      *(_WORD *)(v16 + 2) = 3;
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = IsCompatableDSDTRevision() ? 16 : 8;
    }
    else
    {
      *(_WORD *)(v16 + 2) = v12;
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = *((_DWORD *)v10 + 6) + *(_DWORD *)(v7 + 24);
      v17 = *(_QWORD *)(a2 + 88);
      if ( *(_WORD *)(v17 + 2) == 2 )
        --*(_DWORD *)(v17 + 24);
    }
    v18 = *(_QWORD *)(a2 + 88);
    v19 = 1381258056;
    if ( *(_WORD *)(v18 + 2) != 2 )
      v19 = 1179992648;
    v20 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, v19, *(_DWORD *)(v18 + 24));
    *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v20;
    if ( v20 )
    {
      v21 = *(_WORD *)(v7 + 2);
      if ( v21 == 1 )
      {
        v22 = IsCompatableDSDTRevision();
        v24 = *(_QWORD **)(*(_QWORD *)(a2 + 88) + 32LL);
        if ( v22 )
        {
          *v24 = *(_QWORD *)(v7 + 16);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + 8LL) = *((_QWORD *)v10 + 2);
        }
        else
        {
          *(_DWORD *)v24 = *(_DWORD *)(v7 + 16);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + 4LL) = *((_DWORD *)v10 + 4);
        }
      }
      else
      {
        v25 = v21 == 2;
        v26 = *(unsigned int *)(v7 + 24);
        v27 = *(const void **)(v7 + 32);
        v28 = *(void **)(*(_QWORD *)(a2 + 88) + 32LL);
        if ( v25 )
        {
          memmove(v28, v27, (unsigned int)(v26 - 1));
          v29 = (void *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) - 1LL + *(unsigned int *)(v7 + 24));
        }
        else
        {
          memmove(v28, v27, v26);
          v29 = (void *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + *(unsigned int *)(v7 + 24));
        }
        memmove(v29, *((const void **)v10 + 4), *((unsigned int *)v10 + 6));
      }
      if ( !v5 )
        v5 = WriteObject(a1, v8, *(_QWORD *)(a2 + 88), v23);
    }
    else
    {
      v5 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError((__int64)a1, -1073741670);
      PrintDebugMessage(27, 0LL, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    v5 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError((__int64)a1, -1072431095);
    ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(*(_QWORD *)(a2 + 80) + 42LL));
    v15 = (const void *)GetObjectTypeName(*(unsigned __int16 *)(v13 + 2));
    PrintDebugMessage(26, v15, ObjectTypeName, 0LL, 0LL);
  }
  if ( v4 )
    FreeDataBuffs((__int64)v31, 1u);
  return v5;
}
