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
 *     RtlUnicodeStringToInteger @ 0x180079580 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x1800A05C0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 *     AVrfInitializeVerifier @ 0x1800DACE8 (AVrfInitializeVerifier.c)
 */

__int64 __fastcall LdrpInitializeApplicationVerifierPackage(
        unsigned __int16 *a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rax
  int v10; // esi
  __int64 result; // rax
  __int16 v12; // bp
  int v13; // edi
  unsigned __int16 *v14; // rbx
  int v15; // ecx
  int *v16; // rbx
  int v17; // r12d
  char *v18; // rsi
  int ValueKey; // eax
  int v20; // edi
  unsigned __int64 v21; // rbp
  int v22; // ecx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v25; // eax
  unsigned int v26; // eax
  unsigned __int16 v27[4]; // [rsp+38h] [rbp-470h] BYREF
  _DWORD *v28; // [rsp+40h] [rbp-468h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-460h] BYREF
  char v30; // [rsp+60h] [rbp-448h] BYREF

  v7 = a6;
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
    v14 = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + *a1);
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
    if ( !(unsigned int)RtlCompareUnicodeStrings(
                          v14,
                          (unsigned __int64)(unsigned __int16)(v12 - v13) >> 1,
                          (__int64)DestinationString.Buffer,
                          (unsigned __int64)DestinationString.Length >> 1,
                          1) )
    {
      *(_DWORD *)(a2 + 188) &= 0xFDFFFEFF;
      return 0LL;
    }
    v7 = a6;
  }
  LdrpShouldCreateStackTraceDb = (*(_DWORD *)(a2 + 188) & 0x2000100) != 0;
  result = AVrfInitializeVerifier(a3, v10, a4, 0, a5, v7);
  v15 = *(_DWORD *)(a2 + 188);
  if ( (int)result < 0 )
  {
    *(_DWORD *)(a2 + 188) = v15 & 0xFDFFFEFF;
    dword_18015F3E8 = 0;
    *(_DWORD *)RtlpDebugPageHeapTable = 0;
    return result;
  }
  if ( (v15 & 0x2000000) != 0 )
  {
    v16 = (int *)RtlpDebugPageHeapTable;
    *(_DWORD *)(a2 + 188) = v15 & 0xFFFF670F;
    LdrpShouldCreateStackTraceDb = 1;
    v17 = *v16;
    *v16 = -1;
    if ( !a4 )
      goto LABEL_48;
    if ( (int)RtlInitUnicodeStringEx((__int64)v27, (__int64)L"PageHeapFlags") < 0 )
      goto LABEL_47;
    v18 = &v30;
    ValueKey = NtQueryValueKey();
    v20 = ValueKey;
    if ( ValueKey < 0 )
    {
      if ( ValueKey == -2147483643 )
      {
        while ( 1 )
        {
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
          if ( !ProcessHeap )
            break;
          Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, (unsigned int)a6);
          v21 = Heap;
          if ( !Heap )
            break;
          v18 = (char *)Heap;
          v25 = NtQueryValueKey();
          v20 = v25;
          if ( v25 >= 0 )
            goto LABEL_17;
          if ( v25 != -2147483643 )
            goto LABEL_43;
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v18);
        }
LABEL_46:
        v16 = (int *)RtlpDebugPageHeapTable;
LABEL_47:
        *v16 = -1;
        goto LABEL_48;
      }
LABEL_45:
      if ( v20 >= 0 )
      {
        v16 = (int *)RtlpDebugPageHeapTable;
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
            v16 = (int *)RtlpDebugPageHeapTable;
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
          if ( v16 )
          {
            v28 = v18 + 12;
            v27[0] = *((_WORD *)v18 + 4);
            v27[1] = *((_WORD *)v18 + 4);
            v20 = RtlUnicodeStringToInteger(v27, 0, v16);
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
      if ( v16 )
      {
        v26 = *((_DWORD *)v18 + 2);
        if ( v26 <= 4 )
        {
          memmove(v16, v18 + 12, v26);
          goto LABEL_43;
        }
      }
    }
    v20 = -2147483643;
LABEL_43:
    if ( v21 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v21);
    goto LABEL_45;
  }
  return 0LL;
}
