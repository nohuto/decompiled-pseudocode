/*
 * XREFs of IoEnumerateEnvironmentVariablesEx @ 0x1408223AC
 * Callers:
 *     NtEnumerateBootEntries @ 0x1408D4B90 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1408D51E0 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1408D5690 (NtEnumerateSystemEnvironmentValuesEx.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     IopOpenSystemVariableDevice @ 0x1408234B8 (IopOpenSystemVariableDevice.c)
 */

__int64 __fastcall IoEnumerateEnvironmentVariablesEx(unsigned int a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v8; // ebx
  PVOID v9; // rdi
  UINT32 cData[2]; // [rsp+20h] [rbp-89h]
  bool v12; // [rsp+40h] [rbp-69h] BYREF
  PVOID Object; // [rsp+48h] [rbp-61h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-59h] BYREF
  __int64 v15; // [rsp+58h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-49h] BYREF
  PVOID *p_Object; // [rsp+80h] [rbp-29h]
  int v18; // [rsp+88h] [rbp-21h]
  int v19; // [rsp+8Ch] [rbp-1Dh]
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+90h] [rbp-19h]
  int v21; // [rsp+98h] [rbp-11h]
  int v22; // [rsp+9Ch] [rbp-Dh]
  __int64 *v23; // [rsp+A0h] [rbp-9h]
  int v24; // [rsp+A8h] [rbp-1h]
  int v25; // [rsp+ACh] [rbp+3h]
  bool *v26; // [rsp+B0h] [rbp+7h]
  int v27; // [rsp+B8h] [rbp+Fh]
  int v28; // [rsp+BCh] [rbp+13h]

  v8 = IopOpenSystemVariableDevice((PFILE_OBJECT *)&Object, &DeviceObject);
  if ( v8 >= 0 )
  {
    *(_QWORD *)cData = a3;
    v9 = Object;
    v8 = (*(__int64 (__fastcall **)(PVOID, PDEVICE_OBJECT, _QWORD, __int64, UINT32 *, _DWORD *))(v15 + 16))(
           Object,
           DeviceObject,
           a1,
           a2,
           *(UINT32 **)cData,
           a4);
    if ( v9 )
      ObfDereferenceObject(v9);
  }
  if ( stru_140401AB0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140401AB0, 0x200000000000uLL) )
  {
    LODWORD(DeviceObject) = *a4;
    LODWORD(Object) = a1;
    v12 = a2 != 0;
    p_Object = &Object;
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    p_DeviceObject = &DeviceObject;
    v23 = &v15;
    v26 = &v12;
    LODWORD(v15) = v8;
    v18 = 4;
    v21 = 4;
    v24 = 4;
    v27 = 1;
    TlgWrite(&stru_140401AB0, &unk_14036E0CF, 0LL, 0LL, 6u, &pData);
  }
  return (unsigned int)v8;
}
