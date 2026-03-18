/*
 * XREFs of DxgkOpenAdapterFromDeviceName @ 0x1C013B0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000BE6C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0017C3C (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C00FB550 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkCloseAdapterImpl @ 0x1C01304B0 (DxgkCloseAdapterImpl.c)
 *     DpiValidateDeviceName @ 0x1C013DED4 (DpiValidateDeviceName.c)
 */

__int64 __fastcall DxgkOpenAdapterFromDeviceName(ULONG64 a1)
{
  ULONG64 v2; // rax
  __int128 v3; // xmm1
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  DXGPROCESS *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  const GUID *v16; // r8
  int v17; // edi
  __int64 v18; // rdx
  const GUID *v19; // r8
  _DWORD *v20; // rdx
  _QWORD *v21; // rdx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // [rsp+20h] [rbp-278h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+28h] [rbp-270h] BYREF
  PFILE_OBJECT FileObject; // [rsp+30h] [rbp-268h] BYREF
  PDEVICE_OBJECT v31; // [rsp+38h] [rbp-260h] BYREF
  __int128 v32; // [rsp+40h] [rbp-258h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-248h] BYREF
  __int128 v34; // [rsp+60h] [rbp-238h]
  __int64 v35; // [rsp+70h] [rbp-228h]
  WCHAR SourceString[256]; // [rsp+80h] [rbp-218h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(SourceString, 0, sizeof(SourceString));
  v2 = a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = MmUserProbeAddress;
  v3 = *(_OWORD *)v2;
  v34 = v3;
  v35 = *(_QWORD *)(v2 + 16);
  if ( (__int64)v3 + 512 > MmUserProbeAddress || (__int64)v3 + 512 < (unsigned __int64)v3 )
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( (int)RtlStringCbCopyW(SourceString, 0x200uLL, (size_t *)v3) < 0 )
    return 3221225485LL;
  Current = DXGPROCESS::GetCurrent(v5, v4);
  v11 = Current;
  if ( !Current )
  {
    v25 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v25 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v25);
    return 3221225485LL;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( DestinationString.Length > 1u && SourceString[1] == 92 )
    SourceString[1] = 63;
  if ( (int)DpiValidateDeviceName(&DestinationString) < 0 )
  {
    v26 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v26 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v26);
    return 3221225485LL;
  }
  FileObject = 0LL;
  DeviceObject = 0LL;
  LODWORD(v15) = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
  v31 = 0LL;
  v32 = 0uLL;
  v17 = 0;
  v28 = 0;
  if ( (int)v15 < 0 )
    goto LABEL_29;
  v31 = DeviceObject;
  ObfReferenceObject(DeviceObject);
  ObfDereferenceObject(FileObject);
  FileObject = 0LL;
  LODWORD(v15) = DxgkOpenAdapter((struct _D3DKMT_OPENADAPTER *)&v31, v18, v19);
  ObfDereferenceObject(DeviceObject);
  DeviceObject = 0LL;
  if ( (int)v15 < 0 )
    goto LABEL_29;
  v17 = v32;
  v28 = v32;
  if ( DXGPROCESS::IsRemoteConnection(v11) )
  {
    v22 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)v11 + 12) + 448LL))(*(_QWORD *)((char *)&v32 + 4));
    v15 = v22;
    if ( v22 < 0 )
    {
      v27 = WdLogNewEntry5_WdWarning(v24, v23, v16);
      *(_QWORD *)(v27 + 24) = v15;
      WdLogEvent5_WdWarning(v27);
    }
  }
  if ( (int)v15 < 0 )
  {
LABEL_29:
    *(_QWORD *)&v32 = 0LL;
    DWORD2(v32) = 0;
  }
  v20 = (_DWORD *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v20 = (_DWORD *)MmUserProbeAddress;
  *v20 = v32;
  v21 = (_QWORD *)(a1 + 12);
  if ( a1 + 12 >= MmUserProbeAddress )
    v21 = (_QWORD *)MmUserProbeAddress;
  *v21 = *(_QWORD *)((char *)&v32 + 4);
  if ( (int)v15 < 0 )
  {
    if ( v17 )
    {
      v28 = v17;
      DxgkCloseAdapterImpl((__int64)&v28, 0, v16);
    }
  }
  return (unsigned int)v15;
}
