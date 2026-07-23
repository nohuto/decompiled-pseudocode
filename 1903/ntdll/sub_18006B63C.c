/*
 * XREFs of sub_18006B63C @ 0x18006B63C
 * Callers:
 *     RtlReportSilentProcessExit @ 0x18006B200 (RtlReportSilentProcessExit.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18006B828 @ 0x18006B828 (sub_18006B828.c)
 *     RtlUnicodeStringToInteger @ 0x180074480 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 *     ZwQueryInformationProcess @ 0x18009CA00 (ZwQueryInformationProcess.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_18006B63C(HANDLE ProcessHandle)
{
  __int64 v3; // rax
  const WCHAR *v4; // rbx
  __int64 v5; // rcx
  unsigned int v6; // edi
  HANDLE v7; // rdi
  USHORT *v8; // rbx
  NTSTATUS v9; // eax
  void *v10; // rsi
  int v11; // ecx
  ULONG v12; // r14d
  PVOID ProcessHeap; // rcx
  PVOID Heap; // rax
  NTSTATUS v15; // eax
  ULONG Length; // [rsp+38h] [rbp-D0h] BYREF
  ULONG Value[3]; // [rsp+3Ch] [rbp-CCh] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  _UNICODE_STRING Destination; // [rsp+50h] [rbp-B8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  _QWORD ProcessInformation[68]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE KeyValueInformation[1024]; // [rsp+2C8h] [rbp+1C0h] BYREF

  KeyHandle = 0LL;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  Value[0] = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  if ( (ZwQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, ProcessInformation, 0x218u, 0LL) & 0xC0000000) != 0xC0000000 )
  {
    v3 = sub_18006B828(ProcessInformation[1]);
    v4 = (const WCHAR *)v3;
    if ( v3 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( *(_WORD *)(v3 + 2 * v5) );
      v6 = 2 * v5 + 202;
      Destination.Buffer = (PWCH)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
      if ( Destination.Buffer )
      {
        Destination.MaximumLength = v6;
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
          if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
          {
            v7 = KeyHandle;
            if ( RtlInitUnicodeStringEx(&DestinationString, L"GlobalFlag") >= 0 )
            {
              v8 = (USHORT *)KeyValueInformation;
              v9 = ZwQueryValueKey(
                     v7,
                     &DestinationString,
                     KeyValuePartialInformation,
                     KeyValueInformation,
                     0x400u,
                     &Length);
              if ( v9 < 0 )
              {
                if ( v9 == -2147483643 )
                {
                  while ( 1 )
                  {
                    v12 = Length;
                    ProcessHeap = NtCurrentPeb()->ProcessHeap;
                    if ( !ProcessHeap )
                      break;
                    Heap = RtlAllocateHeap(ProcessHeap, Flags + 1572864, Length);
                    v10 = Heap;
                    if ( !Heap )
                      break;
                    v8 = (USHORT *)Heap;
                    v15 = ZwQueryValueKey(v7, &DestinationString, KeyValuePartialInformation, Heap, v12, &Length);
                    if ( v15 >= 0 )
                      goto LABEL_17;
                    if ( v15 != -2147483643 )
                      goto LABEL_33;
                    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
                  }
                }
              }
              else
              {
                v10 = 0LL;
LABEL_17:
                v11 = *((_DWORD *)v8 + 1);
                if ( ((v11 - 3) & 0xFFFFFFFB) != 0 )
                {
                  if ( v11 == 4 )
                  {
                    if ( *((_DWORD *)v8 + 2) == 4 )
                    {
                      Length = 4;
                      Value[0] = *((_DWORD *)v8 + 3);
                    }
                  }
                  else if ( v11 == 1 && ((unsigned __int8)Value & 3) == 0 )
                  {
                    Length = 4;
                    DestinationString.Buffer = v8 + 6;
                    DestinationString.Length = v8[4];
                    DestinationString.MaximumLength = v8[4];
                    RtlUnicodeStringToInteger(&DestinationString, 0, Value);
                  }
                }
                else if ( v11 == 4 )
                {
                  Length = *((_DWORD *)v8 + 2);
                  if ( *((_DWORD *)v8 + 2) <= 4u )
                    memmove(Value, v8 + 6, *((unsigned int *)v8 + 2));
                }
LABEL_33:
                if ( v10 )
                  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
              }
            }
          }
        }
      }
    }
  }
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( Destination.Buffer )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Destination.Buffer);
  return Value[0];
}
