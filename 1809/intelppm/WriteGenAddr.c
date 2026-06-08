/*
 * XREFs of WriteGenAddr @ 0x1C00084D0
 * Callers:
 *     WriteGenAddrHidden @ 0x1C00043D4 (WriteGenAddrHidden.c)
 *     WriteGenAddrMaybeHidden @ 0x1C000447C (WriteGenAddrMaybeHidden.c)
 *     MWaitIdleCheck @ 0x1C0007AF0 (MWaitIdleCheck.c)
 *     PerfControlCpc @ 0x1C0008A30 (PerfControlCpc.c)
 *     C2Idle @ 0x1C000CCF0 (C2Idle.c)
 *     C3Idle @ 0x1C000CDB0 (C3Idle.c)
 *     C3IdleCheck @ 0x1C000CE90 (C3IdleCheck.c)
 *     SetPerfStateIO @ 0x1C000DBB0 (SetPerfStateIO.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C00083BC (ReadIoMemRaw.c)
 *     WriteIoMemRaw @ 0x1C0008554 (WriteIoMemRaw.c)
 */

void __fastcall WriteGenAddr(_BYTE *a1, __int64 a2)
{
  char v4; // al
  unsigned __int64 IoMemRaw; // rax
  unsigned __int8 v6; // cl

  if ( a1 )
  {
    if ( !a1[2] )
    {
      v4 = a1[1];
      if ( *a1 == 10 )
      {
        if ( v4 == 64 )
          goto LABEL_10;
      }
      else if ( v4 == a1[3] )
      {
LABEL_10:
        WriteIoMemRaw(a1, a2);
        return;
      }
    }
    IoMemRaw = ReadIoMemRaw((__int64)a1);
    v6 = a1[1];
    if ( v6 < 0x40u || a1[2] )
      a2 = IoMemRaw & ~(((1LL << v6) - 1) << a1[2]) | (((1LL << v6) - 1) << a1[2]) & (a2 << a1[2]);
    goto LABEL_10;
  }
}
