/*
 * XREFs of DrvEnumDisplayDevices @ 0x1C00158D0
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C00157E0 (NtUserEnumDisplayDevices.c)
 * Callees:
 *     DrvGetDeviceFromName @ 0x1C0015070 (DrvGetDeviceFromName.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0015460 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJG@Z @ 0x1C001BD10 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     UserIsCurrentProcessDwm @ 0x1C00339B0 (UserIsCurrentProcessDwm.c)
 *     UpdateMonitorDevices @ 0x1C0041C40 (UpdateMonitorDevices.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C007D050 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C008F3C8 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     DrvpGetDeviceInterfaceName @ 0x1C0095D20 (DrvpGetDeviceInterfaceName.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

__int64 __fastcall DrvEnumDisplayDevices(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        unsigned int a5,
        int a6)
{
  __int64 v7; // rdi
  wchar_t *DeviceFromName; // rsi
  int v10; // r13d
  __int64 v11; // r14
  _QWORD *v12; // rax
  ULONG v13; // eax
  int v14; // edx
  struct _DEVICE_OBJECT *v15; // rax
  unsigned int *v16; // rax
  unsigned int v17; // r12d
  char *v18; // rdi
  _OWORD *v19; // r9
  wchar_t *v20; // rcx
  const wchar_t *v21; // r8
  ULONG v22; // r13d
  int PruneFlag; // eax
  int v24; // edx
  unsigned int v25; // edx
  char v26; // r8
  void *v27; // r15
  NTSTATUS v28; // eax
  char *v29; // r13
  __int64 v30; // r15
  char *v31; // r13
  char *v32; // rsi
  __int64 v33; // rax
  __int64 v35; // rax
  size_t v36; // rcx
  void *v37; // r15
  NTSTATUS DeviceProperty; // eax
  __int64 v39; // rdx
  __int64 v40; // rax
  ULONG v41; // eax
  int DeviceInterfaceName; // eax
  struct _DEVICE_OBJECT *v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  ULONG BufferLength; // [rsp+40h] [rbp-1A8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-1A0h] BYREF
  void *v49; // [rsp+50h] [rbp-198h]
  unsigned int Length; // [rsp+58h] [rbp-190h]
  unsigned int Length_4; // [rsp+5Ch] [rbp-18Ch]
  struct _UNICODE_STRING *v52; // [rsp+60h] [rbp-188h]
  void *v53; // [rsp+68h] [rbp-180h]
  int v54; // [rsp+70h] [rbp-178h]
  PCUNICODE_STRING String1; // [rsp+78h] [rbp-170h] BYREF
  PVOID Object; // [rsp+80h] [rbp-168h] BYREF
  PVOID P[2]; // [rsp+88h] [rbp-160h] BYREF
  __int64 v58; // [rsp+98h] [rbp-150h]
  wchar_t PropertyBuffer[128]; // [rsp+A0h] [rbp-148h] BYREF

  v49 = a4;
  v7 = (unsigned int)a3;
  v54 = a3;
  v52 = a1;
  P[1] = a4;
  DeviceFromName = 0LL;
  BufferLength = 0;
  DeviceObject = 0LL;
  Object = 0LL;
  v10 = 0;
  LODWORD(v11) = 0;
  v12 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2, a3);
  v12[3] = a1;
  v58 = (unsigned int)v7;
  v12[4] = (unsigned int)v7;
  v12[5] = a4;
  Length_4 = a5;
  v12[6] = a5;
  WdLogEvent5_WdEvent(v12);
  if ( a1 )
  {
    UpdateMonitorDevices();
    if ( a6 == 1 )
    {
      String1 = 0LL;
      if ( (int)DrvProbeAndCaptureString(a1, (struct AUTO_FREE_STRING *)&String1) >= 0 )
        DeviceFromName = DrvGetDeviceFromName(String1);
      if ( String1 )
        Win32FreePool(String1);
    }
    else
    {
      DeviceFromName = DrvGetDeviceFromName(a1);
    }
    if ( DeviceFromName && (unsigned int)v7 < *((_DWORD *)DeviceFromName + 54) )
    {
      if ( (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID *, PDEVICE_OBJECT *))qword_1C01CDA80)(
                  *((_QWORD *)DeviceFromName + 28) + 4 * (5 * v7 + 2),
                  *(unsigned int *)(*((_QWORD *)DeviceFromName + 28) + 20 * v7 + 4),
                  &Object,
                  &DeviceObject) >= 0 )
        goto LABEL_12;
      v45 = WdLogNewEntry5_WdError();
      WdLogEvent5_WdError(v45);
    }
    return 3221225473LL;
  }
  DeviceFromName = gpGraphicsDeviceList;
  if ( !gpGraphicsDeviceList )
    goto LABEL_68;
  v13 = BufferLength;
  do
  {
    if ( a6
      && ((v14 = *((_DWORD *)DeviceFromName + 40), (v14 & 0x2000000) != 0)
       || gProtocolType && DeviceFromName[110] != gProtocolType && (v14 & 0x4000008) == 0) )
    {
      BufferLength = --v13;
    }
    else if ( v13 == (_DWORD)v7 )
    {
      break;
    }
    DeviceFromName = (wchar_t *)*((_QWORD *)DeviceFromName + 16);
    BufferLength = ++v13;
  }
  while ( DeviceFromName );
  if ( !DeviceFromName )
  {
LABEL_68:
    v35 = WdLogNewEntry5_WdTrace();
    WdLogEvent5_WdTrace(v35);
    return 3221225473LL;
  }
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu
    && ::Object
    && (PVOID)PsGetCurrentProcess() != gpepCSRSS
    && !(unsigned int)UserIsCurrentProcessDwm()
    && (DeviceFromName[80] & 8) == 0 )
  {
    v10 = 1;
  }
  v15 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceFromName + 18);
  if ( v15 )
    goto LABEL_11;
  if ( v10 )
  {
    v15 = (struct _DEVICE_OBJECT *)::Object;
LABEL_11:
    DeviceObject = v15;
    goto LABEL_12;
  }
  v43 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceFromName + 17);
  if ( v43 )
  {
    if ( (int)DrvForceChildDeviceReenumeration(v43, (struct _DEVICE_RELATIONS **)P) >= 0 )
    {
      DeviceObject = (PDEVICE_OBJECT)*((_QWORD *)P[0] + 1);
      ExFreePoolWithTag(P[0], 0);
    }
  }
  else
  {
    v44 = WdLogNewEntry5_WdTrace();
    WdLogEvent5_WdTrace(v44);
  }
LABEL_12:
  v53 = 0LL;
  if ( a6 == 1 )
  {
    v16 = (unsigned int *)v49;
    if ( (unsigned __int64)v49 >= MmUserProbeAddress )
      v16 = (unsigned int *)MmUserProbeAddress;
    Length = *v16;
    v17 = Length;
    if ( Length > 0x348 )
      v17 = 840;
    Length = v17;
    v18 = (char *)PALLOCMEM2(v17);
    v53 = v18;
    if ( !v18 )
    {
      LODWORD(v11) = -1073741823;
      goto LABEL_56;
    }
  }
  else
  {
    v17 = 840;
    if ( *(_DWORD *)v49 < 0x348u )
      v17 = *(_DWORD *)v49;
    Length = v17;
    v18 = (char *)v49;
    v53 = v49;
    memset(v49, 0, v17);
  }
  if ( v17 >= 4 )
    *(_DWORD *)v18 = 4;
  if ( v17 >= 0x44 )
  {
    *(_DWORD *)v18 = 68;
    v19 = DeviceFromName + 32;
    v20 = (wchar_t *)(v18 + 4);
    if ( v52 )
    {
      swprintf_s(v20, 0x20uLL, L"%ws\\Monitor%d", v19, v54);
    }
    else
    {
      *(_OWORD *)v20 = *v19;
      *(_OWORD *)(v18 + 20) = *((_OWORD *)DeviceFromName + 5);
      *(_OWORD *)(v18 + 36) = *((_OWORD *)DeviceFromName + 6);
      *(_OWORD *)(v18 + 52) = *((_OWORD *)DeviceFromName + 7);
    }
    *((_WORD *)v18 + 33) = 0;
  }
  if ( v17 < 0x144 )
  {
    v22 = 256;
    goto LABEL_31;
  }
  *(_DWORD *)v18 = 324;
  *((_WORD *)v18 + 34) = 0;
  if ( v52 || v10 )
  {
    if ( DeviceObject )
    {
      v22 = 256;
      v36 = 256LL;
      for ( BufferLength = 256; ; v36 = BufferLength )
      {
        v37 = (void *)PALLOCMEM2(v36);
        if ( !v37 )
        {
          LODWORD(v11) = -1073741670;
          goto LABEL_30;
        }
        DeviceProperty = IoGetDeviceProperty(
                           DeviceObject,
                           DevicePropertyDeviceDescription,
                           BufferLength,
                           v37,
                           &BufferLength);
        if ( DeviceProperty != -1073741789 )
          break;
        Win32FreePool(v37);
      }
      if ( !DeviceProperty )
        wcsncpy_s((wchar_t *)v18 + 34, 0x80uLL, (const wchar_t *)v37, 0x7FuLL);
      Win32FreePool(v37);
      goto LABEL_30;
    }
  }
  else
  {
    v21 = (const wchar_t *)*((_QWORD *)DeviceFromName + 26);
    if ( v21 )
      wcsncpy_s((wchar_t *)v18 + 34, 0x80uLL, v21, 0x7FuLL);
  }
  v22 = 256;
LABEL_30:
  *((_WORD *)v18 + 161) = 0;
LABEL_31:
  if ( v17 < 0x148 )
  {
    v26 = Length_4;
  }
  else
  {
    *(_DWORD *)v18 = 328;
    PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)DeviceFromName);
    v24 = *((_DWORD *)DeviceFromName + 40);
    if ( PruneFlag )
      v25 = v24 & 0xFFF7FFFF;
    else
      v25 = v24 | 0x80000;
    *((_DWORD *)DeviceFromName + 40) = v25;
    v26 = Length_4;
    if ( v52 )
      *((_DWORD *)v18 + 81) = *(_DWORD *)(*((_QWORD *)DeviceFromName + 28) + 20 * v58) & 0xFFFFFFF;
    else
      *((_DWORD *)v18 + 81) = v25 & ((Length_4 & 2) != 0 ? 0xFFFFFFF : 254803967);
  }
  if ( v17 < 0x248 )
  {
    v30 = -1LL;
    goto LABEL_49;
  }
  *(_DWORD *)v18 = 584;
  *((_WORD *)v18 + 164) = 0;
  if ( (v26 & 1) == 0 )
  {
    if ( DeviceObject )
    {
      for ( BufferLength = 256; ; v22 = BufferLength )
      {
        v27 = 0LL;
        if ( v22 )
        {
          v27 = (void *)Win32AllocPool(v22, 1684301127LL);
          v22 = BufferLength;
        }
        if ( !v27 )
        {
          LODWORD(v11) = -1073741670;
          goto LABEL_127;
        }
        v28 = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, v22, v27, &BufferLength);
        if ( v28 != -1073741789 )
          break;
        Win32FreePool(v27);
      }
      if ( !v28 )
      {
        v29 = v18 + 328;
        wcsncpy_s((wchar_t *)v18 + 164, 0x80uLL, (const wchar_t *)v27, 0x7FuLL);
        Win32FreePool(v27);
        goto LABEL_46;
      }
      Win32FreePool(v27);
LABEL_127:
      v29 = v18 + 328;
LABEL_46:
      if ( v52 )
      {
        *((_WORD *)v18 + 291) = 0;
        v30 = -1LL;
        v40 = -1LL;
        do
          ++v40;
        while ( *(_WORD *)&v29[2 * v40] );
        v41 = v40 + 1;
        BufferLength = v41;
        if ( v41 < 0x7E )
        {
          *(_WORD *)&v18[2 * v41 + 326] = 92;
          IoGetDeviceProperty(
            DeviceObject,
            DevicePropertyDriverKeyName,
            2 * (127 - BufferLength),
            &v18[2 * BufferLength + 328],
            &BufferLength);
        }
        goto LABEL_48;
      }
    }
LABEL_47:
    v30 = -1LL;
LABEL_48:
    *((_WORD *)v18 + 291) = 0;
LABEL_49:
    if ( v17 >= 0x348 )
    {
      *(_DWORD *)v18 = 840;
      v31 = v18 + 584;
      *((_WORD *)v18 + 292) = 0;
      if ( v52 )
      {
        if ( IoGetDeviceProperty(DeviceObject, DevicePropertyDriverKeyName, 0xFEu, PropertyBuffer, &BufferLength) >= 0 )
        {
          wcscpy_s((wchar_t *)v18 + 292, 0x80uLL, L"\\Registry\\Machine\\System\\CurrentControlSet");
          v39 = -1LL;
          do
            ++v39;
          while ( *(_WORD *)&v31[2 * v39] );
          BufferLength = v39;
          wcsncpy_s(
            (wchar_t *)&v18[2 * (unsigned int)v39 + 584],
            128LL - (unsigned int)v39,
            L"\\Control\\Class\\",
            (unsigned int)(127 - v39));
          do
            ++v30;
          while ( *(_WORD *)&v31[2 * v30] );
          BufferLength = v30;
          wcsncpy_s(
            (wchar_t *)&v18[2 * (unsigned int)v30 + 584],
            128LL - (unsigned int)v30,
            PropertyBuffer,
            (unsigned int)(127 - v30));
        }
      }
      else
      {
        DrvGetRegistryHandleFromDeviceMap(DeviceFromName, 3LL, 0LL, v18 + 584, 128, 0LL, gProtocolType);
      }
      *((_WORD *)v18 + 419) = 0;
    }
    if ( !v52 && DeviceObject && !*((_QWORD *)DeviceFromName + 18) && DeviceObject != ::Object )
      ObfDereferenceObject(DeviceObject);
    goto LABEL_56;
  }
  if ( !DeviceObject )
    goto LABEL_47;
  DeviceInterfaceName = DrvpGetDeviceInterfaceName(DeviceObject);
  v11 = DeviceInterfaceName;
  if ( DeviceInterfaceName >= 0 )
    goto LABEL_47;
  v46 = WdLogNewEntry5_WdTrace();
  *(_QWORD *)(v46 + 24) = v11;
  WdLogEvent5_WdTrace(v46);
LABEL_56:
  v32 = (char *)v49;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v18 != v32 )
  {
    if ( v18 )
    {
      ProbeForWrite(v32, v17, 4u);
      memmove(v32, v18, v17);
      Win32FreePool(v18);
    }
  }
  v33 = WdLogNewEntry5_WdTrace();
  *(_QWORD *)(v33 + 24) = (int)v11;
  WdLogEvent5_WdTrace(v33);
  return (unsigned int)v11;
}
