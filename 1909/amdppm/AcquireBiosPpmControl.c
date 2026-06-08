/*
 * XREFs of AcquireBiosPpmControl @ 0x1C0006CD0
 * Callers:
 *     ProcessSystemSleepStateNotify @ 0x1C0006C90 (ProcessSystemSleepStateNotify.c)
 *     ProcLibDeviceStart @ 0x1C0026714 (ProcLibDeviceStart.c)
 * Callees:
 *     <none>
 */

char __fastcall AcquireBiosPpmControl(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 264);
  if ( (v1 & 0x7F070) != 0 && dword_1C0013C30 && byte_1C0013C35 )
  {
    __outbyte(dword_1C0013C30, byte_1C0013C35);
    v1 = *(_QWORD *)(a1 + 264);
  }
  if ( (v1 & 0x70000000) != 0 )
  {
    if ( dword_1C0013C30 )
    {
      LOBYTE(v1) = byte_1C0013C34;
      if ( byte_1C0013C34 )
        __outbyte(dword_1C0013C30, byte_1C0013C34);
    }
  }
  return v1;
}
