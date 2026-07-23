/*
 * XREFs of LdrpInitializeApplicationVerifierPackage @ 0x1800D2B8C
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800D30E0 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18000C120 (RtlInitUnicodeStringEx.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x1800571D0 (RtlCompareUnicodeStrings.c)
 *     RtlUnicodeStringToInteger @ 0x180079590 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x1800A05E0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 *     AVrfInitializeVerifier @ 0x1800DACE8 (AVrfInitializeVerifier.c)
 */

__int64 __fastcall LdrpInitializeApplicationVerifierPackage(
        unsigned __int16 *a1,
        __int64 a2,
        unsigned __int8 a3,
        void *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rax
  int v10; // esi
  __int64 result; // rax
  __int16 v12; // bp
  int v13; // edi
  const WCHAR *v14; // rbx
  int v15; // ecx
  PULONG v16; // rbx
  ULONG v17; // r12d
  unsigned __int16 *v18; // rsi
  NTSTATUS v19; // eax
  NTSTATUS v20; // edi
  void *v21; // rbp
  int v22; // ecx
  ULONG v23; // edi
  void *ProcessHeap; // rcx
  PVOID Heap; // rax
  NTSTATUS v26; // eax
  unsigned int v27; // eax
  ULONG Length[2]; // [rsp+30h] [rbp-478h] BYREF
  _UNICODE_STRING ValueName; // [rsp+38h] [rbp-470h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-460h] BYREF
  _BYTE KeyValueInformation[1024]; // [rsp+60h] [rbp-448h] BYREF

  v7 = a6;
  *(_QWORD *)Length = a6;
  v10 = (int)a1;
  if ( MEMORY[0x7FFE02EC] )
  {
    *(_DWORD *)(a2 + 188) &= 0xFDFFFEFF;
    return 0LL;
  }
  if ( a3 )
  {
    v12 = *a1;
    v13 = *a1;
    v14 = (const WCHAR *)(*((_QWORD *)a1 + 1) + *a1);
    if ( *a1 )
    {
      do
      {
        if ( *(v14 - 1) == 92 )
          break;
        --v14;
        v13 -= 2;
      }
      while ( v13 );
    }
    RtlInitUnicodeString(&DestinationString, L"SPPsvc.exe");
    if ( !RtlCompareUnicodeStrings(
            v14,
            (unsigned __int64)(unsigned __int16)(v12 - v13) >> 1,
            DestinationString.Buffer,
            (unsigned __int64)DestinationString.Length >> 1,
            1u) )
    {
      *(_DWORD *)(a2 + 188) &= 0xFDFFFEFF;
      return 0LL;
    }
    v7 = *(_QWORD *)Length;
  }
  LdrpShouldCreateStackTraceDb = (*(_DWORD *)(a2 + 188) & 0x2000100) != 0;
  result = AVrfInitializeVerifier(a3, v10, (_DWORD)a4, 0, a5, v7);
  v15 = *(_DWORD *)(a2 + 188);
  if ( (int)result < 0 )
  {
    *(_DWORD *)(a2 + 188) = v15 & 0xFDFFFEFF;
    dword_18015F3E8 = 0;
    *RtlpDebugPageHeapTable = 0;
    return result;
  }
  if ( (v15 & 0x2000000) != 0 )
  {
    v16 = RtlpDebugPageHeapTable;
    *(_DWORD *)(a2 + 188) = v15 & 0xFFFF670F;
    LdrpShouldCreateStackTraceDb = 1;
    v17 = *v16;
    *v16 = -1;
    if ( !a4 )
      goto LABEL_48;
    if ( RtlInitUnicodeStringEx(&ValueName, L"PageHeapFlags") < 0 )
      goto LABEL_47;
    v18 = (unsigned __int16 *)KeyValueInformation;
    v19 = NtQueryValueKey(a4, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x400u, Length);
    v20 = v19;
    if ( v19 < 0 )
    {
      if ( v19 == -2147483643 )
      {
        while ( 1 )
        {
          v23 = Length[0];
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
          if ( !ProcessHeap )
            break;
          Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, Length[0]);
          v21 = Heap;
          if ( !Heap )
            break;
          v18 = (unsigned __int16 *)Heap;
          v26 = NtQueryValueKey(a4, &ValueName, KeyValuePartialInformation, Heap, v23, Length);
          v20 = v26;
          if ( v26 >= 0 )
            goto LABEL_17;
          if ( v26 != -2147483643 )
            goto LABEL_43;
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
        }
LABEL_46:
        v16 = RtlpDebugPageHeapTable;
LABEL_47:
        *v16 = -1;
        goto LABEL_48;
      }
LABEL_45:
      if ( v20 >= 0 )
      {
        v16 = RtlpDebugPageHeapTable;
LABEL_48:
        if ( (*(_DWORD *)(a2 + 188) & 0x100) != 0 )
        {
          if ( *v16 == -1 )
            goto LABEL_53;
        }
        else if ( *v16 == -1 )
        {
LABEL_53:
          *v16 = v17;
        }
        if ( (((*v16 & 0x400) != 0) & _bittest(&AVrfpVerifierFlags, 0xFu)) != 0 )
        {
          if ( (LdrpDebugFlags & 5) != 0 )
          {
            LdrpLogDbgPrint(
              (unsigned int)"minkernel\\ntdll\\ldrinit.c",
              6882,
              "LdrpInitializeApplicationVerifierPackage",
              2,
              "Per-DLL page heap is disabled since fast fill heap is enabled\n");
            v16 = RtlpDebugPageHeapTable;
          }
          *v16 &= ~0x400u;
        }
        dword_18015F3E8 = 1;
        return 0LL;
      }
      goto LABEL_46;
    }
    v21 = 0LL;
LABEL_17:
    v22 = *((_DWORD *)v18 + 1);
    if ( ((v22 - 3) & 0xFFFFFFFB) != 0 )
    {
      switch ( v22 )
      {
        case 4:
          if ( *((_DWORD *)v18 + 2) != 4 )
          {
            v20 = -1073741820;
            goto LABEL_43;
          }
          Length[0] = 4;
          if ( v16 )
          {
            *v16 = *((_DWORD *)v18 + 3);
            goto LABEL_43;
          }
          break;
        case 11:
          v20 = -1073741788;
          goto LABEL_43;
        case 1:
          if ( ((unsigned __int8)v16 & 3) != 0 )
          {
            v20 = -2147483646;
            goto LABEL_43;
          }
          Length[0] = 4;
          if ( v16 )
          {
            ValueName.Buffer = v18 + 6;
            ValueName.Length = v18[4];
            ValueName.MaximumLength = v18[4];
            v20 = RtlUnicodeStringToInteger(&ValueName, 0, v16);
            goto LABEL_43;
          }
          break;
        default:
          v20 = -1073741788;
          goto LABEL_43;
      }
    }
    else
    {
      if ( v22 != 4 )
      {
        v20 = -1073741788;
        goto LABEL_43;
      }
      Length[0] = *((_DWORD *)v18 + 2);
      if ( v16 )
      {
        v27 = *((_DWORD *)v18 + 2);
        if ( v27 <= 4 )
        {
          memmove(v16, v18 + 6, v27);
          goto LABEL_43;
        }
      }
    }
    v20 = -2147483643;
LABEL_43:
    if ( v21 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v21);
    goto LABEL_45;
  }
  return 0LL;
}
