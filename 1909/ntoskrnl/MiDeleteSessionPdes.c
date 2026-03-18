/*
 * XREFs of MiDeleteSessionPdes @ 0x140168D80
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 * Callees:
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiGetSessionVm @ 0x140075FE4 (MiGetSessionVm.c)
 *     MiDeletePagablePteRange @ 0x1400E8030 (MiDeletePagablePteRange.c)
 *     MiReturnSystemCharges @ 0x140125BB4 (MiReturnSystemCharges.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall MiDeleteSessionPdes(__int64 a1, __int64 a2)
{
  unsigned __int64 SessionVm; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7[6]; // [rsp+40h] [rbp-38h] BYREF

  memset(v7, 0, sizeof(v7));
  SessionVm = MiGetSessionVm();
  v5 = *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(SessionVm + 174));
  MiDeletePagablePteRange(SessionVm, 0x11u, a1 << 25 >> 16 << 25 >> 16, a2 << 25 >> 16 << 25 >> 16, 1, 0, (__int64)v7);
  v6 = v7[0];
  MiReturnCommit(v5, v7[0]);
  MiReturnSystemCharges(v5, v6, 1);
}
