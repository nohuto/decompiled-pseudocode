/*
 * XREFs of WerpGlobalFlagsForProcess @ 0x18006D8F0
 * Callers:
 *     RtlReportSilentProcessExit @ 0x18006D060 (RtlReportSilentProcessExit.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18000C120 (RtlInitUnicodeStringEx.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlAppendUnicodeToString @ 0x180041260 (RtlAppendUnicodeToString.c)
 *     WerpPathTail @ 0x18006DAE0 (WerpPathTail.c)
 *     RtlUnicodeStringToInteger @ 0x180079590 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0540 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A05E0 (NtQueryValueKey.c)
 *     NtQueryInformationProcess @ 0x1800A0620 (NtQueryInformationProcess.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall WerpGlobalFlagsForProcess(HANDLE ProcessHandle)
{
  __int64 v3; // rax
  const WCHAR *v4; // rbx
  __int64 v5; // rcx
  unsigned int v7; // edi
  HANDLE v8; // rbx
  _BYTE *v9; // rdi
  NTSTATUS v10; // eax
  void *v11; // rsi
  int v12; // ecx
  ULONG v13; // r14d
  void *ProcessHeap; // rcx
  PVOID Heap; // rax
  NTSTATUS v16; // eax
  unsigned int v17; // eax
  ULONG Length; // [rsp+38h] [rbp-D0h] BYREF
  ULONG Value; // [rsp+3Ch] [rbp-CCh] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  _UNICODE_STRING Destination; // [rsp+50h] [rbp-B8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  _QWORD ProcessInformation[68]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE KeyValueInformation[1024]; // [rsp+2C8h] [rbp+1C0h] BYREF

  KeyHandle = 0LL;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  Value = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  if ( (NtQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, ProcessInformation, 0x218u, 0LL) & 0xC0000000) != 0xC0000000 )
  {
    v3 = WerpPathTail(ProcessInformation[1]);
    v4 = (const WCHAR *)v3;
    if ( v3 )
    {
      v5 = -1LL;
      while ( *(_WORD *)(v3 + 2 * v5++ + 2) != 0 )
        ;
      v7 = 2 * v5 + 202;
      Destination.Length = 0;
      Destination.Buffer = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
      if ( Destination.Buffer )
      {
        Destination.MaximumLength = v7;
        if ( RtlAppendUnicodeToString(
               &Destination,
               L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\") >= 0
          && RtlAppendUnicodeToString(&Destination, v4) >= 0 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &Destination;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 64;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( NtOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
          {
            v8 = KeyHandle;
            if ( RtlInitUnicodeStringEx(&DestinationString, L"GlobalFlag") >= 0 )
            {
              v9 = KeyValueInformation;
              v10 = NtQueryValueKey(
                      v8,
                      &DestinationString,
                      KeyValuePartialInformation,
                      KeyValueInformation,
                      0x400u,
                      &Length);
              if ( v10 < 0 )
              {
                if ( v10 == -2147483643 )
                {
                  while ( 1 )
                  {
                    v13 = Length;
                    ProcessHeap = NtCurrentPeb()->ProcessHeap;
                    if ( !ProcessHeap )
                      break;
                    Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, Length);
                    v11 = Heap;
                    if ( !Heap )
                      break;
                    v9 = Heap;
                    v16 = NtQueryValueKey(v8, &DestinationString, KeyValuePartialInformation, Heap, v13, &Length);
                    if ( v16 >= 0 )
                      goto LABEL_18;
                    if ( v16 != -2147483643 )
                      goto LABEL_34;
                    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
                  }
                }
              }
              else
              {
                v11 = 0LL;
LABEL_18:
                v12 = *((_DWORD *)v9 + 1);
                if ( ((v12 - 3) & 0xFFFFFFFB) != 0 )
                {
                  if ( v12 == 4 )
                  {
                    if ( *((_DWORD *)v9 + 2) == 4 )
                    {
                      Length = 4;
                      Value = *((_DWORD *)v9 + 3);
                    }
                  }
                  else if ( v12 == 1 && ((unsigned __int8)&Value & 3) == 0 )
                  {
                    Length = 4;
                    DestinationString.Buffer = (wchar_t *)(v9 + 12);
                    DestinationString.Length = *((_WORD *)v9 + 4);
                    DestinationString.MaximumLength = *((_WORD *)v9 + 4);
                    RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
                  }
                }
                else if ( v12 == 4 )
                {
                  Length = *((_DWORD *)v9 + 2);
                  v17 = *((_DWORD *)v9 + 2);
                  if ( v17 <= 4 )
                    memmove(&Value, v9 + 12, v17);
                }
LABEL_34:
                if ( v11 )
                  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
              }
            }
          }
        }
      }
    }
  }
  if ( KeyHandle )
  {
    NtClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( Destination.Buffer )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Destination.Buffer);
  return Value;
}
