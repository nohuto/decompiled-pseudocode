/*
 * XREFs of WriteGenAddr @ 0x1C0002208
 * Callers:
 *     WriteGenAddrMaybeHidden @ 0x1C0002348 (WriteGenAddrMaybeHidden.c)
 *     WriteGenAddrHidden @ 0x1C0002478 (WriteGenAddrHidden.c)
 *     SetPerfStateIO @ 0x1C0009160 (SetPerfStateIO.c)
 *     PerfControlCpc @ 0x1C0009970 (PerfControlCpc.c)
 *     CpcReinitializeHandler @ 0x1C000A190 (CpcReinitializeHandler.c)
 *     CpcSetAutonomousActivityWindow @ 0x1C000A2E0 (CpcSetAutonomousActivityWindow.c)
 *     CpcSetAutonomousMode @ 0x1C000A350 (CpcSetAutonomousMode.c)
 *     CpcSetTimeWindow @ 0x1C000A3A0 (CpcSetTimeWindow.c)
 *     C2Idle @ 0x1C000A920 (C2Idle.c)
 *     C3IdleCheck @ 0x1C000A9E0 (C3IdleCheck.c)
 *     C3Idle @ 0x1C000AA60 (C3Idle.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C0001F88 (ReadIoMemRaw.c)
 *     WriteIoMemRaw @ 0x1C000209C (WriteIoMemRaw.c)
 */

char __fastcall WriteGenAddr(_BYTE *a1, unsigned __int64 a2)
{
  char v4; // al
  unsigned __int64 IoMemRaw; // rax
  unsigned __int8 v6; // cl

  if ( !a1[2] )
  {
    v4 = a1[1];
    if ( *a1 == 10 )
    {
      if ( v4 == 64 )
        return WriteIoMemRaw((__int64)a1, a2);
    }
    else if ( v4 == a1[3] )
    {
      return WriteIoMemRaw((__int64)a1, a2);
    }
  }
  IoMemRaw = ReadIoMemRaw((__int64)a1);
  v6 = a1[1];
  if ( v6 < 0x40u || a1[2] )
    a2 = IoMemRaw & ~(((1LL << v6) - 1) << a1[2]) | (((1LL << v6) - 1) << a1[2]) & (a2 << a1[2]);
  return WriteIoMemRaw((__int64)a1, a2);
}
