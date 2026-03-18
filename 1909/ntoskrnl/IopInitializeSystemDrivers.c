/*
 * XREFs of IopInitializeSystemDrivers @ 0x140A109A8
 * Callers:
 *     IoInitSystem @ 0x140A0FCD8 (IoInitSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     PnpDiagnosticTrace @ 0x140154434 (PnpDiagnosticTrace.c)
 *     PnpRequestDeviceAction @ 0x14015D824 (PnpRequestDeviceAction.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     IopGetRegistryValue @ 0x1406DA724 (IopGetRegistryValue.c)
 *     IopLoadDriver @ 0x14070AF00 (IopLoadDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x14070B658 (IopGetDriverNameFromKeyNode.c)
 *     IopOpenRegistryKeyEx @ 0x14071DBA0 (IopOpenRegistryKeyEx.c)
 *     IopReferenceDriverObjectByName @ 0x140736030 (IopReferenceDriverObjectByName.c)
 *     ExIsManufacturingModeEnabled @ 0x1407690D0 (ExIsManufacturingModeEnabled.c)
 *     PnpWaitForDevicesToStart @ 0x140A10650 (PnpWaitForDevicesToStart.c)
 *     PipCheckDependencies @ 0x140A115EC (PipCheckDependencies.c)
 *     InbvIndicateProgress @ 0x140A11D78 (InbvIndicateProgress.c)
 *     PipLookupGroupName @ 0x140A11E80 (PipLookupGroupName.c)
 *     PipFreeGroupTree @ 0x140A12158 (PipFreeGroupTree.c)
 *     CmGetSystemDriverList @ 0x140A12338 (CmGetSystemDriverList.c)
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
  __int64 v7; // rdi
  int v8; // eax
  void *v9; // rcx
  int v11; // edi
  UNICODE_STRING v12; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING String1; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-10h] BYREF
  int v15; // [rsp+A0h] [rbp+30h] BYREF
  PVOID P; // [rsp+A8h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+40h] BYREF

  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  *(_QWORD *)&v12.Length = 0LL;
  v12.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  PnpDiagnosticTrace(&KMPnPEvt_SystemStart_Start, 0, 0LL);
  IsManufacturingModeEnabled = ExIsManufacturingModeEnabled();
  SystemDriverList = (void **)CmGetSystemDriverList((unsigned __int64)qword_1404324B0 & -(__int64)(IsManufacturingModeEnabled != 0));
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
          *(_DWORD *)&v12.Length = 655368;
          v12.Buffer = L"Enum";
          if ( IopOpenRegistryKeyEx(&Handle, *v2, &v12, 0x20019u) < 0 )
            goto LABEL_6;
          v11 = 0;
          if ( IopGetRegistryValue(Handle, L"INITSTARTFAILED", 0, &P) >= 0 )
          {
            if ( *((_DWORD *)P + 3) == 4 )
              v11 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
            ExFreePoolWithTag(P, 0);
          }
          ZwClose(Handle);
          if ( !v11 )
          {
LABEL_6:
            if ( IopGetRegistryValue(*v2, L"Group", 0, &P) < 0 )
            {
              v7 = 0LL;
            }
            else
            {
              v6 = P;
              if ( *((_DWORD *)P + 3) )
              {
                String1.Length = *((_WORD *)P + 6);
                String1.MaximumLength = String1.Length;
                String1.Buffer = (wchar_t *)((char *)P + *((unsigned int *)P + 2));
                v7 = PipLookupGroupName(&String1);
              }
              else
              {
                v7 = 0LL;
              }
              ExFreePoolWithTag(v6, 0);
            }
            v8 = PipCheckDependencies(*v2);
            v9 = *v2;
            if ( v8 )
            {
              if ( (int)IopLoadDriver(v9, 1, 0, &v15) >= 0 && v7 )
                ++*(_DWORD *)(v7 + 28);
            }
            else
            {
              ZwClose(v9);
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
  PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 17, 0, 0LL, 0LL, 0LL, 0LL);
  if ( !PnpBootOptions )
    PnpWaitForDevicesToStart();
  PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 18, 0, 0LL, 0LL, 0LL, 0LL);
  if ( IopGroupListHead )
    PipFreeGroupTree();
  PnpDiagnosticTrace(&KMPnPEvt_SystemStart_Stop, 0, 0LL);
  return 1LL;
}
