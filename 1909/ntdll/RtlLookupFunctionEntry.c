/*
 * XREFs of RtlLookupFunctionEntry @ 0x18001E290
 * Callers:
 *     RtlUnwindEx @ 0x18001D490 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x18006A740 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x18006A8C0 (RtlDispatchException.c)
 *     RtlInitializeHistoryTable @ 0x180078164 (RtlInitializeHistoryTable.c)
 *     _invalid_parameter @ 0x18008CD78 (_invalid_parameter.c)
 *     __report_gsfailure @ 0x18008CEA0 (__report_gsfailure.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x18001E620 (RtlpxLookupFunctionTable.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x180079FE4 (RtlpLookupDynamicFunctionEntry.c)
 */

PRUNTIME_FUNCTION __stdcall RtlLookupFunctionEntry(
        ULONG64 ControlPc,
        PULONG64 ImageBase,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  __int64 v6; // rdi
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v7; // rsi
  unsigned int v8; // edx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r11
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v11; // r10
  int v12; // r8d
  int i; // r9d
  int v14; // eax
  __int64 v15; // rax
  PRUNTIME_FUNCTION result; // rax
  DWORD LocalHint; // r8d
  DWORD v18; // edx
  DWORD64 v19; // r9
  PRUNTIME_FUNCTION FunctionEntry; // rcx
  __int64 UnwindInfoAddress; // rax
  __int64 Count; // rcx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned int GlobalHint; // ecx
  unsigned int v26; // edx
  unsigned int *v27; // r9
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // [rsp+28h] [rbp-20h]
  unsigned int v31; // [rsp+34h] [rbp-14h]

  if ( !HistoryTable )
    goto LABEL_2;
  if ( HistoryTable->Once )
  {
    HistoryTable->Once = 0;
    result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_18017A415 + 8];
    if ( result )
    {
      v29 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_18017A415 + 6];
      if ( ControlPc >= v29 + result->BeginAddress && ControlPc < v29 + result->EndAddress )
      {
        *ImageBase = v29;
        return result;
      }
    }
  }
  if ( !HistoryTable->Search )
    goto LABEL_2;
  if ( ControlPc < qword_18017A418
    || ControlPc >= qword_18017A420
    || (GlobalHint = HistoryTable->GlobalHint, v26 = GlobalHint, GlobalHint >= RtlpUnwindHistoryTable[0]) )
  {
LABEL_26:
    if ( ControlPc >= HistoryTable->LowAddress && ControlPc < HistoryTable->HighAddress )
    {
      LocalHint = HistoryTable->LocalHint;
      v18 = LocalHint;
      if ( LocalHint < HistoryTable->Count )
      {
        while ( 1 )
        {
          v19 = HistoryTable->Entry[v18].ImageBase;
          FunctionEntry = HistoryTable->Entry[v18].FunctionEntry;
          if ( ControlPc >= v19 + FunctionEntry->BeginAddress && ControlPc < v19 + FunctionEntry->EndAddress )
            break;
          if ( ++v18 >= HistoryTable->Count )
            goto LABEL_2;
        }
        HistoryTable->LocalHint = LocalHint + 1;
        *ImageBase = v19;
        UnwindInfoAddress = FunctionEntry->UnwindInfoAddress;
        if ( (UnwindInfoAddress & 1) != 0 )
          return (PRUNTIME_FUNCTION)(UnwindInfoAddress + v19 - 1);
        return FunctionEntry;
      }
    }
LABEL_2:
    if ( ControlPc < *((_QWORD *)&xmmword_18017A500 + 1)
      || ControlPc >= *((_QWORD *)&xmmword_18017A500 + 1) + (unsigned __int64)(unsigned int)qword_18017A510 )
    {
      v6 = RtlpxLookupFunctionTable((PVOID)ControlPc);
    }
    else
    {
      v30 = *((_QWORD *)&xmmword_18017A500 + 1);
      v6 = xmmword_18017A500;
      v31 = HIDWORD(qword_18017A510);
    }
    if ( v6 )
    {
      v7 = 0LL;
      *ImageBase = v30;
      v8 = v31 / 0xC;
      if ( v31 / 0xC )
      {
        v9 = ControlPc - v30;
        v10 = *(unsigned int *)(v6 + 12LL * (v8 - 1));
        v11 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(v6 + 12LL * (v8 - 1));
        if ( v9 < v10 )
        {
          v12 = v8 - 2;
          for ( i = 0; v12 >= i; LODWORD(v10) = v11->BeginAddress )
          {
            v14 = (v12 + i) >> 1;
            v11 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(v6 + 12LL * v14);
            if ( v9 < v11->BeginAddress )
            {
              v12 = v14 - 1;
            }
            else
            {
              LODWORD(v10) = v11->BeginAddress;
              if ( v9 < v11[1].BeginAddress )
                break;
              i = v14 + 1;
            }
          }
        }
        if ( v9 >= (unsigned int)v10 && v9 < v11->EndAddress )
          v7 = v11;
      }
    }
    else
    {
      v7 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)RtlpLookupDynamicFunctionEntry(ControlPc, ImageBase);
    }
    if ( v7 )
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
            HistoryTable->Entry[(unsigned int)Count].FunctionEntry = v7;
            v23 = *ImageBase + v7->BeginAddress;
            v24 = *ImageBase + v7->EndAddress;
            if ( v23 < HistoryTable->LowAddress )
              HistoryTable->LowAddress = v23;
            if ( v24 > HistoryTable->HighAddress )
              HistoryTable->HighAddress = v24;
          }
        }
      }
      v15 = v7->UnwindInfoAddress;
      if ( (v15 & 1) != 0 )
        return (PRUNTIME_FUNCTION)(v15 + *ImageBase - 1);
    }
    return v7;
  }
  while ( 1 )
  {
    v27 = *(unsigned int **)&RtlpUnwindHistoryTable[4 * v26 + 8];
    v28 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * v26 + 6];
    if ( ControlPc >= v28 + *v27 && ControlPc < v28 + v27[1] )
      break;
    if ( ++v26 >= RtlpUnwindHistoryTable[0] )
      goto LABEL_26;
  }
  result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * v26 + 8];
  HistoryTable->GlobalHint = GlobalHint + 1;
  *ImageBase = v28;
  return result;
}
