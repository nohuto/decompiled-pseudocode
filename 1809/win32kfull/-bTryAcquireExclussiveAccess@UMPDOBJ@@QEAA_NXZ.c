/*
 * XREFs of ?bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ @ 0x1C008FEA8
 * Callers:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C008DD04 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     NtGdiSetPUMPDOBJ @ 0x1C008F620 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 */

bool __fastcall UMPDOBJ::bTryAcquireExclussiveAccess(UMPDOBJ *this, __int64 a2)
{
  return _InterlockedCompareExchange64(
           (volatile signed __int64 *)this + 3,
           W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2),
           0LL) == 0;
}
