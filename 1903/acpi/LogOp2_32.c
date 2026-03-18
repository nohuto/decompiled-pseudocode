/*
 * XREFs of LogOp2_32 @ 0x1C001F31C
 * Callers:
 *     LogOp2 @ 0x1C001A1A0 (LogOp2.c)
 * Callees:
 *     ValidateArgTypes @ 0x1C001A610 (ValidateArgTypes.c)
 *     IsCompatableDSDTRevision @ 0x1C0020A38 (IsCompatableDSDTRevision.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     memcmp @ 0x1C0031900 (memcmp.c)
 */

__int64 __fastcall LogOp2_32(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // edi
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // r9
  __int16 v8; // ax
  unsigned int v9; // ebp
  unsigned int v10; // ebx
  size_t v11; // r8
  const void *v12; // rdx
  const void *v13; // rcx
  int v14; // eax
  bool v15; // cc
  bool v16; // zf
  __int16 v18; // ax
  unsigned int v19; // eax
  int v20; // eax
  unsigned int v21; // ebx
  unsigned int v22; // eax
  bool v23; // cc
  unsigned int v24; // ebp
  unsigned int v25; // ebx
  size_t v26; // r8
  int v27; // eax
  bool v28; // cc
  __int16 v29; // ax
  unsigned int v30; // eax
  int v31; // eax
  bool v32; // cc
  unsigned int v33; // ebp
  unsigned int v34; // ebx
  size_t v35; // r8
  const void *v36; // rdx
  const void *v37; // rcx
  unsigned __int8 *v38; // rax
  __int64 v39; // rax

  v2 = *(_QWORD *)(a2 + 56);
  v3 = 0;
  LOBYTE(v4) = 0;
  v5 = a2;
  v6 = a1;
  if ( *(_DWORD *)(v2 + 8) == 144 )
  {
    v3 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 1, "II");
    if ( v3 < 0 )
      return (unsigned int)v3;
    v39 = *(_QWORD *)(v5 + 80);
    if ( !*(_DWORD *)(v39 + 16) )
      goto LABEL_94;
    goto LABEL_92;
  }
  if ( *(_DWORD *)(v2 + 8) == 145 )
  {
    v3 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 1, "II");
    if ( v3 < 0 )
      return (unsigned int)v3;
    v39 = *(_QWORD *)(v5 + 80);
    if ( *(_DWORD *)(v39 + 16) )
      goto LABEL_93;
LABEL_92:
    if ( *(_DWORD *)(v39 + 56) )
    {
LABEL_93:
      LOBYTE(v4) = 1;
      goto LABEL_15;
    }
LABEL_94:
    LOBYTE(v4) = 0;
    goto LABEL_15;
  }
  if ( *(_DWORD *)(v2 + 8) != 147 )
  {
    v7 = (unsigned int)(*(_DWORD *)(v2 + 8) - 148);
    if ( *(_DWORD *)(v2 + 8) == 148 )
    {
      v3 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 1, "DD");
      if ( v3 < 0 )
        return (unsigned int)v3;
      a1 = *(_QWORD *)(v5 + 80);
      v29 = *(_WORD *)(a1 + 2);
      if ( v29 != 1 )
      {
        if ( v29 == 2 )
        {
          if ( *(_WORD *)(a1 + 42) != 2 )
            goto LABEL_20;
          v30 = *(_DWORD *)(a1 + 64);
          if ( *(_DWORD *)(a1 + 24) <= v30 )
            v30 = *(_DWORD *)(a1 + 24);
          v31 = strncmp(*(const char **)(a1 + 32), *(const char **)(a1 + 72), v30);
          a1 = *(_QWORD *)(v5 + 80);
          a2 = *(unsigned int *)(a1 + 24);
          v2 = *(unsigned int *)(a1 + 64);
          v32 = (unsigned int)a2 <= (unsigned int)v2;
          if ( (unsigned int)a2 < (unsigned int)v2 )
          {
            a1 = 0xFFFFFFFFLL;
            if ( !v31 )
              v31 = -1;
            v32 = (unsigned int)a2 <= (unsigned int)v2;
          }
        }
        else
        {
          if ( v29 != 3 || *(_WORD *)(a1 + 42) != 3 )
            goto LABEL_20;
          v33 = *(_DWORD *)(a1 + 24);
          v34 = *(_DWORD *)(a1 + 64);
          v35 = v34;
          v36 = *(const void **)(a1 + 72);
          v37 = *(const void **)(a1 + 32);
          if ( v33 <= v34 )
            v35 = v33;
          v31 = memcmp(v37, v36, v35);
          v32 = v33 <= v34;
          if ( v33 < v34 )
          {
            a1 = 0xFFFFFFFFLL;
            if ( !v31 )
              v31 = -1;
            v32 = v33 <= v34;
          }
        }
        if ( !v32 && !v31 )
          v31 = 1;
        LOBYTE(v4) = v31 > 0;
        goto LABEL_15;
      }
      if ( *(_WORD *)(a1 + 42) == 1 )
      {
        LOBYTE(v4) = *(_DWORD *)(a1 + 16) > *(_DWORD *)(a1 + 56);
        goto LABEL_15;
      }
    }
    else
    {
      if ( *(_DWORD *)(v2 + 8) != 149 )
        goto LABEL_15;
      v3 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 1, "DD");
      if ( v3 < 0 )
        return (unsigned int)v3;
      v7 = *(_QWORD *)(v5 + 80);
      v18 = *(_WORD *)(v7 + 2);
      if ( v18 == 1 )
      {
        if ( *(_WORD *)(v7 + 42) == 1 )
        {
          a1 = *(unsigned int *)(v7 + 56);
          LOBYTE(v4) = *(_DWORD *)(v7 + 16) < (unsigned int)a1;
          goto LABEL_15;
        }
      }
      else if ( v18 == 2 )
      {
        if ( *(_WORD *)(v7 + 42) == 2 )
        {
          v19 = *(_DWORD *)(v7 + 64);
          if ( *(_DWORD *)(v7 + 24) <= v19 )
            v19 = *(_DWORD *)(v7 + 24);
          v20 = strncmp(*(const char **)(v7 + 32), *(const char **)(v7 + 72), v19);
          a1 = *(_QWORD *)(v5 + 80);
          v21 = v20;
          v22 = *(_DWORD *)(a1 + 24);
          a2 = *(unsigned int *)(a1 + 64);
          v23 = v22 <= (unsigned int)a2;
          if ( v22 < (unsigned int)a2 )
          {
            a1 = 0xFFFFFFFFLL;
            if ( !v21 )
              v21 = -1;
            v23 = v22 <= (unsigned int)a2;
          }
          if ( !v23 && !v21 )
            v21 = 1;
          v4 = v21 >> 31;
          goto LABEL_15;
        }
      }
      else if ( v18 == 3 && *(_WORD *)(v7 + 42) == 3 )
      {
        v24 = *(_DWORD *)(v7 + 24);
        v25 = *(_DWORD *)(v7 + 64);
        v26 = v25;
        if ( v24 <= v25 )
          v26 = v24;
        v27 = memcmp(*(const void **)(v7 + 32), *(const void **)(v7 + 72), v26);
        v28 = v24 <= v25;
        if ( v24 < v25 )
        {
          a1 = 0xFFFFFFFFLL;
          if ( !v27 )
            v27 = -1;
          v28 = v24 <= v25;
        }
        if ( !v28 && !v27 )
          v27 = 1;
        LOBYTE(v4) = v27 < 0;
        goto LABEL_15;
      }
    }
LABEL_20:
    v3 = -1073741811;
    LogError(3221225485LL);
    AcpiDiagTraceAmlError(v6, 3221225485LL);
    PrintDebugMessage(238, 0, 0, 0, 0LL);
    return (unsigned int)v3;
  }
  v3 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 1, "DD");
  if ( v3 < 0 )
    return (unsigned int)v3;
  a1 = *(_QWORD *)(v5 + 80);
  v8 = *(_WORD *)(a1 + 2);
  if ( v8 == 1 )
  {
    if ( *(_WORD *)(a1 + 42) != 1 )
      goto LABEL_20;
    v16 = *(_DWORD *)(a1 + 16) == *(_DWORD *)(a1 + 56);
  }
  else
  {
    if ( v8 != 2 )
    {
      if ( v8 == 3 && *(_WORD *)(a1 + 42) == 3 )
      {
        v9 = *(_DWORD *)(a1 + 24);
        v10 = *(_DWORD *)(a1 + 64);
        v11 = v10;
        v12 = *(const void **)(a1 + 72);
        v13 = *(const void **)(a1 + 32);
        if ( v9 <= v10 )
          v11 = v9;
        v14 = memcmp(v13, v12, v11);
        v15 = v9 <= v10;
        if ( v9 < v10 )
        {
          a1 = 0xFFFFFFFFLL;
          if ( !v14 )
            v14 = -1;
          v15 = v9 <= v10;
        }
        if ( !v15 && !v14 )
          v14 = 1;
        v16 = v14 == 0;
        goto LABEL_14;
      }
      goto LABEL_20;
    }
    if ( *(_WORD *)(a1 + 42) != 2 )
      goto LABEL_20;
    v38 = *(unsigned __int8 **)(a1 + 32);
    v2 = *(_QWORD *)(a1 + 72) - (_QWORD)v38;
    do
    {
      a2 = v38[v2];
      a1 = *v38 - (unsigned int)a2;
      if ( (_DWORD)a1 )
        break;
      ++v38;
    }
    while ( (_DWORD)a2 );
    v16 = (_DWORD)a1 == 0;
  }
LABEL_14:
  LOBYTE(v4) = v16;
LABEL_15:
  *(_WORD *)(*(_QWORD *)(v5 + 88) + 2LL) = 1;
  if ( (_BYTE)v4 )
    IsCompatableDSDTRevision(a1, a2, v2, v7);
  *(_DWORD *)(*(_QWORD *)(v5 + 88) + 16LL) = -((_BYTE)v4 != 0);
  return (unsigned int)v3;
}
