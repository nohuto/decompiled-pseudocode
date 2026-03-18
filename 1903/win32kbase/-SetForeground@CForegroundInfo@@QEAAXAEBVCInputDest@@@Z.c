/*
 * XREFs of ?SetForeground@CForegroundInfo@@QEAAXAEBVCInputDest@@@Z @ 0x1C01782F0
 * Callers:
 *     <none>
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C0043954 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 */

void __fastcall CForegroundInfo::SetForeground(CForegroundInfo *this, const struct CInputDest *a2, __int64 a3)
{
  CInputDest::operator=((__int64)this, (__int64)a2, a3);
}
