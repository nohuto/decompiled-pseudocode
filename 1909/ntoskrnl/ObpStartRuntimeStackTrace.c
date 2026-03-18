/*
 * XREFs of ObpStartRuntimeStackTrace @ 0x14089FA98
 * Callers:
 *     ObSetRefTraceInformation @ 0x14089EDA8 (ObSetRefTraceInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObpInitStackAndObjectTables @ 0x14089F44C (ObpInitStackAndObjectTables.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
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
  unsigned __int16 v10; // bx
  PVOID PoolWithTag; // r15
  unsigned __int64 v12; // rdx
  struct _KTHREAD *CurrentThread; // rax
  wchar_t *Buffer; // rsi
  char v15; // bl
  wchar_t *v16; // rcx
  char v17; // bl
  char v18; // [rsp+20h] [rbp-C8h]
  _BYTE v19[20]; // [rsp+24h] [rbp-C4h]
  __int128 v20; // [rsp+48h] [rbp-A0h]
  void *Src[2]; // [rsp+58h] [rbp-90h]
  _OWORD v22[4]; // [rsp+70h] [rbp-78h] BYREF

  memset(v22, 0, sizeof(v22));
  inited = 0;
  *(_DWORD *)&v19[8] = 0;
  *(_QWORD *)&v19[12] = 0LL;
  v3 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v18 = PreviousMode;
  v20 = *(_OWORD *)(a1 + 24);
  *(_OWORD *)Src = *(_OWORD *)(a1 + 8);
  v5 = *(unsigned __int8 *)(a1 + 1);
  *(_QWORD *)v19 = *(unsigned __int8 *)(a1 + 1);
  if ( (_WORD)v20 )
  {
    if ( (v20 & 1) != 0 || ((((unsigned __int64)(unsigned __int16)v20 >> 1) % 5) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
      return 3221225485LL;
    v6 = ((unsigned __int64)(unsigned __int16)v20 + 2) / 0xA;
    if ( (unsigned int)v6 > 0x10 )
      LODWORD(v6) = 16;
    if ( PreviousMode )
    {
      if ( (BYTE8(v20) & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)(unsigned __int16)v20 + *((_QWORD *)&v20 + 1) > 0x7FFFFFFF0000LL
        || (unsigned __int64)(unsigned __int16)v20 + *((_QWORD *)&v20 + 1) < *((_QWORD *)&v20 + 1) )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    for ( i = 0; i < (unsigned int)v6; ++i )
    {
      for ( j = 0; j < 4; ++j )
        *((_DWORD *)v22 + i) = (*((_DWORD *)v22 + i) << 8) | *(unsigned __int16 *)(*((_QWORD *)&v20 + 1)
                                                                                 + 2LL * (5 * i - j + 3));
    }
    v3 = 16;
    v5 = *(_DWORD *)v19;
  }
  if ( LOWORD(Src[0]) )
  {
    if ( ((__int64)Src[0] & 1) != 0 )
      return 3221225485LL;
    if ( LOWORD(Src[0]) >= 0x80u )
      v10 = 126;
    else
      v10 = (unsigned __int16)Src[0];
    *(_WORD *)&v19[4] = v10;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10 + 2LL, 0x7452624Fu);
    *(_QWORD *)&v19[12] = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225495LL;
    *(_WORD *)&v19[6] = v10 + 2;
    if ( v18 )
    {
      if ( ((__int64)Src[1] & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = (unsigned __int64)Src[1] + LOWORD(Src[0]);
      if ( v12 > 0x7FFFFFFF0000LL || (void *)v12 < Src[1] )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(PoolWithTag, Src[1], v10);
    *((_WORD *)PoolWithTag + ((unsigned __int64)v10 >> 1)) = 0;
    v3 |= 0x20u;
    inited = 0;
    v5 = *(_DWORD *)v19;
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
    v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    v16 = *(wchar_t **)&v19[12];
    if ( !*(_QWORD *)&v19[12] )
      return inited;
  }
  else
  {
    Buffer = ObpRuntimeTraceProcessName.Buffer;
    ObpRuntimeTraceProcessName = *(UNICODE_STRING *)&v19[4];
    ObpRuntimeTracePoolTags = v22[0];
    xmmword_140445B30 = v22[1];
    xmmword_140445B40 = v22[2];
    xmmword_140445B50 = v22[3];
    ObpTraceFlags = v3 | ObpTraceFlags & 0xFFFFFF8E | 2;
    ObpRuntimeTraceFlags = ObpTraceFlags;
    ObpTracePoolTags = (unsigned __int64)&ObpRuntimeTracePoolTags & -(__int64)((ObpTraceFlags & 0x10) != 0);
    ObpTraceProcessName = (PCUNICODE_STRING)((unsigned __int64)&ObpRuntimeTraceProcessName & -(__int64)((ObpTraceFlags & 0x20) != 0));
    v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v15 & 2) != 0 && (v15 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( !Buffer )
      return inited;
    v16 = Buffer;
  }
  ExFreePoolWithTag(v16, 0x7452624Fu);
  return inited;
}
