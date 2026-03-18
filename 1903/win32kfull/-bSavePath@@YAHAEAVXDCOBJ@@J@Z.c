/*
 * XREFs of ?bSavePath@@YAHAEAVXDCOBJ@@J@Z @ 0x1C010FDBC
 * Callers:
 *     GreSaveDC @ 0x1C008DF10 (GreSaveDC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSavePath(struct XDCOBJ *a1)
{
  if ( *(_QWORD *)(*(_QWORD *)a1 + 200LL) )
    *(_DWORD *)(*(_QWORD *)a1 + 248LL) |= 2u;
  return 1LL;
}
