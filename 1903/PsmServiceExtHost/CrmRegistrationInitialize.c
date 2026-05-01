/*
 * XREFs of CrmRegistrationInitialize @ 0x1800083B4
 * Callers:
 *     CrmSrvRegister @ 0x1800080F8 (CrmSrvRegister.c)
 *     CrmGlobalsStart @ 0x1800454D0 (CrmGlobalsStart.c)
 * Callees:
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

__int64 __fastcall CrmRegistrationInitialize(_QWORD *a1)
{
  __int64 result; // rax

  memset_0(a1 + 2, 0, 0x80uLL);
  *a1 = 0LL;
  a1[1] = 0LL;
  RtlInitializeSRWLock(a1);
  *((_DWORD *)a1 + 2) = 0;
  a1[8] = a1 + 7;
  a1[7] = a1 + 7;
  result = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  a1[6] = 0LL;
  a1[6] = -1LL;
  return result;
}
