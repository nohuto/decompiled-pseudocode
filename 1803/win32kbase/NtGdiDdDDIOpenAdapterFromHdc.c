/*
 * XREFs of NtGdiDdDDIOpenAdapterFromHdc @ 0x1C0048150
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002A7E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002AAF0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0031CD0 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     UserIsCurrentProcessDwm @ 0x1C003C070 (UserIsCurrentProcessDwm.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005B3A0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
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
  int v9; // r8d
  WCHAR *v10; // rdx
  struct _ERESOURCE *v11; // rcx
  _DWORD *v12; // rdx
  _QWORD *v13; // rdx
  _DWORD *v14; // rdx
  __int64 v16; // rdx
  void *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // [rsp+20h] [rbp-58h] BYREF
  int v20; // [rsp+28h] [rbp-50h]
  int v21; // [rsp+2Ch] [rbp-4Ch]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-48h] BYREF
  __int64 v23; // [rsp+40h] [rbp-38h]
  PDEVICE_OBJECT v24; // [rsp+48h] [rbp-30h]
  __int128 v25; // [rsp+50h] [rbp-28h]
  __int64 v26; // [rsp+88h] [rbp+10h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+90h] [rbp+18h] BYREF
  PFILE_OBJECT FileObject; // [rsp+98h] [rbp+20h] BYREF

  v2 = a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = MmUserProbeAddress;
  DestinationString = *(struct _UNICODE_STRING *)v2;
  v23 = *(_QWORD *)(v2 + 16);
  DeviceObjectPointer = -1073741811;
  v4 = 0;
  FileObject = 0LL;
  DeviceObject = 0LL;
  v20 = 0;
  v21 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v19, *(HDC *)&DestinationString.Length);
  if ( v19 )
  {
    v5 = *(_QWORD *)(v19 + 48);
    v26 = v5;
    if ( !v5 )
    {
LABEL_12:
      XDCOBJ::vUnlockFast((XDCOBJ *)&v19);
      goto LABEL_13;
    }
    EngAcquireSemaphore(*(HSEMAPHORE *)(v5 + 48));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(v5 + 48), 11LL);
    v6 = *(_DWORD *)(v5 + 40);
    v7 = 1;
    v8 = v6 & 1;
    v9 = 0x20000;
    if ( (v6 & 1) != 0 && (v6 & 0x20000) == 0 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v26) )
    {
      v10 = *(WCHAR **)(v5 + 2568);
      v4 = *((_DWORD *)v10 + 64);
LABEL_9:
      RtlInitUnicodeString(&DestinationString, v10);
      DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
      goto LABEL_10;
    }
    if ( !v8 )
      goto LABEL_41;
    if ( (v6 & v9) != 0 )
      goto LABEL_10;
    v16 = *(_QWORD *)(v5 + 2568);
    if ( v16 && (v17 = *(void **)(v16 + 304)) != 0LL && (*(_DWORD *)(v16 + 164) & 4) != 0 )
    {
      v4 = *(_DWORD *)(v16 + 256);
      DeviceObject = *(PDEVICE_OBJECT *)(v16 + 304);
      ObfReferenceObject(v17);
      DeviceObjectPointer = 0;
    }
    else
    {
LABEL_41:
      if ( (v6 & v9) == 0 )
      {
        v18 = *(_QWORD *)(v5 + 2568);
        if ( v18 )
        {
          if ( (*(_DWORD *)(v18 + 160) & 0x4000000) != 0
            && (unsigned __int16)(gProtocolType - v7) <= 0xFFFDu
            && qword_1C01A1760
            && (PVOID)PsGetCurrentProcess() != gpepCSRSS
            && !UserIsCurrentProcessDwm() )
          {
            v4 = *(_DWORD *)(*(_QWORD *)(v5 + 2568) + 256LL);
            v10 = word_1C01A1768;
            goto LABEL_9;
          }
        }
      }
    }
LABEL_10:
    EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *(_QWORD *)(v5 + 48));
    v11 = *(struct _ERESOURCE **)(v5 + 48);
    if ( v11 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v11);
      PsLeavePriorityRegion();
    }
    goto LABEL_12;
  }
LABEL_13:
  v24 = 0LL;
  v25 = 0uLL;
  if ( DeviceObjectPointer < 0 )
    goto LABEL_38;
  v24 = DeviceObject;
  if ( FileObject )
  {
    ObfReferenceObject(DeviceObject);
    ObfDereferenceObject(FileObject);
    FileObject = 0LL;
  }
  DeviceObjectPointer = _guard_dispatch_icall_fptr();
  ObfDereferenceObject(DeviceObject);
  DeviceObject = 0LL;
  if ( DeviceObjectPointer < 0 )
  {
LABEL_38:
    *(_QWORD *)&v25 = 0LL;
    DWORD2(v25) = 0;
    v4 = 0;
  }
  v12 = (_DWORD *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v12 = (_DWORD *)MmUserProbeAddress;
  *v12 = v25;
  v13 = (_QWORD *)(a1 + 12);
  if ( a1 + 12 >= MmUserProbeAddress )
    v13 = (_QWORD *)MmUserProbeAddress;
  *v13 = *(_QWORD *)((char *)&v25 + 4);
  v14 = (_DWORD *)(a1 + 20);
  if ( a1 + 20 >= MmUserProbeAddress )
    v14 = (_DWORD *)MmUserProbeAddress;
  *v14 = v4;
  return (unsigned int)DeviceObjectPointer;
}
