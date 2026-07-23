/*
 * XREFs of IoQueryEnvironmentVariableInfoEx @ 0x140822674
 * Callers:
 *     NtQueryEnvironmentVariableInfoEx @ 0x1408D6190 (NtQueryEnvironmentVariableInfoEx.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     IopOpenSystemVariableDevice @ 0x1408234B8 (IopOpenSystemVariableDevice.c)
 */

__int64 __fastcall IoQueryEnvironmentVariableInfoEx(
        unsigned int a1,
        struct _DEVICE_OBJECT **a2,
        __int64 *a3,
        __int64 *a4)
{
  int v8; // ebx
  struct _DEVICE_OBJECT *v9; // rax
  PVOID Object; // [rsp+40h] [rbp-89h] BYREF
  __int64 v12; // [rsp+48h] [rbp-81h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-79h] BYREF
  __int64 v14; // [rsp+58h] [rbp-71h] BYREF
  __int64 v15; // [rsp+60h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-59h] BYREF
  __int64 *v17; // [rsp+90h] [rbp-39h]
  int v18; // [rsp+98h] [rbp-31h]
  int v19; // [rsp+9Ch] [rbp-2Dh]
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+A0h] [rbp-29h]
  int v21; // [rsp+A8h] [rbp-21h]
  int v22; // [rsp+ACh] [rbp-1Dh]
  __int64 *v23; // [rsp+B0h] [rbp-19h]
  int v24; // [rsp+B8h] [rbp-11h]
  int v25; // [rsp+BCh] [rbp-Dh]
  __int64 *v26; // [rsp+C0h] [rbp-9h]
  int v27; // [rsp+C8h] [rbp-1h]
  int v28; // [rsp+CCh] [rbp+3h]
  PVOID *p_Object; // [rsp+D0h] [rbp+7h]
  int v30; // [rsp+D8h] [rbp+Fh]
  int v31; // [rsp+DCh] [rbp+13h]

  v8 = IopOpenSystemVariableDevice((PFILE_OBJECT *)&Object, &DeviceObject);
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(PVOID, PDEVICE_OBJECT, _QWORD, struct _DEVICE_OBJECT **, __int64 *, __int64 *))(v12 + 24))(
           Object,
           DeviceObject,
           a1,
           a2,
           a3,
           a4);
    if ( Object )
      ObfDereferenceObject(Object);
  }
  if ( stru_140401AB0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140401AB0, 0x200000000000uLL) )
  {
    v9 = *a2;
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v31 = 0;
    DeviceObject = v9;
    v14 = *a3;
    v15 = *a4;
    v17 = &v12;
    p_DeviceObject = &DeviceObject;
    v23 = &v14;
    v26 = &v15;
    p_Object = &Object;
    LODWORD(v12) = a1;
    LODWORD(Object) = v8;
    v18 = 4;
    v21 = 8;
    v24 = 8;
    v27 = 8;
    v30 = 4;
    TlgWrite(&stru_140401AB0, &unk_14036DFF4, 0LL, 0LL, 7u, &pData);
  }
  return (unsigned int)v8;
}
