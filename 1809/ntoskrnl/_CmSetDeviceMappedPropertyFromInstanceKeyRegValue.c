/*
 * XREFs of _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140900590
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x1406EA6D4 (_CmSetDeviceMappedProperty.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x1405C7EF0 (_CmOpenDeviceRegKey.c)
 *     _RegRtlSetValue @ 0x1406FDE48 (_RegRtlSetValue.c)
 */

__int64 __fastcall CmSetDeviceMappedPropertyFromInstanceKeyRegValue(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        int a5,
        _BYTE *a6,
        ULONG a7)
{
  int v7; // ebx
  HANDLE v8; // r10
  int v10; // r8d
  DEVPROPKEY **v13; // r9
  unsigned int i; // r11d
  DEVPROPKEY *v16; // rdx
  DEVPROPKEY **v17; // rdi
  __int64 v18; // rcx
  const WCHAR *v19; // rdx
  ULONG v20; // r8d
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  BOOL v25; // [rsp+40h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-20h] BYREF

  v7 = 0;
  v8 = 0LL;
  Handle = 0LL;
  v10 = *(_DWORD *)(a4 + 16);
  v13 = &off_14090A5C0;
  for ( i = 0; i < 2; ++i )
  {
    v16 = *v13;
    v17 = v13;
    if ( v10 == (*v13)->pid )
    {
      v18 = *(_QWORD *)a4 - *(_QWORD *)&v16->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v16->fmtid.Data1 )
        v18 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v16->fmtid.Data4;
      if ( !v18 )
        break;
    }
    v17 = 0LL;
    v13 += 4;
  }
  if ( !v17 )
    return (unsigned int)-1073741264;
  if ( a5 != *((_DWORD *)v17 + 2) )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    v7 = CmOpenDeviceRegKey(a1, a2, 16, 0, 2, 0, (__int64)&Handle, 0LL);
    if ( v7 < 0 )
      goto LABEL_29;
    v8 = Handle;
  }
  v19 = (const WCHAR *)v17[2];
  v20 = *((_DWORD *)v17 + 6);
  if ( *(_DWORD *)(a4 + 16) != 2 )
    goto LABEL_24;
  v21 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Reported.fmtid.Data1;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Reported.fmtid.Data1 )
    v21 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Reported.fmtid.Data4;
  if ( v21 )
  {
LABEL_24:
    if ( a3 )
      v8 = a3;
    v23 = RegRtlSetValue(v8, v19, v20, a6, a7);
    if ( v23 != -1073741444 )
    {
      if ( v23 < 0 )
        v7 = v23;
      goto LABEL_29;
    }
  }
  else
  {
    v25 = *a6 == 0xFF;
    if ( a3 )
      v8 = a3;
    v22 = RegRtlSetValue(v8, v19, v20, &v25, 4u);
    if ( v22 != -1073741444 )
    {
      if ( v22 < 0 )
        v7 = v22;
      goto LABEL_29;
    }
  }
  v7 = -1073741810;
LABEL_29:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v7;
}
