/*
 * XREFs of ??$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z @ 0x180078094
 * Callers:
 *     ?CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x180077F38 (-CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z.c)
 *     ?Create@CChannel@@SAJPEAVCConnection@@IPEAPEAV1@@Z @ 0x180077FF8 (-Create@CChannel@@SAJPEAVCConnection@@IPEAPEAV1@@Z.c)
 *     ?DestroyChannel@CConnection@@QEAAJI@Z @ 0x180145594 (-DestroyChannel@CConnection@@QEAAJI@Z.c)
 * Callees:
 *     ?Release@CChannel@@UEAAKXZ @ 0x1800780C0 (-Release@CChannel@@UEAAKXZ.c)
 */

unsigned int __fastcall ReleaseInterface<CChannel>(CChannel **a1)
{
  CChannel *v2; // rcx
  unsigned int result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = CChannel::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
