/*
 * XREFs of BapdpProcessVsmKeyBlobs @ 0x1409D22A0
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x1409D2004 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlStringCchCatW @ 0x1400F5038 (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwWriteFile @ 0x1401B83F0 (ZwWriteFile.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     ZwCreateFile @ 0x1401B8D90 (ZwCreateFile.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401B9D10 (ZwDeleteValueKey.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     BapdGetISRegistryKey @ 0x14056FEC8 (BapdGetISRegistryKey.c)
 *     RtlIsStateSeparationEnabled @ 0x1406C4490 (RtlIsStateSeparationEnabled.c)
 *     BapdpQueryData @ 0x1409D260C (BapdpQueryData.c)
 */

void __fastcall BapdpProcessVsmKeyBlobs(int a1)
{
  ULONG *PoolWithTag; // rsi
  WCHAR *v3; // r12
  unsigned int v4; // r13d
  __int64 v5; // rcx
  unsigned int v6; // ebx
  PCWSTR *v7; // rdi
  NTSTATUS v8; // eax
  int Data; // eax
  BOOLEAN IsStateSeparationEnabled; // al
  __int64 v11; // rdx
  WCHAR *v12; // rcx
  WCHAR v13; // ax
  WCHAR v14; // ax
  WCHAR *v15; // rax
  int v16; // eax
  ULONG DataSize[2]; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-98h] BYREF
  HANDLE FileHandle; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  _DWORD v23[4]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v24[2]; // [rsp+E8h] [rbp-20h] BYREF
  int v25; // [rsp+F8h] [rbp-10h]
  int v26; // [rsp+FCh] [rbp-Ch]
  int v27; // [rsp+100h] [rbp-8h]
  int v28; // [rsp+104h] [rbp-4h]
  const wchar_t *v29; // [rsp+108h] [rbp+0h]
  const wchar_t *v30; // [rsp+110h] [rbp+8h]
  int v31; // [rsp+118h] [rbp+10h]
  int v32; // [rsp+11Ch] [rbp+14h]
  int v33; // [rsp+120h] [rbp+18h]
  int v34; // [rsp+124h] [rbp+1Ch]
  const wchar_t *v35; // [rsp+128h] [rbp+20h]
  const wchar_t *v36; // [rsp+130h] [rbp+28h]

  IoStatusBlock.Pointer = 0LL;
  KeyHandle = 0LL;
  PoolWithTag = 0LL;
  FileHandle = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v23[0] = -937207777;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v3 = 0LL;
  v23[1] = 1254716583;
  v24[0] = L"VsmIdkBlob";
  v4 = 0;
  v23[2] = -1274918465;
  v24[1] = L"system32\\config\\VSMIDK";
  v29 = L"VsmHbkBlob";
  v30 = L"system32\\config\\VSMHBK";
  v35 = L"VsmLKeyBlob";
  v36 = L"system32\\config\\VSMLKEY";
  v23[3] = 1271024649;
  v25 = 1759588193;
  v26 = 1265287039;
  v27 = 1264598702;
  v28 = 1186665675;
  v31 = 646995484;
  v32 = 1215474106;
  v33 = -1787939400;
  v34 = -970048220;
  if ( (int)BapdGetISRegistryKey(&KeyHandle) < 0 )
    goto LABEL_13;
  v6 = 0;
  v7 = (PCWSTR *)v24;
  while ( 1 )
  {
    if ( PoolWithTag )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = 0LL;
    }
    DataSize[0] = 0;
    if ( !a1 )
    {
      Data = BapdpQueryData(v5, &v23[8 * v6], 0LL, 0LL, DataSize);
      if ( Data == -1073741789 )
      {
        PoolWithTag = (ULONG *)ExAllocatePoolWithTag(NonPagedPoolNx, DataSize[0], 0x64506142u);
        if ( PoolWithTag )
        {
LABEL_20:
          if ( (int)BapdpQueryData(v5, &v23[8 * v6], 0LL, PoolWithTag, DataSize) >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, *v7);
            ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, PoolWithTag, DataSize[0]);
          }
          goto LABEL_8;
        }
      }
      else if ( Data >= 0 )
      {
        goto LABEL_20;
      }
      goto LABEL_8;
    }
    RtlInitUnicodeString(&DestinationString, *v7);
    v8 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, DataSize);
    if ( v8 == -1073741789 )
      break;
    if ( v8 >= 0 )
      goto LABEL_23;
LABEL_8:
    ++v6;
    v7 += 4;
    if ( v6 >= 3 )
      goto LABEL_9;
  }
  PoolWithTag = (ULONG *)ExAllocatePoolWithTag(NonPagedPoolNx, DataSize[0], 0x64506142u);
  if ( !PoolWithTag )
    goto LABEL_8;
LABEL_23:
  if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, PoolWithTag, DataSize[0], DataSize) < 0 )
    goto LABEL_8;
  ZwDeleteValueKey(KeyHandle, &DestinationString);
  if ( v3 )
  {
    v3[v4] = 0;
LABEL_42:
    if ( RtlStringCchCatW(v3, 0x104uLL, v7[1]) >= 0 )
    {
      RtlInitUnicodeStringEx(&DestinationString, v3);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwCreateFile(&FileHandle, 0x40100000u, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 0, 0, 0x60u, 0LL, 0) >= 0 )
      {
        ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, PoolWithTag + 3, PoolWithTag[2], 0LL, 0LL);
        ZwClose(FileHandle);
        FileHandle = 0LL;
      }
    }
    goto LABEL_8;
  }
  v3 = (WCHAR *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x208uLL, 0x656E6F4Eu);
  if ( v3 )
  {
    IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
    v11 = 260LL;
    v12 = v3;
    if ( IsStateSeparationEnabled )
    {
      do
      {
        if ( v11 == -2147483386 )
          break;
        v13 = *(WCHAR *)((char *)v12 + (char *)L"\\OSDataRoot\\Windows" - (char *)v3);
        if ( !v13 )
          break;
        *v12++ = v13;
        --v11;
      }
      while ( v11 );
      v4 = 19;
    }
    else
    {
      do
      {
        if ( v11 == -2147483386 )
          break;
        v14 = *(WCHAR *)((char *)v12 + (char *)L"\\SystemRoot\\" - (char *)v3);
        if ( !v14 )
          break;
        *v12++ = v14;
        --v11;
      }
      while ( v11 );
      v4 = 12;
    }
    v15 = v12 - 1;
    if ( v11 )
      v15 = v12;
    *v15 = 0;
    v16 = -2147483643;
    if ( v11 )
      v16 = 0;
    if ( v16 >= 0 )
      goto LABEL_42;
  }
LABEL_9:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
LABEL_13:
  if ( KeyHandle )
    ZwClose(KeyHandle);
}
