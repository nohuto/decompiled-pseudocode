/*
 * XREFs of PspWow64ReadOrWriteThreadCpuArea @ 0x1406AA014
 * Callers:
 *     PspWow64GetContextThread @ 0x1406A9558 (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x1406A9C5C (PspWow64SetContextThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     PsGetThreadTeb @ 0x140123BB0 (PsGetThreadTeb.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     RtlWow64GetCpuAreaInfo @ 0x1406AA364 (RtlWow64GetCpuAreaInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspWow64ReadOrWriteThreadCpuArea(
        _KPROCESS *BugCheckParameter1,
        __int64 a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        _DWORD *a7,
        bool *a8)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v12; // r14
  __int64 ThreadTeb; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _OWORD *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rax
  _OWORD *v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rax
  struct _KTHREAD *v23; // rbx
  struct _KTHREAD *v25; // rbx
  int CpuAreaInfo; // [rsp+24h] [rbp-C4h]
  __int64 v28; // [rsp+28h] [rbp-C0h]
  volatile void *Address; // [rsp+48h] [rbp-A0h] BYREF
  unsigned __int64 v30; // [rsp+60h] [rbp-88h]
  _BYTE v31[48]; // [rsp+70h] [rbp-78h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = (signed __int64 *)(a2 + 1728);
  ExAcquirePushLockSharedEx(a2 + 1728, 0LL);
  ThreadTeb = PsGetThreadTeb(a2);
  v28 = ThreadTeb;
  if ( ThreadTeb )
  {
    KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)v31);
    v15 = *(_QWORD *)(ThreadTeb + 5256);
    if ( v15 )
    {
      CpuAreaInfo = RtlWow64GetCpuAreaInfo(v15, v14, &Address);
      if ( CpuAreaInfo >= 0 )
      {
        if ( a3 )
        {
          v16 = Address;
          if ( ((unsigned __int8)Address & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)Address + 716 > 0x7FFFFFFF0000LL || (char *)Address + 716 < Address )
            MEMORY[0x7FFFFFFF0000] = 0;
          v17 = 5LL;
          do
          {
            *(_OWORD *)a4 = *v16;
            *(_OWORD *)(a4 + 16) = v16[1];
            *(_OWORD *)(a4 + 32) = v16[2];
            *(_OWORD *)(a4 + 48) = v16[3];
            *(_OWORD *)(a4 + 64) = v16[4];
            *(_OWORD *)(a4 + 80) = v16[5];
            *(_OWORD *)(a4 + 96) = v16[6];
            a4 += 128LL;
            *(_OWORD *)(a4 - 16) = v16[7];
            v16 += 8;
            --v17;
          }
          while ( v17 );
          *(_OWORD *)a4 = *v16;
          *(_OWORD *)(a4 + 16) = v16[1];
          *(_OWORD *)(a4 + 32) = v16[2];
          *(_OWORD *)(a4 + 48) = v16[3];
          *(_QWORD *)(a4 + 64) = *((_QWORD *)v16 + 8);
          *(_DWORD *)(a4 + 72) = *((_DWORD *)v16 + 18);
          if ( a7 )
          {
            v19 = v30;
            if ( v30 >= 0x7FFFFFFF0000LL )
              v19 = 0x7FFFFFFF0000LL;
            *a7 = *(_DWORD *)v19;
          }
        }
        else
        {
          v20 = Address;
          ProbeForWrite(Address, 0x2CCuLL, 4u);
          v21 = 5LL;
          do
          {
            *v20 = *(_OWORD *)a4;
            v20[1] = *(_OWORD *)(a4 + 16);
            v20[2] = *(_OWORD *)(a4 + 32);
            v20[3] = *(_OWORD *)(a4 + 48);
            v20[4] = *(_OWORD *)(a4 + 64);
            v20[5] = *(_OWORD *)(a4 + 80);
            v20[6] = *(_OWORD *)(a4 + 96);
            v20 += 8;
            *(v20 - 1) = *(_OWORD *)(a4 + 112);
            a4 += 128LL;
            --v21;
          }
          while ( v21 );
          *v20 = *(_OWORD *)a4;
          v20[1] = *(_OWORD *)(a4 + 16);
          v20[2] = *(_OWORD *)(a4 + 32);
          v20[3] = *(_OWORD *)(a4 + 48);
          *((_QWORD *)v20 + 8) = *(_QWORD *)(a4 + 64);
          *((_DWORD *)v20 + 18) = *(_DWORD *)(a4 + 72);
          ThreadTeb = v28;
          if ( a7 )
          {
            v22 = v30;
            if ( v30 >= 0x7FFFFFFF0000LL )
              v22 = 0x7FFFFFFF0000LL;
            *(_DWORD *)v22 = *a7;
          }
        }
        if ( a8 )
        {
          v18 = *(_QWORD *)(ThreadTeb + 5328);
          if ( v18 )
          {
            if ( (v18 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( (unsigned __int64)(v18 + 8) > 0x7FFFFFFF0000LL || v18 + 8 < (unsigned __int64)(v18 + 4) )
              MEMORY[0x7FFFFFFF0000] = 0;
            *a8 = (*(_DWORD *)(v18 + 4) & 2) != 0;
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
    KiUnstackDetachProcess((__int64)v31, 0LL);
    v23 = KeGetCurrentThread();
    if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    KeLeaveCriticalRegionThread((__int64)v23);
    return (unsigned int)CpuAreaInfo;
  }
  else
  {
    v25 = KeGetCurrentThread();
    if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    KeLeaveCriticalRegionThread((__int64)v25);
    return 3221225547LL;
  }
}
