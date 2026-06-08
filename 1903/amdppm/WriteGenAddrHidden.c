/*
 * XREFs of WriteGenAddrHidden @ 0x1C0002478
 * Callers:
 *     WriteGenAddrMaybeHidden @ 0x1C0002348 (WriteGenAddrMaybeHidden.c)
 *     SetPerfStateIOHidden @ 0x1C0009210 (SetPerfStateIOHidden.c)
 *     PerfControlCpcHidden @ 0x1C0009CF0 (PerfControlCpcHidden.c)
 *     CpcReinitializeHandler @ 0x1C000A190 (CpcReinitializeHandler.c)
 *     CpcSetAutonomousActivityWindow @ 0x1C000A2E0 (CpcSetAutonomousActivityWindow.c)
 *     CpcSetAutonomousMode @ 0x1C000A350 (CpcSetAutonomousMode.c)
 *     CpcSetTimeWindow @ 0x1C000A3A0 (CpcSetTimeWindow.c)
 * Callees:
 *     WriteGenAddr @ 0x1C0002208 (WriteGenAddr.c)
 *     WriteIoMemRawHidden @ 0x1C0002288 (WriteIoMemRawHidden.c)
 */

char __fastcall WriteGenAddrHidden(unsigned int a1, _BYTE *a2, unsigned __int64 a3)
{
  char v5; // r9
  __int64 v6; // rdx
  unsigned __int8 v7; // bl
  __int64 v8; // r11
  char v9; // cl
  __int64 v10; // rdx

  if ( !*a2 || *a2 == 10 )
    return WriteGenAddr(a2, a3);
  v5 = a2[2];
  if ( v5 || a2[1] != a2[3] )
  {
    v7 = a2[1];
    v8 = ((1LL << v7) - 1) << v5;
    v9 = a2[3];
    if ( v9 == 64 )
      v10 = -1LL;
    else
      v10 = (1LL << v9) - 1;
    v6 = ~v8 & v10;
    if ( v7 < 0x40u || v5 )
      a3 = v8 & (a3 << v5);
  }
  else
  {
    v6 = 0LL;
  }
  return WriteIoMemRawHidden(a1, (__int64)a2, v6, a3);
}
