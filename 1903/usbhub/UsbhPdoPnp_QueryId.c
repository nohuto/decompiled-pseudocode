/*
 * XREFs of UsbhPdoPnp_QueryId @ 0x1C001FEC0
 * Callers:
 *     <none>
 * Callees:
 *     Usbh_SSH_Event @ 0x1C0010580 (Usbh_SSH_Event.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C0020454 (UsbhPdoPnp_EnablePdo.c)
 *     memmove @ 0x1C002C6C0 (memmove.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryId(__int64 a1, IRP *a2)
{
  __int64 v2; // r14
  __int64 v5; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  NTSTATUS Status; // r15d
  unsigned int Length; // ecx
  _DWORD *v9; // rax
  struct _DEVICE_OBJECT *v10; // r12
  struct _KEVENT *DeviceExtension; // rbx
  unsigned __int8 Signalling; // r9
  unsigned __int8 v13; // cl
  void *v14; // r8
  __int64 v15; // rdx
  char *PoolWithTag; // rax
  __int64 v17; // r12
  _LIST_ENTRY *p_WaitListHead; // rbx
  char *v19; // rax
  char **Blink; // rcx
  _DWORD *v21; // rdx
  __int64 v22; // rax
  struct _KEVENT *v23; // rbx
  unsigned __int8 v24; // r8
  unsigned __int8 v25; // cl
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  _QWORD *v29; // rax
  _QWORD *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rax
  _DWORD *v34; // rax
  _DWORD *v35; // rdi
  __int64 v36; // rcx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  volatile int Lock; // eax
  struct _DEVICE_OBJECT *v41; // [rsp+30h] [rbp-58h]
  struct _UNICODE_STRING GuidString; // [rsp+38h] [rbp-50h] BYREF
  __int64 v43; // [rsp+90h] [rbp+8h]
  struct _KEVENT *Event; // [rsp+A0h] [rbp+18h]
  _DWORD *v45; // [rsp+A8h] [rbp+20h]

  v2 = 0LL;
  if ( !a1 )
    goto LABEL_79;
  v5 = *(_QWORD *)(a1 + 64);
  if ( !v5 )
    goto LABEL_78;
  if ( *(_DWORD *)v5 != 1329877064 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = a2->IoStatus.Status;
  KeWaitForSingleObject((PVOID)(v5 + 2568), Executive, 0, 0, 0LL);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length == 1 )
  {
    v31 = 2096LL;
    goto LABEL_37;
  }
  if ( !Length )
  {
    if ( KeGetCurrentIrql() )
    {
LABEL_35:
      v31 = 2080LL;
      goto LABEL_37;
    }
    v9 = *(_DWORD **)(a1 + 64);
    v45 = v9;
    if ( !v9 )
      goto LABEL_78;
    if ( *v9 != 1329877064 )
      UsbhTrapFatal_Dbg(a1, v9);
    v10 = *(struct _DEVICE_OBJECT **)(v5 + 1184);
    v41 = v10;
    if ( v10 )
    {
      DeviceExtension = (struct _KEVENT *)v10->DeviceExtension;
      if ( !DeviceExtension )
        UsbhTrapFatal_Dbg(v10, 0LL);
      if ( DeviceExtension->Header.LockNV != 541218120 )
        UsbhTrapFatal_Dbg(v10, v10->DeviceExtension);
      DeviceExtension[142].Header.Type = 1;
      Event = DeviceExtension + 139;
      KeWaitForSingleObject(&DeviceExtension[139], Executive, 0, 0, 0LL);
      Signalling = DeviceExtension[142].Header.Signalling;
      v13 = Signalling;
      if ( (UsbhLogMask & 0x10000) != 0 )
      {
        v14 = v10->DeviceExtension;
        if ( v14 )
        {
          v15 = *((_QWORD *)v14 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v14 + 220) & *((_DWORD *)v14 + 221));
          *(_DWORD *)v15 = 1668172104;
          *(_QWORD *)(v15 + 24) = Signalling;
          *(_QWORD *)(v15 + 8) = 0LL;
          *(_QWORD *)(v15 + 16) = 1LL;
          v13 = DeviceExtension[142].Header.Signalling;
        }
      }
      if ( v13 )
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x28uLL, 0x42554855u);
        v17 = (__int64)PoolWithTag;
        if ( PoolWithTag )
        {
          p_WaitListHead = &DeviceExtension[129].Header.WaitListHead;
          *(_QWORD *)(PoolWithTag + 4) = 0LL;
          *(_QWORD *)(PoolWithTag + 12) = 0LL;
          *((_DWORD *)PoolWithTag + 5) = 0;
          v19 = PoolWithTag + 8;
          *(_QWORD *)(v17 + 32) = 1346728819LL;
          *(_DWORD *)v17 = 1215918946;
          *(_QWORD *)(v17 + 24) = a1;
          Blink = (char **)p_WaitListHead->Blink;
          if ( *Blink != (char *)p_WaitListHead )
            goto LABEL_75;
          *(_QWORD *)v19 = p_WaitListHead;
          *(_QWORD *)(v17 + 16) = Blink;
          *Blink = v19;
          p_WaitListHead->Blink = (_LIST_ENTRY *)v19;
        }
        else
        {
          ++DeviceExtension[130].Header.LockNV;
          v17 = 1936941672LL;
        }
        KeSetEvent(Event, 0, 0);
        Usbh_SSH_Event(v41, 6u, (__int64)(v45 + 236));
      }
      else
      {
        KeSetEvent(Event, 0, 0);
        v17 = 0LL;
      }
      KeWaitForSingleObject((PVOID)(v5 + 2896), Executive, 0, 0, 0LL);
      UsbhPdoPnp_EnablePdo(a1);
      KeSetEvent((PRKEVENT)(v5 + 2896), 0, 0);
      v21 = *(_DWORD **)(a1 + 64);
      if ( !v21 )
        goto LABEL_78;
      if ( *v21 != 1329877064 )
        UsbhTrapFatal_Dbg(a1, v21);
      v22 = *(_QWORD *)(v5 + 1184);
      v43 = v22;
      if ( v22 )
      {
        v23 = *(struct _KEVENT **)(v22 + 64);
        if ( !v23 )
          UsbhTrapFatal_Dbg(v22, 0LL);
        if ( v23->Header.LockNV != 541218120 )
          UsbhTrapFatal_Dbg(v22, *(_QWORD *)(v22 + 64));
        v23[142].Header.Type = 1;
        KeWaitForSingleObject(&v23[139], Executive, 0, 0, 0LL);
        v24 = v23[142].Header.Signalling;
        v25 = v24;
        if ( (UsbhLogMask & 0x10000) != 0 )
        {
          v26 = *(_QWORD *)(v43 + 64);
          if ( v26 )
          {
            v27 = *(_QWORD *)(v26 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
            *(_DWORD *)v27 = 1667581000;
            *(_QWORD *)(v27 + 24) = v24;
            *(_QWORD *)(v27 + 8) = 0LL;
            *(_QWORD *)(v27 + 16) = v17;
            v25 = v23[142].Header.Signalling;
          }
        }
        if ( !v25 )
          goto LABEL_34;
        if ( v17 == 1936941672 )
        {
          Lock = v23[130].Header.Lock;
          if ( Lock )
            v23[130].Header.LockNV = Lock - 1;
          goto LABEL_34;
        }
        if ( !v17 )
        {
LABEL_34:
          KeSetEvent(v23 + 139, 0, 0);
          goto LABEL_35;
        }
        v28 = *(_QWORD *)(v17 + 8);
        v29 = (_QWORD *)(v17 + 8);
        if ( *(_QWORD *)(v28 + 8) == v17 + 8 )
        {
          v30 = *(_QWORD **)(v17 + 16);
          if ( (_QWORD *)*v30 == v29 )
          {
            *v30 = v28;
            *(_QWORD *)(v28 + 8) = v30;
            *(_QWORD *)(v17 + 16) = v17 + 8;
            *v29 = v29;
            ExFreePoolWithTag((PVOID)v17, 0);
            goto LABEL_34;
          }
        }
LABEL_75:
        __fastfail(3u);
      }
    }
LABEL_79:
    UsbhTrapFatal_Dbg(0LL, 0LL);
  }
  v38 = Length - 2;
  if ( v38 )
  {
    v39 = v38 - 1;
    if ( v39 )
    {
      if ( v39 == 2 )
      {
        if ( *(_BYTE *)(v5 + 2732) )
        {
          *(_QWORD *)&GuidString.Length = 0LL;
          GuidString.Buffer = 0LL;
          Status = RtlStringFromGUID((const GUID *const)(v5 + 2716), &GuidString);
          if ( Status >= 0 )
          {
            Status = 0;
            a2->IoStatus.Information = (unsigned __int64)GuidString.Buffer;
          }
        }
      }
LABEL_54:
      if ( CurrentStackLocation->Parameters.Read.Length )
        goto LABEL_44;
      goto LABEL_76;
    }
    if ( *(_QWORD *)(v5 + 2136) )
    {
      if ( (*(_DWORD *)(v5 + 1420) & 0x200000) != 0 )
        v2 = 12LL;
      v31 = 2128LL;
    }
    else
    {
      v31 = 2144LL;
    }
  }
  else
  {
    v31 = 2112LL;
  }
LABEL_37:
  v32 = v5 + v31;
  if ( !(v5 + v31) )
    goto LABEL_54;
  v33 = *(unsigned int *)(v32 + 4);
  if ( !(_DWORD)v33 || !*(_QWORD *)(v32 + 8) )
    goto LABEL_54;
  v34 = ExAllocatePoolWithTag(PagedPool, v2 + v33, 0x42554855u);
  v35 = v34;
  if ( !v34 )
  {
LABEL_76:
    Status = -1073741670;
    goto LABEL_44;
  }
  memset(v34, 0, v2 + *(unsigned int *)(v32 + 4));
  if ( v2 )
  {
    *(_QWORD *)v35 = *(_QWORD *)L"MSFT30";
    v35[2] = *(_DWORD *)L"30";
  }
  memmove(&v35[(unsigned __int64)v2 / 4], *(const void **)(v32 + 8), *(unsigned int *)(v32 + 4));
  Status = 0;
  a2->IoStatus.Information = (unsigned __int64)v35;
LABEL_44:
  v36 = *(_QWORD *)(a1 + 64);
  if ( !v36 )
LABEL_78:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v36 != 1329877064 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  KeReleaseSemaphore((PRKSEMAPHORE)(v36 + 2568), 16, 1, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_f2aca5edc47035375c4b9957b65d3b97_Traceguids,
      Status);
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
