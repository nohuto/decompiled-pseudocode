/*
 * XREFs of CrmActivityInitialize @ 0x180032F58
 * Callers:
 *     CrmRegistrationCreateActivity @ 0x180032FD4 (CrmRegistrationCreateActivity.c)
 * Callees:
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

__int64 __fastcall CrmActivityInitialize(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  memset_0((void *)a1, 0, 0xB0uLL);
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  RtlInitializeSRWLock(a1 + 56);
  *(_DWORD *)(a1 + 64) = 0;
  result = -1LL;
  *(_QWORD *)(a1 + 128) = -1LL;
  *(_QWORD *)(a1 + 136) = -1LL;
  *(_QWORD *)(a1 + 32) = a2;
  *(_DWORD *)(a1 + 144) = 3;
  return result;
}
