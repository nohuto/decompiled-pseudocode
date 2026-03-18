/*
 * XREFs of ?pSurfobj@SURFMEM@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C0251544
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0064590 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 * Callees:
 *     <none>
 */

struct _SURFOBJ *__fastcall SURFMEM::pSurfobj(struct _SURFOBJ **this)
{
  struct _SURFOBJ *result; // rax

  result = *this;
  if ( *this )
    return (struct _SURFOBJ *)((char *)result + 24);
  return result;
}
