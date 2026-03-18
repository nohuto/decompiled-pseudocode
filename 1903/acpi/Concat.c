/*
 * XREFs of Concat @ 0x1C0068720
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C0003960 (HeapAlloc.c)
 *     FreeDataBuffs @ 0x1C0013E30 (FreeDataBuffs.c)
 *     ValidateArgTypes @ 0x1C001A610 (ValidateArgTypes.c)
 *     WriteObject @ 0x1C001B6E0 (WriteObject.c)
 *     ValidateTarget @ 0x1C001BBA0 (ValidateTarget.c)
 *     IsCompatableDSDTRevision @ 0x1C0020A38 (IsCompatableDSDTRevision.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     ConvertToInteger @ 0x1C002AB2C (ConvertToInteger.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     CheckAndPromoteAliasedObjects @ 0x1C0064C5C (CheckAndPromoteAliasedObjects.c)
 *     GetObjectTypeName @ 0x1C0064F74 (GetObjectTypeName.c)
 *     ConvertToBuffer @ 0x1C006AD38 (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C006AF00 (ConvertToString.c)
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
  _QWORD *v23; // rdx
  bool v24; // zf
  size_t v25; // r8
  const void *v26; // rdx
  void *v27; // rcx
  void *v28; // rcx
  _BYTE v30[48]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v31; // [rsp+98h] [rbp+10h] BYREF

  v4 = 0;
  memset(v30, 0, 0x28uLL);
  v5 = ValidateArgTypes((__int64)a1, *(_QWORD *)(a2 + 80), 0, "DD");
  if ( v5 )
    return v5;
  v5 = ValidateTarget((__int64)a1, *(_QWORD *)(a2 + 80) + 80LL, 0x87u, (__int64)&v31);
  if ( v5 )
    return v5;
  v7 = *(_QWORD *)(a2 + 80);
  v8 = v31;
  if ( *(_WORD *)(v7 + 82) != 128 )
  {
    CheckAndPromoteAliasedObjects(*(__int16 **)(a2 + 80), v6, v31);
    v7 = *(_QWORD *)(a2 + 80);
  }
  v9 = *(_WORD *)(v7 + 2);
  v10 = (_BYTE *)(v7 + 40);
  if ( v9 != *(_WORD *)(v7 + 42) )
  {
    switch ( v9 )
    {
      case 1:
        v11 = ConvertToInteger(v7 + 40, (__int64)v30);
        break;
      case 2:
        v11 = ConvertToString(v7 + 40, 0LL, v30);
        break;
      case 3:
        v11 = ConvertToBuffer(v7 + 40, v30);
        break;
      default:
LABEL_13:
        v10 = v30;
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
        v23 = *(_QWORD **)(*(_QWORD *)(a2 + 88) + 32LL);
        if ( v22 )
        {
          *v23 = *(_QWORD *)(v7 + 16);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + 8LL) = *((_QWORD *)v10 + 2);
        }
        else
        {
          *(_DWORD *)v23 = *(_DWORD *)(v7 + 16);
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + 4LL) = *((_DWORD *)v10 + 4);
        }
      }
      else
      {
        v24 = v21 == 2;
        v25 = *(unsigned int *)(v7 + 24);
        v26 = *(const void **)(v7 + 32);
        v27 = *(void **)(*(_QWORD *)(a2 + 88) + 32LL);
        if ( v24 )
        {
          memmove(v27, v26, (unsigned int)(v25 - 1));
          v28 = (void *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) - 1LL + *(unsigned int *)(v7 + 24));
        }
        else
        {
          memmove(v27, v26, v25);
          v28 = (void *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + *(unsigned int *)(v7 + 24));
        }
        memmove(v28, *((const void **)v10 + 4), *((unsigned int *)v10 + 6));
      }
      if ( !v5 )
        v5 = WriteObject(a1, v8, *(_QWORD *)(a2 + 88));
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
    FreeDataBuffs((__int64)v30, 1u);
  return v5;
}
