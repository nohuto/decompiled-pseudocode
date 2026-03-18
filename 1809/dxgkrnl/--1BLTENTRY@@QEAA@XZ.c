/*
 * XREFs of ??1BLTENTRY@@QEAA@XZ @ 0x1C0040040
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 */

void __fastcall BLTENTRY::~BLTENTRY(void **this)
{
  operator delete[](this[63]);
  operator delete[](this[29]);
}
