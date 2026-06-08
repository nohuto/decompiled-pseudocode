/*
 * XREFs of AcquireBiosPpmControl @ 0x1C00085E0
 * Callers:
 *     ProcessSystemSleepStateNotify @ 0x1C00085A0 (ProcessSystemSleepStateNotify.c)
 *     ProcLibDeviceStart @ 0x1C0027484 (ProcLibDeviceStart.c)
 * Callees:
 *     <none>
 */

char __fastcall AcquireBiosPpmControl(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 264);
  if ( (v1 & 0x7F070) != 0 && dword_1C0011BE0 && byte_1C0011BE5 )
  {
    __outbyte(dword_1C0011BE0, byte_1C0011BE5);
    v1 = *(_QWORD *)(a1 + 264);
  }
  if ( (v1 & 0x70000000) != 0 )
  {
    if ( dword_1C0011BE0 )
    {
      LOBYTE(v1) = byte_1C0011BE4;
      if ( byte_1C0011BE4 )
        __outbyte(dword_1C0011BE0, byte_1C0011BE4);
    }
  }
  return v1;
}
