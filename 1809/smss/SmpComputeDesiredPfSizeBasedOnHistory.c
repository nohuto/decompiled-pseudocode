/*
 * XREFs of SmpComputeDesiredPfSizeBasedOnHistory @ 0x140012A20
 * Callers:
 *     SmpInitializeManagedPagefileSupport @ 0x140013104 (SmpInitializeManagedPagefileSupport.c)
 * Callees:
 *     __security_check_cookie @ 0x14000D270 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1400101D7 (memcpy_0.c)
 */

__int64 SmpComputeDesiredPfSizeBasedOnHistory()
{
  __int64 v0; // rdx
  size_t *v1; // rcx
  ULONG *p_ElapsedSeconds; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  ULONG v13; // eax
  unsigned int v14; // edi
  NTSTATUS v15; // ebx
  __int64 v16; // rbx
  unsigned int v18; // ebx
  unsigned __int64 v19; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  union _LARGE_INTEGER Time; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+48h] [rbp-B8h] BYREF
  const wchar_t *v24; // [rsp+50h] [rbp-B0h]
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  _DWORD KeyValueInformation[2]; // [rsp+A0h] [rbp-60h] BYREF
  ULONG ElapsedSeconds; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD Base[240]; // [rsp+470h] [rbp+370h] BYREF

  v24 = L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion";
  v23 = 8257660;
  ValueName.Buffer = L"InstallDate";
  *(_DWORD *)&ValueName.Length = 1572886;
  if ( NtQueryValueKey(
         SmpMmKey,
         (PUNICODE_STRING)&SmpPagefileUsageValue,
         KeyValuePartialInformationAlign64,
         KeyValueInformation,
         0x3CCu,
         &ResultLength) >= 0
    && KeyValueInformation[0] == 3
    && KeyValueInformation[1] == 964
    && ElapsedSeconds )
  {
    v0 = 7LL;
    v1 = &Data;
    p_ElapsedSeconds = &ElapsedSeconds;
    do
    {
      v3 = *((_OWORD *)p_ElapsedSeconds + 1);
      *(_OWORD *)v1 = *(_OWORD *)p_ElapsedSeconds;
      v4 = *((_OWORD *)p_ElapsedSeconds + 2);
      *((_OWORD *)v1 + 1) = v3;
      v5 = *((_OWORD *)p_ElapsedSeconds + 3);
      *((_OWORD *)v1 + 2) = v4;
      v6 = *((_OWORD *)p_ElapsedSeconds + 4);
      *((_OWORD *)v1 + 3) = v5;
      v7 = *((_OWORD *)p_ElapsedSeconds + 5);
      *((_OWORD *)v1 + 4) = v6;
      v8 = *((_OWORD *)p_ElapsedSeconds + 6);
      *((_OWORD *)v1 + 5) = v7;
      v9 = *((_OWORD *)p_ElapsedSeconds + 7);
      p_ElapsedSeconds += 32;
      *((_OWORD *)v1 + 6) = v8;
      v1 += 16;
      *((_OWORD *)v1 - 1) = v9;
      --v0;
    }
    while ( v0 );
    v10 = *((_OWORD *)p_ElapsedSeconds + 1);
    *(_OWORD *)v1 = *(_OWORD *)p_ElapsedSeconds;
    v11 = *((_OWORD *)p_ElapsedSeconds + 2);
    *((_OWORD *)v1 + 1) = v10;
    v12 = *((_OWORD *)p_ElapsedSeconds + 3);
    v13 = p_ElapsedSeconds[16];
    *((_OWORD *)v1 + 2) = v11;
    *((_OWORD *)v1 + 3) = v12;
    *((_DWORD *)v1 + 16) = v13;
  }
  else
  {
    LODWORD(Data) = 0;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v23;
  v14 = 48;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v15 = NtQueryValueKey(
            KeyHandle,
            &ValueName,
            KeyValuePartialInformationAlign64,
            KeyValueInformation,
            0x3CCu,
            &ResultLength);
    NtClose(KeyHandle);
    if ( v15 >= 0 && KeyValueInformation[0] == 4 )
    {
      v16 = MEMORY[0x7FFE0014];
      RtlSecondsSince1970ToTime(ElapsedSeconds, &Time);
      if ( (unsigned __int64)(v16 - Time.QuadPart) >= 0x649534E0000LL )
        v14 = 8;
    }
  }
  if ( (unsigned int)Data < v14 )
    return SmpDesiredPfSizeBasedOnRAM;
  v18 = 240;
  if ( (unsigned int)Data < 0xF0 )
    v18 = Data;
  if ( v18 )
    memcpy_0(Base, &unk_140025EF4, 4LL * v18);
  qsort(Base, v18, 4uLL, SmpPagefileUsageSampleCompare);
  v19 = (unsigned int)dword_140025BA8 * (unsigned __int64)(unsigned int)Base[9 * v18 / 0xA];
  return v19 + (v19 >> 4);
}
