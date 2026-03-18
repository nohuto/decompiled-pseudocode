/*
 * XREFs of ?vGetSubRect@RGNOBJ@@QEBAXPEAU_RECTL@@@Z @ 0x1C00841D0
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0028890 (-bCompute@DC@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNOBJ::vGetSubRect(RGNOBJ *this, struct _RECTL *a2)
{
  struct _RECTL v2; // xmm0

  if ( *(_DWORD *)(*(_QWORD *)this + 80LL) > 0xA0u )
    v2 = (struct _RECTL)xmmword_1C01DD068;
  else
    v2 = *(struct _RECTL *)(*(_QWORD *)this + 88LL);
  *a2 = v2;
}
