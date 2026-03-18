/*
 * XREFs of ??$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z @ 0x1800E4CD4
 * Callers:
 *     ?CreateKernelChannel@CInternalMilCmdConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x1800E4B78 (-CreateKernelChannel@CInternalMilCmdConnection@@AEAAJPEAPEAVCChannel@@@Z.c)
 *     ?Create@CChannel@@SAJPEAVCInternalMilCmdConnection@@IPEAPEAV1@@Z @ 0x1800E4C38 (-Create@CChannel@@SAJPEAVCInternalMilCmdConnection@@IPEAPEAV1@@Z.c)
 *     ?DestroyChannel@CInternalMilCmdConnection@@QEAAJI@Z @ 0x1801559C8 (-DestroyChannel@CInternalMilCmdConnection@@QEAAJI@Z.c)
 * Callees:
 *     ?Release@CChannel@@UEAAKXZ @ 0x1800E4D00 (-Release@CChannel@@UEAAKXZ.c)
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
