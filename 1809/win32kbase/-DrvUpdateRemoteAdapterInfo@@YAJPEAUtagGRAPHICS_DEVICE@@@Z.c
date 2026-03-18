/*
 * XREFs of ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00A6108
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C00161E0 (DrvUpdateGraphicsDeviceList.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C0105804 (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0041E08 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C008F3C8 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C010366C (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

__int64 __fastcall DrvUpdateRemoteAdapterInfo(struct tagGRAPHICS_DEVICE *a1)
{
  NTSTATUS v2; // ebx
  int v3; // esi
  unsigned int v5; // edi
  PVOID P; // [rsp+50h] [rbp-79h] BYREF
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-71h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-69h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+70h] [rbp-59h] BYREF
  __int64 v10; // [rsp+A8h] [rbp-21h]
  int v11; // [rsp+B0h] [rbp-19h]
  _BYTE v12[40]; // [rsp+B8h] [rbp-11h] BYREF
  _BYTE v13[16]; // [rsp+E0h] [rbp+17h] BYREF
  __int64 v14; // [rsp+F0h] [rbp+27h]
  __int64 v15; // [rsp+138h] [rbp+6Fh] BYREF
  unsigned int v16; // [rsp+140h] [rbp+77h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+148h] [rbp+7Fh] BYREF

  v2 = 0;
  P = 0LL;
  v3 = 0;
  DeviceObject = 0LL;
  FileObject = 0LL;
  LODWORD(v15) = 0;
  if ( dword_1C01CE2F0 )
  {
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Flags = 288;
    QueryTable.Name = L"MaxObjectNumber";
    QueryTable.DefaultType = 0x4000000;
    QueryTable.EntryContext = &v15;
    QueryTable.DefaultData = 0LL;
    QueryTable.DefaultLength = 4;
    v10 = 0LL;
    v11 = 0;
    memset(v12, 0, sizeof(v12));
    v2 = RtlQueryRegistryValues(4u, L"VIDEO", &QueryTable, 0LL, 0LL);
    if ( v2 >= 0 )
    {
      v5 = 0;
      while ( 1 )
      {
        v2 = RtlStringCchPrintfW(word_1C01CE308, 0x20uLL, L"\\Device\\Video%d", v5);
        if ( v2 < 0 )
          break;
        RtlInitUnicodeString(&DestinationString, word_1C01CE308);
        if ( IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject) >= 0 )
        {
          v2 = GreDeviceIoControlImpl(DeviceObject, 0x232033u, 0LL, 0, v13, 0x20u, &v16, 1u, 1);
          if ( v2 >= 0 && v14 == qword_1C01CE2F4 )
          {
            if ( dword_1C01CE2F0 )
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
        if ( ++v5 > (unsigned int)v15 )
        {
          v2 = -1073741772;
LABEL_19:
          if ( v2 >= 0 )
            return (unsigned int)v2;
          break;
        }
      }
    }
    memset(word_1C01CE308, 0, 0x20uLL);
    if ( Object )
    {
      if ( dword_1C01CE2F0 )
      {
        ObfDereferenceObject(Object);
      }
      else
      {
        v15 = 0LL;
        qword_1C01CE2F4 = 0LL;
      }
      Object = 0LL;
    }
  }
  else if ( !Object && (unsigned __int8)((__int64 (*)(void))qword_1C01CDD50)() )
  {
    qword_1C01CE2F4 = *((_QWORD *)a1 + 37);
    Object = (PVOID)*((_QWORD *)a1 + 38);
  }
  return (unsigned int)v2;
}
