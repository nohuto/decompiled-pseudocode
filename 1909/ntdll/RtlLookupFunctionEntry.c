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
  __int64 v7; // r8
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v8; // rsi
  unsigned __int128 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r11
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v13; // r10
  int v14; // r8d
  int i; // r9d
  int v16; // eax
  __int64 v17; // rax
  PRUNTIME_FUNCTION result; // rax
  DWORD LocalHint; // r8d
  DWORD v20; // edx
  DWORD64 v21; // r9
  PRUNTIME_FUNCTION FunctionEntry; // rcx
  __int64 UnwindInfoAddress; // rax
  __int64 Count; // rcx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned int GlobalHint; // ecx
  unsigned int v28; // edx
  unsigned int *v29; // r9
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // rdx
  __int128 v32; // [rsp+20h] [rbp-28h] BYREF
  __int64 v33; // [rsp+30h] [rbp-18h]

  if ( !HistoryTable )
    goto LABEL_2;
  if ( HistoryTable->Once )
  {
    HistoryTable->Once = 0;
    result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_18017A415 + 8];
    if ( result )
    {
      v31 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_18017A415 + 6];
      if ( ControlPc >= v31 + result->BeginAddress && ControlPc < v31 + result->EndAddress )
      {
        *ImageBase = v31;
        return result;
      }
    }
  }
  if ( !HistoryTable->Search )
    goto LABEL_2;
  if ( ControlPc < qword_18017A418
    || ControlPc >= qword_18017A420
    || (GlobalHint = HistoryTable->GlobalHint, v28 = GlobalHint, GlobalHint >= RtlpUnwindHistoryTable[0]) )
  {
LABEL_26:
    if ( ControlPc >= HistoryTable->LowAddress && ControlPc < HistoryTable->HighAddress )
    {
      LocalHint = HistoryTable->LocalHint;
      v20 = LocalHint;
      if ( LocalHint < HistoryTable->Count )
      {
        while ( 1 )
        {
          v21 = HistoryTable->Entry[v20].ImageBase;
          FunctionEntry = HistoryTable->Entry[v20].FunctionEntry;
          if ( ControlPc >= v21 + FunctionEntry->BeginAddress && ControlPc < v21 + FunctionEntry->EndAddress )
            break;
          if ( ++v20 >= HistoryTable->Count )
            goto LABEL_2;
        }
        HistoryTable->LocalHint = LocalHint + 1;
        *ImageBase = v21;
        UnwindInfoAddress = FunctionEntry->UnwindInfoAddress;
        if ( (UnwindInfoAddress & 1) != 0 )
          return (PRUNTIME_FUNCTION)(UnwindInfoAddress + v21 - 1);
        return FunctionEntry;
      }
    }
LABEL_2:
    if ( ControlPc < *((_QWORD *)&xmmword_18017A500 + 1)
      || ControlPc >= *((_QWORD *)&xmmword_18017A500 + 1) + (unsigned __int64)(unsigned int)qword_18017A510 )
    {
      v6 = RtlpxLookupFunctionTable(ControlPc, &v32);
    }
    else
    {
      v6 = xmmword_18017A500;
      v32 = xmmword_18017A500;
      v33 = qword_18017A510;
    }
    if ( v6 )
    {
      v7 = *((_QWORD *)&v32 + 1);
      v8 = 0LL;
      v9 = HIDWORD(v33) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
      *ImageBase = *((_QWORD *)&v32 + 1);
      v10 = *((_QWORD *)&v9 + 1) >> 3;
      if ( (_DWORD)v10 )
      {
        v11 = ControlPc - v7;
        v12 = *(unsigned int *)(v6 + 12LL * (unsigned int)(v10 - 1));
        v13 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(v6 + 12LL * (unsigned int)(v10 - 1));
        if ( v11 < v12 )
        {
          v14 = v10 - 2;
          for ( i = 0; v14 >= i; LODWORD(v12) = v13->BeginAddress )
          {
            v16 = (v14 + i) >> 1;
            v13 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)(v6 + 12LL * v16);
            if ( v11 < v13->BeginAddress )
            {
              v14 = v16 - 1;
            }
            else
            {
              LODWORD(v12) = v13->BeginAddress;
              if ( v11 < v13[1].BeginAddress )
                break;
              i = v16 + 1;
            }
          }
        }
        if ( v11 >= (unsigned int)v12 && v11 < v13->EndAddress )
          v8 = v13;
      }
    }
    else
    {
      v8 = (struct _IMAGE_RUNTIME_FUNCTION_ENTRY *)RtlpLookupDynamicFunctionEntry(ControlPc, ImageBase);
    }
    if ( v8 )
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
            HistoryTable->Entry[(unsigned int)Count].FunctionEntry = v8;
            v25 = *ImageBase + v8->BeginAddress;
            v26 = *ImageBase + v8->EndAddress;
            if ( v25 < HistoryTable->LowAddress )
              HistoryTable->LowAddress = v25;
            if ( v26 > HistoryTable->HighAddress )
              HistoryTable->HighAddress = v26;
          }
        }
      }
      v17 = v8->UnwindInfoAddress;
      if ( (v17 & 1) != 0 )
        return (PRUNTIME_FUNCTION)(v17 + *ImageBase - 1);
    }
    return v8;
  }
  while ( 1 )
  {
    v29 = *(unsigned int **)&RtlpUnwindHistoryTable[4 * v28 + 8];
    v30 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * v28 + 6];
    if ( ControlPc >= v30 + *v29 && ControlPc < v30 + v29[1] )
      break;
    if ( ++v28 >= RtlpUnwindHistoryTable[0] )
      goto LABEL_26;
  }
  result = *(PRUNTIME_FUNCTION *)&RtlpUnwindHistoryTable[4 * v28 + 8];
  HistoryTable->GlobalHint = GlobalHint + 1;
  *ImageBase = v30;
  return result;
}
