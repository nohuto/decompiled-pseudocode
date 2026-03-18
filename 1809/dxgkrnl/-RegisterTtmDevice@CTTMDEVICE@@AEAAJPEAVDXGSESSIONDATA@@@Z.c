/*
 * XREFs of ?RegisterTtmDevice@CTTMDEVICE@@AEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C0241B90
 * Callers:
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C0138F24 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     ?CreateTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x1C013B6B0 (-CreateTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall CTTMDEVICE::RegisterTtmDevice(CTTMDEVICE *this, struct DXGSESSIONDATA *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  char v7; // bl
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  struct DXGSESSIONDATA **v18; // rdx
  struct DXGSESSIONDATA *v19; // rax
  _QWORD v21[5]; // [rsp+30h] [rbp-28h] BYREF

  memset(v21, 0, 0x20uLL);
  if ( *(struct _KTHREAD **)(*((_QWORD *)DXGGLOBAL::GetGlobal(v4) + 77) + 160LL) != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v6 + 24) = 4389LL;
    WdLogEvent5_WdAssertion(v6);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 888, 0LL);
  *((_QWORD *)this + 112) = KeGetCurrentThread();
  v7 = *((_BYTE *)this + 904);
  *((_QWORD *)this + 112) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 888, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 )
  {
    v10 = WdLogNewEntry5_WdEvent(v9, v8);
    LODWORD(v11) = -1073741130;
    *(_QWORD *)(v10 + 24) = this;
    *(_QWORD *)(v10 + 32) = -1073741130LL;
    WdLogEvent5_WdEvent(v10);
  }
  else
  {
    v12 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 156, 1u);
    v13 = (unsigned int)(v12 >> 31);
    LODWORD(v13) = v12 % 32;
    *((_DWORD *)this + 2 * v13 + 157) = 0x40000000;
    v21[0] = CTTMDEVICE::CloseCallback;
    *((_DWORD *)this + 2 * (unsigned int)(v12 % 32) + 158) = MEMORY[0xFFFFF78000000008] / 0x2710uLL;
    v14 = *((unsigned int *)this + 21);
    v21[2] = &CTTMDEVICE::SetDisplayStateCallback;
    v15 = TtmNotifyDeviceArrival(1LL, this, v21, v14, (char *)this + 608);
    v11 = v15;
    if ( v15 >= 0 )
    {
      v18 = (struct DXGSESSIONDATA **)*((_QWORD *)a2 + 2324);
      v19 = (CTTMDEVICE *)((char *)this + 16);
      if ( *v18 != (struct DXGSESSIONDATA *)((char *)a2 + 18584) )
        __fastfail(3u);
      *(_QWORD *)v19 = (char *)a2 + 18584;
      *((_QWORD *)this + 3) = v18;
      *v18 = v19;
      *((_QWORD *)a2 + 2324) = v19;
      *((_QWORD *)this + 4) = a2;
    }
    else
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v16);
      v17[3] = *((unsigned int *)this + 20);
      v17[4] = *((_QWORD *)this + 8);
      v17[5] = v11;
      WdLogEvent5_WdError(v17);
    }
  }
  return (unsigned int)v11;
}
