/*
 * XREFs of LdrpQueryIllegalCWDDevices @ 0x1800D6D84
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800D30E0 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18000C120 (RtlInitUnicodeStringEx.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlUnicodeStringToInteger @ 0x180079590 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x1800A05E0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall LdrpQueryIllegalCWDDevices(HANDLE KeyHandle)
{
  _BYTE *v2; // rdi
  NTSTATUS v3; // eax
  NTSTATUS v4; // ebx
  void *v5; // rsi
  int v6; // ecx
  ULONG Length; // ebx
  void *ProcessHeap; // rcx
  PVOID Heap; // rax
  NTSTATUS v10; // eax
  unsigned int v11; // eax
  __int64 result; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-448h] BYREF
  ULONG Value[3]; // [rsp+34h] [rbp-444h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-438h] BYREF
  _BYTE KeyValueInformation[1024]; // [rsp+50h] [rbp-428h] BYREF

  if ( KeyHandle && RtlInitUnicodeStringEx(&DestinationString, L"CWDIllegalInDLLSearch") >= 0 )
  {
    v2 = KeyValueInformation;
    v3 = NtQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v5 = 0LL;
LABEL_5:
      v6 = *((_DWORD *)v2 + 1);
      if ( ((v6 - 3) & 0xFFFFFFFB) != 0 )
      {
        switch ( v6 )
        {
          case 4:
            if ( *((_DWORD *)v2 + 2) == 4 )
            {
              ResultLength = 4;
              Value[0] = *((_DWORD *)v2 + 3);
            }
            else
            {
              v4 = -1073741820;
            }
            break;
          case 11:
            v4 = -1073741788;
            break;
          case 1:
            if ( ((unsigned __int8)Value & 3) != 0 )
            {
              v4 = -2147483646;
            }
            else
            {
              ResultLength = 4;
              DestinationString.Buffer = (wchar_t *)(v2 + 12);
              DestinationString.Length = *((_WORD *)v2 + 4);
              DestinationString.MaximumLength = *((_WORD *)v2 + 4);
              v4 = RtlUnicodeStringToInteger(&DestinationString, 0, Value);
            }
            break;
          default:
            v4 = -1073741788;
            break;
        }
      }
      else if ( v6 == 4 )
      {
        ResultLength = *((_DWORD *)v2 + 2);
        v11 = *((_DWORD *)v2 + 2);
        if ( v11 > 4 )
          v4 = -2147483643;
        else
          memmove(Value, v2 + 12, v11);
      }
      else
      {
        v4 = -1073741788;
      }
LABEL_28:
      if ( v5 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
LABEL_30:
      if ( v4 >= 0 )
      {
        result = Value[0] + 1;
        if ( (unsigned int)result <= 3 )
          goto LABEL_33;
      }
      goto LABEL_32;
    }
    if ( v3 != -2147483643 )
      goto LABEL_30;
    while ( 1 )
    {
      Length = ResultLength;
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        break;
      Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, ResultLength);
      v5 = Heap;
      if ( !Heap )
        break;
      v2 = Heap;
      v10 = NtQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, Heap, Length, &ResultLength);
      v4 = v10;
      if ( v10 >= 0 )
        goto LABEL_5;
      if ( v10 != -2147483643 )
        goto LABEL_28;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
    }
  }
LABEL_32:
  result = (MEMORY[0x7FFE02D5] >> 4) & 3;
  Value[0] = result;
  if ( (_DWORD)result == 3 )
  {
LABEL_39:
    LdrpIllegalCWDDevices = -1;
    return result;
  }
LABEL_33:
  if ( Value[0] == -1 )
    goto LABEL_39;
  if ( Value[0] == 1 )
  {
    LdrpIllegalCWDDevices = 0x2000;
  }
  else
  {
    result = 16LL;
    if ( Value[0] != 2 )
      result = 0LL;
    LdrpIllegalCWDDevices = result;
  }
  return result;
}
