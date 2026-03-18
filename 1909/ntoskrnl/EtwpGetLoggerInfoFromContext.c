/*
 * XREFs of EtwpGetLoggerInfoFromContext @ 0x1406A9788
 * Callers:
 *     EtwpStopTrace @ 0x1406A8734 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1406A8918 (EtwpStartLogger.c)
 *     EtwpQueryTrace @ 0x1406A9564 (EtwpQueryTrace.c)
 *     EtwpFlushTrace @ 0x1406CAD04 (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x140781CD0 (EtwpUpdateTrace.c)
 *     EtwpIncrementTraceFile @ 0x1408F27C8 (EtwpIncrementTraceFile.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     RtlCopyUnicodeString @ 0x140043EC0 (RtlCopyUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     RtlEqualUnicodeString @ 0x140666E20 (RtlEqualUnicodeString.c)
 *     EtwpMapEnableFlags @ 0x1406EC69C (EtwpMapEnableFlags.c)
 */

__int64 __fastcall EtwpGetLoggerInfoFromContext(__int64 a1, __int64 a2)
{
  unsigned int v4; // ecx
  int v5; // ecx
  __int16 v6; // ax
  __int64 v7; // rax
  char PreviousMode; // r12
  unsigned __int16 v9; // ax
  char v10; // cl
  unsigned __int16 v11; // r14
  __int64 v13; // rcx
  __int64 v14; // rax
  _OWORD v15[2]; // [rsp+40h] [rbp-58h] BYREF

  if ( (*(_DWORD *)(a2 + 12) & 0x2000000) != 0 )
  {
    v13 = 32LL * *(unsigned __int8 *)(a2 + 834);
    v14 = *(_QWORD *)(a2 + 1080);
    v15[0] = *(_OWORD *)(v13 + v14 + 4260);
    v15[1] = *(_OWORD *)(v13 + v14 + 4276);
    EtwpMapEnableFlags(v15, 0LL);
    *(_DWORD *)(a1 + 72) = v15[0];
  }
  else
  {
    *(_DWORD *)(a1 + 72) = 0;
  }
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 292);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 308);
  *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 224);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 4) >> 10;
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 248);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 240);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 252);
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 256);
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 244);
  v4 = *(_DWORD *)(a2 + 264);
  if ( v4 <= *(_DWORD *)(a2 + 272) )
    v4 = *(_DWORD *)(a2 + 272);
  *(_DWORD *)(a1 + 108) = v4;
  *(_QWORD *)(a1 + 80) = 0LL;
  v5 = (*(_DWORD *)(a2 + 832) >> 4) & 1;
  *(_DWORD *)(a1 + 80) = v5;
  *(_DWORD *)(a1 + 80) = v5 | (*(_DWORD *)(a2 + 832) >> 26) & 2;
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 268);
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 276);
  *(_DWORD *)(a1 + 160) = *(_DWORD *)(a2 + 360);
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 228);
  if ( *(_DWORD *)a2 )
    v6 = *(_WORD *)a2;
  else
    v6 = -1;
  *(_WORD *)(a1 + 8) = v6;
  v7 = *(_QWORD *)(a2 + 48);
  if ( v7 )
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(v7 + 1616);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 216);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  ExAcquirePushLockExclusiveEx(a2 + 704, 0LL);
  v9 = *(_WORD *)(a2 + 168);
  if ( v9 && *(_WORD *)(a1 + 130) )
  {
    if ( PreviousMode )
      ProbeForWrite(*(volatile void **)(a1 + 136), v9 + 2LL, 2u);
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 128), (PCUNICODE_STRING)(a2 + 168));
  }
  v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 704), 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 704));
  KeAbPostRelease(a2 + 704);
  v11 = *(_WORD *)(a2 + 152);
  if ( v11
    && *(_WORD *)(a1 + 146)
    && !RtlEqualUnicodeString((PCUNICODE_STRING)(a2 + 152), (PCUNICODE_STRING)(a1 + 144), 0) )
  {
    if ( PreviousMode )
      ProbeForWrite(*(volatile void **)(a1 + 152), v11 + 2LL, 2u);
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 144), (PCUNICODE_STRING)(a2 + 152));
  }
  return 0LL;
}
