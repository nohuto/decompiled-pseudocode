/*
 * XREFs of ?RegisterTtmDevice@CTTMDEVICE@@AEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C027773C
 * Callers:
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C0140C18 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     ?CreateTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x1C0183410 (-CreateTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

__int64 __fastcall CTTMDEVICE::RegisterTtmDevice(CTTMDEVICE *this, struct DXGSESSIONDATA *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  char v9; // bl
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rax
  struct DXGSESSIONDATA **v21; // rdx
  struct DXGSESSIONDATA *v22; // rax
  _QWORD v24[5]; // [rsp+30h] [rbp-28h] BYREF

  memset(v24, 0, 0x20uLL);
  if ( *(struct _KTHREAD **)(*((_QWORD *)DXGGLOBAL::GetGlobal(v5, v4) + 74) + 160LL) != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = 4618LL;
    WdLogEvent5_WdAssertion(v8);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 888, 0LL);
  *((_QWORD *)this + 112) = KeGetCurrentThread();
  v9 = *((_BYTE *)this + 904);
  *((_QWORD *)this + 112) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 888, 0LL);
  KeLeaveCriticalRegion();
  if ( v9 )
  {
    v11 = WdLogNewEntry5_WdEvent(v10);
    LODWORD(v12) = -1073741130;
    *(_QWORD *)(v11 + 24) = this;
    *(_QWORD *)(v11 + 32) = -1073741130LL;
    WdLogEvent5_WdEvent(v11);
  }
  else
  {
    v13 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 156, 1u);
    v14 = (unsigned int)(v13 >> 31);
    LODWORD(v14) = v13 % 32;
    *((_DWORD *)this + 2 * v14 + 157) = 0x40000000;
    v24[0] = CTTMDEVICE::CloseCallback;
    *((_DWORD *)this + 2 * (unsigned int)(v13 % 32) + 158) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
    v15 = *((unsigned int *)this + 21);
    v24[2] = &CTTMDEVICE::SetDisplayStateCallback;
    v16 = TtmNotifyDeviceArrival(1LL, this, v24, v15, (char *)this + 608);
    v12 = v16;
    if ( v16 >= 0 )
    {
      v21 = (struct DXGSESSIONDATA **)*((_QWORD *)a2 + 2324);
      v22 = (CTTMDEVICE *)((char *)this + 16);
      if ( *v21 != (struct DXGSESSIONDATA *)((char *)a2 + 18584) )
        __fastfail(3u);
      *(_QWORD *)v22 = (char *)a2 + 18584;
      *((_QWORD *)this + 3) = v21;
      *v21 = v22;
      *((_QWORD *)a2 + 2324) = v22;
      *((_QWORD *)this + 4) = a2;
    }
    else
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17, v19);
      v20[3] = *((unsigned int *)this + 20);
      v20[4] = *((_QWORD *)this + 8);
      v20[5] = v12;
      WdLogEvent5_WdError(v20);
    }
  }
  return (unsigned int)v12;
}
