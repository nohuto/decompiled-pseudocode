/*
 * XREFs of PiControlGetSetDeviceStatus @ 0x14066FE60
 * Callers:
 *     <none>
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140002850 (PiControlFreeUserModeCallersBuffer.c)
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     PnpRequestDeviceAction @ 0x14015D824 (PnpRequestDeviceAction.c)
 *     PnpDeleteDeviceActionRequest @ 0x14015E124 (PnpDeleteDeviceActionRequest.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     PnpCancelDeviceActionRequest @ 0x14029F884 (PnpCancelDeviceActionRequest.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x14029F8DC (PnpRemoveDeviceActionRequestFromQueue.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1405BDCCC (PiControlMakeUserModeCallersCopy.c)
 *     PpDevNodeUnlockTree @ 0x14066FFEC (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140670048 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeLockTree @ 0x140670114 (PpDevNodeLockTree.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1406701CC (PiControlGetUserFlagsFromDeviceNode.c)
 */

__int64 __fastcall PiControlGetSetDeviceStatus(__int64 a1, void **a2, unsigned int a3, char a4)
{
  unsigned __int16 v4; // cx
  _DWORD *v5; // rsi
  volatile signed __int32 *v6; // rdi
  void *v9; // r12
  SIZE_T v10; // r13
  __int64 result; // rax
  _QWORD *v12; // r15
  int v13; // ecx
  int v14; // r14d
  int v15; // ebx
  int v16; // ecx
  int v17; // eax
  NTSTATUS v18; // eax
  PVOID PoolWithTag; // rax
  __int64 *v20; // rdx
  __int64 *v21; // rcx
  __int64 v22; // r9
  struct _KEVENT *p_Event; // rax
  __int64 v24; // [rsp+40h] [rbp-30h] BYREF
  _WORD v25[2]; // [rsp+48h] [rbp-28h] BYREF
  int v26; // [rsp+4Ch] [rbp-24h]
  void *v27; // [rsp+50h] [rbp-20h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-18h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+38h] BYREF

  v4 = *(_WORD *)a2;
  LODWORD(v29) = 0;
  v5 = 0LL;
  v26 = 0;
  v6 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v27 = 0LL;
  v9 = 0LL;
  v10 = a3;
  v24 = 0LL;
  v25[1] = v4;
  v25[0] = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v4 & 1) != 0 )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy(&v27, a2[1], v4, 2u, a4, 1);
  if ( (int)result >= 0 )
  {
    PpDevNodeLockTree(0LL);
    v12 = (_QWORD *)PnpDeviceObjectFromDeviceInstanceWithTag(v25, 1399877200LL);
    PiControlFreeUserModeCallersBuffer(a4, v27);
    if ( v12 )
      v5 = *(_DWORD **)(v12[39] + 40LL);
    PpDevNodeUnlockTree(0LL);
    if ( !v5 )
    {
      v15 = -1073741810;
LABEL_12:
      if ( v12 )
        ObfDereferenceObjectWithTag(v12, 0x53706E50u);
      if ( v15 < 0 )
      {
        if ( v9 )
          ExFreePoolWithTag(v9, 0x55706E50u);
      }
      return (unsigned int)v15;
    }
    if ( v5 == IopRootDeviceNode && *((_DWORD *)a2 + 4) )
    {
      v15 = -1073741790;
      goto LABEL_12;
    }
    v13 = *((_DWORD *)a2 + 4);
    v14 = *((_DWORD *)a2 + 7) & 1;
    if ( !v13 )
    {
      PiControlGetUserFlagsFromDeviceNode(v5, (char *)a2 + 20);
      *((_DWORD *)a2 + 6) = v5[101];
      *((_DWORD *)a2 + 8) = v5[102];
      v15 = 0;
      goto LABEL_10;
    }
    v16 = v13 - 1;
    if ( v16 )
    {
      if ( v16 != 1 )
      {
        v15 = -1073741808;
        goto LABEL_12;
      }
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v17 = PnpRequestDeviceAction(v12, 1, 0, 0LL, (__int64)&Event, (__int64)&v29, &v24);
      v15 = v17;
    }
    else
    {
      if ( v14 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x55706E50u);
        v9 = PoolWithTag;
        if ( !PoolWithTag )
        {
          v15 = -1073741670;
          goto LABEL_12;
        }
        memmove(PoolWithTag, a2, v10);
      }
      else
      {
        KeInitializeEvent(&Event, NotificationEvent, 0);
      }
      v20 = &v24;
      v21 = &v29;
      v22 = (__int64)v9;
      if ( v14 )
        v20 = 0LL;
      p_Event = &Event;
      if ( v14 )
      {
        v21 = 0LL;
        p_Event = 0LL;
      }
      else
      {
        v22 = (__int64)a2;
      }
      v17 = PnpRequestDeviceAction(v12, 15, 0, v22, (__int64)p_Event, (__int64)v21, v20);
      v15 = v17;
      if ( v14 )
        goto LABEL_41;
    }
    if ( v17 >= 0 )
    {
      v18 = KeWaitForSingleObject(&Event, Executive, 0, 1u, 0LL);
      v6 = (volatile signed __int32 *)v24;
      v15 = v18;
      if ( v18 == 257 )
      {
        if ( (unsigned int)PnpRemoveDeviceActionRequestFromQueue((volatile signed __int32 *)v24) )
        {
          v15 = -1073741536;
          goto LABEL_10;
        }
        PnpCancelDeviceActionRequest((__int64)v6);
        v15 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      }
      if ( !v15 )
        v15 = v29;
      goto LABEL_10;
    }
LABEL_41:
    v6 = (volatile signed __int32 *)v24;
LABEL_10:
    if ( v6 )
      PnpDeleteDeviceActionRequest(v6);
    goto LABEL_12;
  }
  return result;
}
