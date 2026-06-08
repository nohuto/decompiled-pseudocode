/*
 * XREFs of WriteGenAddr @ 0x1C0008574
 * Callers:
 *     MWaitIdleCheck @ 0x1C00079F0 (MWaitIdleCheck.c)
 *     WriteGenAddrHidden @ 0x1C00085F8 (WriteGenAddrHidden.c)
 *     WriteGenAddrMaybeHidden @ 0x1C00086A0 (WriteGenAddrMaybeHidden.c)
 *     PerfControlCpc @ 0x1C0008C40 (PerfControlCpc.c)
 *     C2Idle @ 0x1C000D3D0 (C2Idle.c)
 *     C3Idle @ 0x1C000D490 (C3Idle.c)
 *     C3IdleCheck @ 0x1C000D570 (C3IdleCheck.c)
 *     SetPerfStateIO @ 0x1C000E630 (SetPerfStateIO.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C00083CC (ReadIoMemRaw.c)
 *     WriteIoMemRaw @ 0x1C00086D0 (WriteIoMemRaw.c)
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
