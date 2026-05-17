/*
 * XREFs of RtlLookupFunctionEntry @ 0x180006A90
 * Callers:
 *     RtlInitializeHistoryTable @ 0x18000329C (RtlInitializeHistoryTable.c)
 *     RtlDispatchException @ 0x1800048E0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180005BF0 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x1800087D0 (RtlRaiseException.c)
 *     _invalid_parameter @ 0x18008FDE8 (_invalid_parameter.c)
 *     __report_gsfailure @ 0x18008FF10 (__report_gsfailure.c)
 * Callees:
 *     RtlpLookupDynamicFunctionEntry @ 0x18000301C (RtlpLookupDynamicFunctionEntry.c)
 *     RtlpxLookupFunctionTable @ 0x180006E00 (RtlpxLookupFunctionTable.c)
 */

PRUNTIME_FUNCTION __stdcall RtlLookupFunctionEntry(
        ULONG64 ControlPc,
        PULONG64 ImageBase,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  unsigned int GlobalHint; // ecx
  unsigned int v7; // r9d
  unsigned int *v8; // r8
  unsigned __int64 v9; // rdx
  PRUNTIME_FUNCTION result; // rax
  __int64 v11; // rsi
  __int64 v12; // r8
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v13; // rbp
  unsigned __int128 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // r11
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v18; // r10
  int v19; // r8d
  int i; // r9d
  int v21; // eax
  __int64 Count; // rcx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  DWORD LocalHint; // edx
  DWORD v27; // r9d
  DWORD64 v28; // r8
  PRUNTIME_FUNCTION FunctionEntry; // rcx
  __int64 UnwindInfoAddress; // rax
  unsigned __int64 v31; // rdx
  __int128 v32; // [rsp+20h] [rbp-28h] BYREF
  __int64 v33; // [rsp+30h] [rbp-18h]

  if ( !HistoryTable )
    goto LABEL_10;
  if ( HistoryTable->Once )
  {
    HistoryTable->Once = 0;
    result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_180178415 + 8];
    if ( result )
    {
      v31 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_180178415 + 6];
      if ( ControlPc >= v31 + result->BeginAddress && ControlPc < v31 + result->EndAddress )
      {
        *ImageBase = v31;
        return result;
      }
    }
  }
  if ( !HistoryTable->Search )
    goto LABEL_10;
  if ( ControlPc < qword_180178418
    || ControlPc >= qword_180178420
    || (GlobalHint = HistoryTable->GlobalHint, v7 = GlobalHint, GlobalHint >= RtlpUnwindHistoryTable[0]) )
  {
LABEL_35:
    if ( ControlPc >= HistoryTable->LowAddress && ControlPc < HistoryTable->HighAddress )
    {
      LocalHint = HistoryTable->LocalHint;
      v27 = LocalHint;
      if ( LocalHint < HistoryTable->Count )
      {
        while ( 1 )
        {
          v28 = HistoryTable->Entry[v27].ImageBase;
          FunctionEntry = HistoryTable->Entry[v27].FunctionEntry;
          if ( ControlPc >= v28 + FunctionEntry->BeginAddress && ControlPc < v28 + FunctionEntry->EndAddress )
            break;
          if ( ++v27 >= HistoryTable->Count )
            goto LABEL_10;
        }
        HistoryTable->LocalHint = LocalHint + 1;
        *ImageBase = v28;
        UnwindInfoAddress = FunctionEntry->UnwindInfoAddress;
        if ( (UnwindInfoAddress & 1) != 0 )
          return (PRUNTIME_FUNCTION)(UnwindInfoAddress + v28 - 1);
        return FunctionEntry;
      }
    }
LABEL_10:
    if ( ControlPc < *((_QWORD *)&xmmword_180178500 + 1)
      || ControlPc >= *((_QWORD *)&xmmword_180178500 + 1) + (unsigned __int64)(unsigned int)qword_180178510 )
    {
      v11 = RtlpxLookupFunctionTable(ControlPc, &v32);
    }
    else
    {
      v11 = xmmword_180178500;
      v32 = xmmword_180178500;
      v33 = qword_180178510;
    }
    if ( v11 )
    {
      v12 = *((_QWORD *)&v32 + 1);
      v13 = 0LL;
      v14 = HIDWORD(v33) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
      *ImageBase = *((_QWORD *)&v32 + 1);
      v15 = *((_QWORD *)&v14 + 1) >> 3;
      if ( (_DWORD)v15 )
      {
        v16 = ControlPc - v12;
        v17 = *(unsigned int *)(v11 + 12LL * (unsigned int)(v15 - 1));
        v18 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(v11 + 12LL * (unsigned int)(v15 - 1));
        if ( v16 < v17 )
        {
          v19 = v15 - 2;
          for ( i = 0; v19 >= i; LODWORD(v17) = v18->BeginAddress )
          {
            v21 = (v19 + i) >> 1;
            v18 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(v11 + 12LL * v21);
            if ( v16 >= v18->BeginAddress )
            {
              LODWORD(v17) = v18->BeginAddress;
              if ( v16 < v18[1].BeginAddress )
                break;
              i = v21 + 1;
            }
            else
            {
              v19 = v21 - 1;
            }
          }
        }
        if ( v16 >= (unsigned int)v17 && v16 < v18->EndAddress )
          v13 = v18;
      }
    }
    else
    {
      v13 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)RtlpLookupDynamicFunctionEntry(ControlPc, ImageBase);
    }
    if ( v13 )
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
            HistoryTable->Entry[(unsigned int)Count].FunctionEntry = v13;
            v23 = *ImageBase + v13->BeginAddress;
            v24 = *ImageBase + v13->EndAddress;
            if ( v23 < HistoryTable->LowAddress )
              HistoryTable->LowAddress = v23;
            if ( v24 > HistoryTable->HighAddress )
              HistoryTable->HighAddress = v24;
          }
        }
      }
      v25 = v13->UnwindInfoAddress;
      if ( (v25 & 1) != 0 )
        return (PRUNTIME_FUNCTION)(v25 + *ImageBase - 1);
    }
    return v13;
  }
  while ( 1 )
  {
    v8 = *(unsigned int **)&RtlpUnwindHistoryTable[4 * v7 + 8];
    v9 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * v7 + 6];
    if ( ControlPc >= v9 + *v8 && ControlPc < v9 + v8[1] )
      break;
    if ( ++v7 >= RtlpUnwindHistoryTable[0] )
      goto LABEL_35;
  }
  result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * v7 + 8];
  HistoryTable->GlobalHint = GlobalHint + 1;
  *ImageBase = v9;
  return result;
}
