/*
 * XREFs of sub_18007A3BC @ 0x18007A3BC
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     RtlFormatCurrentUserKeyPath @ 0x180013800 (RtlFormatCurrentUserKeyPath.c)
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     LdrLoadDll @ 0x180021600 (LdrLoadDll.c)
 *     RtlAppendUnicodeStringToString @ 0x180026140 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     LdrUnloadDll @ 0x18002F330 (LdrUnloadDll.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x18009C9A0 (ZwQueryKey.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 */

__int64 sub_18007A3BC()
{
  unsigned int v0; // edi
  char v1; // si
  NTSTATUS v3; // ebx
  NTSTATUS Key; // ebx
  NTSTATUS ValueKey; // ebx
  PVOID v6; // rbx
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE v9; // [rsp+48h] [rbp-C0h] BYREF
  PVOID ProcedureAddress; // [rsp+50h] [rbp-B8h] BYREF
  _UNICODE_STRING Destination; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-A0h] BYREF
  PVOID DllHandle; // [rsp+70h] [rbp-98h] BYREF
  ULONG v14[2]; // [rsp+78h] [rbp-90h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+80h] [rbp-88h] BYREF
  _UNICODE_STRING CurrentUserKeyPath; // [rsp+88h] [rbp-80h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-70h] BYREF
  _BYTE KeyInformation[20]; // [rsp+C8h] [rbp-40h] BYREF
  int v19; // [rsp+DCh] [rbp-2Ch]
  _BYTE KeyValueInformation[4]; // [rsp+F8h] [rbp-10h] BYREF
  int v21; // [rsp+FCh] [rbp-Ch]
  int v22; // [rsp+100h] [rbp-8h]
  unsigned int v23; // [rsp+104h] [rbp-4h]
  _BYTE v24[4]; // [rsp+148h] [rbp+40h] BYREF
  int v25; // [rsp+14Ch] [rbp+44h]
  int v26; // [rsp+150h] [rbp+48h]
  int v27; // [rsp+154h] [rbp+4Ch]
  PVOID *retaddr; // [rsp+1C0h] [rbp+B8h]

  v0 = 0;
  DllHandle = 0LL;
  ProcedureAddress = 0LL;
  if ( byte_180165430 )
    return 0LL;
  RtlImageNtHeaderEx(3u, NtCurrentPeb()->ImageBaseAddress, 0LL, &OutHeaders);
  if ( (unsigned __int16)(OutHeaders->OptionalHeader.Subsystem - 2) > 1u )
    return 0LL;
  if ( ZwOpenKey(&KeyHandle, 3u, (POBJECT_ATTRIBUTES)&stru_180118818) < 0
    || (v3 = ZwQueryValueKey(KeyHandle, (PUNICODE_STRING)&stru_1801193E8, KeyValuePartialInformation, v24, 0x50u, v14),
        ZwClose(KeyHandle),
        v3 < 0)
    || v25 != 4
    || v26 != 4
    || !v27 )
  {
    v9 = 0LL;
    v1 = 0;
    if ( ZwOpenKey(&v9, 0x20019u, &stru_18015F530) >= 0 )
    {
      Key = ZwQueryKey(v9, KeyFullInformation, KeyInformation, 0x30u, ResultLength);
      ZwClose(v9);
      if ( Key == -2147483643 )
        Key = 0;
      if ( Key >= 0 && v19 )
        goto LABEL_27;
    }
    if ( ZwOpenKey(&Handle, 1u, (POBJECT_ATTRIBUTES)&stru_1801187E8) >= 0 )
    {
      if ( ZwQueryValueKey(
             Handle,
             (PUNICODE_STRING)&ValueName,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x50u,
             ResultLength) >= 0
        && v21 == 4
        && v22 == 4
        && v23 > 1 )
      {
        v1 = 1;
        ZwQueryValueKey(
          Handle,
          (PUNICODE_STRING)&stru_1801193D8,
          KeyValuePartialInformation,
          KeyValueInformation,
          0x50u,
          ResultLength);
      }
      ZwClose(Handle);
      if ( v1 )
        goto LABEL_27;
    }
    if ( RtlFormatCurrentUserKeyPath(&CurrentUserKeyPath) >= 0 )
    {
      Destination.Length = 0;
      if ( (unsigned int)CurrentUserKeyPath.Length + 120 <= 0xFFFE )
      {
        Destination.MaximumLength = CurrentUserKeyPath.Length + 120;
        Destination.Buffer = (PWCH)RtlAllocateHeap(
                                     NtCurrentPeb()->ProcessHeap,
                                     Flags + 1572864,
                                     (unsigned __int16)(CurrentUserKeyPath.Length + 120));
        if ( Destination.Buffer )
        {
          if ( RtlAppendUnicodeStringToString(&Destination, &CurrentUserKeyPath) >= 0
            && RtlAppendUnicodeToString(
                 &Destination,
                 L"\\Software\\Policies\\Microsoft\\Windows\\Safer\\CodeIdentifiers") >= 0 )
          {
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &Destination;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&Handle, 1u, &ObjectAttributes) >= 0 )
            {
              ValueKey = ZwQueryValueKey(
                           Handle,
                           (PUNICODE_STRING)&ValueName,
                           KeyValuePartialInformation,
                           KeyValueInformation,
                           0x50u,
                           ResultLength);
              ZwClose(Handle);
              if ( ValueKey >= 0 && v21 == 4 && v22 == 4 && v23 > 1 )
                v1 = 1;
            }
          }
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Destination.Buffer);
        }
      }
      RtlFreeUnicodeString(&CurrentUserKeyPath);
      if ( v1 )
      {
LABEL_27:
        if ( LdrLoadDll(0LL, 0LL, (PUNICODE_STRING)&stru_1801193C8, &DllHandle) >= 0 )
        {
          v6 = DllHandle;
          if ( LdrGetProcedureAddressForCaller(
                 DllHandle,
                 (PANSI_STRING)&stru_1801193F8,
                 0,
                 &ProcedureAddress,
                 0,
                 retaddr) >= 0
            && ProcedureAddress )
          {
            qword_180165028 = __ROR8__(
                                (unsigned __int64)ProcedureAddress ^ MEMORY[0x7FFE0330],
                                MEMORY[0x7FFE0330] & 0x3F);
            qword_1801664F0 = (__int64)v6;
          }
          else
          {
            LdrUnloadDll(v6);
            return (unsigned int)-1073741511;
          }
        }
        else
        {
          return (unsigned int)-1073741515;
        }
      }
    }
  }
  return v0;
}
