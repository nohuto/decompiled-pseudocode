/*
 * XREFs of LogOp2_32 @ 0x1C0002144
 * Callers:
 *     LogOp2 @ 0x1C0009560 (LogOp2.c)
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C0002280 (IsCompatableDSDTRevision.c)
 *     ValidateArgTypes @ 0x1C00099D0 (ValidateArgTypes.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     memcmp @ 0x1C0030C80 (memcmp.c)
 */

__int64 __fastcall LogOp2_32(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  int v3; // edi
  unsigned int v4; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int16 v11; // ax
  unsigned int v12; // ebp
  unsigned int v13; // ebx
  size_t v14; // r8
  const void *v15; // rdx
  const void *v16; // rcx
  int v17; // eax
  bool v18; // cc
  bool v19; // zf
  __int16 v21; // ax
  unsigned int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // ebx
  unsigned int v26; // eax
  unsigned int v27; // edx
  bool v28; // cc
  unsigned int v29; // ebp
  unsigned int v30; // ebx
  size_t v31; // r8
  int v32; // eax
  bool v33; // cc
  __int64 v34; // rcx
  __int16 v35; // ax
  unsigned int v36; // eax
  int v37; // eax
  __int64 v38; // rcx
  unsigned int v39; // edx
  unsigned int v40; // r8d
  bool v41; // cc
  unsigned int v42; // ebp
  unsigned int v43; // ebx
  size_t v44; // r8
  const void *v45; // rdx
  const void *v46; // rcx
  unsigned __int8 *v47; // rax
  __int64 v48; // r8
  int v49; // edx
  int v50; // ecx
  __int64 v51; // rax

  v2 = a2[7];
  v3 = 0;
  LOBYTE(v4) = 0;
  if ( *(_DWORD *)(v2 + 8) == 144 )
  {
    LOBYTE(v2) = 1;
    v3 = ValidateArgTypes(a1, a2[10], v2, "II");
    if ( v3 < 0 )
      return (unsigned int)v3;
    v51 = a2[10];
    if ( !*(_DWORD *)(v51 + 16) )
      goto LABEL_94;
    goto LABEL_92;
  }
  if ( *(_DWORD *)(v2 + 8) == 145 )
  {
    LOBYTE(v2) = 1;
    v3 = ValidateArgTypes(a1, a2[10], v2, "II");
    if ( v3 < 0 )
      return (unsigned int)v3;
    v51 = a2[10];
    if ( *(_DWORD *)(v51 + 16) )
      goto LABEL_93;
LABEL_92:
    if ( *(_DWORD *)(v51 + 56) )
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
    if ( *(_DWORD *)(v2 + 8) == 148 )
    {
      LOBYTE(v2) = 1;
      v3 = ValidateArgTypes(a1, a2[10], v2, "DD");
      if ( v3 < 0 )
        return (unsigned int)v3;
      v34 = a2[10];
      v35 = *(_WORD *)(v34 + 2);
      if ( v35 != 1 )
      {
        if ( v35 == 2 )
        {
          if ( *(_WORD *)(v34 + 42) != 2 )
            goto LABEL_20;
          v36 = *(_DWORD *)(v34 + 64);
          if ( *(_DWORD *)(v34 + 24) <= v36 )
            v36 = *(_DWORD *)(v34 + 24);
          v37 = strncmp(*(const char **)(v34 + 32), *(const char **)(v34 + 72), v36);
          v38 = a2[10];
          v39 = *(_DWORD *)(v38 + 24);
          v40 = *(_DWORD *)(v38 + 64);
          v41 = v39 <= v40;
          if ( v39 < v40 )
          {
            if ( !v37 )
              v37 = -1;
            v41 = v39 <= v40;
          }
        }
        else
        {
          if ( v35 != 3 || *(_WORD *)(v34 + 42) != 3 )
            goto LABEL_20;
          v42 = *(_DWORD *)(v34 + 24);
          v43 = *(_DWORD *)(v34 + 64);
          v44 = v43;
          v45 = *(const void **)(v34 + 72);
          v46 = *(const void **)(v34 + 32);
          if ( v42 <= v43 )
            v44 = v42;
          v37 = memcmp(v46, v45, v44);
          v41 = v42 <= v43;
          if ( v42 < v43 )
          {
            if ( !v37 )
              v37 = -1;
            v41 = v42 <= v43;
          }
        }
        if ( !v41 && !v37 )
          v37 = 1;
        LOBYTE(v4) = v37 > 0;
        goto LABEL_15;
      }
      if ( *(_WORD *)(v34 + 42) == 1 )
      {
        LOBYTE(v4) = *(_DWORD *)(v34 + 16) > *(_DWORD *)(v34 + 56);
        goto LABEL_15;
      }
    }
    else
    {
      if ( *(_DWORD *)(v2 + 8) != 149 )
        goto LABEL_15;
      LOBYTE(v2) = 1;
      v3 = ValidateArgTypes(a1, a2[10], v2, "DD");
      if ( v3 < 0 )
        return (unsigned int)v3;
      v9 = a2[10];
      v21 = *(_WORD *)(v9 + 2);
      if ( v21 == 1 )
      {
        if ( *(_WORD *)(v9 + 42) == 1 )
        {
          LOBYTE(v4) = *(_DWORD *)(v9 + 16) < *(_DWORD *)(v9 + 56);
          goto LABEL_15;
        }
      }
      else if ( v21 == 2 )
      {
        if ( *(_WORD *)(v9 + 42) == 2 )
        {
          v22 = *(_DWORD *)(v9 + 64);
          if ( *(_DWORD *)(v9 + 24) <= v22 )
            v22 = *(_DWORD *)(v9 + 24);
          v23 = strncmp(*(const char **)(v9 + 32), *(const char **)(v9 + 72), v22);
          v24 = a2[10];
          v25 = v23;
          v26 = *(_DWORD *)(v24 + 24);
          v27 = *(_DWORD *)(v24 + 64);
          v28 = v26 <= v27;
          if ( v26 < v27 )
          {
            if ( !v25 )
              v25 = -1;
            v28 = v26 <= v27;
          }
          if ( !v28 && !v25 )
            v25 = 1;
          v4 = v25 >> 31;
          goto LABEL_15;
        }
      }
      else if ( v21 == 3 && *(_WORD *)(v9 + 42) == 3 )
      {
        v29 = *(_DWORD *)(v9 + 24);
        v30 = *(_DWORD *)(v9 + 64);
        v31 = v30;
        if ( v29 <= v30 )
          v31 = v29;
        v32 = memcmp(*(const void **)(v9 + 32), *(const void **)(v9 + 72), v31);
        v33 = v29 <= v30;
        if ( v29 < v30 )
        {
          if ( !v32 )
            v32 = -1;
          v33 = v29 <= v30;
        }
        if ( !v33 && !v32 )
          v32 = 1;
        LOBYTE(v4) = v32 < 0;
        goto LABEL_15;
      }
    }
LABEL_20:
    v3 = -1073741811;
    LogError(3221225485LL, v7, v8, v9);
    AcpiDiagTraceAmlError(a1, 3221225485LL);
    PrintDebugMessage(238, 0, 0, 0, 0LL);
    return (unsigned int)v3;
  }
  LOBYTE(v2) = 1;
  v3 = ValidateArgTypes(a1, a2[10], v2, "DD");
  if ( v3 < 0 )
    return (unsigned int)v3;
  v10 = a2[10];
  v11 = *(_WORD *)(v10 + 2);
  if ( v11 == 1 )
  {
    if ( *(_WORD *)(v10 + 42) != 1 )
      goto LABEL_20;
    v19 = *(_DWORD *)(v10 + 16) == *(_DWORD *)(v10 + 56);
  }
  else
  {
    if ( v11 != 2 )
    {
      if ( v11 == 3 && *(_WORD *)(v10 + 42) == 3 )
      {
        v12 = *(_DWORD *)(v10 + 24);
        v13 = *(_DWORD *)(v10 + 64);
        v14 = v13;
        v15 = *(const void **)(v10 + 72);
        v16 = *(const void **)(v10 + 32);
        if ( v12 <= v13 )
          v14 = v12;
        v17 = memcmp(v16, v15, v14);
        v18 = v12 <= v13;
        if ( v12 < v13 )
        {
          if ( !v17 )
            v17 = -1;
          v18 = v12 <= v13;
        }
        if ( !v18 && !v17 )
          v17 = 1;
        v19 = v17 == 0;
        goto LABEL_14;
      }
      goto LABEL_20;
    }
    if ( *(_WORD *)(v10 + 42) != 2 )
      goto LABEL_20;
    v47 = *(unsigned __int8 **)(v10 + 32);
    v48 = *(_QWORD *)(v10 + 72) - (_QWORD)v47;
    do
    {
      v49 = v47[v48];
      v50 = *v47 - v49;
      if ( v50 )
        break;
      ++v47;
    }
    while ( v49 );
    v19 = v50 == 0;
  }
LABEL_14:
  LOBYTE(v4) = v19;
LABEL_15:
  *(_WORD *)(a2[11] + 2LL) = 1;
  if ( (_BYTE)v4 )
    IsCompatableDSDTRevision();
  *(_DWORD *)(a2[11] + 16LL) = -((_BYTE)v4 != 0);
  return (unsigned int)v3;
}
