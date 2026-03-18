/*
 * XREFs of ?HasForeground@CForegroundInfo@@QEAA_NAEBVCInputDest@@@Z @ 0x1C01760E0
 * Callers:
 *     <none>
 * Callees:
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003003C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 */

char __fastcall CForegroundInfo::HasForeground(CForegroundInfo *this, const struct CInputDest *a2, __int64 a3)
{
  return CInputDest::operator==((unsigned int *)this, (__int64)a2, a3);
}
