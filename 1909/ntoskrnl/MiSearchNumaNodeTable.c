/*
 * XREFs of MiSearchNumaNodeTable @ 0x1400B45C0
 * Callers:
 *     MiInsertLargePageInNodeList @ 0x14002F220 (MiInsertLargePageInNodeList.c)
 *     MiUnlinkPageFromList @ 0x1400B3280 (MiUnlinkPageFromList.c)
 *     MiPageToNode @ 0x1400C53C4 (MiPageToNode.c)
 *     MiRestrictRangeToNode @ 0x140189354 (MiRestrictRangeToNode.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiSearchNumaNodeTable(ULONG_PTR BugCheckParameter2)
{
  int v1; // r8d
  _QWORD *result; // rax
  int v3; // r9d
  int v4; // edx

  v1 = dword_140465748;
  if ( dword_140465744 > (unsigned int)dword_140465748
    || (result = (_QWORD *)(qword_140465780 + 16LL * dword_140465744), BugCheckParameter2 < *result)
    || dword_140465744 != dword_140465748 && BugCheckParameter2 >= result[2] )
  {
    v3 = 0;
    if ( dword_140465748 < 0 )
LABEL_17:
      KeBugCheckEx(0x1Au, 0x6201uLL, BugCheckParameter2, 0LL, 0LL);
    while ( 1 )
    {
      v4 = (v1 + v3) >> 1;
      result = (_QWORD *)(qword_140465780 + 16LL * v4);
      if ( BugCheckParameter2 < *result )
      {
        if ( !v4 )
          KeBugCheckEx(0x1Au, 0x6200uLL, BugCheckParameter2, qword_140465780, 0LL);
        v1 = v4 - 1;
      }
      else
      {
        if ( v4 == dword_140465748 || BugCheckParameter2 < result[2] )
        {
          dword_140465744 = (v1 + v3) >> 1;
          return result;
        }
        v3 = v4 + 1;
      }
      if ( v1 < v3 )
        goto LABEL_17;
    }
  }
  return result;
}
