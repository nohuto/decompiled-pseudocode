/*
 * XREFs of RtlGetPersistedStateLocation @ 0x18006FF10
 * Callers:
 *     GetOverlayRootFolder @ 0x180012E38 (GetOverlayRootFolder.c)
 *     LdrpAppxGetRemediationRegistryKey @ 0x1800CC524 (LdrpAppxGetRemediationRegistryKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlExpandEnvironmentStrings @ 0x1800171C0 (RtlExpandEnvironmentStrings.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtOpenKey @ 0x18009D0D0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009D170 (NtQueryValueKey.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

NTSTATUS __cdecl RtlGetPersistedStateLocation(
        PCWSTR SourceID,
        PCWSTR CustomValue,
        PCWSTR DefaultPath,
        STATE_LOCATION_TYPE StateLocationType,
        PWCHAR TargetPath,
        ULONG BufferLengthIn,
        PULONG BufferLengthOut)
{
  WCHAR *Heap; // rdi
  NTSTATUS v11; // eax
  signed int v12; // ebx
  __int64 v13; // r8
  unsigned int v14; // r8d
  unsigned int v15; // eax
  size_t v16; // r8
  const WCHAR *v17; // rdx
  unsigned __int64 v19; // r14
  ULONG Length; // ebx
  ULONG v21; // ecx
  unsigned __int64 v22; // rax
  SIZE_T v23; // r8
  HANDLE KeyHandle; // [rsp+30h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-39h] BYREF
  ULONG_PTR ReturnLength; // [rsp+40h] [rbp-31h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-29h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-19h] BYREF
  ULONG ResultLength; // [rsp+D8h] [rbp+67h] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  Heap = 0LL;
  if ( (unsigned int)StateLocationType > LocationTypeFileSystem )
    return -1073741583;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)((char *)&unk_180118510 + 16 * StateLocationType);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v12 = v11;
  if ( v11 != -1073741772 )
  {
    if ( v11 < 0 )
      goto LABEL_12;
    RtlInitUnicodeString(&DestinationString, SourceID);
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v12 = NtOpenKey(&Handle, 0x20019u, &ObjectAttributes);
    if ( v12 != -1073741772 )
      goto LABEL_19;
  }
  if ( !DefaultPath )
  {
LABEL_19:
    if ( v12 < 0 )
      goto LABEL_12;
    if ( !CustomValue )
      CustomValue = L"TargetPath";
    RtlInitUnicodeString(&DestinationString, CustomValue);
    v19 = BufferLengthIn;
    Length = BufferLengthIn + 16;
    if ( BufferLengthIn + 16 >= BufferLengthIn )
    {
      Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Length);
      if ( !Heap )
      {
        v12 = -1073741801;
        goto LABEL_12;
      }
      v12 = NtQueryValueKey(Handle, &DestinationString, KeyValuePartialInformation, Heap, Length, &ResultLength);
      if ( v12 < 0 )
      {
        if ( v12 != -2147483643 )
          goto LABEL_12;
      }
      else if ( (unsigned int)(*((_DWORD *)Heap + 1) - 1) > 1 )
      {
        v12 = -1073741788;
        goto LABEL_12;
      }
      v21 = *((_DWORD *)Heap + 2);
      v17 = Heap + 6;
      ResultLength = v21;
      if ( v12 >= 0 )
      {
        if ( v17[((unsigned __int64)v21 >> 1) - 1] )
        {
          v22 = v21 + 2;
          ResultLength = v22;
          v21 += 2;
          if ( (unsigned int)v19 < (unsigned int)v22 )
          {
            v12 = -2147483643;
          }
          else
          {
            v17[(v22 >> 1) - 1] = 0;
            v21 = ResultLength;
          }
        }
        if ( v12 >= 0 && *((_DWORD *)Heap + 1) == 2 )
        {
          v23 = -1LL;
          do
            ++v23;
          while ( v17[v23] );
          v12 = RtlExpandEnvironmentStrings(0LL, v17, v23, TargetPath, v19 >> 1, &ReturnLength);
          if ( (int)(v12 + 0x80000000) < 0 || v12 == -1073741789 )
          {
            if ( BufferLengthOut )
              *BufferLengthOut = 2 * ReturnLength;
            if ( v12 == -1073741789 )
              v12 = -2147483643;
          }
          goto LABEL_12;
        }
      }
      if ( BufferLengthOut )
        *BufferLengthOut = v21;
      if ( v12 < 0 )
        goto LABEL_12;
      v16 = v21;
      goto LABEL_11;
    }
LABEL_25:
    v12 = -1073741675;
    goto LABEL_12;
  }
  v13 = -1LL;
  do
    ++v13;
  while ( DefaultPath[v13] );
  v14 = v13 + 1;
  v15 = 2 * v14;
  ResultLength = 2 * v14;
  if ( 2 * v14 < v14 )
    goto LABEL_25;
  v12 = BufferLengthIn < v15 ? 0x80000005 : 0;
  if ( BufferLengthOut )
    *BufferLengthOut = v15;
  if ( v15 > BufferLengthIn )
    goto LABEL_12;
  v16 = v15;
  v17 = DefaultPath;
LABEL_11:
  memmove(TargetPath, v17, v16);
LABEL_12:
  if ( KeyHandle )
    NtClose(KeyHandle);
  if ( Handle )
    NtClose(Handle);
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v12;
}
