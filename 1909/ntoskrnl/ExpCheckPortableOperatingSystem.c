/*
 * XREFs of ExpCheckPortableOperatingSystem @ 0x1406E94CC
 * Callers:
 *     ExIsWindowsToGo @ 0x1406E94A0 (ExIsWindowsToGo.c)
 *     ExInitLicenseData @ 0x140A0E14C (ExInitLicenseData.c)
 * Callees:
 *     PsGetHostSilo @ 0x140015DF0 (PsGetHostSilo.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x1400880E8 (RtlStringCchPrintfW.c)
 *     PsGetServerSiloGlobals @ 0x1400C9B10 (PsGetServerSiloGlobals.c)
 *     RtlCheckPortableOperatingSystem @ 0x140138760 (RtlCheckPortableOperatingSystem.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140625E64 (ExpHwidSendSynchronousIrpToDevice.c)
 *     IoGetDevicePropertyData @ 0x140626F10 (IoGetDevicePropertyData.c)
 */

__int64 __fastcall ExpCheckPortableOperatingSystem(_DWORD *a1)
{
  unsigned int *v2; // rsi
  int DevicePropertyData; // ebx
  __int64 HostSilo; // rax
  ULONG v6; // edi
  int i; // r14d
  unsigned int *PoolWithTag; // rax
  int v9; // eax
  unsigned int *v10; // rdi
  int v11; // eax
  PDEVICE_OBJECT v12; // r14
  char v13; // dl
  char *v14; // rcx
  char *v15; // r8
  BOOLEAN IsPortable[8]; // [rsp+48h] [rbp-C0h] BYREF
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-B8h] BYREF
  ULONG_PTR v18; // [rsp+58h] [rbp-B0h] BYREF
  PDEVICE_OBJECT Pdo; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING v20; // [rsp+68h] [rbp-A0h] BYREF
  ULONG RequiredSize[2]; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v23[2]; // [rsp+90h] [rbp-78h] BYREF
  WCHAR SourceString[12]; // [rsp+A0h] [rbp-68h] BYREF
  wchar_t pszDest[264]; // [rsp+B8h] [rbp-50h] BYREF

  *a1 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v2 = 0LL;
  memset(v23, 0, 12);
  NumberOfBytes = 0LL;
  *(_QWORD *)&v20.Length = 0LL;
  v20.Buffer = 0LL;
  Pdo = 0LL;
  DevicePropertyData = RtlCheckPortableOperatingSystem(IsPortable);
  if ( DevicePropertyData >= 0 && IsPortable[0] )
  {
    wcscpy(SourceString, L"\\??\\x:");
    HostSilo = PsGetHostSilo();
    SourceString[4] = **((_WORD **)PsGetServerSiloGlobals(HostSilo) + 132);
    RtlInitUnicodeString(&DestinationString, SourceString);
    v6 = 32;
    for ( i = 0; ; i = 1 )
    {
      if ( v2 )
        ExFreePoolWithTag(v2, 0);
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v6, 0x20475457u);
      v2 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      memset(PoolWithTag, 0, v6);
      v9 = ExpHwidSendSynchronousIrpToDevice(&DestinationString, 0x560000u, 0LL, 0, v2, v6, 0LL, 0LL);
      DevicePropertyData = v9;
      if ( v9 >= 0 )
      {
        if ( *v2 == 1 )
        {
          RtlStringCchPrintfW(pszDest, 0x104uLL, L"\\??\\PhysicalDrive%u", v2[2]);
          RtlInitUnicodeString(&v20, pszDest);
          memset(v23, 0, 12);
          DevicePropertyData = ExpHwidSendSynchronousIrpToDevice(
                                 &v20,
                                 0x2D1400u,
                                 v23,
                                 0xCu,
                                 &NumberOfBytes,
                                 8u,
                                 0LL,
                                 0LL);
          if ( DevicePropertyData >= 0 )
          {
            v10 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, HIDWORD(NumberOfBytes), 0x20475457u);
            if ( v10 )
            {
              v18 = 0LL;
              v11 = ExpHwidSendSynchronousIrpToDevice(
                      &v20,
                      0x2D1400u,
                      v23,
                      0xCu,
                      v10,
                      HIDWORD(NumberOfBytes),
                      &v18,
                      &Pdo);
              v12 = Pdo;
              DevicePropertyData = v11;
              if ( v11 >= 0 )
              {
                if ( Pdo && v18 >= 0x28 && v18 >= v10[1] )
                {
                  if ( v10[7] == 7 )
                  {
                    DevicePropertyData = IoGetDevicePropertyData(
                                           Pdo,
                                           &DEVPKEY_Device_InLocalMachineContainer,
                                           0,
                                           0,
                                           1u,
                                           &IsPortable[1],
                                           &RequiredSize[1],
                                           RequiredSize);
                    if ( DevicePropertyData >= 0 && !IsPortable[1] )
                    {
                      *a1 = 2;
                      v13 = 0;
                      v14 = (char *)v10 + v10[6];
                      v15 = (char *)v10 + v10[1];
                      if ( v14 >= (char *)v10 + 36 )
                      {
                        if ( v14 >= v15 )
                          goto LABEL_31;
                        do
                        {
                          if ( !*v14 )
                            break;
                          if ( ((*v14 - 32) & 0xEF) != 0 )
                            v13 = 1;
                          ++v14;
                        }
                        while ( v14 < v15 );
                        if ( v14 >= v15 )
LABEL_31:
                          v13 = 0;
                        if ( v13 )
                        {
                          *a1 = 1;
                          DevicePropertyData = 0;
                        }
                      }
                    }
                  }
                }
                else
                {
                  DevicePropertyData = -1073741823;
                }
              }
              ExFreePoolWithTag(v10, 0);
              if ( v12 )
                ObfDereferenceObject(v12);
            }
            else
            {
              DevicePropertyData = -1073741801;
            }
          }
        }
        else
        {
          DevicePropertyData = 0;
        }
LABEL_37:
        ExFreePoolWithTag(v2, 0);
        return (unsigned int)DevicePropertyData;
      }
      if ( v9 != -2147483643 || i )
        goto LABEL_37;
      v6 = v6 + 24 * *v2 - 24;
    }
    return (unsigned int)-1073741801;
  }
  return (unsigned int)DevicePropertyData;
}
