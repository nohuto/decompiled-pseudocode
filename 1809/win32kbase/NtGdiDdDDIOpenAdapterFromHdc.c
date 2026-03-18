/*
 * XREFs of NtGdiDdDDIOpenAdapterFromHdc @ 0x1C00FE0F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C001DE38 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001DE98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0029CE0 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     UserIsCurrentProcessDwm @ 0x1C00339B0 (UserIsCurrentProcessDwm.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C003F130 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005FBC0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDdDDIOpenAdapterFromHdc(ULONG64 a1)
{
  ULONG64 v2; // rax
  NTSTATUS DeviceObjectPointer; // edi
  int v4; // esi
  __int64 v5; // rbx
  int v6; // r9d
  __int16 v7; // r10
  int v8; // edx
  __int64 v9; // r8
  WCHAR *v10; // rdx
  __int64 v11; // rdx
  struct _DEVICE_OBJECT *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  _DWORD *v16; // rdx
  _QWORD *v17; // rdx
  _DWORD *v18; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  __int64 v21; // [rsp+30h] [rbp-68h]
  PDEVICE_OBJECT v22; // [rsp+38h] [rbp-60h] BYREF
  __int128 v23; // [rsp+40h] [rbp-58h]
  _QWORD v24[9]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+10h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+B0h] [rbp+18h] BYREF
  PFILE_OBJECT FileObject; // [rsp+B8h] [rbp+20h] BYREF

  v2 = a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = MmUserProbeAddress;
  DestinationString = *(struct _UNICODE_STRING *)v2;
  v21 = *(_QWORD *)(v2 + 16);
  DeviceObjectPointer = -1073741811;
  v4 = 0;
  FileObject = 0LL;
  DeviceObject = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v24, *(HDC *)&DestinationString.Length);
  if ( v24[0] )
  {
    v5 = *(_QWORD *)(v24[0] + 48LL);
    v25 = v5;
    if ( v5 )
    {
      EngAcquireSemaphore(*(HSEMAPHORE *)(v5 + 48));
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", *(_QWORD *)(v5 + 48), 11);
      v6 = *(_DWORD *)(v5 + 40);
      v7 = 1;
      v8 = v6 & 1;
      v9 = 0x20000LL;
      if ( (v6 & 1) != 0 && (v6 & 0x20000) == 0 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v25) )
      {
        v10 = *(WCHAR **)(v5 + 2576);
        v4 = *((_DWORD *)v10 + 64);
LABEL_24:
        RtlInitUnicodeString(&DestinationString, v10);
        DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
        goto LABEL_27;
      }
      if ( !v8 )
        goto LABEL_42;
      if ( (v6 & (unsigned int)v9) != 0 )
      {
LABEL_27:
        EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", *(_QWORD *)(v5 + 48), v9);
        GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(v5 + 48));
        goto LABEL_28;
      }
      v11 = *(_QWORD *)(v5 + 2576);
      if ( v11 && (v12 = *(struct _DEVICE_OBJECT **)(v11 + 304)) != 0LL && (*(_DWORD *)(v11 + 164) & 4) != 0 )
      {
        v4 = *(_DWORD *)(v11 + 256);
      }
      else
      {
LABEL_42:
        if ( (v6 & (unsigned int)v9) != 0 )
          goto LABEL_27;
        v13 = *(_QWORD *)(v5 + 2576);
        if ( !v13
          || (*(_DWORD *)(v13 + 160) & 0x4000000) == 0
          || (unsigned __int16)(gProtocolType - v7) > 0xFFFDu
          || !Object
          || (PVOID)PsGetCurrentProcess(65533LL) == gpepCSRSS
          || UserIsCurrentProcessDwm(v14) )
        {
          goto LABEL_27;
        }
        v15 = *(_QWORD *)(v5 + 2576);
        v4 = *(_DWORD *)(v15 + 256);
        if ( dword_1C01CE2F0 )
        {
          v10 = word_1C01CE308;
          goto LABEL_24;
        }
        v12 = *(struct _DEVICE_OBJECT **)(v15 + 304);
        if ( !v12 )
          goto LABEL_27;
      }
      DeviceObject = v12;
      ObfReferenceObject(v12);
      DeviceObjectPointer = 0;
      goto LABEL_27;
    }
  }
LABEL_28:
  v22 = 0LL;
  v23 = 0uLL;
  if ( DeviceObjectPointer < 0 )
    goto LABEL_32;
  v22 = DeviceObject;
  if ( FileObject )
  {
    ObfReferenceObject(DeviceObject);
    ObfDereferenceObject(FileObject);
    FileObject = 0LL;
  }
  DeviceObjectPointer = ((__int64 (__fastcall *)(PDEVICE_OBJECT *))qword_1C01CD690)(&v22);
  ObfDereferenceObject(DeviceObject);
  DeviceObject = 0LL;
  if ( DeviceObjectPointer < 0 )
  {
LABEL_32:
    *(_QWORD *)&v23 = 0LL;
    DWORD2(v23) = 0;
    v4 = 0;
  }
  v16 = (_DWORD *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v16 = (_DWORD *)MmUserProbeAddress;
  *v16 = v23;
  v17 = (_QWORD *)(a1 + 12);
  if ( a1 + 12 >= MmUserProbeAddress )
    v17 = (_QWORD *)MmUserProbeAddress;
  *v17 = *(_QWORD *)((char *)&v23 + 4);
  v18 = (_DWORD *)(a1 + 20);
  if ( a1 + 20 >= MmUserProbeAddress )
    v18 = (_DWORD *)MmUserProbeAddress;
  *v18 = v4;
  DCOBJ::~DCOBJ((DCOBJ *)v24);
  return (unsigned int)DeviceObjectPointer;
}
