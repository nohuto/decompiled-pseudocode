/*
 * XREFs of ParsePackage @ 0x1C0021BD0
 * Callers:
 *     <none>
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C0002280 (IsCompatableDSDTRevision.c)
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     ParseObjName @ 0x1C0021A7C (ParseObjName.c)
 *     ParseOpcode @ 0x1C0022000 (ParseOpcode.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     ConPrintf @ 0x1C0063840 (ConPrintf.c)
 *     PrintIndent @ 0x1C00643FC (PrintIndent.c)
 */

__int64 __fastcall ParsePackage(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  unsigned __int64 v5; // rbx
  int v7; // eax
  __int64 v8; // rdi
  unsigned __int8 *v9; // rax
  __int64 v10; // r15
  __int64 v11; // rdi
  unsigned int v12; // ecx
  _BYTE *v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned int v17; // r8d
  void *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rdi
  _QWORD *v23; // rbx
  __int64 v24; // r8
  _QWORD *v25; // rax
  _QWORD *i; // rdx
  _QWORD *v27; // rcx
  _QWORD *v28; // r9
  __int64 v29; // rcx
  _QWORD *v30; // rax
  _QWORD *v31; // r9
  _QWORD *v32; // rbx
  __int64 v33; // rdx
  _QWORD *v34; // rax
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // r10
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  _QWORD *v43; // rax

  v4 = a3;
  v5 = a2;
  if ( (_DWORD)a3 )
    v7 = 2;
  else
    v7 = *(_DWORD *)(a2 + 16) & 0xF;
  if ( !v7 )
  {
    ++*(_DWORD *)(a2 + 16);
    if ( (gDebugger & 0xD0) != 0 )
    {
      PrintIndent(a1, a2, a3, a4);
      ConPrintf("{");
      ++dword_1C0080764;
    }
    goto LABEL_6;
  }
  v36 = v7 - 1;
  if ( v36 )
  {
    if ( v36 != 1 )
      return v4;
LABEL_41:
    if ( (gDebugger & 0xD0) != 0 )
    {
      --dword_1C0080764;
      PrintIndent(a1, a2, a3, a4);
      ConPrintf("}");
      --dword_1C0080764;
    }
    v22 = *(_QWORD **)(a1 + 416);
    v23 = v22 - 2;
    *(_QWORD *)(a1 + 416) = v22[1];
    *((_DWORD *)v22 - 4) = 0;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v24 = *(v22 - 1);
    v25 = *(_QWORD **)(v24 + 40);
    for ( i = (_QWORD *)(v24 + 40); v25 != i; v25 = (_QWORD *)*v25 )
    {
      if ( v22 < v25 )
        break;
    }
    v27 = (_QWORD *)v25[1];
    if ( (_QWORD *)*v27 == v25 )
    {
      v22[1] = v27;
      *v22 = v25;
      *v27 = v22;
      v25[1] = v22;
      v28 = (_QWORD *)*v22;
      v29 = *v22 - 16LL;
      if ( (_QWORD *)*v22 != i )
      {
        v38 = *((unsigned int *)v23 + 1);
        if ( (_QWORD *)v29 == (_QWORD *)((char *)v23 + v38) )
        {
          *((_DWORD *)v23 + 1) = v38 + *(_DWORD *)(v29 + 4);
          v39 = *v28;
          if ( *(_QWORD **)(*v28 + 8LL) != v28 )
            goto LABEL_94;
          v40 = (_QWORD *)v28[1];
          if ( (_QWORD *)*v40 != v28 )
            goto LABEL_94;
          *v40 = v39;
          *(_QWORD *)(v39 + 8) = v40;
        }
      }
      v30 = (_QWORD *)v23[3];
      v31 = v30 - 2;
      if ( v30 != i )
      {
        v41 = *((unsigned int *)v31 + 1);
        if ( v23 == (_QWORD *)((char *)v31 + v41) )
        {
          *((_DWORD *)v31 + 1) = *((_DWORD *)v23 + 1) + v41;
          v42 = *v22;
          if ( *(_QWORD **)(*v22 + 8LL) != v22 )
            goto LABEL_94;
          v43 = (_QWORD *)v22[1];
          if ( (_QWORD *)*v43 != v22 )
            goto LABEL_94;
          *v43 = v42;
          v23 = v31;
          *(_QWORD *)(v42 + 8) = v43;
        }
      }
      if ( *(_QWORD *)(v24 + 32) > (unsigned __int64)v23 + *((unsigned int *)v23 + 1) )
      {
LABEL_51:
        KeReleaseSpinLock(&gmutHeap, NewIrql);
        return v4;
      }
      *(_QWORD *)(v24 + 32) = v23;
      v32 = v23 + 2;
      v33 = *v32;
      if ( *(_QWORD **)(*v32 + 8LL) == v32 )
      {
        v34 = (_QWORD *)v32[1];
        if ( (_QWORD *)*v34 == v32 )
        {
          *v34 = v33;
          *(_QWORD *)(v33 + 8) = v34;
          goto LABEL_51;
        }
      }
    }
LABEL_94:
    __fastfail(3u);
  }
LABEL_6:
  a2 = *(_QWORD *)(a1 + 120);
  a3 = *(_QWORD *)(v5 + 48);
  while ( 1 )
  {
    a4 = 1LL;
    if ( a2 >= a3 )
      break;
    while ( 1 )
    {
      v8 = *(int *)(v5 + 40);
      if ( (unsigned int)v8 >= **(_DWORD **)(v5 + 32) )
        goto LABEL_36;
      *(_DWORD *)(v5 + 40) = v8 + 1;
      if ( (gDebugger & 0xD0) != 0 && (int)v8 > 0 )
      {
        ConPrintf(",");
        a4 = 1LL;
      }
      if ( (unsigned __int8)(**(_BYTE **)(a1 + 120) - 17) > 2u )
        break;
      v4 = ParseOpcode(a1, 0LL);
      if ( v4 )
        goto LABEL_36;
      if ( v5 != *(_QWORD *)(a1 + 416) )
        return v4;
LABEL_24:
      if ( *(_QWORD *)(a1 + 120) >= *(_QWORD *)(v5 + 48) )
        goto LABEL_37;
      a4 = 1LL;
    }
    if ( (gDebugger & 0xD0) != 0 )
    {
      PrintIndent(a1, a2, a3, 1LL);
      a4 = 1LL;
    }
    v9 = *(unsigned __int8 **)(a1 + 120);
    v10 = 40 * v8;
    v11 = 40 * v8 + *(_QWORD *)(v5 + 32);
    v12 = *v9;
    *(_QWORD *)(a1 + 120) = v9 + 1;
    a2 = v12;
    *(_WORD *)(v11 + 10) = 1;
    *(_QWORD *)(v11 + 24) = 0LL;
    if ( v12 != 13 )
    {
      if ( v12 == 12 )
      {
        *(_DWORD *)(v11 + 24) = **(_DWORD **)(a1 + 120);
        *(_QWORD *)(a1 + 120) += 4LL;
        goto LABEL_33;
      }
      if ( v12 > 0xC )
      {
        if ( v12 == 14 )
        {
          *(_QWORD *)(v11 + 24) = **(_QWORD **)(a1 + 120);
          *(_QWORD *)(a1 + 120) += 8LL;
          goto LABEL_33;
        }
        if ( v12 == 255 )
        {
          if ( IsCompatableDSDTRevision() )
            v37 = -1LL;
          else
            v37 = 0xFFFFFFFFLL;
          *(_QWORD *)(v11 + 24) = v37;
          if ( (gDebugger & 0xD0) != 0 )
            ConPrintf("Ones");
          goto LABEL_35;
        }
      }
      else
      {
        if ( !(_BYTE)v12 )
        {
          *(_QWORD *)(v11 + 24) = 0LL;
          if ( (gDebugger & 0xD0) != 0 )
            ConPrintf("Zero");
          goto LABEL_35;
        }
        a2 = v12 - 1;
        if ( v12 == 1 )
        {
          *(_QWORD *)(v11 + 24) = 1LL;
          if ( (gDebugger & 0xD0) != 0 )
            ConPrintf("One");
          goto LABEL_35;
        }
        a2 = v12 - 10;
        if ( v12 == 10 )
        {
          *(_BYTE *)(v11 + 24) = *(_BYTE *)(*(_QWORD *)(a1 + 120))++;
LABEL_33:
          if ( (gDebugger & 0xD0) != 0 )
            ConPrintf("0x%I64x");
LABEL_35:
          v4 = 0;
LABEL_23:
          if ( v4 )
            break;
          goto LABEL_24;
        }
        if ( v12 == 11 )
        {
          *(_WORD *)(v11 + 24) = **(_WORD **)(a1 + 120);
          *(_QWORD *)(a1 + 120) += 2LL;
          goto LABEL_33;
        }
      }
    }
    v4 = 0;
    v13 = (_BYTE *)(*(_QWORD *)(a1 + 120) - 1LL);
    *(_QWORD *)(a1 + 120) = v13;
    v14 = v10 + *(_QWORD *)(v5 + 32);
    if ( *v13 == 13 )
    {
      *(_QWORD *)(a1 + 120) = v13 + 1;
      v15 = -1LL;
      *(_WORD *)(v14 + 10) = 2;
      while ( *(_BYTE *)(*(_QWORD *)(a1 + 120) + v15++ + 1) != 0 )
        ;
      v17 = v15 + 1;
      *(_DWORD *)(v14 + 32) = v15 + 1;
      if ( (gDebugger & 0xD0) != 0 )
      {
        ConPrintf("\"%s\"");
        v17 = *(_DWORD *)(v14 + 32);
      }
      v18 = (void *)HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, v17);
      *(_QWORD *)(v14 + 40) = v18;
      if ( v18 )
      {
        memmove(v18, *(const void **)(a1 + 120), *(unsigned int *)(v14 + 32));
      }
      else
      {
        LogError(3221225626LL, v19, v20, v21);
        AcpiDiagTraceAmlError(a1, 3221225626LL);
        PrintDebugMessage(139, 0, 0, 0, 0LL);
        v4 = -1073741670;
      }
      *(_QWORD *)(a1 + 120) += *(unsigned int *)(v14 + 32);
    }
    else
    {
      v4 = -1072431103;
    }
    if ( v4 != -1072431103 )
      goto LABEL_23;
    LOBYTE(a4) = 1;
    v4 = ParseObjName(a1, (char **)(a1 + 120), v10 + *(_QWORD *)(v5 + 32) + 8LL, a4);
    if ( v4 != -1072431103 )
      goto LABEL_23;
    LogError(3222536193LL, a2, a3, a4);
    AcpiDiagTraceAmlError(a1, 3222536193LL);
    PrintDebugMessage(135, **(unsigned __int8 **)(a1 + 120), *(_QWORD *)(a1 + 120), 0, 0LL);
LABEL_37:
    if ( v5 != *(_QWORD *)(a1 + 416) )
      return v4;
    if ( !v4 )
    {
      a2 = *(_QWORD *)(a1 + 120);
      a3 = *(_QWORD *)(v5 + 48);
      if ( a2 < a3 && *(_DWORD *)(v5 + 40) < **(_DWORD **)(v5 + 32) )
        continue;
    }
    ++*(_DWORD *)(v5 + 16);
    goto LABEL_41;
  }
LABEL_36:
  if ( v4 != 32772 )
    goto LABEL_37;
  return v4;
}
