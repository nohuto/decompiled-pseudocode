/*
 * XREFs of PnpQueueQueryAndRemoveEvent @ 0x14083DBA4
 * Callers:
 *     PnpRequestDeviceEjectExWorker @ 0x140827910 (PnpRequestDeviceEjectExWorker.c)
 *     PiCMQueryRemove @ 0x140839894 (PiCMQueryRemove.c)
 *     PiControlQueryAndRemoveDevice @ 0x14083CE60 (PiControlQueryAndRemoveDevice.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     PnpDiagnosticTraceObject @ 0x1400F5308 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x1401601DC (PnpDiagnosticTraceDeviceOperation.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14059BC4C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpSetTargetDeviceRemove @ 0x1406EFF30 (PnpSetTargetDeviceRemove.c)
 *     PnpRemoveEventFromQueue @ 0x140834498 (PnpRemoveEventFromQueue.c)
 */

__int64 __fastcall PnpQueueQueryAndRemoveEvent(
        unsigned __int16 *a1,
        char *a2,
        _WORD *a3,
        unsigned int *a4,
        char a5,
        int a6)
{
  int v6; // r14d
  volatile __int32 *v9; // rdi
  _DWORD *v10; // r15
  unsigned __int16 *v11; // rsi
  _QWORD *v12; // rax
  char *v13; // r12
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rax
  char *PoolWithTag; // rax
  unsigned __int16 v18; // ax
  int v19; // ebx
  int v20; // edi
  int v21; // r12d
  unsigned __int16 v23; // cx
  int v24; // edx
  int v25; // ecx
  _WORD *v26; // rax
  char v27; // [rsp+78h] [rbp-29h]
  __int64 v28; // [rsp+80h] [rbp-21h] BYREF
  PVOID P; // [rsp+88h] [rbp-19h] BYREF
  PVOID Object; // [rsp+90h] [rbp-11h]
  struct _KEVENT Event; // [rsp+98h] [rbp-9h] BYREF
  unsigned __int16 *v32; // [rsp+F8h] [rbp+57h]

  v32 = a1;
  v6 = a5 & 8;
  P = 0LL;
  *(_DWORD *)a2 = 0;
  v9 = 0LL;
  v27 = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( (a5 & 8) != 0 )
  {
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEject_Start, a1);
    a1 = v32;
  }
  v12 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)a1, 0x43706E50u);
  Object = v12;
  if ( !v12 )
  {
    v13 = a2;
    v14 = -1073741810;
    goto LABEL_36;
  }
  v15 = *(_QWORD *)(v12[39] + 40LL);
  if ( v15 )
  {
    if ( v15 == IopRootDeviceNode )
    {
      v14 = -1073741790;
      goto LABEL_7;
    }
    v16 = *a4;
    if ( (_DWORD)v16 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v16 + 20, 0x20207050u);
      v10 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v14 = -1073741670;
LABEL_13:
        v13 = a2;
        goto LABEL_33;
      }
      v11 = (unsigned __int16 *)(PoolWithTag + 4);
      v27 = 1;
      *((_WORD *)PoolWithTag + 2) = 0;
      *(_QWORD *)(PoolWithTag + 12) = PoolWithTag + 20;
      v18 = *(_WORD *)a4;
      v19 = 0;
      v11[1] = v18;
    }
    else
    {
      v19 = 1;
    }
    if ( v6 && a6 )
      v19 = 1;
    if ( (a5 & 2) != 0 )
    {
      v20 = 22;
    }
    else
    {
      if ( v6 )
      {
        v20 = 47;
        v21 = 1;
        goto LABEL_25;
      }
      v20 = 21;
    }
    v21 = 0;
LABEL_25:
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v14 = PnpSetTargetDeviceRemove(
            Object,
            0,
            (a5 & 0xB) != 0,
            v21,
            v19,
            v20,
            0,
            (__int64)&Event,
            0LL,
            0LL,
            &v28,
            (__int64)v10,
            (__int64)v11,
            (__int64 *)&P);
    if ( v14 >= 0 )
    {
      v14 = KeWaitForSingleObject(&Event, Executive, 0, 1u, 0LL);
      if ( v14 == 257 )
      {
        v9 = (volatile __int32 *)P;
        if ( (unsigned int)PnpRemoveEventFromQueue(P) )
        {
          v14 = -1073741536;
          goto LABEL_13;
        }
        if ( !_InterlockedExchange(v9 + 17, 1) )
        {
          v14 = -1073741536;
          v27 = 0;
          *((_BYTE *)P + 72) = 1;
          _InterlockedExchange(v9 + 17, 0);
          goto LABEL_31;
        }
        v14 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      }
      v13 = a2;
      if ( v14 >= 0 )
        v14 = v28;
      if ( v10 )
        *(_DWORD *)a2 = *v10;
      if ( v11 )
      {
        v23 = *v11;
        if ( *v11 )
        {
          v24 = *a4;
          if ( v23 >= *a4 )
          {
            v23 = v24 - 2;
            *v11 = v24 - 2;
          }
          memmove(a3, *((const void **)v11 + 1), v23);
          a3[(unsigned __int64)*v11 >> 1] = 0;
          v23 = *v11;
        }
        *a4 = v23;
      }
      if ( *(_DWORD *)a2 == 6 )
      {
        if ( a3 )
        {
          v25 = 0;
          v26 = a3;
          if ( *a3 )
          {
            while ( *v26 != 92 || ++v25 != 3 )
            {
              if ( !*++v26 )
                goto LABEL_60;
            }
            *v26 = 0;
LABEL_60:
            if ( v25 == 3 )
              *a4 = (unsigned __int16)((_WORD)v26 - (_WORD)a3);
          }
        }
      }
      goto LABEL_32;
    }
LABEL_31:
    v13 = a2;
LABEL_32:
    v9 = (volatile __int32 *)P;
    goto LABEL_33;
  }
  v14 = -1073741810;
LABEL_7:
  v13 = a2;
LABEL_33:
  ObfDereferenceObjectWithTag(Object, 0x43706E50u);
  if ( v9 && _InterlockedExchangeAdd(v9 + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(P, 0x4B706E50u);
LABEL_36:
  if ( v6 )
    PnpDiagnosticTraceDeviceOperation(&KMPnPEvt_DeviceEject_Stop, v32, v14, (__int64)v11, *v13);
  if ( v27 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)v14;
}
