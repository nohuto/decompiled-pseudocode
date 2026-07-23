/*
 * XREFs of KeCopyExceptionRecord @ 0x14013B9E4
 * Callers:
 *     KiDispatchException @ 0x1400A2E90 (KiDispatchException.c)
 *     KiInitializeUserApc @ 0x140128774 (KiInitializeUserApc.c)
 *     DbgkForwardException @ 0x1406D7B7C (DbgkForwardException.c)
 *     DbgkpSendErrorMessage @ 0x140811FCC (DbgkpSendErrorMessage.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

void *__fastcall KeCopyExceptionRecord(_OWORD *a1, __int64 a2)
{
  memset(a1, 0, 0x98uLL);
  *a1 = *(_OWORD *)a2;
  *((_QWORD *)a1 + 2) = *(_QWORD *)(a2 + 16);
  *((_DWORD *)a1 + 6) = *(_DWORD *)(a2 + 24);
  return memmove(a1 + 2, (const void *)(a2 + 32), 8LL * *(unsigned int *)(a2 + 24));
}
