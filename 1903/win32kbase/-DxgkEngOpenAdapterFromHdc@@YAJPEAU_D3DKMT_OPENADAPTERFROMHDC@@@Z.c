/*
 * XREFs of ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C003B540
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C001C0F0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C0037DC0 (UserIsCurrentProcessDwm.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C003DDAC (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C003DF84 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0078C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngOpenAdapterFromHdc(struct _D3DKMT_OPENADAPTERFROMHDC *a1)
{
  struct _D3DKMT_OPENADAPTERFROMHDC *v2; // rax
  NTSTATUS DeviceObjectPointer; // edi
  int v4; // esi
  __int64 v5; // rbx
  int v6; // r9d
  __int16 v7; // r10
  __int64 v8; // rdx
  int v9; // r8d
  const WCHAR *v10; // rdx
  struct _ERESOURCE *v11; // rcx
  _DWORD *p_hAdapter; // rdx
  _QWORD *p_AdapterLuid; // rdx
  _DWORD *p_VidPnSourceId; // rdx
  struct _DEVICE_OBJECT *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // [rsp+20h] [rbp-58h] BYREF
  int v22; // [rsp+28h] [rbp-50h]
  int v23; // [rsp+2Ch] [rbp-4Ch]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25; // [rsp+40h] [rbp-38h]
  PDEVICE_OBJECT v26; // [rsp+48h] [rbp-30h] BYREF
  __int128 v27; // [rsp+50h] [rbp-28h]
  __int64 v28; // [rsp+88h] [rbp+10h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+90h] [rbp+18h] BYREF
  PFILE_OBJECT FileObject; // [rsp+98h] [rbp+20h] BYREF

  v2 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (struct _D3DKMT_OPENADAPTERFROMHDC *)MmUserProbeAddress;
  DestinationString = *(struct _UNICODE_STRING *)&v2->hDc;
  v25 = *(_QWORD *)&v2->AdapterLuid.HighPart;
  DeviceObjectPointer = -1073741811;
  v4 = 0;
  FileObject = 0LL;
  DeviceObject = 0LL;
  v22 = 0;
  v23 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v21, *(HDC *)&DestinationString.Length);
  if ( v21 )
  {
    v5 = *(_QWORD *)(v21 + 48);
    v28 = v5;
    if ( !v5 )
    {
LABEL_12:
      XDCOBJ::vUnlockFast((XDCOBJ *)&v21);
      goto LABEL_13;
    }
    EngAcquireSemaphore(*(HSEMAPHORE *)(v5 + 48));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(v5 + 48), 11LL);
    v6 = *(_DWORD *)(v5 + 40);
    v7 = 1;
    v8 = v6 & 1;
    v9 = 0x20000;
    if ( (v6 & 1) != 0 && (v6 & 0x20000) == 0 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v28) )
    {
      v4 = *(_DWORD *)(*(_QWORD *)(v5 + 2576) + 256LL);
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.Buffer = 0LL;
      v10 = *(const WCHAR **)(v5 + 2576);
LABEL_9:
      RtlInitUnicodeString(&DestinationString, v10);
      DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
      goto LABEL_10;
    }
    if ( !(_DWORD)v8 )
      goto LABEL_44;
    if ( (v6 & v9) != 0 )
      goto LABEL_10;
    v8 = *(_QWORD *)(v5 + 2576);
    if ( v8 && (v16 = *(struct _DEVICE_OBJECT **)(v8 + 304)) != 0LL && (*(_DWORD *)(v8 + 164) & 4) != 0 )
    {
      v4 = *(_DWORD *)(v8 + 256);
    }
    else
    {
LABEL_44:
      if ( (v6 & v9) != 0 )
        goto LABEL_10;
      v17 = *(_QWORD *)(v5 + 2576);
      if ( !v17
        || (*(_DWORD *)(v17 + 160) & 0x4000000) == 0
        || (unsigned __int16)(gProtocolType - v7) > 0xFFFDu
        || !Object
        || (PVOID)PsGetCurrentProcess(65533LL, v8) == gpepCSRSS
        || UserIsCurrentProcessDwm(v19, v18) )
      {
        goto LABEL_10;
      }
      v20 = *(_QWORD *)(v5 + 2576);
      v4 = *(_DWORD *)(v20 + 256);
      if ( dword_1C0215BA0 )
      {
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        v10 = Dest;
        goto LABEL_9;
      }
      v16 = *(struct _DEVICE_OBJECT **)(v20 + 304);
      if ( !v16 )
      {
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
    }
    DeviceObject = v16;
    ObfReferenceObject(v16);
    DeviceObjectPointer = 0;
    goto LABEL_10;
  }
LABEL_13:
  v26 = 0LL;
  v27 = 0uLL;
  if ( DeviceObjectPointer < 0 )
    goto LABEL_41;
  v26 = DeviceObject;
  if ( FileObject )
  {
    ObfReferenceObject(DeviceObject);
    ObfDereferenceObject(FileObject);
    FileObject = 0LL;
  }
  DeviceObjectPointer = ((__int64 (__fastcall *)(PDEVICE_OBJECT *))qword_1C0215050)(&v26);
  ObfDereferenceObject(DeviceObject);
  DeviceObject = 0LL;
  if ( DeviceObjectPointer < 0 )
  {
LABEL_41:
    *(_QWORD *)&v27 = 0LL;
    DWORD2(v27) = 0;
    v4 = 0;
  }
  p_hAdapter = &a1->hAdapter;
  if ( (unsigned __int64)&a1->hAdapter >= MmUserProbeAddress )
    p_hAdapter = (_DWORD *)MmUserProbeAddress;
  *p_hAdapter = v27;
  p_AdapterLuid = &a1->AdapterLuid;
  if ( (unsigned __int64)&a1->AdapterLuid >= MmUserProbeAddress )
    p_AdapterLuid = (_QWORD *)MmUserProbeAddress;
  *p_AdapterLuid = *(_QWORD *)((char *)&v27 + 4);
  p_VidPnSourceId = &a1->VidPnSourceId;
  if ( (unsigned __int64)&a1->VidPnSourceId >= MmUserProbeAddress )
    p_VidPnSourceId = (_DWORD *)MmUserProbeAddress;
  *p_VidPnSourceId = v4;
  return (unsigned int)DeviceObjectPointer;
}
