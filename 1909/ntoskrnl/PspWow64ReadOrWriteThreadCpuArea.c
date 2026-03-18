/*
 * XREFs of PspWow64ReadOrWriteThreadCpuArea @ 0x1406C8D28
 * Callers:
 *     PspWow64SetContextThread @ 0x1406C8224 (PspWow64SetContextThread.c)
 *     PspWow64GetContextThread @ 0x1406C85B4 (PspWow64GetContextThread.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     PsGetThreadTeb @ 0x140121A70 (PsGetThreadTeb.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     RtlWow64GetCpuAreaInfo @ 0x1406C90A4 (RtlWow64GetCpuAreaInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspWow64ReadOrWriteThreadCpuArea(
        _KPROCESS *a1,
        __int64 a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        _DWORD *a7,
        bool *a8)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v11; // r14
  __int64 ThreadTeb; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  _OWORD *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rax
  _OWORD *v19; // rbx
  __int64 v20; // r8
  __int64 v21; // rax
  struct _KTHREAD *v22; // rbx
  struct _KTHREAD *v24; // rbx
  int CpuAreaInfo; // [rsp+24h] [rbp-D4h]
  volatile void *Address[6]; // [rsp+58h] [rbp-A0h] BYREF
  _BYTE v29[48]; // [rsp+88h] [rbp-70h] BYREF

  memset(v29, 0, sizeof(v29));
  memset(Address, 0, sizeof(Address));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = (signed __int64 *)(a2 + 1744);
  ExAcquirePushLockSharedEx(a2 + 1744, 0LL);
  ThreadTeb = PsGetThreadTeb(a2);
  if ( ThreadTeb )
  {
    KiStackAttachProcess(a1, 0, (__int64)v29);
    v14 = *(_QWORD *)(ThreadTeb + 5256);
    if ( v14 )
    {
      CpuAreaInfo = RtlWow64GetCpuAreaInfo(v14, v13, Address);
      if ( CpuAreaInfo >= 0 )
      {
        if ( a3 )
        {
          v15 = Address[0];
          if ( ((__int64)Address[0] & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)Address[0] + 716 > 0x7FFFFFFF0000LL || (char *)Address[0] + 716 < Address[0] )
            MEMORY[0x7FFFFFFF0000] = 0;
          v16 = 5LL;
          do
          {
            *(_OWORD *)a4 = *v15;
            *(_OWORD *)(a4 + 16) = v15[1];
            *(_OWORD *)(a4 + 32) = v15[2];
            *(_OWORD *)(a4 + 48) = v15[3];
            *(_OWORD *)(a4 + 64) = v15[4];
            *(_OWORD *)(a4 + 80) = v15[5];
            *(_OWORD *)(a4 + 96) = v15[6];
            a4 += 128LL;
            *(_OWORD *)(a4 - 16) = v15[7];
            v15 += 8;
            --v16;
          }
          while ( v16 );
          *(_OWORD *)a4 = *v15;
          *(_OWORD *)(a4 + 16) = v15[1];
          *(_OWORD *)(a4 + 32) = v15[2];
          *(_OWORD *)(a4 + 48) = v15[3];
          *(_QWORD *)(a4 + 64) = *((_QWORD *)v15 + 8);
          *(_DWORD *)(a4 + 72) = *((_DWORD *)v15 + 18);
          if ( a7 )
          {
            v18 = (__int64)Address[3];
            if ( Address[3] >= (volatile void *)0x7FFFFFFF0000LL )
              v18 = 0x7FFFFFFF0000LL;
            *a7 = *(_DWORD *)v18;
          }
        }
        else
        {
          v19 = Address[0];
          ProbeForWrite(Address[0], 0x2CCuLL, 4u);
          v20 = 5LL;
          do
          {
            *v19 = *(_OWORD *)a4;
            v19[1] = *(_OWORD *)(a4 + 16);
            v19[2] = *(_OWORD *)(a4 + 32);
            v19[3] = *(_OWORD *)(a4 + 48);
            v19[4] = *(_OWORD *)(a4 + 64);
            v19[5] = *(_OWORD *)(a4 + 80);
            v19[6] = *(_OWORD *)(a4 + 96);
            v19 += 8;
            *(v19 - 1) = *(_OWORD *)(a4 + 112);
            a4 += 128LL;
            --v20;
          }
          while ( v20 );
          *v19 = *(_OWORD *)a4;
          v19[1] = *(_OWORD *)(a4 + 16);
          v19[2] = *(_OWORD *)(a4 + 32);
          v19[3] = *(_OWORD *)(a4 + 48);
          *((_QWORD *)v19 + 8) = *(_QWORD *)(a4 + 64);
          *((_DWORD *)v19 + 18) = *(_DWORD *)(a4 + 72);
          if ( a7 )
          {
            v21 = (__int64)Address[3];
            if ( Address[3] >= (volatile void *)0x7FFFFFFF0000LL )
              v21 = 0x7FFFFFFF0000LL;
            *(_DWORD *)v21 = *a7;
          }
        }
        if ( a8 )
        {
          v17 = *(_QWORD *)(ThreadTeb + 5328);
          if ( v17 )
          {
            if ( (v17 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)(v17 + 8) > 0x7FFFFFFF0000LL || v17 + 8 < (unsigned __int64)(v17 + 4) )
              MEMORY[0x7FFFFFFF0000] = 0;
            *a8 = (*(_DWORD *)(v17 + 4) & 2) != 0;
          }
          else
          {
            *a8 = 0;
          }
        }
      }
    }
    else
    {
      CpuAreaInfo = -1073741811;
    }
    KiUnstackDetachProcess((struct _KTHREAD *)v29, 0);
    v22 = KeGetCurrentThread();
    if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v11);
    KeAbPostRelease((ULONG_PTR)v11);
    KeLeaveCriticalRegionThread((__int64)v22);
    return (unsigned int)CpuAreaInfo;
  }
  else
  {
    v24 = KeGetCurrentThread();
    if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v11);
    KeAbPostRelease((ULONG_PTR)v11);
    KeLeaveCriticalRegionThread((__int64)v24);
    return 3221225547LL;
  }
}
