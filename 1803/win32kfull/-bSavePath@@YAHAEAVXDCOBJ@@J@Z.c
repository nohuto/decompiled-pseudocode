/*
 * XREFs of ?bSavePath@@YAHAEAVXDCOBJ@@J@Z @ 0x1C0078B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall bSavePath(struct XDCOBJ *a1)
{
  if ( *(_QWORD *)(*(_QWORD *)a1 + 208LL) )
    *(_DWORD *)(*(_QWORD *)a1 + 256LL) |= 2u;
  return 1LL;
}
