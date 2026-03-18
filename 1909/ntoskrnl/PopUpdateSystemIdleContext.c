/*
 * XREFs of PopUpdateSystemIdleContext @ 0x1408B2DA4
 * Callers:
 *     PopInitSIdle @ 0x140747214 (PopInitSIdle.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopFilterCapabilities @ 0x14066EEE8 (PopFilterCapabilities.c)
 *     PopIsDozeSupported @ 0x14067092C (PopIsDozeSupported.c)
 *     PopPulseSystemIdleEvent @ 0x140749AA8 (PopPulseSystemIdleEvent.c)
 *     PopDiagTraceSystemIdleContextUpdate @ 0x1408B09FC (PopDiagTraceSystemIdleContextUpdate.c)
 */

void __fastcall PopUpdateSystemIdleContext(int a1)
{
  int v2; // edi
  int v3; // esi
  unsigned __int64 v4; // rbp
  unsigned int v5; // r11d
  int v6; // r9d
  int v7; // r10d
  _BYTE v8[80]; // [rsp+30h] [rbp-58h] BYREF

  memset(v8, 0, 0x4CuLL);
  if ( !PopPlatformAoAc )
    KeBugCheckEx(0xA0u, 0xAuLL, 0x101uLL, 0LL, 0LL);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
  v2 = PopSystemIdleContext;
  v3 = dword_140428214;
  v4 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  PopFilterCapabilities((__int64)&PopCapabilities, (__int64)v8);
  v5 = 3;
  if ( (((PopFullWake & 3) == 0) & !_bittest(&PopSimulate, 0x18u)) == 0 )
  {
    v6 = *((_DWORD *)PopPolicy + 15);
    if ( v6 )
    {
      v7 = 1;
      goto LABEL_12;
    }
    if ( *((_DWORD *)PopPolicy + 22) && PopIsDozeSupported((__int64)v8) )
    {
      v7 = v5;
      goto LABEL_12;
    }
LABEL_11:
    v6 = 0;
    v7 = 5;
    goto LABEL_12;
  }
  v6 = dword_140443A40;
  if ( !dword_140443A40 )
    goto LABEL_11;
  v7 = 4;
LABEL_12:
  if ( a1 == 1 || a1 == 4 )
    PopPulseSystemIdleEvent(v5);
  dword_140428214 = v6;
  PopSystemIdleContext = v7;
  qword_140428340 = v4;
  dword_140428348 = a1;
  dword_14042834C = v2;
  dword_140428350 = v3;
  PopDiagTraceSystemIdleContextUpdate(a1, v2, v3, v7, v6);
  PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
}
