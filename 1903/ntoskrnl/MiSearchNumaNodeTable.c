/*
 * XREFs of MiSearchNumaNodeTable @ 0x1400D4740
 * Callers:
 *     MiInsertLargePageInNodeList @ 0x14002EE30 (MiInsertLargePageInNodeList.c)
 *     MiPageToNode @ 0x1400A02E4 (MiPageToNode.c)
 *     MiUnlinkPageFromList @ 0x1400D3400 (MiUnlinkPageFromList.c)
 *     MiRestrictRangeToNode @ 0x140188DA4 (MiRestrictRangeToNode.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiSearchNumaNodeTable(ULONG_PTR BugCheckParameter2)
{
  int v1; // r8d
  _QWORD *result; // rax
  int v3; // r9d
  int v4; // edx

  v1 = dword_140465A48;
  if ( dword_140465A44 > (unsigned int)dword_140465A48
    || (result = (_QWORD *)(qword_140465A80 + 16LL * dword_140465A44), BugCheckParameter2 < *result)
    || dword_140465A44 != dword_140465A48 && BugCheckParameter2 >= result[2] )
  {
    v3 = 0;
    if ( dword_140465A48 < 0 )
LABEL_17:
      KeBugCheckEx(0x1Au, 0x6201uLL, BugCheckParameter2, 0LL, 0LL);
    while ( 1 )
    {
      v4 = (v1 + v3) >> 1;
      result = (_QWORD *)(qword_140465A80 + 16LL * v4);
      if ( BugCheckParameter2 < *result )
      {
        if ( !v4 )
          KeBugCheckEx(0x1Au, 0x6200uLL, BugCheckParameter2, qword_140465A80, 0LL);
        v1 = v4 - 1;
      }
      else
      {
        if ( v4 == dword_140465A48 || BugCheckParameter2 < result[2] )
        {
          dword_140465A44 = (v1 + v3) >> 1;
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
