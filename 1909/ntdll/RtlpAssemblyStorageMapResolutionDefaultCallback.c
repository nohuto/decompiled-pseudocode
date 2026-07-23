/*
 * XREFs of RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x18005AB90
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180071438 (RtlpResolveAssemblyStorageMapEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlGetNtSystemRoot @ 0x180029260 (RtlGetNtSystemRoot.c)
 *     DbgPrintEx @ 0x180052820 (DbgPrintEx.c)
 *     RtlDoesFileExists_UEx @ 0x18005A68C (RtlDoesFileExists_UEx.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtOpenKey @ 0x18009D0D0 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x18009D4D0 (NtEnumerateKey.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800DF1D4 (RtlpGetAssemblyStorageMapRootLocation.c)
 */

char __fastcall RtlpAssemblyStorageMapResolutionDefaultCallback(int a1, __int64 a2, _DWORD *a3)
{
  int v5; // ecx
  int v6; // ecx
  const WCHAR *NtSystemRoot; // rax
  int v8; // r14d
  unsigned int v9; // ecx
  unsigned __int64 v10; // rax
  size_t v11; // r15
  wchar_t *Buffer; // rdx
  char *v13; // rbx
  const WCHAR *v14; // rcx
  NTSTATUS v15; // eax
  int v16; // r14d
  HANDLE v17; // r12
  int v18; // r15d
  __int64 Length; // [rsp+20h] [rbp-E0h]
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  _WORD v23[4]; // [rsp+40h] [rbp-C0h] BYREF
  char *v24; // [rsp+48h] [rbp-B8h]
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE KeyInformation[12]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v28; // [rsp+9Ch] [rbp-64h]
  char v29; // [rsp+A0h] [rbp-60h] BYREF

  v5 = a1 - 1;
  if ( !v5 )
  {
    ObjectAttributes.Length = 48;
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_1801183E0;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v15 = NtOpenKey(&KeyHandle, 8u, &ObjectAttributes);
    v16 = v15;
    if ( v15 >= 0 || v15 == -1073741772 || v15 == -1073741431 )
    {
      v10 = (unsigned __int64)KeyHandle;
      *(_QWORD *)(a2 + 48) = -1LL;
      *(_QWORD *)(a2 + 16) = v10;
      return v10;
    }
    LOBYTE(v10) = DbgPrintEx(0x33u, 0, "SXS: Unable to open registry key %wZ Status = 0x%08lx\n", &unk_1801183E0, v15);
    *(_BYTE *)(a2 + 56) = 1;
    goto LABEL_40;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    LOBYTE(v10) = 2;
    if ( v6 == 2 && *(_QWORD *)a2 )
      LOBYTE(v10) = NtClose(*(HANDLE *)a2);
  }
  else if ( *(_QWORD *)(a2 + 8) )
  {
    if ( *(_QWORD *)(a2 + 8) == 1LL )
    {
      NtSystemRoot = RtlGetNtSystemRoot();
      RtlInitUnicodeString(&DestinationString, NtSystemRoot);
      v8 = DestinationString.Length;
      v9 = *(unsigned __int16 *)(a2 + 26);
      *(_WORD *)(a2 + 24) = 0;
      LOBYTE(v10) = v8 + 16;
      if ( v8 + 16 > v9 )
      {
        *(_BYTE *)(a2 + 16) = 1;
        if ( a3 )
          *a3 = -1073741789;
      }
      else
      {
        memmove(*(void **)(a2 + 32), DestinationString.Buffer, (unsigned __int16)v8);
        v10 = *(_QWORD *)(a2 + 32);
        *(_OWORD *)((unsigned __int16)v8 + v10) = *(_OWORD *)L"\\WinSxS\\";
        *(_WORD *)(a2 + 24) = v8 + 16;
      }
      return v10;
    }
    LOBYTE(v10) = -1;
    if ( *(_QWORD *)(a2 + 8) > 0xFFFFFFFFuLL )
      goto LABEL_37;
    v17 = *(HANDLE *)a2;
    v18 = *(_DWORD *)(a2 + 8);
    ResultLength = 0;
    if ( !v17 )
      goto LABEL_37;
    LODWORD(v10) = NtEnumerateKey(v17, v18 - 2, KeyBasicInformation, KeyInformation, 0x220u, &ResultLength);
    v16 = v10;
    if ( (v10 & 0x80000000) != 0LL )
    {
      if ( (_DWORD)v10 != -2147483622 )
      {
        LOBYTE(v10) = DbgPrintEx(
                        0x33u,
                        0,
                        "SXS: Unable to enumerate assembly storage subkey #%lu Status = 0x%08lx\n",
                        v18 - 2,
                        v10);
LABEL_31:
        *(_BYTE *)(a2 + 16) = 1;
LABEL_40:
        if ( a3 )
          *a3 = v16;
        return v10;
      }
LABEL_37:
      *(_BYTE *)(a2 + 17) = 1;
      return v10;
    }
    LOBYTE(v10) = v28;
    if ( v28 <= 0xFFFE )
    {
      v23[0] = v28;
      v23[1] = v28;
      v24 = &v29;
      LODWORD(v10) = RtlpGetAssemblyStorageMapRootLocation(v17, v23, a2 + 24);
      v16 = v10;
      if ( (v10 & 0x80000000) == 0LL )
        return v10;
      LODWORD(Length) = v10;
      LOBYTE(v10) = DbgPrintEx(
                      0x33u,
                      0,
                      "SXS: Attempt to get storage location from subkey %wZ failed; Status = 0x%08lx\n",
                      v23,
                      Length);
      goto LABEL_31;
    }
    *(_BYTE *)(a2 + 16) = 1;
    if ( a3 )
      *a3 = -1073741562;
  }
  else
  {
    v10 = (unsigned __int64)NtCurrentPeb();
    v11 = *(unsigned __int16 *)(*(_QWORD *)(v10 + 32) + 96LL);
    if ( v11 + 16 > 0xFFFE )
    {
      *(_BYTE *)(a2 + 16) = 1;
      if ( a3 )
        *a3 = -1073741562;
    }
    else
    {
      v10 = *(unsigned __int16 *)(a2 + 26);
      if ( v11 + 16 > v10 )
      {
        *(_BYTE *)(a2 + 16) = 1;
        if ( a3 )
          *a3 = -1073741789;
      }
      else
      {
        Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
        if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
          Buffer = (wchar_t *)((char *)Buffer + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
        v13 = *(char **)(a2 + 32);
        memmove(v13, Buffer, v11);
        *(_OWORD *)&v13[v11] = xmmword_180121498;
        v14 = *(const WCHAR **)(a2 + 32);
        *(_WORD *)(a2 + 24) = v11 + 14;
        LOBYTE(v10) = RtlDoesFileExists_UEx(v14, 1);
        if ( !(_BYTE)v10 )
          *(_WORD *)(a2 + 24) = 0;
      }
    }
  }
  return v10;
}
