/*
 * XREFs of ?GNT_NextTopScan@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEAU1@1@Z @ 0x1C00306E0
 * Callers:
 *     NextTopWindow @ 0x1C002DCFC (NextTopWindow.c)
 *     ?NTW_GetNextTop@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEAU1@@Z @ 0x1C003069C (-NTW_GetNextTop@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEAU1@@Z.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall GNT_NextTopScan(struct tagTHREADINFO *a1, struct tagWND *a2, struct tagWND *a3)
{
  __int64 v3; // rcx
  struct tagWND *result; // rax

  if ( a2 )
  {
    result = (struct tagWND *)*((_QWORD *)a2 + 8);
  }
  else
  {
    v3 = *((_QWORD *)a1 + 56);
    if ( !v3 || (*(_DWORD *)(v3 + 48) & 2) != 0 )
      return 0LL;
    result = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 24LL) + 88LL);
  }
  while ( result && *((struct tagWND **)result + 12) != a3 )
    result = (struct tagWND *)*((_QWORD *)result + 8);
  return result;
}
