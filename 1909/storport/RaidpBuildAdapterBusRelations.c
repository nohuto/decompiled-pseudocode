/*
 * XREFs of RaidpBuildAdapterBusRelations @ 0x1C0012B8C
 * Callers:
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C001293C (RaidAdapterQueryDeviceRelationsIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006850 (RaidAllocatePool.c)
 *     RaidUnitSetEnumerated @ 0x1C0012E10 (RaidUnitSetEnumerated.c)
 *     memmove @ 0x1C0024A80 (memmove.c)
 *     WPP_SF_ @ 0x1C0038C2C (WPP_SF_.c)
 *     WPP_SF_DD @ 0x1C0038C9C (WPP_SF_DD.c)
 *     WPP_SF_q @ 0x1C0038D48 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038D8C (WPP_SF_qD.c)
 */

__int64 __fastcall RaidpBuildAdapterBusRelations(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // r15d
  __int64 v4; // rdx
  _DWORD *Pool; // r13
  unsigned int v6; // r12d
  _QWORD *i; // rsi
  _QWORD *v8; // rdi
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  PDEVICE_OBJECT v11; // rcx
  _QWORD *v12; // rsi
  void *v13; // rcx
  PVOID v14; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rdi
  _QWORD *v18; // rcx
  PDEVICE_OBJECT v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct _KLOCK_QUEUE_HANDLE v22; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v24; // [rsp+A0h] [rbp+40h]
  SIZE_T Size; // [rsp+B0h] [rbp+50h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v22, 0, sizeof(v22));
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 40LL, &WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids, a1);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 112), &LockHandle);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 192), &v22);
  v24 = *(_DWORD *)(a1 + 136) + *(_DWORD *)(a1 + 216);
  Size = 8LL * v24 + 16;
  v3 = 0;
  Pool = RaidAllocatePool(NonPagedPoolNx, Size, 0x52446152u, *(_QWORD *)(a1 + 8));
  if ( !Pool )
  {
    KeReleaseInStackQueuedSpinLock(&v22);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v3 = -1073741801;
    goto LABEL_21;
  }
  v6 = 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 41LL, &WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids);
  }
  for ( i = *(_QWORD **)(a1 + 120); i != (_QWORD *)(a1 + 120); i = (_QWORD *)*i )
  {
    v8 = i - 7;
    v9 = i - 7;
    if ( (i[49] & 4) != 0 )
    {
      LOBYTE(v4) = 1;
      RaidUnitSetEnumerated(v9, v4);
      ObfReferenceObject((PVOID)v8[1]);
      if ( v6 > v24 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
          goto LABEL_15;
        if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
          WPP_SF_DD(WPP_GLOBAL_Control->AttachedDevice, 43LL, &WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids, v6, v24);
        break;
      }
      v10 = v6++;
      *(_QWORD *)&Pool[2 * v10 + 2] = v8[1];
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
      {
        v16 = 44LL;
        goto LABEL_36;
      }
    }
    else
    {
      RaidUnitSetEnumerated(v9, 0LL);
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
      {
        v16 = 42LL;
LABEL_36:
        WPP_SF_q(v11->AttachedDevice, v16, &WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids, i - 7);
        continue;
      }
    }
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 45LL, &WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids);
  }
LABEL_15:
  v12 = *(_QWORD **)(a1 + 200);
  while ( 2 )
  {
    if ( v12 != (_QWORD *)(a1 + 200) )
    {
      v17 = v12 - 7;
      v18 = v12 - 7;
      if ( (v12[49] & 4) != 0 )
      {
        LOBYTE(v4) = 1;
        RaidUnitSetEnumerated(v18, v4);
        ObfReferenceObject((PVOID)v17[1]);
        if ( v6 > v24 )
        {
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
          {
            WPP_SF_DD(
              WPP_GLOBAL_Control->AttachedDevice,
              47LL,
              &WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids,
              v6,
              v24);
          }
          break;
        }
        v21 = v6++;
        *(_QWORD *)&Pool[2 * v21 + 2] = v17[1];
        v19 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 5u )
        {
          goto LABEL_54;
        }
        v20 = 48LL;
      }
      else
      {
        RaidUnitSetEnumerated(v18, 0LL);
        v19 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 5u )
        {
          goto LABEL_54;
        }
        v20 = 46LL;
      }
      WPP_SF_q(v19->AttachedDevice, v20, &WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids, v12 - 7);
LABEL_54:
      v12 = (_QWORD *)*v12;
      continue;
    }
    break;
  }
  KeReleaseInStackQueuedSpinLock(&v22);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  *Pool = v6;
  v13 = *(void **)(a1 + 4456);
  *a2 = Pool;
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    *(_QWORD *)(a1 + 4456) = 0LL;
  }
  v14 = RaidAllocatePool(NonPagedPoolNx, Size, 0x52446152u, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 4456) = v14;
  if ( v14 )
  {
    memmove(v14, Pool, Size);
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 49LL, &WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids, a1);
  }
LABEL_21:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_qD(WPP_GLOBAL_Control->AttachedDevice, 50LL, &WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids, a1, v3);
  }
  return v3;
}
