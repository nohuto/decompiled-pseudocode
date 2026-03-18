/*
 * XREFs of ?bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ @ 0x1C001889C
 * Callers:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0018974 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     NtGdiSetPUMPDOBJ @ 0x1C00B1070 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 */

bool __fastcall UMPDOBJ::bTryAcquireExclussiveAccess(UMPDOBJ *this)
{
  return _InterlockedCompareExchange64(
           (volatile signed __int64 *)this + 3,
           W32GetThreadWin32Thread(KeGetCurrentThread()),
           0LL) == 0;
}
