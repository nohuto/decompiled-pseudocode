/*
 * XREFs of RtlQueryImageFileKeyOption @ 0x18007ECD0
 * Callers:
 *     LdrpMinimalMapModule @ 0x180021EDC (LdrpMinimalMapModule.c)
 *     RtlQueryApplicationKeyOption @ 0x18007EB4C (RtlQueryApplicationKeyOption.c)
 *     RtlQueryImageFileExecutionOptions @ 0x18007EC30 (RtlQueryImageFileExecutionOptions.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D30E0 (LdrpInitializeExecutionOptions.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800D6C5C (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18000C120 (RtlInitUnicodeStringEx.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlUnicodeStringToInteger @ 0x180079590 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x1800A05E0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

NTSTATUS __fastcall RtlQueryImageFileKeyOption(
        HANDLE KeyHandle,
        const WCHAR *a2,
        int a3,
        ULONG *a4,
        unsigned int a5,
        ULONG *a6)
{
  NTSTATUS result; // eax
  unsigned int v10; // esi
  _BYTE *v11; // rdi
  NTSTATUS v12; // ebx
  void *v13; // r12
  ULONG Length; // ebx
  void *ProcessHeap; // rcx
  PVOID Heap; // rax
  NTSTATUS v17; // eax
  int v18; // ecx
  ULONG v19; // eax
  size_t v20; // r8
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  ULONG *v23; // [rsp+48h] [rbp-B8h]
  _BYTE KeyValueInformation[1024]; // [rsp+50h] [rbp-B0h] BYREF

  v23 = a6;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result < 0 )
    return result;
  v10 = a5;
  if ( a5 >= 0x3F4 )
  {
    Length = a5 + 12;
    goto LABEL_9;
  }
  v11 = KeyValueInformation;
  result = NtQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x400u,
             &ResultLength);
  v12 = result;
  if ( result >= 0 )
  {
    v13 = 0LL;
LABEL_14:
    if ( !a3 )
    {
      if ( *((_DWORD *)v11 + 2) > a5 )
      {
        ResultLength = *((_DWORD *)v11 + 2);
        goto LABEL_17;
      }
      a3 = *((_DWORD *)v11 + 1);
      v10 = *((_DWORD *)v11 + 2);
    }
    v18 = *((_DWORD *)v11 + 1);
    if ( ((v18 - 3) & 0xFFFFFFFB) != 0 )
    {
      if ( v18 == 4 )
      {
        if ( a3 == 4 )
        {
          if ( v10 == 4 && *((_DWORD *)v11 + 2) == 4 )
          {
            ResultLength = 4;
            if ( a4 )
            {
              *a4 = *((_DWORD *)v11 + 3);
              goto LABEL_18;
            }
LABEL_17:
            v12 = -2147483643;
LABEL_18:
            if ( v23 && ((int)(v12 + 0x80000000) < 0 || v12 == -2147483643) )
              *v23 = ResultLength;
            goto LABEL_22;
          }
          goto LABEL_33;
        }
LABEL_55:
        v12 = -1073741788;
        goto LABEL_22;
      }
      if ( v18 == 11 )
      {
        if ( a3 != 11 )
          goto LABEL_55;
        if ( v10 == 8 && *((_DWORD *)v11 + 2) == 8 )
        {
          ResultLength = 8;
          if ( a4 )
          {
            *(_QWORD *)a4 = *(_QWORD *)(v11 + 12);
            goto LABEL_18;
          }
          goto LABEL_17;
        }
LABEL_33:
        v12 = -1073741820;
        goto LABEL_22;
      }
      if ( v18 != 1 )
      {
        v12 = -1073741788;
        goto LABEL_18;
      }
      if ( a3 == 4 )
      {
        if ( v10 == 4 )
        {
          if ( ((unsigned __int8)a4 & 3) == 0 )
          {
            ResultLength = 4;
            if ( a4 )
            {
              DestinationString.Buffer = (wchar_t *)(v11 + 12);
              DestinationString.Length = *((_WORD *)v11 + 4);
              DestinationString.MaximumLength = *((_WORD *)v11 + 4);
              v12 = RtlUnicodeStringToInteger(&DestinationString, 0, a4);
              goto LABEL_18;
            }
            goto LABEL_17;
          }
          v12 = -2147483646;
LABEL_22:
          if ( v13 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
          return v12;
        }
        goto LABEL_33;
      }
      v19 = *((_DWORD *)v11 + 2);
      ResultLength = v19;
      if ( v19 > v10 )
        goto LABEL_17;
      v20 = v19;
    }
    else
    {
      if ( a3 != v18 )
        goto LABEL_55;
      ResultLength = *((_DWORD *)v11 + 2);
      if ( !a4 || *((_DWORD *)v11 + 2) > v10 )
        goto LABEL_17;
      v20 = *((unsigned int *)v11 + 2);
    }
    memmove(a4, v11 + 12, v20);
    goto LABEL_18;
  }
  if ( result == -2147483643 )
  {
    while ( 1 )
    {
      Length = ResultLength;
LABEL_9:
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        return -1073741801;
      Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, Length);
      v13 = Heap;
      if ( !Heap )
        return -1073741801;
      v11 = Heap;
      v17 = NtQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, Heap, Length, &ResultLength);
      v12 = v17;
      if ( v17 >= 0 )
        goto LABEL_14;
      if ( v17 != -2147483643 )
        goto LABEL_22;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
    }
  }
  return result;
}
