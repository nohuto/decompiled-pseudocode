/*
 * XREFs of SmscpParseArgs @ 0x140002474
 * Callers:
 *     SmscMain @ 0x140001234 (SmscMain.c)
 * Callees:
 *     SmpGetFirstSessionId @ 0x1400026F8 (SmpGetFirstSessionId.c)
 *     SmscpSetupSharedSpace @ 0x140002724 (SmscpSetupSharedSpace.c)
 *     SmscpIsDebuggerPresent @ 0x140013DF0 (SmscpIsDebuggerPresent.c)
 */

__int64 __fastcall SmscpParseArgs(unsigned int a1, __int64 a2, _DWORD *a3, struct _UNICODE_STRING *a4)
{
  UNICODE_STRING *v4; // r14
  unsigned int v9; // ebx
  unsigned int v10; // eax
  __int64 result; // rax
  int FirstSessionId; // eax
  int v13; // edx
  unsigned int v14; // r8d
  ULONG v15; // ecx
  int v16; // eax
  int Length; // ecx
  WCHAR *Heap; // rax
  NTSTATUS v19; // eax
  const UNICODE_STRING *v20; // rdx
  struct _UNICODE_STRING *v21; // rcx
  _QWORD *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rbx
  PCWSTR *v26; // rsi
  __int64 v27; // r14
  ULONG BufferSize; // ebx
  unsigned __int64 v29; // rcx
  WCHAR *v30; // rax
  int IsDebuggerPresent; // eax
  int v32; // eax
  ULONG v33; // r8d
  _DWORD SystemInformation[4]; // [rsp+30h] [rbp-10h] BYREF
  ULONG RetunedLength; // [rsp+70h] [rbp+30h] BYREF

  v4 = 0LL;
  if ( a1 <= 2 )
    return 3221225711LL;
  *a3 = 0;
  v9 = wcstoul(*(const wchar_t **)(a2 + 8), 0LL, 16);
  v10 = wcstoul(*(const wchar_t **)(a2 + 16), 0LL, 16);
  result = SmscpSetupSharedSpace(v10, v9);
  if ( (int)result >= 0 )
  {
    FirstSessionId = SmpGetFirstSessionId();
    v13 = 0;
    if ( *(_DWORD *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 704LL) == FirstSessionId )
      v13 = 8;
    v14 = v13 | *a3 & 0xFFFFFFF7;
    *a3 = v14;
    *a3 = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(4 * *(_DWORD *)SmpMappedView)) & 4;
    v15 = 0;
    RetunedLength = 0;
    if ( a1 > 3 )
    {
      v22 = (_QWORD *)(a2 + 24);
      v23 = a1 - 3;
      do
      {
        v24 = -1LL;
        do
          ++v24;
        while ( *(_WORD *)(*v22 + 2 * v24) );
        ++v22;
        v15 += 2 * v24 + 2;
        RetunedLength = v15;
        --v23;
      }
      while ( v23 );
      if ( v15 )
      {
LABEL_11:
        Heap = (WCHAR *)RtlAllocateHeap(
                          *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                          SmBaseTag + 786432,
                          v15);
        a4->Buffer = Heap;
        if ( Heap )
        {
          a4->MaximumLength = RetunedLength;
          a4->Length = 0;
          *Heap = 0;
          if ( (*(_BYTE *)a3 & 2) == 0 )
          {
            v25 = a1 - 1;
            if ( (unsigned int)v25 > 3 )
            {
              v26 = (PCWSTR *)(a2 + 24);
              v27 = a1 - 4;
              do
              {
                RtlAppendUnicodeToString(a4, *v26);
                RtlAppendUnicodeToString(a4, L" ");
                ++v26;
                --v27;
              }
              while ( v27 );
            }
            RtlAppendUnicodeToString(a4, *(PCWSTR *)(a2 + 8 * v25));
            return 0LL;
          }
          if ( (*(_BYTE *)a3 & 1) == 0 )
          {
            v20 = &SmpS0InitCmd;
            v21 = a4;
            if ( (*(_BYTE *)a3 & 8) == 0 )
              v20 = (const UNICODE_STRING *)&SmscpInitExecuteCmd;
            goto LABEL_18;
          }
          v19 = LdrQueryImageFileExecutionOptions(v4, L"Debugger", 1u, a4->Buffer, 0x30u, &RetunedLength);
          if ( v19 != -2147483643 )
          {
LABEL_15:
            if ( v19 >= 0 )
            {
              v33 = RetunedLength & 0xFFFFFFFE;
              RetunedLength = v33;
              if ( v33 > 2 && !a4->Buffer[((unsigned __int64)v33 >> 1) - 1] )
              {
                v33 -= 2;
                RetunedLength = v33;
              }
              a4->Length = v33;
              RtlAppendUnicodeToString(a4, L" ");
              goto LABEL_17;
            }
LABEL_16:
            if ( (*(_BYTE *)a3 & 8) != 0
              && NtQuerySystemInformation(SystemFlagsInformation, SystemInformation, 4u, 0LL) >= 0
              && (SystemInformation[0] & 0x4000004) != 0 )
            {
              IsDebuggerPresent = SmscpIsDebuggerPresent();
              if ( IsDebuggerPresent >= 0 )
              {
                RtlAppendUnicodeStringToString(a4, &stru_140015C60);
                v32 = SystemInformation[0];
                if ( (SystemInformation[0] & 0x20000) != 0 )
                {
                  RtlAppendUnicodeStringToString(a4, &stru_140015C50);
                  v32 = SystemInformation[0];
                }
                if ( (v32 & 0x4000000) != 0 )
                  RtlAppendUnicodeStringToString(a4, &stru_140015C40);
              }
            }
LABEL_17:
            v20 = v4;
            v21 = a4;
LABEL_18:
            RtlAppendUnicodeStringToString(v21, v20);
            return 0LL;
          }
          BufferSize = RetunedLength;
          v29 = RetunedLength + v4->MaximumLength + 2LL;
          if ( v29 <= RetunedLength || v29 > 0xFFFE )
            goto LABEL_16;
          RetunedLength += v4->MaximumLength + 2;
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, a4->Buffer);
          v30 = (WCHAR *)RtlAllocateHeap(
                           *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                           SmBaseTag + 786432,
                           RetunedLength);
          a4->Buffer = v30;
          if ( v30 )
          {
            a4->MaximumLength = RetunedLength;
            v19 = LdrQueryImageFileExecutionOptions(v4, L"Debugger", 1u, v30, BufferSize, &RetunedLength);
            goto LABEL_15;
          }
        }
        return 3221225495LL;
      }
    }
    v16 = *a3;
    if ( (*a3 & 8) != 0 )
    {
      Length = SmpS0InitCmd.Length;
      if ( (v16 & 4) != 0 )
        goto LABEL_10;
      Length = SmpS0InitCmd.Length + 50;
      v4 = &SmpS0InitCmd;
    }
    else
    {
      if ( SmscpInitExecuteCmd )
      {
        Length = (unsigned __int16)SmscpInitExecuteCmd;
        goto LABEL_10;
      }
      Length = 74;
      v4 = (UNICODE_STRING *)&SmscpDefaultCmd;
    }
    v16 |= 1u;
LABEL_10:
    v15 = Length + 2;
    *a3 = v16 | 2;
    RetunedLength = v15;
    goto LABEL_11;
  }
  return result;
}
