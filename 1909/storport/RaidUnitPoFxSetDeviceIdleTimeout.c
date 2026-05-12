/*
 * XREFs of RaidUnitPoFxSetDeviceIdleTimeout @ 0x1C0006A0C
 * Callers:
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C0006938 (RaidUnitAdaptiveIdleTimeout.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C006EDD0 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     McTemplateK0quuuqqtt @ 0x1C00403DC (McTemplateK0quuuqqtt.c)
 */

void __fastcall RaidUnitPoFxSetDeviceIdleTimeout(__int64 a1, unsigned int a2)
{
  _DWORD *v4; // rdx
  __int64 v5; // rsi
  int v6; // r9d
  __int64 v7; // rcx

  v4 = *(_DWORD **)(a1 + 1744);
  if ( a2 == -1 )
  {
    v5 = -1LL;
  }
  else
  {
    if ( a2 < v4[6] )
      a2 = v4[6];
    v5 = 10000LL * a2;
  }
  v6 = v4[7];
  if ( a2 != v6 )
  {
    v7 = *(_QWORD *)(a1 + 1744);
    if ( StorEtwLoggingEnabled )
    {
      if ( (byte_1C0062741 & 1) != 0 )
      {
        McTemplateK0quuuqqtt(
          (v4[8] >> 9) & 1,
          (_DWORD)v4,
          *(_QWORD *)(a1 + 24),
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_BYTE *)(a1 + 96),
          *(_BYTE *)(a1 + 97),
          *(_BYTE *)(a1 + 98),
          v6,
          a2,
          (v4[8] & 0x200) != 0,
          (v4[8] & 0x400) != 0);
        v7 = *(_QWORD *)(a1 + 1744);
      }
    }
    *(_DWORD *)(v7 + 28) = a2;
    PoFxSetDeviceIdleTimeout(**(_QWORD **)(a1 + 1744), v5);
  }
}
