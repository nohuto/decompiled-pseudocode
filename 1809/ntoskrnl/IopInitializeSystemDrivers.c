/*
 * XREFs of IopInitializeSystemDrivers @ 0x1409CBCC4
 * Callers:
 *     IoInitSystem @ 0x1409D3354 (IoInitSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PnpDiagnosticTrace @ 0x1401372E4 (PnpDiagnosticTrace.c)
 *     PnpRequestDeviceAction @ 0x14015F104 (PnpRequestDeviceAction.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     IopLoadDriver @ 0x140680BF4 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x140681500 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 *     IopReferenceDriverObjectByName @ 0x14070A714 (IopReferenceDriverObjectByName.c)
 *     ExIsManufacturingModeEnabled @ 0x14073CFD0 (ExIsManufacturingModeEnabled.c)
 *     IopOpenRegistryKeyEx @ 0x14073D664 (IopOpenRegistryKeyEx.c)
 *     PnpWaitForDevicesToStart @ 0x1409CB968 (PnpWaitForDevicesToStart.c)
 *     InbvIndicateProgress @ 0x1409CCEB0 (InbvIndicateProgress.c)
 *     PipCheckDependencies @ 0x1409CD0A0 (PipCheckDependencies.c)
 *     PipLookupGroupName @ 0x1409CD0EC (PipLookupGroupName.c)
 *     PipFreeGroupTree @ 0x1409CD4A0 (PipFreeGroupTree.c)
 *     CmGetSystemDriverList @ 0x1409CD66C (CmGetSystemDriverList.c)
 */

__int64 IopInitializeSystemDrivers()
{
  char IsManufacturingModeEnabled; // al
  void **SystemDriverList; // rax
  void **v2; // rbx
  void **v3; // r14
  void *v4; // rax
  PVOID v5; // rdi
  PVOID v6; // rsi
  int v7; // eax
  __int64 v8; // rdi
  int v9; // eax
  void *v10; // rcx
  int v12; // edi
  UNICODE_STRING v13; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING String1; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-10h] BYREF
  int v16; // [rsp+A0h] [rbp+30h] BYREF
  PVOID P; // [rsp+A8h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+40h] BYREF

  PnpDiagnosticTrace(&KMPnPEvt_SystemStart_Start, 0, 0LL);
  IsManufacturingModeEnabled = ExIsManufacturingModeEnabled();
  SystemDriverList = (void **)CmGetSystemDriverList((unsigned __int64)qword_14040AE10 & -(__int64)(IsManufacturingModeEnabled != 0));
  v2 = SystemDriverList;
  if ( SystemDriverList )
  {
    v3 = SystemDriverList;
    v4 = *SystemDriverList;
    if ( v4 )
    {
      do
      {
        if ( (int)IopGetDriverNameFromKeyNode(v4, &UnicodeString) >= 0
          && (v5 = IopReferenceDriverObjectByName(&UnicodeString), RtlFreeAnsiString(&UnicodeString), v5) )
        {
          ObfDereferenceObjectWithTag(v5, 0x746C6644u);
        }
        else
        {
          *(_DWORD *)&v13.Length = 655368;
          v13.Buffer = L"Enum";
          if ( IopOpenRegistryKeyEx(&Handle, *v2, &v13, 0x20019u) < 0 )
            goto LABEL_6;
          v12 = 0;
          if ( IopGetRegistryValue(Handle, L"INITSTARTFAILED", 0, &P) >= 0 )
          {
            if ( *((_DWORD *)P + 3) == 4 )
              v12 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
            ExFreePoolWithTag(P, 0);
          }
          ZwClose(Handle);
          if ( !v12 )
          {
LABEL_6:
            if ( IopGetRegistryValue(*v2, L"Group", 0, &P) < 0 )
            {
              v8 = 0LL;
            }
            else
            {
              v6 = P;
              v7 = *((_DWORD *)P + 3);
              if ( v7 )
              {
                String1.Length = *((_DWORD *)P + 3);
                String1.MaximumLength = v7;
                String1.Buffer = (wchar_t *)((char *)P + *((unsigned int *)P + 2));
                v8 = PipLookupGroupName(&String1);
              }
              else
              {
                v8 = 0LL;
              }
              ExFreePoolWithTag(v6, 0);
            }
            v9 = PipCheckDependencies(*v2);
            v10 = *v2;
            if ( v9 )
            {
              if ( (int)IopLoadDriver(v10, 1, 0, &v16) >= 0 && v8 )
                ++*(_DWORD *)(v8 + 28);
            }
            else
            {
              ZwClose(v10);
            }
            InbvIndicateProgress();
            goto LABEL_15;
          }
        }
        ZwClose(*v2);
LABEL_15:
        v4 = *++v2;
      }
      while ( *v2 );
    }
    ExFreePoolWithTag(v3, 0);
  }
  PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 17, 0, 0LL, 0LL, 0LL, 0LL);
  if ( !PnpBootOptions )
    PnpWaitForDevicesToStart();
  PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 18, 0, 0LL, 0LL, 0LL, 0LL);
  if ( IopGroupListHead )
    PipFreeGroupTree();
  PnpDiagnosticTrace(&KMPnPEvt_SystemStart_Stop, 0, 0LL);
  return 1LL;
}
