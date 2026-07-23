/*
 * XREFs of EtwpUpdateGroupMasks @ 0x1407270E8
 * Callers:
 *     EtwpUpdateLoggerGroupMasks @ 0x14072703C (EtwpUpdateLoggerGroupMasks.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408BAD0C (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     EtwpCheckSiloGroupMasks @ 0x140312868 (EtwpCheckSiloGroupMasks.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1406C6838 (EtwpUpdateGlobalGroupMasks.c)
 *     EtwpMapEnableFlags @ 0x1406CCE4C (EtwpMapEnableFlags.c)
 *     EtwpLogGroupMask @ 0x140727394 (EtwpLogGroupMask.c)
 *     EtwpKernelTraceRundown @ 0x140727414 (EtwpKernelTraceRundown.c)
 *     EtwpLogAlwaysPresentRundown @ 0x140727600 (EtwpLogAlwaysPresentRundown.c)
 *     EtwpCCSwapStart @ 0x140727F8C (EtwpCCSwapStart.c)
 *     EtwpCCSwapStop @ 0x14072804C (EtwpCCSwapStop.c)
 */

__int64 __fastcall EtwpUpdateGroupMasks(__int64 a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v4; // r15
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  _BYTE *v13; // r9
  __int64 v14; // rbp
  __int64 v15; // r8
  int *v16; // rdx
  _BYTE *v17; // r10
  __int64 v18; // r11
  int v19; // ecx
  int v20; // eax
  int v21; // r12d
  __int64 v22; // rax
  int updated; // ebp
  int v24; // r9d
  char v25; // al
  __int64 result; // rax
  int v27; // eax
  int v28; // eax
  unsigned int v29; // [rsp+30h] [rbp-88h]
  _BYTE v30[32]; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v31[32]; // [rsp+58h] [rbp-60h] BYREF

  v2 = *(_DWORD *)a1;
  v4 = *(_QWORD *)(a1 + 1080);
  EtwpMapEnableFlags(a2, 1);
  if ( a2 )
  {
    v6 = *(_DWORD *)(a2 + 4);
    if ( (v6 & 1) != 0 || (v6 & 0x10) != 0 )
      *(_DWORD *)a2 |= 0x200u;
  }
  if ( *(_QWORD *)(a1 + 1080) == EtwpHostSiloState || (result = EtwpCheckSiloGroupMasks((char *)a2), (int)result >= 0) )
  {
    if ( a2
      && (*(_DWORD *)(a2 + 4) & 0x402) != 0
      && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, KeGetCurrentThread()->PreviousMode) )
    {
      return 3221225569LL;
    }
    ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
    v7 = 256LL;
    v8 = 32LL * *(unsigned __int8 *)(a1 + 834);
    v29 = *(unsigned __int8 *)(a1 + 834);
    v9 = v8 + *(_QWORD *)(a1 + 1080) + 4260LL;
    if ( !v9
      || (v10 = *(_DWORD *)(v9 + 4), (v10 & 4) == 0)
      || (v10 & 0x100) == 0
      || a2 && (v27 = *(_DWORD *)(a2 + 4), (v27 & 4) != 0) && (v27 & 0x100) != 0 )
    {
      if ( a2 )
      {
        v11 = *(_DWORD *)(a2 + 4);
        if ( (v11 & 4) != 0 && (v11 & 0x100) != 0 )
        {
          if ( !v9 || (v28 = *(_DWORD *)(v9 + 4), (v28 & 4) == 0) || (v28 & 0x100) == 0 )
          {
            updated = EtwpCCSwapStart(*(unsigned int *)(a1 + 216), 256LL);
            if ( updated < 0 )
            {
LABEL_19:
              v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 704), 0xFFFFFFFFFFFFFFFFuLL);
              if ( (v25 & 2) != 0 && (v25 & 4) == 0 )
                ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704));
              KeAbPostRelease(a1 + 704);
              return (unsigned int)updated;
            }
          }
        }
      }
    }
    else
    {
      LOBYTE(v7) = 1;
      EtwpCCSwapStop(*(unsigned int *)(a1 + 216), v7);
    }
    v12 = *(_QWORD *)(a1 + 1080);
    v13 = &v30[-v8 - v12];
    v14 = v12 + v8;
    v15 = a2 - v8 - v12;
    v16 = (int *)(v12 + v8 + 4260);
    v17 = &v31[-v8 - v12];
    v18 = 8LL;
    do
    {
      v19 = *(int *)((char *)v16 + v15 - 4260);
      *(int *)((char *)v16 + (_QWORD)v13 - 4260) = *v16 & ~v19;
      v20 = *v16++;
      *(int *)((char *)v16 + (_QWORD)v17 - 4264) = v19 & ~v20;
      --v18;
    }
    while ( v18 );
    EtwpLogGroupMask(v4, v2, v14 + 4260, 32LL);
    v21 = *(_DWORD *)(a1 + 12) & 0x400;
    if ( !v21 )
      EtwpKernelTraceRundown((unsigned int)v30, v4, v2, 0, 0LL, 0);
    v22 = *(_QWORD *)(a1 + 1080);
    *(_OWORD *)(v22 + v8 + 4260) = *(_OWORD *)a2;
    *(_OWORD *)(v22 + v8 + 4276) = *(_OWORD *)(a2 + 16);
    updated = EtwpUpdateGlobalGroupMasks(v4, v2, v29);
    if ( updated >= 0 )
    {
      EtwpLogGroupMask(v4, v2, a2, 5LL);
      if ( !v21 || (*(_DWORD *)(a1 + 832) & 2) != 0 )
      {
        LOBYTE(v24) = 1;
        EtwpKernelTraceRundown((unsigned int)v31, v4, v2, v24, 0LL, 0);
      }
    }
    EtwpLogAlwaysPresentRundown(v4, v2);
    goto LABEL_19;
  }
  return result;
}
