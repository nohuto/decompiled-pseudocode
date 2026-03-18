/*
 * XREFs of AccFieldUnit @ 0x1C0009B30
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     WriteField @ 0x1C00225A0 (WriteField.c)
 *     PushAccFieldObj @ 0x1C0024724 (PushAccFieldObj.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     GetObjectTypeName @ 0x1C0062FC4 (GetObjectTypeName.c)
 *     ConPrintf @ 0x1C0063840 (ConPrintf.c)
 *     PrintObject @ 0x1C0064440 (PrintObject.c)
 *     RawFieldAccess @ 0x1C0065834 (RawFieldAccess.c)
 */

__int64 __fastcall AccFieldUnit(struct _SLIST_ENTRY *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  __int64 v4; // rbx
  __int64 v6; // r9
  __int64 v7; // r8
  _DWORD *v8; // rdi
  _SLIST_ENTRY *Next; // rdi
  _SLIST_ENTRY *v10; // rbx
  __int64 v11; // r8
  _SLIST_ENTRY *v12; // rax
  _SLIST_ENTRY *i; // rdx
  _SLIST_ENTRY **v14; // rcx
  _SLIST_ENTRY *v15; // r9
  __int64 v16; // rcx
  _SLIST_ENTRY *v17; // rax
  _SLIST_ENTRY *v18; // r9
  _SLIST_ENTRY *v19; // rbx
  _SLIST_ENTRY *v20; // rdx
  _SLIST_ENTRY **v21; // rax
  __int64 v23; // rcx
  __int16 v24; // ax
  int v25; // eax
  __int64 v26; // r14
  __int64 v27; // r13
  unsigned int v28; // r15d
  int v29; // ecx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned int v33; // r8d
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // ecx
  int v39; // eax
  unsigned int v40; // r8d
  unsigned int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // ecx
  __int64 v44; // rax
  unsigned int v45; // eax
  unsigned int v46; // eax
  __int64 v47; // rcx
  __int64 Next_high; // r10
  _SLIST_ENTRY *v49; // rcx
  _SLIST_ENTRY **v50; // rax
  int ObjectTypeName; // eax
  unsigned int v52; // r8d
  void *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  _SLIST_ENTRY *v57; // rcx
  _SLIST_ENTRY **v58; // rax
  __int64 v59; // [rsp+78h] [rbp+10h]
  unsigned int v60; // [rsp+80h] [rbp+18h] BYREF

  v3 = a3;
  v4 = a2;
  if ( a3 )
    v6 = 3LL;
  else
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  v7 = 130LL;
  v8 = *(_DWORD **)(*(_QWORD *)(a2 + 32) + 32LL);
  if ( (_DWORD)v6 )
  {
    v6 = (unsigned int)(v6 - 1);
    if ( (_DWORD)v6 )
    {
      v6 = (unsigned int)(v6 - 1);
      if ( (_DWORD)v6 )
      {
        if ( (_DWORD)v6 == 1 )
          goto LABEL_7;
        return v3;
      }
      goto LABEL_23;
    }
  }
  else
  {
    ++*(_DWORD *)(a2 + 16);
    if ( *(_WORD *)(*(_QWORD *)v8 + 66LL) == 130 )
      return (unsigned int)PushAccFieldObj(
                             a1,
                             WriteFieldObj,
                             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 96LL) + 8LL) + 64LL,
                             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 96LL) + 8LL) + 96LL) + 8LL,
                             *(_QWORD *)(*(_QWORD *)v8 + 96LL) + 16LL,
                             8);
  }
  ++*(_DWORD *)(a2 + 16);
  a2 = (unsigned int)v8[5];
  if ( (a2 & 0x80000010) == 0 )
  {
    v23 = *(_QWORD *)v8;
    v24 = *(_WORD *)(*(_QWORD *)v8 + 66LL);
    if ( v24 == 130 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 96) + 8LL) + 96LL) + 20LL) & 0x10) == 0 )
        goto LABEL_23;
    }
    else
    {
      v7 = 132LL;
      if ( v24 != 132 )
        goto LABEL_23;
      v7 = *(_QWORD *)(v23 + 96);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 96LL) + 20LL) & 0x10) == 0
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 96LL) + 20LL) & 0x10) == 0 )
      {
        goto LABEL_23;
      }
    }
  }
  LODWORD(a2) = a2 | 0x80000000;
  v3 = 0;
  v8[5] = a2;
  if ( ghGlobalLock )
  {
    v45 = ghGlobalLock(5LL, 0LL, qword_1C00810E8, RestartCtxtCallback, &a1[20].Next + 1);
    v3 = v45;
    if ( v45 == 259 )
      return 32772;
    if ( v45 )
    {
      v3 = -1072431086;
      LogError(3222536210LL, a2, v7, v6);
      AcpiDiagTraceAmlError(a1, 3222536210LL);
      PrintDebugMessage(6, 0, 0, 0, 0LL);
    }
  }
  if ( v3 )
    return v3;
LABEL_23:
  v25 = *(_DWORD *)(v4 + 16) + 1;
  *(_DWORD *)(v4 + 16) = v25;
  if ( (int)v8[5] < 0 )
  {
    v25 |= 0x20000u;
    *(_DWORD *)(v4 + 16) = v25;
  }
  v26 = *(_QWORD *)(v4 + 40);
  v27 = *(_QWORD *)(v4 + 32);
  if ( (v25 & 0x10000) == 0 )
  {
    v46 = WriteField(a1, *(_QWORD *)(v4 + 32), v8 + 2, *(_QWORD *)(v4 + 40));
LABEL_64:
    v3 = v46;
    goto LABEL_52;
  }
  if ( (v8[5] & 0xFu) > 4 )
  {
    if ( *(_WORD *)(v27 + 2) != 5 )
    {
      v3 = -1072431087;
      LogError(3222536209LL, a2, v7, v6);
      AcpiDiagTraceAmlError(a1, 3222536209LL);
      PrintDebugMessage(162, v8[5], 0, 0, 0LL);
      goto LABEL_52;
    }
    goto LABEL_97;
  }
  v28 = 8;
  v60 = 0;
  if ( ghGetAcpiTableVersion && (ghGetAcpiTableVersion(1413763908LL, &v60), v60 >= 2) )
    v29 = 8;
  else
    v29 = 4;
  if ( !*(_WORD *)(v26 + 2) )
  {
    if ( (v8[5] & 0x10000) == 0 && v8[4] <= (unsigned int)(8 * v29) )
    {
      *(_WORD *)(v26 + 2) = 1;
      v30 = v26 + 16;
      v28 = v29;
      goto LABEL_34;
    }
    *(_WORD *)(v26 + 2) = 3;
    v52 = (unsigned int)(v8[4] + 7) >> 3;
    *(_DWORD *)(v26 + 24) = v52;
    v53 = (void *)HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1179992648, v52);
    *(_QWORD *)(v26 + 32) = v53;
    if ( !v53 )
    {
      v3 = -1073741670;
      LogError(3221225626LL, v54, v55, v56);
      AcpiDiagTraceAmlError(a1, 3221225626LL);
      PrintDebugMessage(161, *(_DWORD *)(v26 + 24), 0, 0, 0LL);
      goto LABEL_52;
    }
    memset(v53, 0, *(unsigned int *)(v26 + 24));
    goto LABEL_94;
  }
  if ( *(_WORD *)(v26 + 2) == 1 )
  {
    v30 = v26 + 16;
    goto LABEL_34;
  }
  if ( *(_WORD *)(v26 + 2) != 2 )
  {
    if ( *(_WORD *)(v26 + 2) != 3 )
    {
      v3 = -1072431095;
      LogError(3222536201LL, (unsigned int)*(unsigned __int16 *)(v26 + 2) - 2, v7, v6);
      AcpiDiagTraceAmlError(a1, 3222536201LL);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v26 + 2));
      PrintDebugMessage(163, ObjectTypeName, 0, 0, 0LL);
      goto LABEL_52;
    }
LABEL_94:
    v28 = *(_DWORD *)(v26 + 24);
    goto LABEL_95;
  }
  v28 = *(_DWORD *)(v26 + 24) - 1;
LABEL_95:
  v30 = *(_QWORD *)(v26 + 32);
LABEL_34:
  v59 = v30;
  if ( *(_WORD *)(v27 + 2) == 5 )
  {
    v31 = **(_QWORD **)(v27 + 32);
    if ( *(_WORD *)(v31 + 66) == 131 )
    {
      v32 = gpRSAccessHead;
      if ( gpRSAccessHead )
      {
        while ( *(_DWORD *)(v32 + 8) != *(unsigned __int8 *)(*(_QWORD *)(**(_QWORD **)(v31 + 96) + 96LL) + 12LL) )
        {
          v32 = *(_QWORD *)v32;
          if ( !v32 )
            goto LABEL_42;
        }
        if ( v32 && *(_QWORD *)(v32 + 32) && !*(_QWORD *)(v32 + 16) )
        {
LABEL_97:
          v46 = RawFieldAccess(a1, 0LL, v27, v26);
          goto LABEL_64;
        }
      }
    }
  }
LABEL_42:
  v33 = 128;
  if ( v8[7] )
    v33 = v8[9] + 128;
  v3 = 0;
  v34 = HeapAlloc(a1 + 30, 1297237576, v33);
  v37 = v34;
  if ( v34 )
  {
    *(_QWORD *)(v34 + 8) = a1[26].Next;
    a1[26].Next = (_SLIST_ENTRY *)v34;
    *(_DWORD *)v34 = 1330004801;
    *(_QWORD *)(v34 + 24) = ReadFieldObj;
    *(_QWORD *)(v34 + 32) = v27;
    *(_QWORD *)(v34 + 40) = v59;
    *(_QWORD *)(v34 + 48) = v59 + v28;
    v38 = v8[5] & 0xF;
    v39 = 1;
    if ( (unsigned int)(v38 - 1) <= 3 )
      v39 = 1 << (v38 - 1);
    v40 = 8 * v39;
    *(_DWORD *)(v37 + 56) = v39;
    v41 = 8 * v39 + v8[4] + v8[3] - 1;
    if ( v40 == 8 )
      v42 = v41 >> 3;
    else
      v42 = v41 / v40;
    *(_DWORD *)(v37 + 60) = v42;
    v43 = 8 * *(_DWORD *)(v37 + 56);
    if ( v43 >= 0x40 )
      v44 = 0LL;
    else
      v44 = 1LL << v43;
    *(_QWORD *)(v37 + 64) = v44 - 1;
    *(_DWORD *)(v37 + 72) = 8 * *(_DWORD *)(v37 + 56) - v8[3];
    *(_DWORD *)(v37 + 76) = v8[3];
    memmove((void *)(v37 + 96), v8 + 2, (unsigned int)(v8[9] + 32));
  }
  else
  {
    v3 = -1072431102;
    LogError(3222536194LL, v35, v36, 0LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
  }
LABEL_52:
  if ( v3 != 32772 && (_SLIST_ENTRY *)v4 == a1[26].Next )
  {
LABEL_7:
    if ( (*(_DWORD *)(v4 + 16) & 0x20000) != 0 && ghGlobalLock )
      ghGlobalLock(5LL, 1LL, qword_1C00810E8, 0LL, &a1[20].Next + 1);
    if ( (gDebugger & 0xD0) != 0 && (*(_DWORD *)(v4 + 16) & 0x10000) != 0 )
    {
      ConPrintf("=");
      PrintObject(*(_QWORD *)(v4 + 40));
    }
    Next = a1[26].Next;
    v10 = Next - 1;
    a1[26].Next = (_SLIST_ENTRY *)*((_QWORD *)&Next->Next + 1);
    LODWORD(Next[-1].Next) = 0;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v11 = *((_QWORD *)&Next[-1].Next + 1);
    v12 = *(_SLIST_ENTRY **)(v11 + 40);
    for ( i = (_SLIST_ENTRY *)(v11 + 40); v12 != i; v12 = v12->Next )
    {
      if ( Next < v12 )
        break;
    }
    v14 = (_SLIST_ENTRY **)*((_QWORD *)&v12->Next + 1);
    if ( *v14 == v12 )
    {
      *((_QWORD *)&Next->Next + 1) = v14;
      Next->Next = v12;
      *v14 = Next;
      *((_QWORD *)&v12->Next + 1) = Next;
      v15 = Next->Next;
      v16 = (__int64)&Next->Next[-1];
      if ( Next->Next != i )
      {
        Next_high = HIDWORD(v10->Next);
        if ( (_SLIST_ENTRY *)v16 == (_SLIST_ENTRY *)((char *)v10 + Next_high) )
        {
          HIDWORD(v10->Next) = Next_high + *(_DWORD *)(v16 + 4);
          v49 = v15->Next;
          if ( *(&v15->Next->Next + 1) != v15 )
            goto LABEL_79;
          v50 = (_SLIST_ENTRY **)*((_QWORD *)&v15->Next + 1);
          if ( *v50 != v15 )
            goto LABEL_79;
          *v50 = v49;
          *((_QWORD *)&v49->Next + 1) = v50;
        }
      }
      v17 = (_SLIST_ENTRY *)*((_QWORD *)&v10[1].Next + 1);
      v18 = v17 - 1;
      if ( v17 != i )
      {
        v47 = HIDWORD(v18->Next);
        if ( v10 == (_SLIST_ENTRY *)((char *)v18 + v47) )
        {
          HIDWORD(v18->Next) = HIDWORD(v10->Next) + v47;
          v57 = Next->Next;
          if ( *(&Next->Next->Next + 1) != Next )
            goto LABEL_79;
          v58 = (_SLIST_ENTRY **)*((_QWORD *)&Next->Next + 1);
          if ( *v58 != Next )
            goto LABEL_79;
          *v58 = v57;
          v10 = v18;
          *((_QWORD *)&v57->Next + 1) = v58;
        }
      }
      if ( *(_QWORD *)(v11 + 32) > (unsigned __int64)v10 + HIDWORD(v10->Next) )
      {
LABEL_17:
        KeReleaseSpinLock(&gmutHeap, NewIrql);
        return v3;
      }
      *(_QWORD *)(v11 + 32) = v10;
      v19 = v10 + 1;
      v20 = v19->Next;
      if ( *(&v19->Next->Next + 1) == v19 )
      {
        v21 = (_SLIST_ENTRY **)*((_QWORD *)&v19->Next + 1);
        if ( *v21 == v19 )
        {
          *v21 = v20;
          *((_QWORD *)&v20->Next + 1) = v21;
          goto LABEL_17;
        }
      }
    }
LABEL_79:
    __fastfail(3u);
  }
  return v3;
}
