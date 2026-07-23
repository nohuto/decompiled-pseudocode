/*
 * XREFs of EtwpGetLoggerInfoFromContext @ 0x14065BC90
 * Callers:
 *     EtwpStopTrace @ 0x14065A150 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x14065A360 (EtwpStartLogger.c)
 *     EtwpQueryTrace @ 0x14065AF40 (EtwpQueryTrace.c)
 *     EtwpFlushTrace @ 0x1406C3BE0 (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x140726D7C (EtwpUpdateTrace.c)
 *     EtwpIncrementTraceFile @ 0x1408B77D0 (EtwpIncrementTraceFile.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     RtlCopyUnicodeString @ 0x1400B97D0 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     EtwpMapEnableFlags @ 0x1406CCE4C (EtwpMapEnableFlags.c)
 */

__int64 __fastcall EtwpGetLoggerInfoFromContext(__int64 a1, int *a2)
{
  unsigned int v4; // ecx
  int v5; // ecx
  int v6; // eax
  __int64 v7; // rax
  char PreviousMode; // r12
  unsigned __int16 v9; // ax
  char v10; // al
  unsigned __int16 v11; // r14
  __int64 v13; // rcx
  __int64 v14; // rax
  _OWORD v15[2]; // [rsp+40h] [rbp-58h] BYREF

  if ( (a2[3] & 0x2000000) != 0 )
  {
    v13 = 32LL * *((unsigned __int8 *)a2 + 834);
    v14 = *((_QWORD *)a2 + 135);
    v15[0] = *(_OWORD *)(v13 + v14 + 4260);
    v15[1] = *(_OWORD *)(v13 + v14 + 4276);
    EtwpMapEnableFlags(v15, 0LL);
    *(_DWORD *)(a1 + 72) = v15[0];
  }
  else
  {
    *(_DWORD *)(a1 + 72) = 0;
  }
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 73);
  *(_DWORD *)(a1 + 64) = a2[3];
  *(_DWORD *)(a1 + 60) = a2[77];
  *(_DWORD *)(a1 + 68) = a2[56];
  *(_DWORD *)(a1 + 48) = (unsigned int)a2[1] >> 10;
  *(_DWORD *)(a1 + 96) = a2[62];
  *(_DWORD *)(a1 + 52) = a2[60];
  *(_DWORD *)(a1 + 56) = a2[63];
  *(_DWORD *)(a1 + 104) = a2[64];
  *(_DWORD *)(a1 + 100) = a2[61];
  v4 = a2[66];
  if ( v4 <= a2[68] )
    v4 = a2[68];
  *(_DWORD *)(a1 + 108) = v4;
  *(_QWORD *)(a1 + 80) = 0LL;
  v5 = ((unsigned int)a2[208] >> 4) & 1;
  *(_DWORD *)(a1 + 80) = v5;
  *(_DWORD *)(a1 + 80) = v5 | ((unsigned int)a2[208] >> 26) & 2;
  *(_DWORD *)(a1 + 112) = a2[67];
  *(_DWORD *)(a1 + 116) = a2[69];
  *(_DWORD *)(a1 + 160) = a2[90];
  *(_DWORD *)(a1 + 76) = a2[57];
  v6 = *a2;
  if ( !*a2 )
    LOWORD(v6) = -1;
  *(_WORD *)(a1 + 8) = v6;
  v7 = *((_QWORD *)a2 + 6);
  if ( v7 )
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(v7 + 1600);
  *(_DWORD *)(a1 + 40) = a2[54];
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(a2 + 176), 0LL);
  v9 = *((_WORD *)a2 + 84);
  if ( v9 && *(_WORD *)(a1 + 130) )
  {
    if ( PreviousMode )
      ProbeForWrite(*(volatile void **)(a1 + 136), v9 + 2LL, 2u);
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 128), (PCUNICODE_STRING)(a2 + 42));
  }
  v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 88, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)a2 + 88);
  KeAbPostRelease((ULONG_PTR)(a2 + 176));
  v11 = *((_WORD *)a2 + 76);
  if ( v11
    && *(_WORD *)(a1 + 146)
    && !RtlEqualUnicodeString((PCUNICODE_STRING)(a2 + 38), (PCUNICODE_STRING)(a1 + 144), 0) )
  {
    if ( PreviousMode )
      ProbeForWrite(*(volatile void **)(a1 + 152), v11 + 2LL, 2u);
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 144), (PCUNICODE_STRING)(a2 + 38));
  }
  return 0LL;
}
