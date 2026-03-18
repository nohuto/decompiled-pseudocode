/*
 * XREFs of PiDqIrpQueryGetResult @ 0x1405B5CD4
 * Callers:
 *     PiDqDispatch @ 0x1405B6900 (PiDqDispatch.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     PiDqQueryFreeActiveData @ 0x1405B63E8 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryGetNextIoctlInfo @ 0x1405B64A0 (PiDqQueryGetNextIoctlInfo.c)
 *     PiDqIrpComplete @ 0x1405B6D68 (PiDqIrpComplete.c)
 *     PiDqQuerySerializeActionQueue @ 0x1405B7128 (PiDqQuerySerializeActionQueue.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 */

__int64 __fastcall PiDqIrpQueryGetResult(__int64 a1)
{
  int SerializeActionQueue; // ebx
  __int64 v3; // r14
  __int64 v4; // rdi
  int v5; // r13d
  char v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  int v8; // eax
  unsigned int v9; // eax
  struct _KTHREAD *v10; // rdx
  struct _KTHREAD *v11; // rax
  unsigned int v12; // eax
  struct _KTHREAD *v14; // rax
  _QWORD v15[10]; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v16; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v17; // [rsp+B8h] [rbp+20h] BYREF

  SerializeActionQueue = 0;
  v3 = *(_QWORD *)(a1 + 184);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 48) + 32LL);
  v5 = *(_DWORD *)(v3 + 24);
  v6 = 0;
  v16 = 0;
  v15[0] = 0LL;
  v15[1] = 0LL;
  if ( !v4 )
  {
    SerializeActionQueue = -1073741637;
    goto LABEL_14;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v4 + 64, 0LL);
  v8 = *(_DWORD *)(v4 + 216);
  if ( (v8 & 8) != 0 )
  {
    SerializeActionQueue = -1073741536;
    goto LABEL_7;
  }
  if ( (v8 & 4) == 0 )
    goto LABEL_28;
  if ( (v8 & 1) == 0 )
  {
    if ( (v8 & 0x10) == 0 )
    {
      *(_DWORD *)(v4 + 216) = v8 | 0x10;
      v6 = 1;
      goto LABEL_7;
    }
LABEL_28:
    SerializeActionQueue = -1073741637;
    goto LABEL_7;
  }
  SerializeActionQueue = -1073741670;
LABEL_7:
  ExReleasePushLockEx(v4 + 64, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( SerializeActionQueue < 0 )
    goto LABEL_13;
  v9 = *(_DWORD *)(v3 + 8);
  if ( v9 < 0x10 )
  {
    SerializeActionQueue = -1073741789;
  }
  else
  {
    if ( v5 == 4653063 )
    {
      ProbeForWrite(*(volatile void **)(a1 + 112), v9, 8u);
      SerializeActionQueue = PiDqQuerySerializeActionQueue(
                               v4,
                               *(_QWORD *)(a1 + 112),
                               *(_DWORD *)(v3 + 8),
                               (unsigned int)&v16,
                               (__int64)&v17);
      if ( SerializeActionQueue < 0 )
        goto LABEL_13;
      v10 = KeGetCurrentThread();
      --v10->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v4 + 64, 0LL);
      PiDqQueryGetNextIoctlInfo(v4, *(unsigned int *)(v3 + 8), v17, v15);
LABEL_12:
      ExReleasePushLockEx(v4 + 64, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_13:
      if ( SerializeActionQueue == 259 )
        return (unsigned int)SerializeActionQueue;
      goto LABEL_14;
    }
    if ( *(_QWORD *)(a1 + 24) )
    {
      v14 = KeGetCurrentThread();
      --v14->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v4 + 64, 0LL);
      if ( !*(_QWORD *)(v4 + 184)
        && *(_QWORD *)(v4 + 192) == v4 + 192
        && (*(_DWORD *)(*(_QWORD *)(v4 + 24) + 40LL) & 1) != 0 )
      {
        _InterlockedExchange64((volatile __int64 *)(a1 + 104), (__int64)PiDqIrpCancel);
        if ( *(_BYTE *)(a1 + 68) )
        {
          SerializeActionQueue = -1073741536;
        }
        else
        {
          *(_QWORD *)(v4 + 176) = a1;
          *(_BYTE *)(*(_QWORD *)(a1 + 184) + 3LL) |= 1u;
          SerializeActionQueue = 259;
        }
      }
      else
      {
        PiDqQueryGetNextIoctlInfo(v4, *(unsigned int *)(v3 + 8), 0LL, v15);
        v16 = 16;
      }
      goto LABEL_12;
    }
    SerializeActionQueue = -1073741811;
  }
LABEL_14:
  if ( v6 )
  {
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v4 + 64, 0LL);
    v12 = *(_DWORD *)(v4 + 216) & 0xFFFFFFEF;
    *(_DWORD *)(v4 + 216) = v12;
    if ( SerializeActionQueue < 0 )
    {
      *(_DWORD *)(v4 + 216) = v12 | 1;
      PiDqQueryFreeActiveData(v4);
    }
    ExReleasePushLockEx(v4 + 64, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  PiDqIrpComplete(a1, (unsigned int)SerializeActionQueue, v16, v15);
  return (unsigned int)SerializeActionQueue;
}
