/*
 * XREFs of XDCOBJ_vSetDefaultFontWrap @ 0x1C00FE920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ_vSetDefaultFontWrap(__int64 a1, __int64 a2)
{
  void *StockObject; // rbx
  __int64 result; // rax

  if ( (_DWORD)a2 )
    StockObject = (void *)GreGetStockObject(13LL);
  else
    StockObject = gahStockObjects[14];
  LOBYTE(a2) = 10;
  result = HmgShareLockCheck(StockObject, a2);
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 296LL) = StockObject;
  *(_QWORD *)(*(_QWORD *)a1 + 152LL) = result;
  return result;
}
