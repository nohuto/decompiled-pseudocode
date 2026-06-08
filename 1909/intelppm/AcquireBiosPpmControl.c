/*
 * XREFs of AcquireBiosPpmControl @ 0x1C000196C
 * Callers:
 *     ProcessSystemSleepStateNotify @ 0x1C00016C0 (ProcessSystemSleepStateNotify.c)
 *     ProcLibDeviceStart @ 0x1C0020CA8 (ProcLibDeviceStart.c)
 * Callees:
 *     <none>
 */

char __fastcall AcquireBiosPpmControl(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 264);
  if ( (v1 & 0x7F070) != 0 && dword_1C001BDD0 && byte_1C001BDD5 )
  {
    __outbyte(dword_1C001BDD0, byte_1C001BDD5);
    v1 = *(_QWORD *)(a1 + 264);
  }
  if ( (v1 & 0x70000000) != 0 )
  {
    if ( dword_1C001BDD0 )
    {
      LOBYTE(v1) = byte_1C001BDD4;
      if ( byte_1C001BDD4 )
        __outbyte(dword_1C001BDD0, byte_1C001BDD4);
    }
  }
  return v1;
}
