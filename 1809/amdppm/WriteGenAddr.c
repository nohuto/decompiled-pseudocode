/*
 * XREFs of WriteGenAddr @ 0x1C00038E8
 * Callers:
 *     SetPerfStateIO @ 0x1C0002E90 (SetPerfStateIO.c)
 *     WriteGenAddrMaybeHidden @ 0x1C0003A28 (WriteGenAddrMaybeHidden.c)
 *     WriteGenAddrHidden @ 0x1C0003B58 (WriteGenAddrHidden.c)
 *     PerfControlCpc @ 0x1C0003ED0 (PerfControlCpc.c)
 *     CpcReinitializeHandler @ 0x1C00046F0 (CpcReinitializeHandler.c)
 *     CpcSetAutonomousActivityWindow @ 0x1C0004840 (CpcSetAutonomousActivityWindow.c)
 *     CpcSetAutonomousMode @ 0x1C00048B0 (CpcSetAutonomousMode.c)
 *     CpcSetTimeWindow @ 0x1C0004900 (CpcSetTimeWindow.c)
 *     C2Idle @ 0x1C0004F20 (C2Idle.c)
 *     C3IdleCheck @ 0x1C0004FE0 (C3IdleCheck.c)
 *     C3Idle @ 0x1C0005060 (C3Idle.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C0003668 (ReadIoMemRaw.c)
 *     WriteIoMemRaw @ 0x1C000377C (WriteIoMemRaw.c)
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
