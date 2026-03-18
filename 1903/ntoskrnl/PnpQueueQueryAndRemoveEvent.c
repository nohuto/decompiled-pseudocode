/*
 * XREFs of PnpQueueQueryAndRemoveEvent @ 0x140877AF4
 * Callers:
 *     PnpRequestDeviceEjectExWorker @ 0x140860B70 (PnpRequestDeviceEjectExWorker.c)
 *     PiCMQueryRemove @ 0x140873214 (PiCMQueryRemove.c)
 *     PiControlQueryAndRemoveDevice @ 0x140876D60 (PiControlQueryAndRemoveDevice.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     PnpDiagnosticTraceObject @ 0x14013DB6C (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x140153CB0 (PnpDiagnosticTraceDeviceOperation.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406A2B68 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpSetTargetDeviceRemove @ 0x140731324 (PnpSetTargetDeviceRemove.c)
 *     PnpRemoveEventFromQueue @ 0x14086DB80 (PnpRemoveEventFromQueue.c)
 */

__int64 __fastcall PnpQueueQueryAndRemoveEvent(unsigned __int16 *a1, char *a2, _WORD *a3, _WORD *a4, char a5, int a6)
{
  int v7; // r14d
  volatile __int32 *v9; // rdi
  _DWORD *v10; // r15
  unsigned __int16 *v11; // rsi
  _QWORD *v12; // rax
  char *v13; // r12
  int v14; // ebx
  PVOID v15; // rcx
  __int64 v16; // rax
  char *PoolWithTag; // rax
  int v18; // ebx
  int v19; // edi
  int v20; // r12d
  unsigned __int16 v22; // cx
  int v23; // ecx
  _WORD *v24; // rax
  char v25; // [rsp+78h] [rbp-29h]
  __int64 v26; // [rsp+80h] [rbp-21h] BYREF
  PVOID P; // [rsp+88h] [rbp-19h] BYREF
  PVOID Object; // [rsp+90h] [rbp-11h]
  struct _KEVENT Event; // [rsp+98h] [rbp-9h] BYREF

  v7 = a5 & 8;
  memset(&Event, 0, sizeof(Event));
  v9 = 0LL;
  v10 = 0LL;
  P = 0LL;
  v11 = 0LL;
  v25 = 0;
  *(_DWORD *)a2 = 0;
  if ( (a5 & 8) != 0 )
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEject_Start, a1);
  v12 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)a1, 0x43706E50u);
  Object = v12;
  if ( !v12 )
  {
    v13 = a2;
    v14 = -1073741810;
    goto LABEL_36;
  }
  v15 = *(PVOID *)(v12[39] + 40LL);
  if ( v15 )
  {
    if ( v15 == IopRootDeviceNode )
    {
      v14 = -1073741790;
      goto LABEL_7;
    }
    v16 = *(unsigned int *)a4;
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
      v25 = 1;
      *((_WORD *)PoolWithTag + 2) = 0;
      *(_QWORD *)(PoolWithTag + 12) = PoolWithTag + 20;
      v18 = 0;
      *((_WORD *)PoolWithTag + 3) = *a4;
    }
    else
    {
      v18 = 1;
    }
    if ( v7 && a6 )
      v18 = 1;
    if ( (a5 & 2) != 0 )
    {
      v19 = 22;
    }
    else
    {
      if ( v7 )
      {
        v19 = 47;
        v20 = 1;
        goto LABEL_25;
      }
      v19 = 21;
    }
    v20 = 0;
LABEL_25:
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v14 = PnpSetTargetDeviceRemove(
            Object,
            0,
            (a5 & 0xB) != 0,
            v20,
            v18,
            v19,
            0,
            (__int64)&Event,
            0LL,
            0LL,
            &v26,
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
          v25 = 0;
          *((_BYTE *)P + 72) = 1;
          _InterlockedExchange(v9 + 17, 0);
          goto LABEL_31;
        }
        v14 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      }
      v13 = a2;
      if ( v14 >= 0 )
        v14 = v26;
      if ( v10 )
        *(_DWORD *)a2 = *v10;
      if ( v11 )
      {
        v22 = *v11;
        if ( *v11 )
        {
          if ( (unsigned int)v22 >= *(_DWORD *)a4 )
          {
            v22 = *a4 - 2;
            *v11 = v22;
          }
          memmove(a3, *((const void **)v11 + 1), v22);
          a3[(unsigned __int64)*v11 >> 1] = 0;
          v22 = *v11;
        }
        *(_DWORD *)a4 = v22;
      }
      if ( *(_DWORD *)a2 == 6 )
      {
        if ( a3 )
        {
          v23 = 0;
          v24 = a3;
          if ( *a3 )
          {
            while ( *v24 != 92 || ++v23 != 3 )
            {
              if ( !*++v24 )
                goto LABEL_60;
            }
            *v24 = 0;
LABEL_60:
            if ( v23 == 3 )
              *(_DWORD *)a4 = (unsigned __int16)((_WORD)v24 - (_WORD)a3);
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
  if ( v7 )
    PnpDiagnosticTraceDeviceOperation(&KMPnPEvt_DeviceEject_Stop, a1, v14, (__int64)v11, *v13);
  if ( v25 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)v14;
}
