/*
 * XREFs of AccFieldUnit @ 0x1C001C0C0
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C0003960 (HeapAlloc.c)
 *     WriteField @ 0x1C001C620 (WriteField.c)
 *     PushAccFieldObj @ 0x1C0020858 (PushAccFieldObj.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     GetObjectTypeName @ 0x1C0064F74 (GetObjectTypeName.c)
 *     ConPrintf @ 0x1C0065888 (ConPrintf.c)
 *     PrintObject @ 0x1C006641C (PrintObject.c)
 *     RawFieldAccess @ 0x1C0067824 (RawFieldAccess.c)
 */

__int64 __fastcall AccFieldUnit(struct _SLIST_ENTRY *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v6; // r9d
  _DWORD *v7; // rdi
  int v8; // r9d
  int v9; // r9d
  _SLIST_ENTRY *Next; // rdi
  _SLIST_ENTRY *v11; // rbx
  __int64 v12; // r8
  _SLIST_ENTRY *v13; // rax
  _SLIST_ENTRY *i; // rdx
  _SLIST_ENTRY **v15; // rcx
  _SLIST_ENTRY *v16; // r9
  __int64 v17; // rcx
  _SLIST_ENTRY *v18; // rax
  _SLIST_ENTRY *v19; // r9
  _SLIST_ENTRY *v20; // rbx
  _SLIST_ENTRY *v21; // rdx
  _SLIST_ENTRY **v22; // rax
  int v23; // edx
  __int64 v24; // rcx
  __int16 v25; // ax
  int v26; // eax
  __int64 v27; // r14
  __int64 v28; // r13
  unsigned int v29; // r15d
  int v30; // ecx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  unsigned int v34; // r8d
  __int64 v35; // rax
  __int64 v36; // r9
  int v37; // ecx
  int v38; // eax
  unsigned int v39; // r8d
  unsigned int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // ecx
  __int64 v43; // rax
  unsigned int v45; // eax
  unsigned int v46; // eax
  __int64 v47; // rcx
  __int64 Next_high; // r10
  _SLIST_ENTRY *v49; // rcx
  _SLIST_ENTRY **v50; // rax
  _QWORD *v51; // r8
  int ObjectTypeName; // eax
  unsigned int v53; // r8d
  void *v54; // rax
  _SLIST_ENTRY *v55; // rcx
  _SLIST_ENTRY **v56; // rax
  __int64 v57; // [rsp+78h] [rbp+10h]
  unsigned int v58; // [rsp+80h] [rbp+18h] BYREF

  v3 = a3;
  if ( a3 )
    v6 = 3;
  else
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  v7 = *(_DWORD **)(*(_QWORD *)(a2 + 32) + 32LL);
  if ( v6 )
  {
    v8 = v6 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 1 )
          goto LABEL_7;
        return v3;
      }
      goto LABEL_22;
    }
  }
  else
  {
    ++*(_DWORD *)(a2 + 16);
    if ( *(_WORD *)(*(_QWORD *)v7 + 66LL) == 130 )
      return (unsigned int)PushAccFieldObj(
                             a1,
                             WriteFieldObj,
                             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 96LL) + 8LL) + 64LL,
                             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 96LL) + 8LL) + 96LL) + 8LL,
                             *(_QWORD *)(*(_QWORD *)v7 + 96LL) + 16LL,
                             8);
  }
  ++*(_DWORD *)(a2 + 16);
  v23 = v7[5];
  if ( (v23 & 0x80000010) == 0 )
  {
    v24 = *(_QWORD *)v7;
    v25 = *(_WORD *)(*(_QWORD *)v7 + 66LL);
    if ( v25 == 130 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 96) + 8LL) + 96LL) + 20LL) & 0x10) == 0 )
        goto LABEL_22;
    }
    else
    {
      if ( v25 != 132 )
        goto LABEL_22;
      v51 = *(_QWORD **)(v24 + 96);
      if ( (*(_DWORD *)(*(_QWORD *)(*v51 + 96LL) + 20LL) & 0x10) == 0
        && (*(_DWORD *)(*(_QWORD *)(v51[1] + 96LL) + 20LL) & 0x10) == 0 )
      {
        goto LABEL_22;
      }
    }
  }
  v3 = 0;
  v7[5] = v23 | 0x80000000;
  if ( ghGlobalLock )
  {
    v45 = ghGlobalLock(5LL, 0LL, qword_1C00830E8, RestartCtxtCallback, &a1[20].Next + 1);
    v3 = v45;
    if ( v45 == 259 )
      return 32772;
    if ( v45 )
    {
      v3 = -1072431086;
      LogError(3222536210LL);
      AcpiDiagTraceAmlError(a1, 3222536210LL);
      PrintDebugMessage(6, 0, 0, 0, 0LL);
    }
  }
  if ( v3 )
    return v3;
LABEL_22:
  v26 = *(_DWORD *)(a2 + 16) + 1;
  *(_DWORD *)(a2 + 16) = v26;
  if ( (int)v7[5] < 0 )
  {
    v26 |= 0x20000u;
    *(_DWORD *)(a2 + 16) = v26;
  }
  v27 = *(_QWORD *)(a2 + 40);
  v28 = *(_QWORD *)(a2 + 32);
  if ( (v26 & 0x10000) == 0 )
  {
    v46 = WriteField(a1, *(_QWORD *)(a2 + 32), v7 + 2, *(_QWORD *)(a2 + 40));
LABEL_63:
    v3 = v46;
    goto LABEL_48;
  }
  if ( (v7[5] & 0xFu) > 4 )
  {
    if ( *(_WORD *)(v28 + 2) != 5 )
    {
      v3 = -1072431087;
      LogError(3222536209LL);
      AcpiDiagTraceAmlError(a1, 3222536209LL);
      PrintDebugMessage(162, v7[5], 0, 0, 0LL);
      goto LABEL_48;
    }
    goto LABEL_96;
  }
  v29 = 8;
  v58 = 0;
  if ( ghGetAcpiTableVersion && (ghGetAcpiTableVersion(1413763908LL, &v58), v58 >= 2) )
    v30 = 8;
  else
    v30 = 4;
  if ( !*(_WORD *)(v27 + 2) )
  {
    if ( (v7[5] & 0x10000) == 0 && v7[4] <= (unsigned int)(8 * v30) )
    {
      *(_WORD *)(v27 + 2) = 1;
      v31 = v27 + 16;
      v29 = v30;
      goto LABEL_33;
    }
    *(_WORD *)(v27 + 2) = 3;
    v53 = (unsigned int)(v7[4] + 7) >> 3;
    *(_DWORD *)(v27 + 24) = v53;
    v54 = (void *)HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1179992648, v53);
    *(_QWORD *)(v27 + 32) = v54;
    if ( !v54 )
    {
      v3 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(a1, 3221225626LL);
      PrintDebugMessage(161, *(_DWORD *)(v27 + 24), 0, 0, 0LL);
      goto LABEL_48;
    }
    memset(v54, 0, *(unsigned int *)(v27 + 24));
    goto LABEL_93;
  }
  if ( *(_WORD *)(v27 + 2) == 1 )
  {
    v31 = v27 + 16;
    goto LABEL_33;
  }
  if ( *(_WORD *)(v27 + 2) != 2 )
  {
    if ( *(_WORD *)(v27 + 2) != 3 )
    {
      v3 = -1072431095;
      LogError(3222536201LL);
      AcpiDiagTraceAmlError(a1, 3222536201LL);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v27 + 2));
      PrintDebugMessage(163, ObjectTypeName, 0, 0, 0LL);
      goto LABEL_48;
    }
LABEL_93:
    v29 = *(_DWORD *)(v27 + 24);
    goto LABEL_94;
  }
  v29 = *(_DWORD *)(v27 + 24) - 1;
LABEL_94:
  v31 = *(_QWORD *)(v27 + 32);
LABEL_33:
  v57 = v31;
  if ( *(_WORD *)(v28 + 2) == 5 )
  {
    v32 = **(_QWORD **)(v28 + 32);
    if ( *(_WORD *)(v32 + 66) == 131 )
    {
      v33 = gpRSAccessHead;
      if ( gpRSAccessHead )
      {
        while ( *(_DWORD *)(v33 + 8) != *(unsigned __int8 *)(*(_QWORD *)(**(_QWORD **)(v32 + 96) + 96LL) + 12LL) )
        {
          v33 = *(_QWORD *)v33;
          if ( !v33 )
            goto LABEL_38;
        }
        if ( v33 && *(_QWORD *)(v33 + 32) && !*(_QWORD *)(v33 + 16) )
        {
LABEL_96:
          v46 = RawFieldAccess(a1, 0LL, v28, v27);
          goto LABEL_63;
        }
      }
    }
  }
LABEL_38:
  v34 = 128;
  if ( v7[7] )
    v34 = v7[9] + 128;
  v3 = 0;
  v35 = HeapAlloc(a1 + 30, 1297237576, v34);
  v36 = v35;
  if ( v35 )
  {
    *(_QWORD *)(v35 + 8) = a1[26].Next;
    a1[26].Next = (_SLIST_ENTRY *)v35;
    *(_DWORD *)v35 = 1330004801;
    *(_QWORD *)(v35 + 24) = ReadFieldObj;
    *(_QWORD *)(v35 + 32) = v28;
    *(_QWORD *)(v35 + 40) = v57;
    *(_QWORD *)(v35 + 48) = v57 + v29;
    v37 = v7[5] & 0xF;
    v38 = 1;
    if ( (unsigned int)(v37 - 1) <= 3 )
      v38 = 1 << (v37 - 1);
    v39 = 8 * v38;
    *(_DWORD *)(v36 + 56) = v38;
    v40 = 8 * v38 + v7[4] + v7[3] - 1;
    if ( v39 == 8 )
      v41 = v40 >> 3;
    else
      v41 = v40 / v39;
    *(_DWORD *)(v36 + 60) = v41;
    v42 = 8 * *(_DWORD *)(v36 + 56);
    if ( v42 >= 0x40 )
      v43 = 0LL;
    else
      v43 = 1LL << v42;
    *(_QWORD *)(v36 + 64) = v43 - 1;
    *(_DWORD *)(v36 + 72) = 8 * *(_DWORD *)(v36 + 56) - v7[3];
    *(_DWORD *)(v36 + 76) = v7[3];
    memmove((void *)(v36 + 96), v7 + 2, (unsigned int)(v7[9] + 32));
  }
  else
  {
    v3 = -1072431102;
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
  }
LABEL_48:
  if ( v3 != 32772 && (_SLIST_ENTRY *)a2 == a1[26].Next )
  {
LABEL_7:
    if ( (*(_DWORD *)(a2 + 16) & 0x20000) != 0 && ghGlobalLock )
      ghGlobalLock(5LL, 1LL, qword_1C00830E8, 0LL, &a1[20].Next + 1);
    if ( (gDebugger & 0xD0) != 0 && (*(_DWORD *)(a2 + 16) & 0x10000) != 0 )
    {
      ConPrintf("=");
      PrintObject(*(_QWORD *)(a2 + 40));
    }
    Next = a1[26].Next;
    v11 = Next - 1;
    a1[26].Next = (_SLIST_ENTRY *)*((_QWORD *)&Next->Next + 1);
    LODWORD(Next[-1].Next) = 0;
    byte_1C0082B28 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v12 = *((_QWORD *)&Next[-1].Next + 1);
    v13 = *(_SLIST_ENTRY **)(v12 + 40);
    for ( i = (_SLIST_ENTRY *)(v12 + 40); v13 != i; v13 = v13->Next )
    {
      if ( Next < v13 )
        break;
    }
    v15 = (_SLIST_ENTRY **)*((_QWORD *)&v13->Next + 1);
    if ( *v15 == v13 )
    {
      *((_QWORD *)&Next->Next + 1) = v15;
      Next->Next = v13;
      *v15 = Next;
      *((_QWORD *)&v13->Next + 1) = Next;
      v16 = Next->Next;
      v17 = (__int64)&Next->Next[-1];
      if ( Next->Next != i )
      {
        Next_high = HIDWORD(v11->Next);
        if ( (_SLIST_ENTRY *)v17 == (_SLIST_ENTRY *)((char *)v11 + Next_high) )
        {
          HIDWORD(v11->Next) = Next_high + *(_DWORD *)(v17 + 4);
          v49 = v16->Next;
          if ( *(&v16->Next->Next + 1) != v16 )
            goto LABEL_78;
          v50 = (_SLIST_ENTRY **)*((_QWORD *)&v16->Next + 1);
          if ( *v50 != v16 )
            goto LABEL_78;
          *v50 = v49;
          *((_QWORD *)&v49->Next + 1) = v50;
        }
      }
      v18 = (_SLIST_ENTRY *)*((_QWORD *)&v11[1].Next + 1);
      v19 = v18 - 1;
      if ( v18 != i )
      {
        v47 = HIDWORD(v19->Next);
        if ( v11 == (_SLIST_ENTRY *)((char *)v19 + v47) )
        {
          HIDWORD(v19->Next) = HIDWORD(v11->Next) + v47;
          v55 = Next->Next;
          if ( *(&Next->Next->Next + 1) != Next )
            goto LABEL_78;
          v56 = (_SLIST_ENTRY **)*((_QWORD *)&Next->Next + 1);
          if ( *v56 != Next )
            goto LABEL_78;
          *v56 = v55;
          v11 = v19;
          *((_QWORD *)&v55->Next + 1) = v56;
        }
      }
      if ( *(_QWORD *)(v12 + 32) > (unsigned __int64)v11 + HIDWORD(v11->Next) )
      {
LABEL_17:
        KeReleaseSpinLock(&gmutHeap, byte_1C0082B28);
        return v3;
      }
      *(_QWORD *)(v12 + 32) = v11;
      v20 = v11 + 1;
      v21 = v20->Next;
      if ( *(&v20->Next->Next + 1) == v20 )
      {
        v22 = (_SLIST_ENTRY **)*((_QWORD *)&v20->Next + 1);
        if ( *v22 == v20 )
        {
          *v22 = v21;
          *((_QWORD *)&v21->Next + 1) = v22;
          goto LABEL_17;
        }
      }
    }
LABEL_78:
    __fastfail(3u);
  }
  return v3;
}
