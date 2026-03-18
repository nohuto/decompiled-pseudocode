/*
 * XREFs of ExpHwidSysVolIfGetDiskInfo @ 0x140625C5C
 * Callers:
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x140623CC0 (ExpHwidSysVolIfDeviceInfoProvider.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x1400880E8 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     sub_140623E0C @ 0x140623E0C (sub_140623E0C.c)
 *     sub_140623EA0 @ 0x140623EA0 (sub_140623EA0.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140625E64 (ExpHwidSendSynchronousIrpToDevice.c)
 *     ExpHwidAppendDeviceInfoBlock @ 0x140626870 (ExpHwidAppendDeviceInfoBlock.c)
 *     ExpHwidGetDeviceProperties @ 0x140626BA0 (ExpHwidGetDeviceProperties.c)
 */

__int64 __fastcall ExpHwidSysVolIfGetDiskInfo(__int64 a1, unsigned int a2)
{
  NTSTATUS DeviceProperties; // ebx
  PVOID PoolWithTag; // rsi
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v10; // [rsp+60h] [rbp-A0h] BYREF
  int v11; // [rsp+68h] [rbp-98h]
  _DWORD v12[8]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v13[24]; // [rsp+90h] [rbp-70h] BYREF
  wchar_t pszDest[264]; // [rsp+F0h] [rbp-10h] BYREF

  memset(v13, 0, 0x58uLL);
  NumberOfBytes = 0LL;
  v10 = 0LL;
  v11 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(v12, 0, sizeof(v12));
  Object = 0LL;
  sub_140623E0C((char *)v13);
  DeviceProperties = RtlStringCchPrintfW(pszDest, 0x104uLL, L"\\??\\PhysicalDrive%u", a2);
  if ( DeviceProperties >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, pszDest);
    v11 = 0;
    DeviceProperties = ((__int64 (__fastcall *)(UNICODE_STRING *, __int64, __int64 *, __int64, SIZE_T *, int, _QWORD, _QWORD, PVOID))ExpHwidSendSynchronousIrpToDevice)(
                         &DestinationString,
                         2954240LL,
                         &v10,
                         12LL,
                         &NumberOfBytes,
                         8,
                         0LL,
                         0LL,
                         Object);
    if ( DeviceProperties >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, HIDWORD(NumberOfBytes), 0x20534C53u);
      if ( !PoolWithTag )
      {
        DeviceProperties = -1073741670;
        goto LABEL_13;
      }
      DeviceProperties = ((__int64 (__fastcall *)(UNICODE_STRING *, __int64, __int64 *, __int64, PVOID, _DWORD, _QWORD, PVOID *))ExpHwidSendSynchronousIrpToDevice)(
                           &DestinationString,
                           2954240LL,
                           &v10,
                           12LL,
                           PoolWithTag,
                           HIDWORD(NumberOfBytes),
                           0LL,
                           &Object);
      if ( DeviceProperties < 0 )
        goto LABEL_10;
      if ( !Object )
      {
LABEL_12:
        ExFreePoolWithTag(PoolWithTag, 0);
        goto LABEL_13;
      }
      if ( !*(_BYTE *)(a1 + 12) )
      {
        v12[7] = 0;
        *(_OWORD *)&v12[3] = SL_HWID_IF_GUID_SYSTEM_VOLUME;
        LOBYTE(v12[1]) = 2;
        DeviceProperties = ExpHwidGetDeviceProperties((PDEVICE_OBJECT)Object, (ULONG)v13);
        if ( DeviceProperties < 0 )
          goto LABEL_10;
        HIWORD(v12[1]) = v13[8];
        BYTE1(v12[1]) = BYTE2(v13[8]);
        v12[2] = v13[9];
      }
      DeviceProperties = ExpHwidAppendDeviceInfoBlock(a1, v12, PoolWithTag, HIDWORD(NumberOfBytes));
LABEL_10:
      if ( Object )
        ObfDereferenceObject(Object);
      goto LABEL_12;
    }
  }
LABEL_13:
  sub_140623EA0((char *)v13);
  return (unsigned int)DeviceProperties;
}
