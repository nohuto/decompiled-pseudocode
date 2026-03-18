/*
 * XREFs of ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00BA88C
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C004F0F0 (DrvUpdateGraphicsDeviceList.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C012E9C8 (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C004D920 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C00A26E0 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00A6024 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 __fastcall DrvUpdateRemoteAdapterInfo(struct tagGRAPHICS_DEVICE *a1)
{
  int v2; // ebx
  int v3; // esi
  unsigned int v5; // edi
  PVOID P; // [rsp+50h] [rbp-79h] BYREF
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-69h] BYREF
  _QWORD v9[4]; // [rsp+70h] [rbp-59h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+90h] [rbp-39h] BYREF
  __int64 v11; // [rsp+C8h] [rbp-1h]
  int v12; // [rsp+D0h] [rbp+7h]
  _BYTE v13[40]; // [rsp+D8h] [rbp+Fh] BYREF
  __int64 v14; // [rsp+138h] [rbp+6Fh] BYREF
  unsigned int v15; // [rsp+140h] [rbp+77h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+148h] [rbp+7Fh] BYREF

  memset(v9, 0, sizeof(v9));
  v2 = 0;
  P = 0LL;
  v3 = 0;
  DeviceObject = 0LL;
  FileObject = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  LODWORD(v14) = 0;
  if ( dword_1C0215BA0 )
  {
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Flags = 288;
    QueryTable.Name = L"MaxObjectNumber";
    QueryTable.DefaultType = 0x4000000;
    QueryTable.EntryContext = &v14;
    QueryTable.DefaultData = 0LL;
    QueryTable.DefaultLength = 4;
    v11 = 0LL;
    v12 = 0;
    memset(v13, 0, sizeof(v13));
    v2 = RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
    if ( v2 >= 0 )
    {
      v5 = 0;
      while ( 1 )
      {
        v2 = RtlStringCchPrintfW(Dest, 32LL, L"\\Device\\Video%d", v5);
        if ( v2 < 0 )
          break;
        RtlInitUnicodeString(&DestinationString, Dest);
        if ( IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject) >= 0 )
        {
          v2 = GreDeviceIoControlImpl(DeviceObject, 0x232033u, 0LL, 0, v9, 0x20u, &v15, 1u, 1);
          if ( v2 >= 0 && v9[2] == qword_1C0215BA4 )
          {
            if ( dword_1C0215BA0 )
            {
              v2 = DrvForceChildDeviceReenumeration(DeviceObject, (struct _DEVICE_RELATIONS **)&P);
              if ( v2 >= 0 )
              {
                Object = (PVOID)*((_QWORD *)P + 1);
                ExFreePoolWithTag(P, 0);
              }
            }
            v3 = 1;
          }
          ObfDereferenceObject(FileObject);
          if ( v3 )
            goto LABEL_19;
        }
        if ( ++v5 > (unsigned int)v14 )
        {
          v2 = -1073741772;
LABEL_19:
          if ( v2 >= 0 )
            return (unsigned int)v2;
          break;
        }
      }
    }
    memset(Dest, 0, 0x20uLL);
    if ( Object )
    {
      if ( dword_1C0215BA0 )
      {
        ObfDereferenceObject(Object);
      }
      else
      {
        v14 = 0LL;
        qword_1C0215BA4 = 0LL;
      }
      Object = 0LL;
    }
  }
  else if ( !Object && (unsigned __int8)((__int64 (*)(void))qword_1C02152A0)() )
  {
    qword_1C0215BA4 = *((_QWORD *)a1 + 37);
    Object = (PVOID)*((_QWORD *)a1 + 38);
  }
  return (unsigned int)v2;
}
