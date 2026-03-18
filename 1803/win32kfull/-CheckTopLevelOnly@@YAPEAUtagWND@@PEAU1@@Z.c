/*
 * XREFs of ?CheckTopLevelOnly@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0104AA4
 * Callers:
 *     NextTopWindow @ 0x1C002DCFC (NextTopWindow.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall CheckTopLevelOnly(struct tagWND *a1)
{
  while ( a1 && (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x3FFF) == 0x29D )
    a1 = (struct tagWND *)*((_QWORD *)a1 + 11);
  return a1;
}
