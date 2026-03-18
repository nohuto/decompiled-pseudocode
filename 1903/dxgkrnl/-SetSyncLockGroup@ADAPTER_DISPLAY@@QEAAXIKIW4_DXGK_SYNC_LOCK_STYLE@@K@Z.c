/*
 * XREFs of ?SetSyncLockGroup@ADAPTER_DISPLAY@@QEAAXIKIW4_DXGK_SYNC_LOCK_STYLE@@K@Z @ 0x1C001B65C
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01253E8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

void __fastcall ADAPTER_DISPLAY::SetSyncLockGroup(__int64 a1, unsigned int a2, int a3, int a4, int a5, unsigned int a6)
{
  __int64 v7; // rdi
  char *v8; // rsi
  __int64 v9; // r14
  char *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v7 = 10LL * a2;
  *(_DWORD *)(a1 + 8 * v7 + 744) = a5;
  *(_DWORD *)(a1 + 8 * v7 + 736) = a3;
  *(_DWORD *)(a1 + 8 * v7 + 740) = a4;
  *(_DWORD *)(a1 + 8 * v7 + 776) = a6 >> 1;
  if ( a3 )
  {
    v8 = 0LL;
    v9 = 10 * (a2 + 10LL);
    if ( !*(_QWORD *)(a1 + 80 * (a2 + 10LL)) )
    {
      v10 = (char *)operator new[](0xF90uLL, 0x4B677844u, (POOL_TYPE)512);
      v8 = v10;
      if ( !v10 )
      {
        v15 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
        *(_QWORD *)(v15 + 24) = 6556LL;
        WdLogEvent5_WdLowResource(v15);
        return;
      }
      memset(v10, 0, 0xF90uLL);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 16) + 3872LL), &LockHandle);
    if ( v8 )
    {
      *(_DWORD *)(a1 + 8 * v7 + 756) = 0;
      *(_DWORD *)(a1 + 8 * v7 + 760) = 0;
      *(_DWORD *)(a1 + 8 * v7 + 764) = 0;
      *(_DWORD *)(a1 + 8 * v7 + 768) = 0;
      *(_DWORD *)(a1 + 8 * v7 + 772) = 0;
      *(_QWORD *)(a1 + 8 * v7 + 784) = 0LL;
      *(_QWORD *)(a1 + 8 * v7 + 792) = 0LL;
      *(_DWORD *)(a1 + 600) = 0;
      *(_DWORD *)(a1 + 604) = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
      *(_QWORD *)(a1 + 8 * v9) = v8;
      *(_QWORD *)(a1 + 8 * v7 + 808) = v8 + 384;
      KeSetTimerEx((PKTIMER)(a1 + 608), (LARGE_INTEGER)-40000000LL, 4000, (PKDPC)(a1 + 672));
    }
    *(_BYTE *)(a1 + 8 * v7 + 752) = 1;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
