/*
 * XREFs of BapdpProcessVsmKeyBlobs @ 0x140A0A0AC
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140A09E1C (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlStringCchCatW @ 0x140154958 (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwWriteFile @ 0x1401C0D50 (ZwWriteFile.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 *     ZwCreateFile @ 0x1401C16F0 (ZwCreateFile.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401C2690 (ZwDeleteValueKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BapdGetISRegistryKey @ 0x14059E8CC (BapdGetISRegistryKey.c)
 *     RtlIsStateSeparationEnabled @ 0x1406E4BE0 (RtlIsStateSeparationEnabled.c)
 *     BapdpQueryData @ 0x140A0A3E8 (BapdpQueryData.c)
 */

void __fastcall BapdpProcessVsmKeyBlobs(int a1)
{
  ULONG *PoolWithTag; // rbx
  WCHAR *v3; // rdi
  unsigned int v4; // r12d
  __int64 v5; // rcx
  unsigned int v6; // r15d
  PCWSTR *v7; // r14
  NTSTATUS v8; // eax
  int Data; // eax
  PVOID v10; // rax
  __int64 v11; // rsi
  BOOLEAN IsStateSeparationEnabled; // al
  __int64 v13; // rdx
  WCHAR *v14; // rcx
  WCHAR v15; // ax
  WCHAR v16; // ax
  WCHAR *v17; // rax
  ULONG DataSize[2]; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-98h] BYREF
  HANDLE FileHandle; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  _DWORD v24[4]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v25[2]; // [rsp+E8h] [rbp-20h] BYREF
  int v26; // [rsp+F8h] [rbp-10h]
  int v27; // [rsp+FCh] [rbp-Ch]
  int v28; // [rsp+100h] [rbp-8h]
  int v29; // [rsp+104h] [rbp-4h]
  const wchar_t *v30; // [rsp+108h] [rbp+0h]
  const wchar_t *v31; // [rsp+110h] [rbp+8h]
  int v32; // [rsp+118h] [rbp+10h]
  int v33; // [rsp+11Ch] [rbp+14h]
  int v34; // [rsp+120h] [rbp+18h]
  int v35; // [rsp+124h] [rbp+1Ch]
  const wchar_t *v36; // [rsp+128h] [rbp+20h]
  const wchar_t *v37; // [rsp+130h] [rbp+28h]

  KeyHandle = 0LL;
  FileHandle = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  PoolWithTag = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v24[0] = -937207777;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v3 = 0LL;
  v24[1] = 1254716583;
  v25[0] = L"VsmIdkBlob";
  v4 = 0;
  v24[2] = -1274918465;
  v25[1] = L"system32\\config\\VSMIDK";
  v30 = L"VsmHbkBlob";
  v31 = L"system32\\config\\VSMHBK";
  v36 = L"VsmLKeyBlob";
  v37 = L"system32\\config\\VSMLKEY";
  v24[3] = 1271024649;
  v26 = 1759588193;
  v27 = 1265287039;
  v28 = 1264598702;
  v29 = 1186665675;
  v32 = 646995484;
  v33 = 1215474106;
  v34 = -1787939400;
  v35 = -970048220;
  if ( (int)BapdGetISRegistryKey(&KeyHandle) < 0 )
    goto LABEL_13;
  v6 = 0;
  v7 = (PCWSTR *)v25;
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
      Data = BapdpQueryData(v5, &v24[8 * v6], 0LL, 0LL, DataSize);
      if ( Data != -1073741789 )
        goto LABEL_17;
      PoolWithTag = (ULONG *)ExAllocatePoolWithTag(NonPagedPoolNx, DataSize[0], 0x64506142u);
      if ( PoolWithTag )
      {
        Data = 0;
LABEL_17:
        if ( Data >= 0 && (int)BapdpQueryData(v5, &v24[8 * v6], 0LL, PoolWithTag, DataSize) >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, *v7);
          ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, PoolWithTag, DataSize[0]);
        }
        goto LABEL_8;
      }
      goto LABEL_8;
    }
    RtlInitUnicodeString(&DestinationString, *v7);
    v8 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, DataSize);
    if ( v8 != -1073741789 )
      goto LABEL_7;
    PoolWithTag = (ULONG *)ExAllocatePoolWithTag(NonPagedPoolNx, DataSize[0], 0x64506142u);
    if ( PoolWithTag )
      break;
LABEL_8:
    ++v6;
    v7 += 4;
    if ( v6 >= 3 )
      goto LABEL_9;
  }
  v8 = 0;
LABEL_7:
  if ( v8 < 0
    || ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, PoolWithTag, DataSize[0], DataSize) < 0 )
  {
    goto LABEL_8;
  }
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
  v10 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x208uLL, 0x656E6F4Eu);
  v3 = (WCHAR *)v10;
  if ( v10 )
  {
    v11 = -(__int64)v10;
    IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
    v13 = 260LL;
    v14 = v3;
    if ( IsStateSeparationEnabled )
    {
      do
      {
        if ( v13 == -2147483386 )
          break;
        v15 = *(WCHAR *)((char *)v14 + (_QWORD)L"\\OSDataRoot\\Windows\\" + v11);
        if ( !v15 )
          break;
        *v14++ = v15;
        --v13;
      }
      while ( v13 );
      v4 = 20;
    }
    else
    {
      do
      {
        if ( v13 == -2147483386 )
          break;
        v16 = *(WCHAR *)((char *)v14 + (_QWORD)L"\\SystemRoot\\" + v11);
        if ( !v16 )
          break;
        *v14++ = v16;
        --v13;
      }
      while ( v13 );
      v4 = 12;
    }
    v17 = v14 - 1;
    if ( v13 )
      v17 = v14;
    *v17 = 0;
    if ( v13 )
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
