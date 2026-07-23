/*
 * XREFs of ObpStartRuntimeStackTrace @ 0x140864A58
 * Callers:
 *     ObSetRefTraceInformation @ 0x140863D70 (ObSetRefTraceInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObpInitStackAndObjectTables @ 0x140864414 (ObpInitStackAndObjectTables.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ObpStartRuntimeStackTrace(__int64 a1)
{
  unsigned int inited; // r14d
  int v3; // edi
  char PreviousMode; // r9
  int v5; // r10d
  unsigned __int64 v6; // r11
  unsigned int i; // r9d
  unsigned int j; // r10d
  unsigned __int16 v9; // bx
  PVOID PoolWithTag; // r15
  unsigned __int64 v12; // rdx
  struct _KTHREAD *CurrentThread; // rax
  wchar_t *Buffer; // rsi
  wchar_t *v15; // rcx
  char v16; // [rsp+20h] [rbp-C8h]
  _BYTE v17[20]; // [rsp+24h] [rbp-C4h]
  __int128 v18; // [rsp+48h] [rbp-A0h]
  void *Src[2]; // [rsp+58h] [rbp-90h]
  _OWORD v20[4]; // [rsp+70h] [rbp-78h] BYREF

  memset(v20, 0, sizeof(v20));
  inited = 0;
  *(_DWORD *)&v17[8] = 0;
  *(_QWORD *)&v17[12] = 0LL;
  v3 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v16 = PreviousMode;
  v18 = *(_OWORD *)(a1 + 24);
  *(_OWORD *)Src = *(_OWORD *)(a1 + 8);
  v5 = *(unsigned __int8 *)(a1 + 1);
  *(_QWORD *)v17 = *(unsigned __int8 *)(a1 + 1);
  if ( (_WORD)v18 )
  {
    if ( (v18 & 1) != 0 || ((((unsigned __int64)(unsigned __int16)v18 >> 1) % 5) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
      return 3221225485LL;
    v6 = ((unsigned __int64)(unsigned __int16)v18 + 2) / 0xA;
    if ( (unsigned int)v6 > 0x10 )
      LODWORD(v6) = 16;
    if ( PreviousMode )
    {
      if ( (BYTE8(v18) & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)(unsigned __int16)v18 + *((_QWORD *)&v18 + 1) > 0x7FFFFFFF0000LL
        || (unsigned __int64)(unsigned __int16)v18 + *((_QWORD *)&v18 + 1) < *((_QWORD *)&v18 + 1) )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    for ( i = 0; i < (unsigned int)v6; ++i )
    {
      for ( j = 0; j < 4; ++j )
        *((_DWORD *)v20 + i) = (*((_DWORD *)v20 + i) << 8) | *(unsigned __int16 *)(*((_QWORD *)&v18 + 1)
                                                                                 + 2LL * (5 * i - j + 3));
    }
    v3 = 16;
    v5 = *(_DWORD *)v17;
  }
  if ( LOWORD(Src[0]) )
  {
    if ( ((__int64)Src[0] & 1) != 0 )
      return 3221225485LL;
    if ( LOWORD(Src[0]) >= 0x80u )
      v9 = 126;
    else
      v9 = (unsigned __int16)Src[0];
    *(_WORD *)&v17[4] = v9;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v9 + 2LL, 0x7452624Fu);
    *(_QWORD *)&v17[12] = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225495LL;
    *(_WORD *)&v17[6] = v9 + 2;
    if ( v16 )
    {
      if ( ((__int64)Src[1] & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = (unsigned __int64)Src[1] + LOWORD(Src[0]);
      if ( v12 > 0x7FFFFFFF0000LL || (void *)v12 < Src[1] )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(PoolWithTag, Src[1], v9);
    *((_WORD *)PoolWithTag + ((unsigned __int64)v9 >> 1)) = 0;
    v3 |= 0x20u;
    inited = 0;
    v5 = *(_DWORD *)v17;
  }
  if ( !v3 )
    return 3221225485LL;
  if ( v5 )
    v3 |= 0x40u;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
  if ( (ObpTraceFlags & 0x73) == 0 )
    inited = ObpInitStackAndObjectTables();
  if ( (inited & 0x80000000) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    v15 = *(wchar_t **)&v17[12];
    if ( !*(_QWORD *)&v17[12] )
      return inited;
  }
  else
  {
    Buffer = ObpRuntimeTraceProcessName.Buffer;
    ObpRuntimeTraceProcessName = *(UNICODE_STRING *)&v17[4];
    ObpRuntimeTracePoolTags = v20[0];
    xmmword_14041B210 = v20[1];
    xmmword_14041B220 = v20[2];
    xmmword_14041B230 = v20[3];
    ObpTraceFlags = v3 | ObpTraceFlags & 0xFFFFFF8E | 2;
    ObpRuntimeTraceFlags = ObpTraceFlags;
    ObpTracePoolTags = (unsigned __int64)&ObpRuntimeTracePoolTags & -(__int64)((ObpTraceFlags & 0x10) != 0);
    ObpTraceProcessName = (PCUNICODE_STRING)((unsigned __int64)&ObpRuntimeTraceProcessName & -(__int64)((ObpTraceFlags & 0x20) != 0));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( !Buffer )
      return inited;
    v15 = Buffer;
  }
  ExFreePoolWithTag(v15, 0x7452624Fu);
  return inited;
}
