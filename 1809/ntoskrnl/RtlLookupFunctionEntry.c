/*
 * XREFs of RtlLookupFunctionEntry @ 0x14009DB60
 * Callers:
 *     RtlUnwindEx @ 0x14009DE70 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x1400A0E80 (RtlDispatchException.c)
 *     RtlpSameFunction @ 0x1401850C4 (RtlpSameFunction.c)
 *     RtlRaiseException @ 0x1402EDA30 (RtlRaiseException.c)
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 *     RtlInitializeHistoryTable @ 0x1409D98D4 (RtlInitializeHistoryTable.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x1400A17F0 (RtlpxLookupFunctionTable.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

PRUNTIME_FUNCTION __stdcall RtlLookupFunctionEntry(
        DWORD64 ControlPc,
        PDWORD64 ImageBase,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  unsigned int GlobalHint; // edx
  unsigned int v7; // ecx
  unsigned int *v8; // r10
  unsigned __int64 v9; // r9
  PRUNTIME_FUNCTION result; // rax
  DWORD LocalHint; // edx
  DWORD v12; // r10d
  DWORD64 v13; // r9
  PRUNTIME_FUNCTION FunctionEntry; // r8
  __int64 UnwindData; // rax
  __int64 v16; // rsi
  struct _RUNTIME_FUNCTION *v17; // rbp
  __int64 v18; // r8
  unsigned __int128 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // r11
  struct _RUNTIME_FUNCTION *v23; // r10
  int v24; // r8d
  int i; // r9d
  int v26; // eax
  __int64 Count; // rcx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  int *v31; // rdx
  unsigned __int64 v32; // rdx
  __int128 v33; // [rsp+20h] [rbp-28h] BYREF
  __int64 v34; // [rsp+30h] [rbp-18h]

  if ( !HistoryTable )
    goto LABEL_18;
  if ( HistoryTable->Once )
  {
    HistoryTable->Once = 0;
    v31 = &RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_14055A905];
    result = (PRUNTIME_FUNCTION)*((_QWORD *)v31 + 4);
    if ( result )
    {
      v32 = *((_QWORD *)v31 + 3);
      if ( ControlPc >= v32 + result->BeginAddress && ControlPc < v32 + result->EndAddress )
      {
        *ImageBase = v32;
        return result;
      }
    }
  }
  if ( !HistoryTable->Search )
    goto LABEL_18;
  if ( ControlPc >= qword_14055A910
    || ControlPc < qword_14055A908
    || (GlobalHint = HistoryTable->GlobalHint, v7 = GlobalHint, GlobalHint >= RtlpUnwindHistoryTable[0]) )
  {
LABEL_11:
    if ( ControlPc >= HistoryTable->LowAddress && ControlPc < HistoryTable->HighAddress )
    {
      LocalHint = HistoryTable->LocalHint;
      v12 = LocalHint;
      if ( LocalHint < HistoryTable->Count )
      {
        while ( 1 )
        {
          v13 = HistoryTable->Entry[v12].ImageBase;
          FunctionEntry = HistoryTable->Entry[v12].FunctionEntry;
          if ( ControlPc >= v13 + FunctionEntry->BeginAddress && ControlPc < v13 + FunctionEntry->EndAddress )
            break;
          if ( ++v12 >= HistoryTable->Count )
            goto LABEL_18;
        }
        HistoryTable->LocalHint = LocalHint + 1;
        *ImageBase = v13;
        UnwindData = FunctionEntry->UnwindData;
        if ( (UnwindData & 1) == 0 )
          return FunctionEntry;
        FunctionEntry = (PRUNTIME_FUNCTION)(v13 + UnwindData - 1);
        if ( v13 > 0x7FFFFFFEFFFFLL || ((unsigned __int8)FunctionEntry & 3) == 0 )
          return FunctionEntry;
        goto LABEL_56;
      }
    }
LABEL_18:
    if ( ControlPc < *(&xmmword_140559020 + 1) || ControlPc >= *(&xmmword_140559020 + 1) + (unsigned int)qword_140559030 )
    {
      v16 = RtlpxLookupFunctionTable(ControlPc, &v33);
    }
    else
    {
      v16 = xmmword_140559020;
      v33 = *(_OWORD *)&xmmword_140559020;
      v34 = qword_140559030;
    }
    v17 = 0LL;
    if ( v16 )
    {
      v18 = *((_QWORD *)&v33 + 1);
      v19 = HIDWORD(v34) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
      *ImageBase = *((_QWORD *)&v33 + 1);
      v20 = *((_QWORD *)&v19 + 1) >> 3;
      if ( (_DWORD)v20 )
      {
        v21 = ControlPc - v18;
        v22 = *(unsigned int *)(v16 + 12LL * (unsigned int)(v20 - 1));
        v23 = (struct _RUNTIME_FUNCTION *)(v16 + 12LL * (unsigned int)(v20 - 1));
        if ( v21 < v22 )
        {
          v24 = v20 - 2;
          for ( i = 0; v24 >= i; LODWORD(v22) = v23->BeginAddress )
          {
            v26 = (v24 + i) >> 1;
            v23 = (struct _RUNTIME_FUNCTION *)(v16 + 12LL * v26);
            if ( v21 >= v23->BeginAddress )
            {
              LODWORD(v22) = v23->BeginAddress;
              if ( v21 < v23[1].BeginAddress )
                break;
              i = v26 + 1;
            }
            else
            {
              v24 = v26 - 1;
            }
          }
        }
        if ( v21 >= (unsigned int)v22 && v21 < v23->EndAddress )
          v17 = v23;
      }
      if ( v17 )
      {
        if ( HistoryTable )
        {
          if ( !HistoryTable->Search )
          {
            Count = HistoryTable->Count;
            if ( (unsigned int)Count < 0xC )
            {
              HistoryTable->Count = Count + 1;
              HistoryTable->Entry[Count].ImageBase = *ImageBase;
              HistoryTable->Entry[(unsigned int)Count].FunctionEntry = v17;
              v28 = *ImageBase + v17->BeginAddress;
              v29 = *ImageBase + v17->EndAddress;
              if ( v28 < HistoryTable->LowAddress )
                HistoryTable->LowAddress = v28;
              if ( v29 > HistoryTable->HighAddress )
                HistoryTable->HighAddress = v29;
            }
          }
        }
      }
    }
    if ( !v17 )
      return v17;
    v30 = v17->UnwindData;
    if ( (v30 & 1) == 0 )
      return v17;
    v17 = (struct _RUNTIME_FUNCTION *)(v30 + *ImageBase - 1);
    if ( *ImageBase > 0x7FFFFFFEFFFFLL || ((unsigned __int8)v17 & 3) == 0 )
      return v17;
LABEL_56:
    ExRaiseDatatypeMisalignment();
  }
  while ( 1 )
  {
    v8 = *(unsigned int **)&RtlpUnwindHistoryTable[4 * v7 + 8];
    v9 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * v7 + 6];
    if ( ControlPc >= v9 + *v8 && ControlPc < v9 + v8[1] )
      break;
    if ( ++v7 >= RtlpUnwindHistoryTable[0] )
      goto LABEL_11;
  }
  result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * v7 + 8];
  HistoryTable->GlobalHint = GlobalHint + 1;
  *ImageBase = v9;
  return result;
}
