/*
 * XREFs of NtGdiDdDDIOpenAdapterFromDeviceName @ 0x1C0063DD0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C003C070 (UserIsCurrentProcessDwm.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 __fastcall NtGdiDdDDIOpenAdapterFromDeviceName(ULONG64 a1)
{
  ULONG64 v2; // rax
  __int128 v3; // xmm2
  WCHAR *v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r8
  WCHAR *v7; // rax
  int v8; // r10d
  __int64 v9; // rcx
  NTSTATUS DeviceObjectPointer; // edi
  int v12; // esi
  _DWORD *v13; // rdx
  _QWORD *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int16 SuiteMask; // ax
  PDEVICE_OBJECT DeviceObject; // [rsp+28h] [rbp-2B0h] BYREF
  int v20; // [rsp+30h] [rbp-2A8h]
  _NT_PRODUCT_TYPE ProductType; // [rsp+34h] [rbp-2A4h] BYREF
  PFILE_OBJECT FileObject; // [rsp+38h] [rbp-2A0h] BYREF
  PDEVICE_OBJECT v23; // [rsp+40h] [rbp-298h]
  __int128 v24; // [rsp+48h] [rbp-290h]
  WCHAR *v25; // [rsp+58h] [rbp-280h]
  __int64 v26; // [rsp+60h] [rbp-278h]
  WCHAR *v27; // [rsp+68h] [rbp-270h]
  __int64 v28; // [rsp+70h] [rbp-268h]
  __int64 v29; // [rsp+78h] [rbp-260h]
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-258h] BYREF
  __int128 v31; // [rsp+90h] [rbp-248h]
  __int64 v32; // [rsp+A0h] [rbp-238h]
  WCHAR SourceString[256]; // [rsp+B0h] [rbp-228h] BYREF

  memset(SourceString, 0, sizeof(SourceString));
  v2 = a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = MmUserProbeAddress;
  v3 = *(_OWORD *)v2;
  v31 = v3;
  v32 = *(_QWORD *)(v2 + 16);
  v4 = (WCHAR *)v3;
  if ( (__int64)v3 + 512 > MmUserProbeAddress || (__int64)v3 + 512 < (unsigned __int64)v3 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v20 = 0;
  v5 = 2147483646LL;
  v29 = 2147483646LL;
  v27 = (WCHAR *)v3;
  v6 = 256LL;
  v28 = 256LL;
  v7 = SourceString;
  v25 = SourceString;
  v8 = 0;
  v9 = 0LL;
  v26 = 0LL;
  while ( v6 )
  {
    if ( !v5 || !*v4 )
      goto LABEL_10;
    *v7++ = *v4;
    v25 = v7;
    v27 = ++v4;
    v28 = --v6;
    v29 = --v5;
    v26 = ++v9;
  }
  v25 = --v7;
  v26 = v9 - 1;
  v8 = -2147483643;
LABEL_10:
  *v7 = 0;
  v20 = v8;
  if ( v8 < 0 )
    return 3221225485LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( DestinationString.Length > 1u && SourceString[1] == 92 )
    SourceString[1] = 63;
  if ( (int)_guard_dispatch_icall_fptr() < 0 )
    return 3221225485LL;
  FileObject = 0LL;
  DeviceObject = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
  v23 = 0LL;
  v24 = 0uLL;
  v12 = 0;
  if ( DeviceObjectPointer < 0 )
    goto LABEL_37;
  v23 = DeviceObject;
  ObfReferenceObject(DeviceObject);
  ObfDereferenceObject(FileObject);
  FileObject = 0LL;
  DeviceObjectPointer = _guard_dispatch_icall_fptr();
  ObfDereferenceObject(DeviceObject);
  DeviceObject = 0LL;
  if ( DeviceObjectPointer < 0 )
    goto LABEL_37;
  v12 = v24;
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
  {
    if ( qword_1C01A1760 )
    {
      if ( (PVOID)PsGetCurrentProcess(65533LL) != gpepCSRSS && !UserIsCurrentProcessDwm() )
      {
        RtlGetNtProductType(&ProductType);
        SuiteMask = RtlGetSuiteMask(v16, v15, v17);
        if ( ProductType == NtProductServer
          && (SuiteMask & 0x110) == 0x10
          && *(_QWORD *)((char *)&v24 + 4) != qword_1C01A1754 )
        {
          DeviceObjectPointer = -1073741811;
        }
      }
    }
  }
  if ( DeviceObjectPointer < 0 )
  {
LABEL_37:
    *(_QWORD *)&v24 = 0LL;
    DWORD2(v24) = 0;
  }
  v13 = (_DWORD *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v13 = (_DWORD *)MmUserProbeAddress;
  *v13 = v24;
  v14 = (_QWORD *)(a1 + 12);
  if ( a1 + 12 >= MmUserProbeAddress )
    v14 = (_QWORD *)MmUserProbeAddress;
  *v14 = *(_QWORD *)((char *)&v24 + 4);
  if ( DeviceObjectPointer < 0 )
  {
    if ( v12 )
      _guard_dispatch_icall_fptr();
  }
  return (unsigned int)DeviceObjectPointer;
}
