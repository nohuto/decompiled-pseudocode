/*
 * XREFs of GreGetTransform @ 0x1C01657D4
 * Callers:
 *     NtGdiGetTransform @ 0x1C00FE8A0 (NtGdiGetTransform.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0102880 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vInitPageToDevice@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@PEAVMATRIX@@@Z @ 0x1C0149078 (-vInitPageToDevice@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@PEAVMATRIX@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall GreGetTransform(HDC a1, int a2, struct _XFORML *a3)
{
  unsigned int v5; // ebx
  _QWORD v7[2]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v8[2]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v9[40]; // [rsp+40h] [rbp-30h] BYREF

  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v8, (struct XDCOBJ *)v7, a2 | 0x80000000);
    memset(v9, 0, 0x24uLL);
    if ( v8[0]
      || a2 == 772 && (EXFORMOBJ::vInitPageToDevice((EXFORMOBJ *)v8, (struct XDCOBJ *)v7, (struct MATRIX *)v9), v8[0]) )
    {
      EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)v8, a3);
      v5 = 1;
    }
    if ( v7[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  }
  return v5;
}
