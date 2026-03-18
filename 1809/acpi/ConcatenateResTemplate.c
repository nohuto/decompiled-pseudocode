/*
 * XREFs of ConcatenateResTemplate @ 0x1C00669C0
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x1C00099D0 (ValidateArgTypes.c)
 *     WriteObject @ 0x1C000A8E0 (WriteObject.c)
 *     ValidateTarget @ 0x1C000AF3C (ValidateTarget.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     CheckAndPromoteAliasedObjects @ 0x1C0062CD0 (CheckAndPromoteAliasedObjects.c)
 */

__int64 __fastcall ConcatenateResTemplate(struct _SLIST_ENTRY *a1, __int64 a2)
{
  char v4; // di
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int16 *v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  __int64 v15; // r10
  char v16; // al
  unsigned __int64 v17; // r9
  char v18; // al
  unsigned int v19; // ecx
  __int64 v20; // r9
  _BYTE *v21; // rax
  __int64 v22; // rdx
  __int64 v24; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  v5 = ValidateArgTypes((__int64)a1, *(_QWORD *)(a2 + 80), 0, "BB");
  if ( !v5 )
  {
    v6 = *(_QWORD *)(a2 + 80);
    if ( *(_DWORD *)(v6 + 24) <= 1u || *(_DWORD *)(v6 + 64) <= 1u )
    {
      v5 = -1072431098;
      LogError(-1072431098);
      AcpiDiagTraceAmlError((__int64)a1, -1072431098);
      v11 = 28;
      goto LABEL_19;
    }
    v5 = ValidateTarget((__int64)a1, v6 + 80, 135LL, (__int64)&v24);
    if ( !v5 )
    {
      v8 = *(__int16 **)(a2 + 80);
      if ( v8[41] != 128 )
        CheckAndPromoteAliasedObjects(v8, v7, v24);
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 3;
      v9 = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 64LL) - 2 + *(_DWORD *)(*(_QWORD *)(a2 + 80) + 24LL);
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v9;
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, v9);
      v10 = *(_QWORD *)(a2 + 88);
      if ( !*(_QWORD *)(v10 + 32) )
      {
        v5 = -1073741670;
        LogError(-1073741670);
        AcpiDiagTraceAmlError((__int64)a1, -1073741670);
        v11 = 29;
LABEL_19:
        PrintDebugMessage(v11, 0LL, 0LL, 0LL, 0LL);
        return v5;
      }
      v12 = *(_QWORD *)(a2 + 80);
      v13 = 0LL;
      v14 = 0LL;
      v15 = v12;
      if ( *(_DWORD *)(v12 + 24) != 2 )
      {
        do
        {
          v16 = *(_BYTE *)(v14 + *(_QWORD *)(v12 + 32));
          ++v14;
          *(_BYTE *)(v13 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = v16;
          ++v13;
          v12 = *(_QWORD *)(a2 + 80);
          v15 = v12;
        }
        while ( v14 < (unsigned int)(*(_DWORD *)(v12 + 24) - 2) );
        v10 = *(_QWORD *)(a2 + 88);
      }
      v17 = 0LL;
      if ( *(_DWORD *)(v12 + 64) != 2 )
      {
        do
        {
          v18 = *(_BYTE *)(v17 + *(_QWORD *)(v15 + 72));
          ++v17;
          *(_BYTE *)(v13 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = v18;
          ++v13;
          v15 = *(_QWORD *)(a2 + 80);
        }
        while ( v17 < (unsigned int)(*(_DWORD *)(v15 + 64) - 2) );
        v10 = *(_QWORD *)(a2 + 88);
      }
      v19 = v9 - 1;
      *(_BYTE *)(v13 + *(_QWORD *)(v10 + 32)) = 121;
      v20 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL);
      v21 = (_BYTE *)v20;
      if ( v9 != 1 )
      {
        do
        {
          v4 += *v21++;
          --v19;
        }
        while ( v19 );
      }
      v22 = v24;
      *(_BYTE *)(v20 + v13 + 1) = -v4;
      return (unsigned int)WriteObject(a1, v22, *(_QWORD *)(a2 + 88), v20);
    }
  }
  return v5;
}
