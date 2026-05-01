/*
 * XREFs of CrmRegistrationInitialize @ 0x18003BD58
 * Callers:
 *     CrmSrvRegister @ 0x18003B978 (CrmSrvRegister.c)
 *     CrmGlobalsStart @ 0x180045F50 (CrmGlobalsStart.c)
 * Callees:
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

__int64 __fastcall CrmRegistrationInitialize(__int64 a1)
{
  __int64 result; // rax

  memset_0((void *)a1, 0, 0x90uLL);
  RtlInitializeSRWLock(a1);
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 64) = a1 + 56;
  *(_QWORD *)(a1 + 56) = a1 + 56;
  result = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 48) = -1LL;
  return result;
}
