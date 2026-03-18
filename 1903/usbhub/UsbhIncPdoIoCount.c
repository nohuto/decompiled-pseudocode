/*
 * XREFs of UsbhIncPdoIoCount @ 0x1C001D080
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x1C0002E38 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoPower_WaitWake @ 0x1C000CDA0 (UsbhPdoPower_WaitWake.c)
 *     UsbhCreatePdo @ 0x1C0022E20 (UsbhCreatePdo.c)
 *     UsbhPdoSystemControl @ 0x1C002B070 (UsbhPdoSystemControl.c)
 *     UsbhPdoDeviceControl @ 0x1C002BC70 (UsbhPdoDeviceControl.c)
 *     UsbhPdoPower_Sequence @ 0x1C004C2F0 (UsbhPdoPower_Sequence.c)
 *     UsbhPdoSuccess @ 0x1C005BF50 (UsbhPdoSuccess.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhIncPdoIoCount(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // rbx
  KSPIN_LOCK *v8; // rdi
  KIRQL v9; // al
  KIRQL v10; // si
  char *PoolWithTag; // rax
  char *v12; // rdx
  __int64 v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  int v17; // [rsp+40h] [rbp+8h]

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v7 != 1329877064 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v8 = (KSPIN_LOCK *)(v7 + 1216);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 1216));
  v10 = v9;
  if ( *(_DWORD *)(v7 + 784) == 2 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 1216), v9);
    return 3221225486LL;
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x28uLL, 0x42554855u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      HIBYTE(v17) = a3;
      *(_QWORD *)(PoolWithTag + 4) = 0LL;
      *(_QWORD *)(PoolWithTag + 12) = 0LL;
      v13 = v7 + 1224;
      *((_DWORD *)PoolWithTag + 5) = 0;
      *((_DWORD *)PoolWithTag + 9) = 0;
      LOBYTE(v17) = HIBYTE(a3);
      BYTE2(v17) = BYTE1(a3);
      BYTE1(v17) = BYTE2(a3);
      *(_DWORD *)PoolWithTag = v17;
      v14 = PoolWithTag + 8;
      *((_QWORD *)v12 + 3) = a2;
      *((_DWORD *)v12 + 8) = a4;
      v15 = *(_QWORD **)(v13 + 8);
      if ( *v15 != v13 )
        __fastfail(3u);
      *v14 = v13;
      *((_QWORD *)v12 + 2) = v15;
      *v15 = v14;
      *(_QWORD *)(v13 + 8) = v14;
    }
    else
    {
      ++*(_DWORD *)(v7 + 1264);
    }
    KeReleaseSpinLock(v8, v10);
    return 0LL;
  }
}
