/*
 * XREFs of IopInitializeBootDrivers @ 0x140A10470
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A0544C (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140002CB4 (RtlStringCchPrintfExW.c)
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     PnpDiagnosticTrace @ 0x140153D94 (PnpDiagnosticTrace.c)
 *     PnpUnlockDeviceActionQueue @ 0x140158F18 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140158FBC (PnpLockDeviceActionQueue.c)
 *     PnpRequestDeviceAction @ 0x14015D184 (PnpRequestDeviceAction.c)
 *     PnpBootDeviceWait @ 0x14018D970 (PnpBootDeviceWait.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _memicmp @ 0x1401BDFB0 (_memicmp.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     McTemplateK0dzd @ 0x14029D698 (McTemplateK0dzd.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpUnicodeStringToWstrFree @ 0x1405BDA40 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1405BF440 (PnpUnicodeStringToWstr.c)
 *     RtlCompareUnicodeString @ 0x140653DF0 (RtlCompareUnicodeString.c)
 *     IopGetRegistryValue @ 0x14069A450 (IopGetRegistryValue.c)
 *     _PnpCtxRegCloseKey @ 0x1406F2DC8 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegCreateKey @ 0x140707418 (_PnpCtxRegCreateKey.c)
 *     _PnpCtxRegSetValue @ 0x140708C20 (_PnpCtxRegSetValue.c)
 *     IopGetDriverNameFromKeyNode @ 0x140709878 (IopGetDriverNameFromKeyNode.c)
 *     IopOpenRegistryKeyEx @ 0x14071BDB0 (IopOpenRegistryKeyEx.c)
 *     PipHardwareConfigGetIndex @ 0x140754558 (PipHardwareConfigGetIndex.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x1407645E0 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x14076460C (PnpWaitForEmptyDeviceActionQueue.c)
 *     PipApplyFunctionToServiceInstances @ 0x14077A264 (PipApplyFunctionToServiceInstances.c)
 *     PiCreateDriverRedirectedStateKey @ 0x14077CD68 (PiCreateDriverRedirectedStateKey.c)
 *     HdlspKernelAddLogEntry @ 0x14098C914 (HdlspKernelAddLogEntry.c)
 *     IopAllocateLegacyBootResources @ 0x1409F48B0 (IopAllocateLegacyBootResources.c)
 *     IopCreateArcNames @ 0x1409F5418 (IopCreateArcNames.c)
 *     PipInitComputerIds @ 0x1409F5B3C (PipInitComputerIds.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140A0F594 (PipUnloadEarlyLaunchDrivers.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x140A0F640 (IopCallBootDriverReinitializationRoutines.c)
 *     VhdInitialize @ 0x140A0F6E8 (VhdInitialize.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140A0F770 (PiCreateDriverDataDirectoryRoot.c)
 *     PipInitializeCoreDriversAndElam @ 0x140A0FDEC (PipInitializeCoreDriversAndElam.c)
 *     PnpWaitForDevicesToStart @ 0x140A0FEB8 (PnpWaitForDevicesToStart.c)
 *     PipInitializeDriverDependentDLLs @ 0x140A10080 (PipInitializeDriverDependentDLLs.c)
 *     PpInitGetGroupOrderIndex @ 0x140A10D48 (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x140A10E54 (PipCheckDependencies.c)
 *     PipGetDriverTagPriority @ 0x140A10EAC (PipGetDriverTagPriority.c)
 *     PnpInitializeBootStartDriver @ 0x140A11064 (PnpInitializeBootStartDriver.c)
 *     PipLookupGroupName @ 0x140A116E8 (PipLookupGroupName.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x140A11858 (PnpNotifyEarlyLaunchStatusUpdate.c)
 *     RamdiskStart @ 0x140A3F940 (RamdiskStart.c)
 *     SbpAddTransportToInstance @ 0x140A3FCD8 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A3FECC (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x140A402AC (SbpWaitForVmbus.c)
 */

__int64 __fastcall IopInitializeBootDrivers(__int16 *a1)
{
  __int16 *v1; // rsi
  NTSTATUS RegistryValue; // ebx
  _QWORD *v3; // r13
  int GroupOrderIndex; // eax
  char *v5; // rdx
  unsigned int v6; // r8d
  unsigned __int16 i; // cx
  __int64 v8; // rax
  char *v9; // rax
  unsigned __int16 v10; // r15
  unsigned __int16 v11; // bx
  unsigned __int16 v12; // di
  const UNICODE_STRING *v13; // r14
  __int16 *v14; // r14
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int16 *v17; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v19; // rdi
  unsigned int v20; // ebx
  unsigned __int16 DriverTagPriority; // ax
  __int64 **v22; // rdx
  __int64 *j; // rcx
  __int64 v24; // r14
  unsigned __int16 v25; // r15
  __int64 v26; // r12
  char *v27; // rax
  char *v28; // rbx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // r9
  _QWORD *v32; // rcx
  _QWORD *v33; // rbx
  __int64 v34; // rcx
  int Index; // r13d
  unsigned __int16 v36; // r12
  void **v37; // rdx
  void *v38; // rbx
  wchar_t *v40; // rdi
  int started; // eax
  void *v42; // rcx
  ULONG v43; // r8d
  char v44; // r9
  void **v45; // rax
  __int64 v46; // rdi
  int v47; // eax
  __int64 v48; // rdx
  PVOID v49; // r14
  unsigned int v50; // ecx
  PVOID v51; // rsi
  __int64 v52; // rcx
  unsigned __int16 *v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int16 *v57; // r15
  void *dwFlags; // [rsp+20h] [rbp-E0h]
  _DWORD *v59; // [rsp+30h] [rbp-D0h]
  PVOID v60; // [rsp+30h] [rbp-D0h]
  int v61; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  int v64; // [rsp+68h] [rbp-98h] BYREF
  const wchar_t *v65; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING v67; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING Destination; // [rsp+90h] [rbp-70h] BYREF
  HANDLE v69; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v71; // [rsp+B8h] [rbp-48h] BYREF
  const wchar_t *v72; // [rsp+C0h] [rbp-40h]
  UNICODE_STRING String1; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING String2; // [rsp+D8h] [rbp-28h] BYREF
  wchar_t pszDest[64]; // [rsp+F0h] [rbp-10h] BYREF

  v65 = (const wchar_t *)a1;
  v1 = a1;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  Object = 0LL;
  PnpDiagnosticTrace(&KMPnPEvt_BootStart_Start, 0, 0LL);
  PnpDriverImageLoadPolicy = 3;
  v67.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Policies\\EarlyLaunch";
  *(_QWORD *)&v67.Length = 8388734LL;
  if ( IopOpenRegistryKeyEx(&Handle, 0LL, &v67, 0x20019u) >= 0
    || (*(_DWORD *)&v67.Length = 8257660,
        v67.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\EarlyLaunch",
        IopOpenRegistryKeyEx(&Handle, 0LL, &v67, 0x20019u) >= 0) )
  {
    RegistryValue = IopGetRegistryValue(Handle, L"DriverLoadPolicy", 0, &P);
    ZwClose(Handle);
    if ( RegistryValue >= 0 )
    {
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
        PnpDriverImageLoadPolicy = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
      ExFreePoolWithTag(P, 0);
    }
  }
  if ( PnpDriverImageLoadPolicy == 8 )
  {
    PnpDriverImageLoadPolicy = 0;
  }
  else if ( (PnpDriverImageLoadPolicy & 0xFFFFFFF8) != 0 )
  {
    PnpDriverImageLoadPolicy = 3;
  }
  PipInitializeCoreDriversAndElam((UNICODE_STRING *)v1);
  PipInitComputerIds((__int64)v1);
  LODWORD(v71) = 2097182;
  v72 = L"\\FileSystem\\RAW";
  Destination.Buffer = (wchar_t *)qword_140A24B80;
  *(_DWORD *)&Destination.Length = 0x20000;
  PnpInitializeBootStartDriver(
    (unsigned int)&v71,
    (unsigned int)&Destination,
    (unsigned int)RawInitialize,
    0,
    (__int64)(v1 + 8),
    0,
    0);
  v3 = Object;
  if ( !Object )
    return 0LL;
  GroupOrderIndex = (unsigned __int16)PpInitGetGroupOrderIndex(0LL);
  IopGroupIndex = GroupOrderIndex;
  v61 = 0xFFFF;
  if ( (unsigned __int16)GroupOrderIndex == 0xFFFF )
  {
    if ( HeadlessGlobals && HeadlessGlobals[1] )
    {
      v50 = 16;
      goto LABEL_122;
    }
    return 0LL;
  }
  IopGroupTable = ExAllocatePoolWithTag(PagedPool, 16LL * (unsigned __int16)GroupOrderIndex, 0x6E697050u);
  v5 = (char *)IopGroupTable;
  if ( !IopGroupTable )
  {
    if ( HeadlessGlobals && HeadlessGlobals[1] )
    {
      v50 = 17;
      goto LABEL_122;
    }
    return 0LL;
  }
  v6 = IopGroupIndex;
  for ( i = 0; i < v6; *(_QWORD *)v9 = v9 )
  {
    v8 = i++;
    v9 = &v5[16 * v8];
    *((_QWORD *)v9 + 1) = v9;
  }
  PipInitializeDriverDependentDLLs(2, (__int64)v1);
  RtlInitUnicodeString(&DestinationString, L"System Reserved");
  RtlInitUnicodeString(&String2, L"Boot Bus Extender");
  v10 = PiInitGroupOrderTableCount;
  v11 = 0;
  v12 = 0;
  if ( !PiInitGroupOrderTableCount )
    goto LABEL_18;
  do
  {
    v13 = (const UNICODE_STRING *)((char *)PiInitGroupOrderTable + 16 * v12);
    if ( !RtlCompareUnicodeString(v13, &DestinationString, 1u) )
      goto LABEL_20;
    if ( !RtlCompareUnicodeString(v13, &String2, 1u) )
    {
      LOWORD(v61) = v12;
LABEL_20:
      ++v11;
    }
    if ( v11 >= 2u )
      break;
    ++v12;
  }
  while ( v12 < v10 );
  v1 = (__int16 *)v65;
  v3 = Object;
LABEL_18:
  v14 = (__int16 *)*((_QWORD *)v1 + 6);
  while ( v14 != v1 + 24 )
  {
    v17 = v14;
    v14 = *(__int16 **)v14;
    if ( *((int *)v17 + 14) >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x6E697050u);
      v19 = PoolWithTag;
      if ( PoolWithTag )
      {
        PoolWithTag[2] = 0LL;
        PoolWithTag[4] = 0LL;
        PoolWithTag[5] = 0LL;
        PoolWithTag[1] = PoolWithTag;
        *PoolWithTag = PoolWithTag;
        PoolWithTag[3] = v17;
        if ( IopOpenRegistryKeyEx(&Handle, 0LL, (UNICODE_STRING *)v17 + 2, 0x20019u) < 0 )
        {
          ExFreePoolWithTag(v19, 0);
        }
        else
        {
          v19[4] = Handle;
          v20 = (unsigned __int16)PpInitGetGroupOrderIndex(Handle);
          DriverTagPriority = PipGetDriverTagPriority(Handle);
          *((_WORD *)v19 + 22) = DriverTagPriority;
          v22 = (__int64 **)((char *)IopGroupTable + 16 * v20);
          for ( j = *v22; j != (__int64 *)v22 && *((_WORD *)j + 22) <= DriverTagPriority; j = (__int64 *)*j )
            ;
          v15 = (__int64 *)j[1];
          v16 = *v15;
          if ( *(__int64 **)(*v15 + 8) != v15 )
            goto LABEL_143;
          *v19 = v16;
          v19[1] = v15;
          *(_QWORD *)(v16 + 8) = v19;
          *v15 = (__int64)v19;
        }
      }
    }
  }
  PnpNotifyEarlyLaunchStatusUpdate(1LL);
  v24 = 0LL;
  v25 = 0;
  if ( !IopGroupIndex )
  {
LABEL_37:
    PnpNotifyEarlyLaunchStatusUpdate(2LL);
    PipUnloadEarlyLaunchDrivers((__int64)v1);
    PnPBootDriversLoaded = 1;
    PnpRequestDeviceAction(0LL, 0, 0, 0LL, 0LL, 0LL, 0LL);
    if ( PnpWaitForDevicesToStart() )
    {
      if ( IopCallBootDriverReinitializationRoutines() && !PnpWaitForDevicesToStart() )
      {
        if ( !HeadlessGlobals || !HeadlessGlobals[1] )
          return 0LL;
        v50 = 20;
LABEL_122:
        HdlspKernelAddLogEntry(v50, 0LL);
        return 0LL;
      }
      if ( memicmp(*((const void **)v1 + 23), "ramdisk(", 8uLL) )
        v29 = -1073741275;
      else
        v29 = RamdiskStart(v1);
      if ( (v29 < 0 || PnpWaitForDevicesToStart())
        && ((int)VhdInitialize((__int64)v1) < 0 || PnpWaitForDevicesToStart()) )
      {
        if ( (int)IopCreateArcNames((__int64)v1) < 0 )
          return 0LL;
        PnpBootDeviceWait((__int64)v1, 1, IopMarkBootPartition, 0LL);
        v30 = *((_QWORD *)v1 + 30);
        PnPBootDriversInitialized = 1;
        if ( (*(_DWORD *)(v30 + 116) & 0x400) != 0
          && ((int)SbpStartLanman() < 0 || (int)SbpWaitForVmbus() < 0 || (int)SbpAddTransportToInstance() < 0) )
        {
          return 0LL;
        }
        v31 = *((_QWORD *)v1 + 42);
        if ( v31 )
        {
          if ( (int)PnpBootDeviceWait(
                      (__int64)v1,
                      3,
                      (__int64 (__fastcall *)(__int64, __int64, UNICODE_STRING *))&PipCriticalDeviceWaitCallback,
                      v31) < 0 )
            return 0LL;
        }
        v32 = (_QWORD *)(*((_QWORD *)v1 + 30) + 296LL);
        v33 = (_QWORD *)*v32;
        if ( (_QWORD *)*v32 != v32 )
        {
          while ( (*((_DWORD *)v33 + 6) & 0x80u) == 0
               || (int)PnpBootDeviceWait(
                         (__int64)v1,
                         4,
                         (__int64 (__fastcall *)(__int64, __int64, UNICODE_STRING *))&PipCriticalDeviceWaitCallback,
                         v33[11]) >= 0 )
          {
            v33 = (_QWORD *)*v33;
            if ( v33 == (_QWORD *)(*((_QWORD *)v1 + 30) + 296LL) )
              goto LABEL_51;
          }
          return 0LL;
        }
LABEL_51:
        if ( (int)PiCreateDriverDataDirectoryRoot() < 0 )
          return 0LL;
        pszDest[0] = 0;
        Index = PipHardwareConfigGetIndex(v34, &v61);
        if ( Index >= 0 )
        {
          LODWORD(v60) = v61;
          Index = RtlStringCchPrintfExW(pszDest, 0x40uLL, 0LL, 0LL, 0x800u, L"%d", v60);
        }
        v36 = 0;
        if ( !IopGroupIndex )
        {
LABEL_57:
          ExFreePoolWithTag(IopGroupTable, 0);
          PnpDiagnosticTrace(&KMPnPEvt_BootStart_Stop, 0, 0LL);
          return 1LL;
        }
        while ( 1 )
        {
          while ( 1 )
          {
            v37 = (void **)((char *)IopGroupTable + 16 * v36);
            v38 = *v37;
            if ( *v37 != v37 )
              break;
            if ( ++v36 >= (unsigned int)IopGroupIndex )
              goto LABEL_57;
          }
          if ( *((void ***)v38 + 1) != v37 )
            break;
          v45 = *(void ***)v38;
          if ( *(void **)(*(_QWORD *)v38 + 8LL) != v38 )
            break;
          *v37 = v45;
          v45[1] = v37;
          v46 = *((_QWORD *)v38 + 2);
          if ( Index >= 0 && !*((_BYTE *)v38 + 46) && !*(_QWORD *)(v46 + 8) )
          {
            if ( *(_QWORD *)(*(_QWORD *)(v46 + 48) + 8LL) )
            {
              v47 = *(_DWORD *)(v46 + 16);
              if ( (v47 & 0x400) == 0
                && (v47 & 8) == 0
                && IopGetRegistryValue(*((HANDLE *)v38 + 4), L"Start", 0, &P) >= 0 )
              {
                v49 = P;
                if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
                {
                  v64 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
                  if ( !v64 )
                  {
                    v64 = 3;
                    if ( (int)PiCreateDriverRedirectedStateKey(
                                (UNICODE_STRING *)(*(_QWORD *)(v46 + 48) + 24LL),
                                v48,
                                &Object) >= 0 )
                    {
                      v51 = Object;
                    }
                    else
                    {
                      v51 = (PVOID)*((_QWORD *)v38 + 4);
                      Object = v51;
                    }
                    if ( (int)PnpCtxRegCreateKey(
                                *(__int64 *)&PiPnpRtlCtx,
                                (char *)v51,
                                L"StartOverride",
                                0,
                                2u,
                                0LL,
                                &v69,
                                0LL) >= 0 )
                    {
                      PnpCtxRegSetValue(4LL, v69, (__int64)pszDest, 4LL, (__int64)&v64, 4u);
                      PnpCtxRegCloseKey(v52, v69);
                      v69 = 0LL;
                      if ( (byte_14042BDBB & 1) != 0 )
                      {
                        v53 = (unsigned __int16 *)(*(_QWORD *)(v46 + 48) + 24LL);
                        v65 = 0LL;
                        if ( (int)PnpUnicodeStringToWstr((__int16 **)&v65, 0LL, v53) >= 0 )
                        {
                          v57 = (__int16 *)v65;
                          if ( (byte_14042BDBB & 1) != 0 )
                            McTemplateK0dzd(v55, v54, v56, v61, v65, v64);
                          PnpUnicodeStringToWstrFree(v57, *(_QWORD *)(v46 + 48) + 24LL);
                        }
                      }
                    }
                    if ( v51 != *((PVOID *)v38 + 4) )
                    {
                      ZwClose(v51);
                      Object = 0LL;
                    }
                  }
                }
                ExFreePoolWithTag(v49, 0);
              }
            }
          }
          if ( v46 )
            ObfDereferenceObjectWithTag((PVOID)v46, 0x746C6644u);
          if ( *((_BYTE *)v38 + 46) )
            *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v38 + 3) + 48LL) + 104LL) |= 0x20000u;
          ZwClose(*((HANDLE *)v38 + 4));
          ExFreePoolWithTag(v38, 0);
        }
LABEL_143:
        __fastfail(3u);
      }
    }
    if ( !HeadlessGlobals || !HeadlessGlobals[1] )
      return 0LL;
    v50 = 19;
    goto LABEL_122;
  }
LABEL_32:
  v26 = 16LL * v25;
  v27 = (char *)IopGroupTable + v26;
  v28 = *(char **)((char *)IopGroupTable + v26);
  while ( 1 )
  {
    if ( v28 == v27 )
    {
      if ( v25 == (_WORD)v61 )
      {
        IopAllocateLegacyBootResources(0LL, 0);
        IopBootConfigsReserved = 1;
        IopAllocateBootResourcesRoutine = (__int64)IopAllocateBootResources;
      }
      if ( ++v25 >= (unsigned int)IopGroupIndex )
        goto LABEL_37;
      goto LABEL_32;
    }
    Handle = (HANDLE)*((_QWORD *)v28 + 4);
    v40 = (wchar_t *)*((_QWORD *)v28 + 3);
    v65 = v40;
    *(_QWORD *)&DestinationString.Length = *((_QWORD *)v40 + 6);
    v28[47] = 1;
    if ( (int)IopGetDriverNameFromKeyNode(Handle, &Destination) >= 0 )
    {
      if ( IopGetRegistryValue(Handle, L"Group", 0, &P) >= 0 )
      {
        v40 = (wchar_t *)P;
        if ( *((_DWORD *)P + 3) )
        {
          String1.Length = *((_WORD *)P + 6);
          String1.MaximumLength = String1.Length;
          String1.Buffer = (wchar_t *)((char *)P + *((unsigned int *)P + 2));
          v24 = PipLookupGroupName(&String1);
        }
        ExFreePoolWithTag(v40, 0);
        LODWORD(v40) = (_DWORD)v65;
      }
      v3 = 0LL;
      if ( !(unsigned int)PipCheckDependencies(Handle) )
        goto LABEL_96;
      v3 = (_QWORD *)*((_QWORD *)v28 + 2);
      Object = v3;
      if ( !v3 && !v28[46] )
      {
        started = PnpInitializeBootStartDriver(
                    (unsigned int)&Destination,
                    (int)v40 + 32,
                    *(_QWORD *)(*(_QWORD *)&DestinationString.Length + 56LL),
                    *(_DWORD *)&DestinationString.Length,
                    (__int64)(v1 + 8),
                    0,
                    1);
        v3 = Object;
        *((_DWORD *)v28 + 10) = started;
        if ( !v3 )
          goto LABEL_96;
        ObfReferenceObjectWithTag(v3, 0x746C6644u);
      }
      if ( v3 )
      {
        if ( v24 )
          ++*(_DWORD *)(v24 + 28);
        *((_QWORD *)v28 + 2) = v3;
        goto LABEL_72;
      }
LABEL_96:
      v28[46] = 1;
LABEL_72:
      ExFreePoolWithTag(Destination.Buffer, 0);
      v24 = 0LL;
      goto LABEL_73;
    }
    v28[46] = 1;
LABEL_73:
    if ( !v28[46] )
    {
      PnpLockDeviceActionQueue();
      PipApplyFunctionToServiceInstances(v42, (UNICODE_STRING *)(v3[6] + 24LL), v43, v44, dwFlags, (__int64)v3, v59);
      PnpUnlockDeviceActionQueue();
      PnpWaitForEmptyDeviceActionQueue();
      PnpRequestDeviceAction(0LL, 7, 0, 0LL, 0LL, 0LL, 0LL);
    }
    if ( PnpWaitForEmptyDeviceEventQueue() < 0 )
      break;
    v28 = *(char **)v28;
    v27 = (char *)IopGroupTable + v26;
  }
  if ( HeadlessGlobals && HeadlessGlobals[1] )
  {
    v50 = 18;
    goto LABEL_122;
  }
  return 0LL;
}
