/*
 * XREFs of IfElse @ 0x1C00096F0
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x1C00099D0 (ValidateArgTypes.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 */

__int64 __fastcall IfElse(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _BYTE **v7; // r8
  _BYTE *v8; // rcx
  unsigned __int8 *v9; // rax
  unsigned int v10; // r10d
  unsigned __int8 *v11; // r14
  unsigned int v12; // r9d
  unsigned __int8 v13; // r11
  unsigned __int8 *v14; // rdx
  unsigned __int8 v15; // cl
  int v16; // eax
  _BYTE *v17; // rbp
  __int64 v18; // rdi
  __int64 v19; // r15
  unsigned int v20; // esi
  __int64 v21; // r12
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rdx
  char v27; // al
  _BYTE *v28; // rdx
  unsigned int v29; // r10d
  unsigned int v30; // r9d
  unsigned __int8 *v31; // r8
  _BYTE *v32; // r14
  __int64 v33; // rbp
  __int64 v34; // r13
  __int64 v35; // rax
  char v36; // al
  __int64 v37; // rax
  unsigned __int8 v38; // bp
  int v39; // eax
  unsigned __int8 v40; // cl
  __int64 v41; // rax
  __int64 v42; // [rsp+78h] [rbp+10h]

  if ( **(_BYTE **)(a2 + 32) != 0xA0 )
  {
    LogError(3222536193LL, a2, a3, a4);
    AcpiDiagTraceAmlError(a1, 3222536193LL);
    PrintDebugMessage(59, 0, 0, 0, 0LL);
    return 3222536193LL;
  }
  result = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0LL, "I");
  if ( !(_DWORD)result )
  {
    v7 = (_BYTE **)(a2 + 40);
    if ( *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL) )
    {
      v28 = *v7;
      v20 = 0;
      if ( (unsigned __int64)*v7 < *(_QWORD *)(a2 + 48) && *v28 == 0xA1 )
      {
        v29 = (unsigned __int8)v28[1];
        v30 = v29 >> 6;
        v31 = v28 + 2;
        v32 = v28;
        if ( v28[1] >> 6 )
        {
          v29 &= 0xFu;
          v38 = 0;
          do
          {
            v39 = *v31++;
            v40 = v38++;
            v29 |= v39 << (8 * v40 + 4);
          }
          while ( v38 < (unsigned __int8)v30 );
        }
        v33 = (__int64)&v28[v29 + 1];
      }
      else
      {
        v32 = *v7;
        v33 = 0LL;
      }
      v18 = *(_QWORD *)(a2 + 88);
      v19 = *(_QWORD *)(a1 + 320);
      v21 = *(_QWORD *)(a1 + 88);
      v34 = *(_QWORD *)(a1 + 80);
      v42 = *(_QWORD *)(a1 + 120);
      v35 = HeapAlloc((struct _SLIST_ENTRY *)(a1 + 480), 1297237576, 0x50u);
      v26 = (_QWORD *)v35;
      if ( v35 )
      {
        *(_QWORD *)(v35 + 8) = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v35;
        *(_DWORD *)v35 = 1347371859;
        *(_QWORD *)(v35 + 24) = ParseScope;
        *(_QWORD *)(a1 + 120) = v42;
        *(_QWORD *)(v35 + 32) = v32;
        *(_QWORD *)(v35 + 40) = v33;
        *(_QWORD *)(v35 + 48) = *(_QWORD *)(a1 + 80);
        v36 = gdwfAMLI;
        *(_QWORD *)(a1 + 80) = v34;
        if ( (v36 & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v34 + 112));
        goto LABEL_23;
      }
LABEL_31:
      LogError(3222536194LL, v26, v24, v25);
      AcpiDiagTraceAmlError(a1, 3222536194LL);
      PrintDebugMessage(153, 0, 0, 0, 0LL);
      return (unsigned int)-1072431102;
    }
    v8 = *v7;
    *(_QWORD *)(a1 + 120) = *v7;
    if ( (unsigned __int64)v8 < *(_QWORD *)(a2 + 48) && *v8 == 0xA1 )
    {
      v9 = v8 + 1;
      *(_QWORD *)(a1 + 120) = v8 + 1;
      if ( a2 != -40 )
      {
        *v7 = v9;
        v9 = *(unsigned __int8 **)(a1 + 120);
      }
      v10 = *v9;
      v11 = v9 + 1;
      *(_QWORD *)(a1 + 120) = v9 + 1;
      v12 = v10 >> 6;
      if ( (unsigned __int8)(v10 >> 6) )
      {
        v10 &= 0xFu;
        v13 = 0;
        do
        {
          v14 = *(unsigned __int8 **)(a1 + 120);
          v15 = v13++;
          v16 = *v14;
          v11 = v14 + 1;
          *(_QWORD *)(a1 + 120) = v14 + 1;
          v10 |= v16 << (8 * v15 + 4);
        }
        while ( v13 < (unsigned __int8)v12 );
      }
      v17 = *v7;
      if ( a2 != -40 )
      {
        v17 += v10;
        *v7 = v17;
        v11 = *(unsigned __int8 **)(a1 + 120);
      }
      v18 = *(_QWORD *)(a2 + 88);
      v19 = *(_QWORD *)(a1 + 320);
      v20 = 0;
      v21 = *(_QWORD *)(a1 + 88);
      v22 = *(_QWORD *)(a1 + 80);
      v23 = HeapAlloc((struct _SLIST_ENTRY *)(a1 + 480), 1297237576, 0x50u);
      v26 = (_QWORD *)v23;
      if ( v23 )
      {
        *(_QWORD *)(v23 + 8) = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v23;
        *(_DWORD *)v23 = 1347371859;
        *(_QWORD *)(v23 + 24) = ParseScope;
        *(_QWORD *)(a1 + 120) = v11;
        *(_QWORD *)(v23 + 32) = v17;
        *(_QWORD *)(v23 + 40) = 0LL;
        *(_QWORD *)(v23 + 48) = *(_QWORD *)(a1 + 80);
        v27 = gdwfAMLI;
        *(_QWORD *)(a1 + 80) = v22;
        if ( (v27 & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v22 + 112));
          v26[7] = *(_QWORD *)(a1 + 88);
          v41 = *(_QWORD *)(a1 + 320);
          *(_QWORD *)(a1 + 88) = v21;
          v26[8] = v41;
          *(_QWORD *)(a1 + 320) = v19;
          v26[9] = v18;
          return v20;
        }
LABEL_23:
        v26[7] = *(_QWORD *)(a1 + 88);
        v37 = *(_QWORD *)(a1 + 320);
        *(_QWORD *)(a1 + 88) = v21;
        v26[8] = v37;
        *(_QWORD *)(a1 + 320) = v19;
        v26[9] = v18;
        return v20;
      }
      goto LABEL_31;
    }
  }
  return result;
}
