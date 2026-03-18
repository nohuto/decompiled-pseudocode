/*
 * XREFs of HeapAlloc @ 0x1C00088C0
 * Callers:
 *     ParseString @ 0x1C00022CC (ParseString.c)
 *     AsyncEvalObject @ 0x1C0005370 (AsyncEvalObject.c)
 *     CreateNameSpaceObject @ 0x1C0006190 (CreateNameSpaceObject.c)
 *     ParseCall @ 0x1C00065E0 (ParseCall.c)
 *     ParseTerm @ 0x1C0006EE0 (ParseTerm.c)
 *     ParseScope @ 0x1C0008310 (ParseScope.c)
 *     IfElse @ 0x1C00096F0 (IfElse.c)
 *     AccFieldUnit @ 0x1C0009B30 (AccFieldUnit.c)
 *     DupObjData @ 0x1C000A090 (DupObjData.c)
 *     ParseAcquire @ 0x1C000A350 (ParseAcquire.c)
 *     NewObjData @ 0x1C000A678 (NewObjData.c)
 *     WriteObject @ 0x1C000A8E0 (WriteObject.c)
 *     While @ 0x1C000ACB0 (While.c)
 *     Index @ 0x1C000ADE0 (Index.c)
 *     Buffer @ 0x1C000B020 (Buffer.c)
 *     InitMutex @ 0x1C000FFF8 (InitMutex.c)
 *     FindNSObj @ 0x1C0013B90 (FindNSObj.c)
 *     Package @ 0x1C0020DF0 (Package.c)
 *     PushCall @ 0x1C0021414 (PushCall.c)
 *     Field @ 0x1C00215D0 (Field.c)
 *     ParseField @ 0x1C00217F0 (ParseField.c)
 *     ParseObjName @ 0x1C0021A7C (ParseObjName.c)
 *     ParsePackage @ 0x1C0021BD0 (ParsePackage.c)
 *     ParseOpcode @ 0x1C0022000 (ParseOpcode.c)
 *     PushScope @ 0x1C00224A8 (PushScope.c)
 *     WriteField @ 0x1C00225A0 (WriteField.c)
 *     PushFrame @ 0x1C00227C0 (PushFrame.c)
 *     Processor @ 0x1C0022D20 (Processor.c)
 *     NewObjOwner @ 0x1C0023018 (NewObjOwner.c)
 *     IndexField @ 0x1C00231D0 (IndexField.c)
 *     PowerRes @ 0x1C0023590 (PowerRes.c)
 *     ReadField @ 0x1C0023DF0 (ReadField.c)
 *     PushAccFieldObj @ 0x1C0024724 (PushAccFieldObj.c)
 *     Method @ 0x1C00262E0 (Method.c)
 *     WriteFieldLoop @ 0x1C0026A60 (WriteFieldLoop.c)
 *     PushTerm @ 0x1C0028534 (PushTerm.c)
 *     CreateXField @ 0x1C0028790 (CreateXField.c)
 *     OpRegion @ 0x1C0029440 (OpRegion.c)
 *     IncDec @ 0x1C0029A90 (IncDec.c)
 *     NewNameSpaceObject @ 0x1C002B378 (NewNameSpaceObject.c)
 *     Simulator_Copy_Arguments @ 0x1C00615A8 (Simulator_Copy_Arguments.c)
 *     LoadFieldUnitDDB @ 0x1C00648AC (LoadFieldUnitDDB.c)
 *     BankField @ 0x1C0064AD0 (BankField.c)
 *     InitEvent @ 0x1C0064E60 (InitEvent.c)
 *     RawFieldAccess @ 0x1C0065834 (RawFieldAccess.c)
 *     Concat @ 0x1C00666C0 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C00669C0 (ConcatenateResTemplate.c)
 *     MidString @ 0x1C00677B0 (MidString.c)
 *     ToDecStr @ 0x1C00682A0 (ToDecStr.c)
 *     ToHexStr @ 0x1C0068670 (ToHexStr.c)
 *     ConvertToBuffer @ 0x1C0068CD8 (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C0068EAC (ConvertToString.c)
 *     ParseFieldConnection @ 0x1C0069484 (ParseFieldConnection.c)
 *     AMLIInitialize @ 0x1C00B8B2C (AMLIInitialize.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C00BC90C (Simulator_NotifyTablesAreLoaded.c)
 * Callees:
 *     NewGlobalHeap @ 0x1C0023C48 (NewGlobalHeap.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall HeapAlloc(struct _SLIST_ENTRY *a1, int a2, unsigned int a3)
{
  __int64 v3; // r14
  unsigned int v4; // eax
  int v5; // edi
  __int64 Next; // rbx
  struct _SLIST_ENTRY *v8; // r15
  unsigned int v9; // ebp
  KIRQL v10; // al
  PSLIST_ENTRY v11; // rsi
  struct _SLIST_ENTRY *v12; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rdx
  _SLIST_ENTRY **v17; // r9
  unsigned int v18; // eax
  _SLIST_ENTRY **v19; // rax
  _SLIST_ENTRY *v20; // rcx
  _SLIST_ENTRY *v21; // r8
  _SLIST_ENTRY *v22; // r10
  __int64 v23; // rcx
  _SLIST_ENTRY **v24; // rax
  __int64 v25; // r10
  __int64 v26; // r11
  __int64 v27; // rcx
  int v28; // r13d
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdi
  char *v33; // rax
  int v34; // eax
  _SLIST_ENTRY *v35; // rcx
  _SLIST_ENTRY **v36; // rax
  _SLIST_ENTRY *v37; // rcx
  _SLIST_ENTRY **v38; // rax
  _QWORD *v39; // rdx
  __int64 v40; // rcx
  _QWORD *v41; // rax
  struct _SLIST_ENTRY *v43; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = a3 + 16;
  v5 = a2;
  Next = 0LL;
  v8 = 0LL;
  if ( a3 + 16 >= a3 )
  {
    if ( v4 < 0x20 )
      v4 = 32;
    if ( v4 + 7 >= v4 )
    {
      v9 = (v4 + 7) & 0xFFFFFFF8;
      v10 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      v43 = a1;
      v11 = a1;
      NewIrql = v10;
      if ( !a1 )
        goto LABEL_38;
      v12 = a1;
      while ( 1 )
      {
        v8 = v12;
        Next = *((_QWORD *)&v11[2].Next + 1) - 16LL;
        if ( v12 == (struct _SLIST_ENTRY *)(*((_QWORD *)&v11[2].Next + 1) - 40LL) )
        {
LABEL_8:
          Next = 0LL;
        }
        else
        {
          while ( v9 > *(_DWORD *)(Next + 4) )
          {
            Next = *(_QWORD *)(Next + 16) - 16LL;
            if ( v12 == (struct _SLIST_ENTRY *)(Next - 24) )
              goto LABEL_8;
          }
        }
        if ( Next )
          break;
        if ( v9 <= *((_DWORD *)&v11->Next + 2) - LODWORD(v11[2].Next) )
        {
          Next = (__int64)v11[2].Next;
          v11[2].Next = (_SLIST_ENTRY *)(Next + v9);
          *(_DWORD *)(Next + 4) = v9;
          goto LABEL_12;
        }
        v12 = (struct _SLIST_ENTRY *)*((_QWORD *)&v11[1].Next + 1);
        v43 = v12;
        v11 = v12;
        if ( !v12 )
          goto LABEL_12;
      }
      v14 = *(_QWORD *)(Next + 16);
      if ( *(_QWORD *)(v14 + 8) == Next + 16 )
      {
        v15 = *(_QWORD **)(Next + 24);
        if ( *v15 == Next + 16 )
        {
          *v15 = v14;
          *(_QWORD *)(v14 + 8) = v15;
          if ( *(unsigned int *)(Next + 4) < (unsigned __int64)v9 + 32 )
            goto LABEL_12;
          v16 = Next + v9;
          v17 = &v11[2].Next + 1;
          *(_DWORD *)v16 = 0;
          v18 = *(_DWORD *)(Next + 4) - v9;
          *(_QWORD *)(v16 + 8) = v11;
          *(_DWORD *)(v16 + 4) = v18;
          *(_DWORD *)(Next + 4) = v9;
          v19 = (_SLIST_ENTRY **)*((_QWORD *)&v11[2].Next + 1);
          if ( v19 != &v11[2].Next + 1 )
          {
            do
            {
              if ( v16 + 16 < (unsigned __int64)v19 )
                break;
              v19 = (_SLIST_ENTRY **)*v19;
            }
            while ( v19 != v17 );
          }
          v20 = v19[1];
          v21 = (_SLIST_ENTRY *)(v16 + 16);
          if ( (_SLIST_ENTRY **)v20->Next == v19 )
          {
            *(_QWORD *)(v16 + 24) = v20;
            v21->Next = (_SLIST_ENTRY *)v19;
            v20->Next = v21;
            v19[1] = v21;
            v22 = v21->Next;
            v23 = (__int64)&v21->Next[-1];
            if ( (_SLIST_ENTRY **)v21->Next != v17 )
            {
              v26 = *(unsigned int *)(v16 + 4);
              if ( v23 == v16 + v26 )
              {
                *(_DWORD *)(v16 + 4) = v26 + *(_DWORD *)(v23 + 4);
                v35 = v22->Next;
                if ( *(&v22->Next->Next + 1) != v22 )
                  goto LABEL_56;
                v36 = (_SLIST_ENTRY **)*((_QWORD *)&v22->Next + 1);
                if ( *v36 != v22 )
                  goto LABEL_56;
                *v36 = v35;
                *((_QWORD *)&v35->Next + 1) = v36;
              }
            }
            v24 = *(_SLIST_ENTRY ***)(v16 + 24);
            v25 = (__int64)(v24 - 2);
            if ( v24 != v17 )
            {
              v27 = *(unsigned int *)(v25 + 4);
              if ( v16 == v25 + v27 )
              {
                *(_DWORD *)(v25 + 4) = *(_DWORD *)(v16 + 4) + v27;
                v37 = v21->Next;
                if ( *(&v21->Next->Next + 1) != v21 )
                  goto LABEL_56;
                v38 = *(_SLIST_ENTRY ***)(v16 + 24);
                if ( *v38 != v21 )
                  goto LABEL_56;
                *v38 = v37;
                v16 = v25;
                *((_QWORD *)&v37->Next + 1) = v38;
              }
            }
            if ( v11[2].Next > (_SLIST_ENTRY *)(v16 + *(unsigned int *)(v16 + 4)) )
              goto LABEL_12;
            v11[2].Next = (_SLIST_ENTRY *)v16;
            v39 = (_QWORD *)(v16 + 16);
            v40 = *v39;
            if ( *(_QWORD **)(*v39 + 8LL) == v39 )
            {
              v41 = (_QWORD *)v39[1];
              if ( (_QWORD *)*v41 == v39 )
              {
                *v41 = v40;
                *(_QWORD *)(v40 + 8) = v41;
LABEL_12:
                if ( Next )
                {
LABEL_13:
                  *(_DWORD *)Next = v5;
                  *(_QWORD *)(Next + 8) = v11;
                  memset((void *)(Next + 16), 0, v9 - 16LL);
                  goto LABEL_14;
                }
LABEL_38:
                if ( a1 == (struct _SLIST_ENTRY *)gpheapGlobal )
                {
                  if ( v9 + 56 > (unsigned int)gdwGlobalHeapBlkSize )
                  {
                    if ( (unsigned int)gdwGlobalHeapBlkSize * (v9 / (unsigned int)gdwGlobalHeapBlkSize + 1) > 0x800000 )
                    {
                      if ( v9 > 0x800000 )
                        goto LABEL_14;
                      LODWORD(gdwGlobalHeapBlkSize) = v9;
                    }
                    else
                    {
                      LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize
                                                    * (v9 / (unsigned int)gdwGlobalHeapBlkSize + 1);
                    }
                  }
                  v34 = NewGlobalHeap(&v43);
                  v11 = v43;
                  v28 = v34;
                }
                else
                {
                  ++dword_1C0080B54;
                  v28 = 0;
                  v11 = ExpInterlockedPopEntrySList(&AMLIContextLookAsideList);
                  if ( !v11 )
                  {
                    ++dword_1C0080B58;
                    v11 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C0080B70)(
                                          (unsigned int)dword_1C0080B64,
                                          (unsigned int)dword_1C0080B6C,
                                          (unsigned int)dword_1C0080B68);
                  }
                  if ( v11 )
                  {
                    v32 = (unsigned int)gdwCtxtBlkSize;
                    memset(v11, 0, (unsigned int)gdwCtxtBlkSize);
                    v33 = (char *)v11 + v32;
                    LODWORD(v11->Next) = 1346454856;
                    v5 = a2;
                    *((_QWORD *)&v11->Next + 1) = v33;
                    v11[2].Next = (PSLIST_ENTRY)((char *)v11 + 56);
                    v11[3].Next = (PSLIST_ENTRY)((char *)v11 + 40);
                    *((_QWORD *)&v11[2].Next + 1) = (char *)v11 + 40;
                  }
                  else
                  {
                    v28 = -1073741670;
                    LogError(3221225626LL, v29, v30, v31);
                    AcpiDiagTraceAmlError(0LL, 3221225626LL);
                    PrintDebugMessage(111, 0, 0, 0, 0LL);
                  }
                }
                if ( !v28 )
                {
                  v11[1].Next = a1;
                  *((_QWORD *)&v8[1].Next + 1) = v11;
                  Next = (__int64)v11[2].Next;
                  v11[2].Next = (_SLIST_ENTRY *)(Next + v9);
                  *(_DWORD *)(Next + 4) = v9;
                  goto LABEL_13;
                }
LABEL_14:
                KeReleaseSpinLock(&gmutHeap, NewIrql);
                if ( Next )
                  return Next + 16;
                return v3;
              }
            }
          }
        }
      }
LABEL_56:
      __fastfail(3u);
    }
  }
  return v3;
}
