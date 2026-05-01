/*
 * XREFs of CrmGlobalsInitialize @ 0x180045794
 * Callers:
 *     PsmCrmStart @ 0x1800454B0 (PsmCrmStart.c)
 * Callees:
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

__int64 *CrmGlobalsInitialize()
{
  __int64 *result; // rax

  memset_0(CrmGlobals, 0, 0x1A8uLL);
  RtlInitializeSRWLock(&unk_1800ABF28);
  dword_1800ABF30 = 0;
  xmmword_1800ABF38 = 0LL;
  CrmGlobals[0] = 0LL;
  qword_1800ABE08 = 0LL;
  RtlInitializeSRWLock(CrmGlobals);
  LODWORD(qword_1800ABE08) = 0;
  qword_1800ABF48 = 0LL;
  qword_1800ABF50 = 0LL;
  RtlInitializeSRWLock(&qword_1800ABF48);
  LODWORD(qword_1800ABF50) = 0;
  result = &qword_1800ABF58;
  qword_1800ABF60 = (__int64)&qword_1800ABF58;
  qword_1800ABF58 = (__int64)&qword_1800ABF58;
  return result;
}
