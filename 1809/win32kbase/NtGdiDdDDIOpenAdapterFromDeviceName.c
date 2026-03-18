/*
 * XREFs of NtGdiDdDDIOpenAdapterFromDeviceName @ 0x1C0073F50
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C00339B0 (UserIsCurrentProcessDwm.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall NtGdiDdDDIOpenAdapterFromDeviceName(ULONG64 a1)
{
  ULONG64 v2; // rax
  __int128 v3; // xmm1
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
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int16 SuiteMask; // ax
  int v20; // [rsp+20h] [rbp-2B8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+28h] [rbp-2B0h] BYREF
  int v22; // [rsp+30h] [rbp-2A8h]
  _NT_PRODUCT_TYPE ProductType; // [rsp+34h] [rbp-2A4h] BYREF
  PFILE_OBJECT FileObject; // [rsp+38h] [rbp-2A0h] BYREF
  PDEVICE_OBJECT v25; // [rsp+40h] [rbp-298h] BYREF
  __int128 v26; // [rsp+48h] [rbp-290h]
  WCHAR *v27; // [rsp+58h] [rbp-280h]
  __int64 v28; // [rsp+60h] [rbp-278h]
  WCHAR *v29; // [rsp+68h] [rbp-270h]
  __int64 v30; // [rsp+70h] [rbp-268h]
  __int64 v31; // [rsp+78h] [rbp-260h]
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-258h] BYREF
  __int128 v33; // [rsp+90h] [rbp-248h]
  __int64 v34; // [rsp+A0h] [rbp-238h]
  WCHAR SourceString[256]; // [rsp+B0h] [rbp-228h] BYREF

  memset(SourceString, 0, sizeof(SourceString));
  v2 = a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = MmUserProbeAddress;
  v3 = *(_OWORD *)v2;
  v33 = v3;
  v34 = *(_QWORD *)(v2 + 16);
  v4 = (WCHAR *)v3;
  if ( (__int64)v3 + 512 > MmUserProbeAddress || (__int64)v3 + 512 < (unsigned __int64)v3 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v22 = 0;
  v5 = 2147483646LL;
  v31 = 2147483646LL;
  v29 = (WCHAR *)v3;
  v6 = 256LL;
  v30 = 256LL;
  v7 = SourceString;
  v27 = SourceString;
  v8 = 0;
  v9 = 0LL;
  v28 = 0LL;
  while ( v6 )
  {
    if ( !v5 || !*v4 )
      goto LABEL_10;
    *v7++ = *v4;
    v27 = v7;
    v29 = ++v4;
    v30 = --v6;
    v31 = --v5;
    v28 = ++v9;
  }
  v27 = --v7;
  v28 = v9 - 1;
  v8 = -2147483643;
LABEL_10:
  *v7 = 0;
  v22 = v8;
  if ( v8 < 0 )
    return 3221225485LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( DestinationString.Length > 1u && SourceString[1] == 92 )
    SourceString[1] = 63;
  if ( (int)((__int64 (__fastcall *)(struct _UNICODE_STRING *))qword_1C01CD970)(&DestinationString) < 0 )
    return 3221225485LL;
  FileObject = 0LL;
  DeviceObject = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
  v25 = 0LL;
  v26 = 0uLL;
  v12 = 0;
  v20 = 0;
  if ( DeviceObjectPointer < 0 )
    goto LABEL_37;
  v25 = DeviceObject;
  ObfReferenceObject(DeviceObject);
  ObfDereferenceObject(FileObject);
  FileObject = 0LL;
  DeviceObjectPointer = ((__int64 (__fastcall *)(PDEVICE_OBJECT *))qword_1C01CD690)(&v25);
  ObfDereferenceObject(DeviceObject);
  DeviceObject = 0LL;
  if ( DeviceObjectPointer < 0 )
    goto LABEL_37;
  v12 = v26;
  v20 = v26;
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
  {
    if ( Object )
    {
      if ( (PVOID)PsGetCurrentProcess(65533LL) != gpepCSRSS && !UserIsCurrentProcessDwm(v15) )
      {
        RtlGetNtProductType(&ProductType);
        SuiteMask = RtlGetSuiteMask(v17, v16, v18);
        if ( ProductType == NtProductServer
          && (SuiteMask & 0x110) == 0x10
          && *(_QWORD *)((char *)&v26 + 4) != qword_1C01CE2F4 )
        {
          DeviceObjectPointer = -1073741811;
        }
      }
    }
  }
  if ( DeviceObjectPointer < 0 )
  {
LABEL_37:
    *(_QWORD *)&v26 = 0LL;
    DWORD2(v26) = 0;
  }
  v13 = (_DWORD *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v13 = (_DWORD *)MmUserProbeAddress;
  *v13 = v26;
  v14 = (_QWORD *)(a1 + 12);
  if ( a1 + 12 >= MmUserProbeAddress )
    v14 = (_QWORD *)MmUserProbeAddress;
  *v14 = *(_QWORD *)((char *)&v26 + 4);
  if ( DeviceObjectPointer < 0 )
  {
    if ( v12 )
    {
      v20 = v12;
      ((void (__fastcall *)(int *, _QWORD))qword_1C01CD6B8)(&v20, 0LL);
    }
  }
  return (unsigned int)DeviceObjectPointer;
}
