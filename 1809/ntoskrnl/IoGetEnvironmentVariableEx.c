/*
 * XREFs of IoGetEnvironmentVariableEx @ 0x1408224FC
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x140180DC0 (IopInitializeOfflineCrashDump.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1408D2068 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetBootEntry @ 0x1408D29CC (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1408D318C (ExpSetDriverEntry.c)
 *     NtDeleteBootEntry @ 0x1408D4870 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1408D4A00 (NtDeleteDriverEntry.c)
 *     NtGetEnvironmentVariableEx @ 0x1408D5880 (NtGetEnvironmentVariableEx.c)
 *     NtQueryBootEntryOrder @ 0x1408D59A0 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x1408D5C10 (NtQueryBootOptions.c)
 *     IopCachePreviousBootData @ 0x1409F59E8 (IopCachePreviousBootData.c)
 * Callees:
 *     _TlgCreateWsz @ 0x140012934 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     IopOpenSystemVariableDevice @ 0x1408234B8 (IopOpenSystemVariableDevice.c)
 */

__int64 __fastcall IoGetEnvironmentVariableEx(LPCWSTR pwsz, __int64 a2, __int64 a3, _DWORD *a4, int *a5)
{
  int v9; // edi
  PVOID v10; // rbx
  UINT32 cData[2]; // [rsp+20h] [rbp-A1h]
  int v13; // [rsp+40h] [rbp-81h] BYREF
  PVOID Object; // [rsp+48h] [rbp-79h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-71h] BYREF
  __int64 (__fastcall **v16)(PVOID, PDEVICE_OBJECT, LPCWSTR, __int64, UINT32 *, _DWORD *, int *); // [rsp+58h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-41h] BYREF
  __int64 v19; // [rsp+90h] [rbp-31h]
  int v20; // [rsp+98h] [rbp-29h]
  int v21; // [rsp+9Ch] [rbp-25h]
  PVOID *p_Object; // [rsp+A0h] [rbp-21h]
  int v23; // [rsp+A8h] [rbp-19h]
  int v24; // [rsp+ACh] [rbp-15h]
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+B0h] [rbp-11h]
  int v26; // [rsp+B8h] [rbp-9h]
  int v27; // [rsp+BCh] [rbp-5h]
  __int64 (__fastcall ***v28)(PVOID, PDEVICE_OBJECT, LPCWSTR, __int64, UINT32 *, _DWORD *, int *); // [rsp+C0h] [rbp-1h]
  int v29; // [rsp+C8h] [rbp+7h]
  int v30; // [rsp+CCh] [rbp+Bh]

  v13 = -559038737;
  v9 = IopOpenSystemVariableDevice((PFILE_OBJECT *)&Object, &DeviceObject);
  if ( v9 >= 0 )
  {
    *(_QWORD *)cData = a3;
    v10 = Object;
    v9 = (*v16)(Object, DeviceObject, pwsz, a2, *(UINT32 **)cData, a4, &v13);
    if ( a5 )
      *a5 = v13;
    if ( v10 )
      ObfDereferenceObject(v10);
  }
  if ( stru_140401AB0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140401AB0, 0x200000000000uLL) )
  {
    LODWORD(Object) = *a4;
    LODWORD(DeviceObject) = v13;
    LODWORD(v16) = v9;
    TlgCreateWsz(&pDesc, pwsz);
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    p_Object = &Object;
    p_DeviceObject = &DeviceObject;
    v28 = &v16;
    v19 = a2;
    v20 = 16;
    v23 = 4;
    v26 = 4;
    v29 = 4;
    TlgWrite(&stru_140401AB0, &unk_14036E12E, 0LL, 0LL, 7u, &pData);
  }
  return (unsigned int)v9;
}
