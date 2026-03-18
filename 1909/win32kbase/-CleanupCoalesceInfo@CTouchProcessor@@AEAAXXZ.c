/*
 * XREFs of ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x1C00B1E58
 * Callers:
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C00B1DB4 (--1CTouchProcessor@@QEAA@XZ.c)
 *     ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x1C0167270 (-GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 */

void __fastcall CTouchProcessor::CleanupCoalesceInfo(CTouchProcessor *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 23);
  if ( v2 )
  {
    Win32FreePool(v2);
    *((_QWORD *)this + 23) = 0LL;
    *((_DWORD *)this + 44) = 0;
  }
}
